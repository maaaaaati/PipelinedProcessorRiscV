`timescale 1ns / 1ps

module data_mem #(
    parameter WIDTH = 32,
    parameter DEPTH = 20
)(
    input  logic                 clk,
    input  logic                 rst,
    input  logic [WIDTH-1:0]     data_in,
    input  logic [WIDTH-1:0]     addr,
    input  logic                 wr_en,
    input  logic                 rd_en,
    input  logic [2:0]           funct3,

    output logic [WIDTH-1:0]     data_out
);

    localparam MEM_SIZE = 1 << DEPTH;
    logic [7:0] memory [0:MEM_SIZE-1];

    // Signals for memory address and byte read data (DECLARED HERE)
    logic [DEPTH-1:0] a0, a1, a2, a3;
    logic [7:0] b0, b1, b2, b3;

    // Address Calculation
    always_comb begin
        a0 = addr[DEPTH-1:0];
        a1 = a0 + 1;
        a2 = a0 + 2;
        a3 = a0 + 3;
    end

    // Write Logic (Synchronous)
    always_ff @(posedge clk) begin
        if (wr_en) begin
            case(funct3)
                3'b000: memory[a0] <= data_in[7:0]; // SB
                3'b001: begin memory[a0] <= data_in[7:0]; memory[a1] <= data_in[15:8]; end // SH
                3'b010: begin // SW
                    memory[a0] <= data_in[7:0];
                    memory[a1] <= data_in[15:8];
                    memory[a2] <= data_in[23:16];
                    memory[a3] <= data_in[31:24];
                end
                default: ;
            endcase
        end
    end

    // Read Logic (Combinational - FIXES IMPLICITSTATIC WARNING)
    // Continuously read the four bytes at the calculated addresses
    always_comb begin
        b0 = memory[a0];
        b1 = memory[a1];
        b2 = memory[a2];
        b3 = memory[a3];
    end

    // Output Logic (Combinational)
    always_comb begin
        if (!rd_en) begin
            data_out = 32'b0;
        end else begin
            case(funct3)
                3'b000: data_out = {{24{b0[7]}}, b0}; // LB
                3'b001: data_out = {{16{b1[7]}}, b1, b0}; // LH
                3'b010: data_out = {b3, b2, b1, b0}; // LW (Correct Byte Ordering)
                3'b100: data_out = {24'b0, b0}; // LBU
                3'b101: data_out = {16'b0, b1, b0}; // LHU
                default: data_out = 32'b0;
            endcase
        end
    end
endmodule