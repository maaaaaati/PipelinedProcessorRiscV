`timescale 1ns / 1ps

module id_ex #(parameter WIDTH = 32)(
    input logic clk, rst,
    input logic stall,  // <--- NEW INPUT
    input logic [WIDTH-1:0] read_data_1_in,
    input logic [WIDTH-1:0] read_data_2_in,
    input logic [WIDTH-1:0] imm_in,
    input logic [WIDTH-1:0] pc_in,
    input logic [4:0] rd_in,
    input logic [6:0] funct7_in,
    input logic [2:0] funct3_in,
    input logic [6:0] opcode_in,
    input logic regWrite_in, memtoReg_in, memRead_in, memWrite_in, branch_in, aluSrc_in,
    input logic [4:0] rs1_in, rs2_in,
    
    output logic [WIDTH-1:0] read_data_1_out,
    output logic [WIDTH-1:0] read_data_2_out,
    output logic [WIDTH-1:0] imm_out,
    output logic [WIDTH-1:0] pc_out,
    output logic [4:0] rd_out,
    output logic [6:0] funct7_out,
    output logic [2:0] funct3_out,
    output logic [6:0] opcode_out,
    output logic regWrite_out, memtoReg_out, memRead_out, memWrite_out, branch_out, aluSrc_out,
    output logic [4:0] rs1_out, rs2_out
);

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            read_data_1_out <= 0;
            read_data_2_out <= 0;
            imm_out         <= 0;
            pc_out          <= 0;
            rd_out          <= 0;
            funct7_out      <= 0;
            funct3_out      <= 0;
            opcode_out      <= 0;
            regWrite_out    <= 0;
            memtoReg_out    <= 0;
            memRead_out     <= 0;
            memWrite_out    <= 0;
            branch_out      <= 0;
            aluSrc_out      <= 0;
            rs1_out         <= 0;
            rs2_out         <= 0;

        end else if (stall) begin
            // ----------------------------------------------------
            // INSERT A NOP (bubble)
            // ----------------------------------------------------
            read_data_1_out <= 0;
            read_data_2_out <= 0;
            imm_out         <= 0;
            pc_out          <= pc_in; // PC usually still forwarded but optional
            rd_out          <= 0;
            funct7_out      <= 0;
            funct3_out      <= 0;
            opcode_out      <= 7'b0010011; // ADDI x0,x0,0 (NOP) optional
            regWrite_out    <= 0;
            memtoReg_out    <= 0;
            memRead_out     <= 0;
            memWrite_out    <= 0;
            branch_out      <= 0;
            aluSrc_out      <= 0;
            rs1_out         <= 0;
            rs2_out         <= 0;

        end else begin
            // ----------------------------------------------------
            // Normal operation (pipeline flows)
            // ----------------------------------------------------
            read_data_1_out <= read_data_1_in;
            read_data_2_out <= read_data_2_in;
            imm_out         <= imm_in;
            pc_out          <= pc_in;
            rd_out          <= rd_in;
            funct7_out      <= funct7_in;
            funct3_out      <= funct3_in;
            opcode_out      <= opcode_in;
            regWrite_out    <= regWrite_in;
            memtoReg_out    <= memtoReg_in;
            memRead_out     <= memRead_in;
            memWrite_out    <= memWrite_in;
            branch_out      <= branch_in;
            aluSrc_out      <= aluSrc_in;
            rs1_out         <= rs1_in;
            rs2_out         <= rs2_in;
        end
    end
endmodule
