`timescale 1ns / 1ps

module ex_mem #(parameter WIDTH = 32)(
    input  logic                 clk,
    input  logic                 rst,
    input  logic [WIDTH-1:0]     alu_result_in,
    input  logic [WIDTH-1:0]     write_data_in,
    input  logic [4:0]           rd_in,
    input  logic [6:0]           funct7_in, // optional if you want to forward, otherwise unused
    input  logic [2:0]           funct3_in, // store/load width must be kept for MEM stage
    input  logic                 regWrite_in,
    input  logic                 memtoReg_in,
    input  logic                 memRead_in,
    input  logic                 memWrite_in,
    input  logic                 branch_in,
    input  logic                 comparison_in,

    output logic [WIDTH-1:0]     alu_result_out,
    output logic [WIDTH-1:0]     write_data_out,
    output logic [4:0]           rd_out,
    output logic [2:0]           funct3_out,
    output logic                 regWrite_out,
    output logic                 memtoReg_out,
    output logic                 memRead_out,
    output logic                 memWrite_out,
    output logic                 branch_out,
    output logic                 comparison_out
);
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            alu_result_out <= '0;
            write_data_out <= '0;
            rd_out         <= '0;
            funct3_out     <= '0;
            regWrite_out   <= 1'b0;
            memtoReg_out   <= 1'b0;
            memRead_out    <= 1'b0;
            memWrite_out   <= 1'b0;
            branch_out     <= 1'b0;
            comparison_out <= 1'b0;
        end else begin
            alu_result_out <= alu_result_in;
            write_data_out <= write_data_in;
            rd_out         <= rd_in;
            funct3_out     <= funct3_in;
            regWrite_out   <= regWrite_in;
            memtoReg_out   <= memtoReg_in;
            memRead_out    <= memRead_in;
            memWrite_out   <= memWrite_in;
            branch_out     <= branch_in;
            comparison_out <= comparison_in;
        end
    end
endmodule
