`timescale 1ns / 1ps

module mem_wb #(parameter WIDTH = 32)(
    input  logic                 clk,
    input  logic                 rst,

    // Incoming signals from MEM stage
    input  logic [WIDTH-1:0]     read_data_in,    // loaded value (or bypassed store data)
    input  logic [WIDTH-1:0]     alu_result_in,   // ALU result propagated
    input  logic [WIDTH-1:0]     write_data_in,   // store-data forwarded through pipeline
    input  logic [4:0]           rd_in,
    input  logic                 regWrite_in,
    input  logic                 memtoReg_in,
    input  logic                 memWrite_in,     // store flag propagated (used by bypass logic)

    // Outgoing signals to WB stage
    output logic [WIDTH-1:0]     read_data_out,
    output logic [WIDTH-1:0]     alu_result_out,
    output logic [WIDTH-1:0]     write_data_out,
    output logic [4:0]           rd_out,
    output logic                 regWrite_out,
    output logic                 memtoReg_out,
    output logic                 memWrite_out
);

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            read_data_out   <= '0;
            alu_result_out  <= '0;
            write_data_out  <= '0;
            rd_out          <= '0;
            regWrite_out    <= 1'b0;
            memtoReg_out    <= 1'b0;
            memWrite_out    <= 1'b0;
        end else begin
            read_data_out   <= read_data_in;
            alu_result_out  <= alu_result_in;
            write_data_out  <= write_data_in;
            rd_out          <= rd_in;
            regWrite_out    <= regWrite_in;
            memtoReg_out    <= memtoReg_in;
            memWrite_out    <= memWrite_in;
        end
    end
endmodule
