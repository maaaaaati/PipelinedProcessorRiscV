`timescale 1ns / 1ps

module hazard_unit(
    input logic id_ex_memRead,
    input logic [4:0] id_ex_rd,
    input logic [4:0] if_id_rs1,
    input logic [4:0] if_id_rs2,
    
    output logic pc_write,
    output logic if_id_write,
    output logic control_stall
);
    // Logic for Load-Use Hazard Stall (Bubble Insertion)
    always_comb begin
        // Condition for stall:
        // 1. Instruction in EX is a Load (id_ex_memRead)
        // 2. Load destination is NOT the zero register (id_ex_rd != 5'b0) <-- CRITICAL ADDITION
        // 3. Instruction in ID needs that register as an operand (rs1 or rs2 match id_ex_rd)
        if (id_ex_memRead && (id_ex_rd != 5'b0) && 
            ((id_ex_rd == if_id_rs1) || (id_ex_rd == if_id_rs2))) 
        begin
            // ----------------------------------------------------
            // Stall the pipeline (Insert NOP/Bubble into ID/EX stage)
            // ----------------------------------------------------
            pc_write = 1'b0;      // Freeze the PC (IF stage stalls)
            if_id_write = 1'b0;   // Freeze the IF/ID register (ID stage stalls)
            control_stall = 1'b1; // Signal Control Unit to turn ID/EX inputs into a NOP
        end else begin
            // ----------------------------------------------------
            // Normal operation (No stall)
            // ----------------------------------------------------
            pc_write = 1'b1;
            if_id_write = 1'b1;
            control_stall = 1'b0;
        end
    end
endmodule