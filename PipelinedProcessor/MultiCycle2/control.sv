`timescale 1ns / 1ps

module control(
    input logic [6 : 0]opcode,
    
    output logic branch,
    output logic memRead,
    output logic memtoReg,
    output logic memWrite,
    output logic aluSrc,
    output logic regWrite
);

    localparam ALI_OP    = 7'b0010011;
    localparam AL_OP     = 7'b0110011;
    localparam MEM_WR_OP = 7'b0100011;
    localparam MEM_RD_OP = 7'b0000011;
    localparam BR_OP     = 7'b1100011;
    localparam JALR      = 7'b1100111;
    localparam JAL       = 7'b1101111;
    localparam LUI       = 7'b0110111;
    localparam AUIPC     = 7'b0010111;

    always_comb begin
        case(opcode)
            ALI_OP, JALR, JAL, LUI, AUIPC: begin
                branch   = 0;
                memRead  = 0;
                memtoReg = 0;
                memWrite = 0;
                aluSrc   = 1;
                regWrite = 1;
            end
            
            AL_OP: begin
                branch   = 0;
                memRead  = 0;
                memtoReg = 0;
                memWrite = 0;
                aluSrc   = 0;
                regWrite = 1;
            end
            
            MEM_WR_OP: begin
                branch   = 0;
                memRead  = 0;
                memtoReg = 0;
                memWrite = 1;
                aluSrc   = 1;
                regWrite = 0;
            end
            
            MEM_RD_OP: begin
                branch   = 0;
                memRead  = 1;
                memtoReg = 1;
                memWrite = 0;
                aluSrc   = 1;
                regWrite = 1;
            end
            
            BR_OP: begin
                branch   = 1;
                memRead  = 0;
                memtoReg = 0;
                memWrite = 0;
                aluSrc   = 0;
                regWrite = 0;
            end
            
            default: begin
                branch   = 0;
                memRead  = 0;
                memtoReg = 0;
                memWrite = 0;
                aluSrc   = 0;
                regWrite = 0;
            end
        endcase
    end
endmodule