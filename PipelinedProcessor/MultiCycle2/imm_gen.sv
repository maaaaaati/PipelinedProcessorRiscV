`timescale 1ns / 1ps

module imm_gen #(parameter WIDTH = 32)(
    input  logic [WIDTH-1:0] instr,
    output logic [WIDTH-1:0] data_out
);

    // Extract fields OUTSIDE always blocks
    logic sign;
    logic [11:0] imm_I;
    logic [11:0] imm_S;
    logic [12:0] imm_B;
    logic [19:0] imm_U;
    logic [20:0] imm_J;

    always_comb begin
        // Precompute slices safely
        sign  = instr[31];

        imm_I = instr[31:20];
        imm_S = {instr[31:25], instr[11:7]};
        imm_B = {instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
        imm_U = instr[31:12];
        imm_J = {instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};

        // Select based on opcode
        case (instr[6:0])
            7'b0010011, // I-type ALU
            7'b0000011: // Loads
                data_out = {{20{sign}}, imm_I};

            7'b0100011: // S-type stores
                data_out = {{20{sign}}, imm_S};

            7'b1100011: // Branch
                data_out = {{19{sign}}, imm_B};

            7'b0110111:
                data_out = {imm_U, 12'b0};  // LUI
            7'b0010111:
                data_out = {imm_U, 12'b0};  // AUIPC


            7'b1101111: // JAL
                data_out = {{11{sign}}, imm_J};

            default:
                data_out = 32'b0;
        endcase
    end

endmodule
