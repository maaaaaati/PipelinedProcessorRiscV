`timescale 1ns / 1ps


module forwarding_unit(
    input logic ex_mem_regWrite,
    input logic [4:0] ex_mem_rd,
    input logic mem_wb_regWrite,
    input logic [4:0] mem_wb_rd,
    input logic [4:0] id_ex_rs1,
    input logic [4:0] id_ex_rs2,
    
    output logic [1:0] forwardA,
    output logic [1:0] forwardB
);
    always_comb begin
        // default: no forwarding
        forwardA = 2'b00;
        forwardB = 2'b00;
        
        // EX hazard
        if (ex_mem_regWrite && (ex_mem_rd != 0) && (ex_mem_rd == id_ex_rs1))
            forwardA = 2'b10;
        if (ex_mem_regWrite && (ex_mem_rd != 0) && (ex_mem_rd == id_ex_rs2))
            forwardB = 2'b10;
            
        // MEM hazard
        if (mem_wb_regWrite && (mem_wb_rd != 0) && 
           !(ex_mem_regWrite && (ex_mem_rd != 0) && (ex_mem_rd == id_ex_rs1)) &&
            (mem_wb_rd == id_ex_rs1))
            forwardA = 2'b01;
        if (mem_wb_regWrite && (mem_wb_rd != 0) && 
           !(ex_mem_regWrite && (ex_mem_rd != 0) && (ex_mem_rd == id_ex_rs2)) &&
            (mem_wb_rd == id_ex_rs2))
            forwardB = 2'b01;
    end
endmodule
