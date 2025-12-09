`timescale 1ns / 1ps
module top_pipelined #( parameter WIDTH = 32,
                        parameter REG_FILE_DEPTH = 32,
                        parameter INST_MEM_DEPTH = 10,
                        parameter DATA_MEM_DEPTH = 10
                      )(
    input logic clk,
    input logic rst
);

    // ----------------------------------------
    // Wires
    // ----------------------------------------
    // IF stage
    logic [WIDTH-1:0] pc_in, pc_out;
    logic [WIDTH-1:0] pc_plus_4, pc_branch;
    logic [WIDTH-1:0] instr_if;
    
    // IF/ID register
    logic [WIDTH-1:0] pc_id, instr_id;
    
    // ID stage
    logic [WIDTH-1:0] read_data_1, read_data_2, imm_id;
    logic [4:0] rd_id;
    logic [6:0] funct7_id;
    logic [2:0] funct3_id;
    logic [6:0] opcode_id;
    logic regWrite_id, memtoReg_id, memRead_id, memWrite_id, branch_id, aluSrc_id;
    
    // ID/EX register
    logic [WIDTH-1:0] read_data_1_ex, read_data_2_ex, imm_ex, pc_ex;
    logic [4:0] rd_ex;
    logic [4:0] rs1_ex, rs2_ex; 
    logic [6:0] funct7_ex;
    logic [2:0] funct3_ex;
    logic [6:0] opcode_ex;
    logic regWrite_ex, memtoReg_ex, memRead_ex, memWrite_ex, branch_ex, aluSrc_ex;
    
    // EX stage
    logic [WIDTH-1:0] alu_result_ex;
    logic comparison_ex;
    logic [WIDTH-1:0] rs2_forwarded_data; 
    logic [WIDTH-1:0] alu_operand1, alu_operand2;
    
    // EX/MEM register
    logic [WIDTH-1:0] alu_result_mem, write_data_mem;
    logic [4:0] rd_mem;
    logic [2:0] funct3_mem;
    logic regWrite_mem, memtoReg_mem, memRead_mem, memWrite_mem, branch_mem;
    logic comparison_mem;
    
    // MEM stage
    logic [WIDTH-1:0] mem_read_data;
    // Memory Bypass Wires 
    logic [WIDTH-1:0] data_mem_out; 
    logic mem_bypass_en;            
    
    // MEM/WB register
    logic [WIDTH-1:0] mem_read_data_wb, alu_result_wb, write_data_wb;
    logic [4:0] rd_wb;
    logic regWrite_wb, memtoReg_wb, memWrite_wb;
    
    // Forwarding
    logic [1:0] forwardA, forwardB;
    
    // Hazard detection
    logic pc_write, if_id_write, control_stall;

    // ----------------------------------------
    // PC logic
    // ----------------------------------------
    adder #(.WIDTH(WIDTH)) adder_pc(
        .A(pc_out), .B(32'd4), .out(pc_plus_4)
    );
    
    adder #(.WIDTH(WIDTH)) adder_branch(
        .A(pc_ex), .B(imm_ex), .out(pc_branch)
    );
    
    mux_2x1 #(.WIDTH(WIDTH)) pc_mux(
        .A(pc_branch),
        .B(pc_plus_4),
        .sel(comparison_mem && branch_mem),
        .out(pc_in)
    );
    
    register_PC #(.WIDTH(WIDTH)) u_register_PC(
        .clk(clk),
        .rst(rst),
        .data_in(pc_in),
        .wr(pc_write),
        .data_out(pc_out)
    );

    // ----------------------------------------
    // Instruction Memory
    // ----------------------------------------
    inst_mem #(.WIDTH(WIDTH), .DEPTH(INST_MEM_DEPTH)) u_inst_mem(
        .addr(pc_out),
        .instr(instr_if)
    );

    // ----------------------------------------
    // IF/ID pipeline register
    // ----------------------------------------
    if_id #(.WIDTH(WIDTH)) u_if_id(
        .clk(clk),
        .rst(rst),
        .wr(if_id_write),
        .pc_in(pc_out),  
        .instr_in(instr_if),
        .pc_out(pc_id),
        .instr_out(instr_id)
    );

    // ----------------------------------------
    // Control signals
    // ----------------------------------------
    logic branch_ctrl, memRead_ctrl, memtoReg_ctrl, memWrite_ctrl, aluSrc_ctrl, regWrite_ctrl;
    
    control u_control(
        .opcode(instr_id[6:0]),
        .branch(branch_ctrl),
        .memRead(memRead_ctrl),
        .memtoReg(memtoReg_ctrl),
        .memWrite(memWrite_ctrl),
        .aluSrc(aluSrc_ctrl),
        .regWrite(regWrite_ctrl)
    );

    // Stall logic (insert NOP/Bubble)
    assign regWrite_id  = control_stall ? 1'b0 : regWrite_ctrl;
    assign memtoReg_id  = control_stall ? 1'b0 : memtoReg_ctrl;
    assign memRead_id   = control_stall ? 1'b0 : memRead_ctrl;
    assign memWrite_id  = control_stall ? 1'b0 : memWrite_ctrl;
    assign branch_id    = control_stall ? 1'b0 : branch_ctrl;
    assign aluSrc_id    = aluSrc_ctrl;

    // ----------------------------------------
    // Register File
    // ----------------------------------------
    registers #(.WIDTH(WIDTH),.DEPTH(REG_FILE_DEPTH)) u_registers(
        .clk(clk),
        .rst(rst),
        .reg_wr(regWrite_wb),
        .write_register(rd_wb),
        .write_data(memtoReg_wb ? mem_read_data_wb : alu_result_wb),
        .read_register_1(instr_id[19:15]),
        .read_register_2(instr_id[24:20]),
        .read_data_1(read_data_1),
        .read_data_2(read_data_2)
    );

    // Immediate generation
    imm_gen #(.WIDTH(WIDTH)) u_imm_gen(
        .instr(instr_id),
        .data_out(imm_id)
    );

    // ----------------------------------------
    // ID/EX pipeline register
    // ----------------------------------------
    id_ex #(.WIDTH(WIDTH)) u_id_ex(
        .clk(clk),
        .rst(rst),
        .stall(control_stall),
        .read_data_1_in(read_data_1),
        .read_data_2_in(read_data_2),
        .imm_in(imm_id),
        .pc_in(pc_id),
        .rd_in(instr_id[11:7]),
        .rs1_in(instr_id[19:15]),
        .rs2_in(instr_id[24:20]),
        .funct7_in(instr_id[31:25]),
        .funct3_in(instr_id[14:12]),
        .opcode_in(instr_id[6:0]),
        .regWrite_in(regWrite_id),
        .memtoReg_in(memtoReg_id),
        .memRead_in(memRead_id),
        .memWrite_in(memWrite_id),
        .branch_in(branch_id),
        .aluSrc_in(aluSrc_id),
        .read_data_1_out(read_data_1_ex),
        .read_data_2_out(read_data_2_ex),
        .imm_out(imm_ex),
        .pc_out(pc_ex),
        .rd_out(rd_ex),
        .funct7_out(funct7_ex),
        .funct3_out(funct3_ex),
        .opcode_out(opcode_ex),
        .regWrite_out(regWrite_ex),
        .memtoReg_out(memtoReg_ex),
        .memRead_out(memRead_ex),
        .memWrite_out(memWrite_ex),
        .branch_out(branch_ex),
        .aluSrc_out(aluSrc_ex),
        .rs1_out(rs1_ex),
        .rs2_out(rs2_ex)
    );

    // ----------------------------------------
    // Forwarding unit
    // ----------------------------------------
    forwarding_unit u_forwarding(
        .ex_mem_regWrite(regWrite_mem),
        .ex_mem_rd(rd_mem),
        .mem_wb_regWrite(regWrite_wb),
        .mem_wb_rd(rd_wb),
        .id_ex_rs1(rs1_ex), 
        .id_ex_rs2(rs2_ex), 
        .forwardA(forwardA),
        .forwardB(forwardB)
    );

    // ----------------------------------------
    // EX stage
    // ----------------------------------------
    // Select forwarded values for ALU Input A
    assign alu_operand1 = (forwardA == 2'b10) ? alu_result_mem :
                          (forwardA == 2'b01) ? (memtoReg_wb ? mem_read_data_wb : alu_result_wb) :
                          read_data_1_ex;

    // Rs2 forwarding (used both for ALU B operand and for store-data)
    assign rs2_forwarded_data = (forwardB == 2'b10) ? alu_result_mem :
                                 ((forwardB == 2'b01) ? (memtoReg_wb ? mem_read_data_wb : alu_result_wb) :
                                 read_data_2_ex);
    
    // ALUSrc MUX
    assign alu_operand2 = aluSrc_ex ? imm_ex : rs2_forwarded_data; 

    // ALU
    alu #(.WIDTH(WIDTH)) u_alu(
        .data_in_1(alu_operand1),
        .data_in_2(alu_operand2),
        .funct3(funct3_ex),
        .funct7(funct7_ex),
        .opcode(opcode_ex),
        .data_out(alu_result_ex),
        .zero(),
        .comparison(comparison_ex)
    );

    // ----------------------------------------
    // EX/MEM pipeline register
    // ----------------------------------------
    ex_mem #(.WIDTH(WIDTH)) u_ex_mem( 
        .clk(clk),
        .rst(rst),
        .alu_result_in(alu_result_ex),
        .write_data_in(rs2_forwarded_data),   // forwarded store data
        .rd_in(rd_ex),
        .funct3_in(funct3_ex),                // carry funct3 into MEM stage
        .regWrite_in(regWrite_ex),
        .memtoReg_in(memtoReg_ex),
        .memRead_in(memRead_ex),
        .memWrite_in(memWrite_ex),
        .branch_in(branch_ex),
        .comparison_in(comparison_ex),
        .alu_result_out(alu_result_mem),
        .write_data_out(write_data_mem),
        .rd_out(rd_mem),
        .funct3_out(funct3_mem),
        .regWrite_out(regWrite_mem),
        .memtoReg_out(memtoReg_mem),
        .memRead_out(memRead_mem),
        .memWrite_out(memWrite_mem),
        .branch_out(branch_mem),
        .comparison_out(comparison_mem)
    );

    // ----------------------------------------
    // Data memory (use funct3 from MEM stage)
    // ----------------------------------------
    data_mem #(.WIDTH(WIDTH),.DEPTH(DATA_MEM_DEPTH)) u_data_mem(
        .clk(clk),
        .rst(rst),
        .data_in(write_data_mem),
        .addr(alu_result_mem),
        .wr_en(memWrite_mem),
        .rd_en(memRead_mem),
        .funct3(funct3_mem), // use funct3 from EX/MEM (MEM stage)
        .data_out(data_mem_out) 
    );

    // ----------------------------------------
    // Memory Bypass Logic (Store-Load Hazard)
    // ----------------------------------------
    // If load in MEM and store in WB targeting same address, bypass store write_data from WB
    assign mem_bypass_en = memRead_mem && memWrite_wb && (alu_result_mem == alu_result_wb);

    always_comb begin
        if (mem_bypass_en) begin
            mem_read_data = write_data_wb; 
        end else begin
            mem_read_data = data_mem_out;
        end
    end

    // ----------------------------------------
    // MEM/WB pipeline register
    // ----------------------------------------
    mem_wb #(.WIDTH(WIDTH)) u_mem_wb(
        .clk(clk),
        .rst(rst),
        .read_data_in(mem_read_data),
        .alu_result_in(alu_result_mem),
        .write_data_in(write_data_mem), // propagate store data into WB
        .rd_in(rd_mem),
        .regWrite_in(regWrite_mem),
        .memtoReg_in(memtoReg_mem),
        .memWrite_in(memWrite_mem),
        .read_data_out(mem_read_data_wb),
        .alu_result_out(alu_result_wb),
        .write_data_out(write_data_wb),
        .rd_out(rd_wb),
        .regWrite_out(regWrite_wb),
        .memtoReg_out(memtoReg_wb),
        .memWrite_out(memWrite_wb)
    );

    // ----------------------------------------
    // Hazard detection
    // ----------------------------------------
    hazard_unit u_hazard(
        .id_ex_memRead(memRead_ex),
        .id_ex_rd(rd_ex),
        .if_id_rs1(instr_id[19:15]),
        .if_id_rs2(instr_id[24:20]),
        .pc_write(pc_write),
        .if_id_write(if_id_write),
        .control_stall(control_stall)
    );

endmodule
