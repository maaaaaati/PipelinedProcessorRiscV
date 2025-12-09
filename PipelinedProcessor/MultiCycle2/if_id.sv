`timescale 1ns / 1ps

module if_id #(parameter WIDTH = 32)(
    input logic clk,
    input logic rst,
    input logic wr,                          // <<< NEW WRITE ENABLE
    input logic [WIDTH-1:0] pc_in,
    input logic [WIDTH-1:0] instr_in,
    output logic [WIDTH-1:0] pc_out,
    output logic [WIDTH-1:0] instr_out
);

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            pc_out    <= 0;
            instr_out <= 0;
        end 
        else if (wr) begin                   // <<< ONLY UPDATE IF wr = 1
            pc_out    <= pc_in;
            instr_out <= instr_in;
        end
        // else: wr == 0 → stall → hold values (do nothing)
    end
    
endmodule
