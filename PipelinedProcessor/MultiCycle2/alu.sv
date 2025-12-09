`timescale 1ns / 1ps

module alu #(parameter WIDTH = 32)(
  input logic  [(WIDTH - 1) : 0] data_in_1,
  input logic  [(WIDTH - 1) : 0] data_in_2,
  input logic  [2 : 0]           funct3,
  input logic  [6 : 0]           funct7,
  input logic  [6 : 0]           opcode,
  
  output logic [(WIDTH - 1) : 0] data_out,
  output logic             		 zero,
  output logic            		 comparison
);

  localparam ALI_OP    = 7'b0010011;
  localparam AL_OP     = 7'b0110011;
  localparam MEM_WR_OP = 7'b0100011;
  localparam MEM_RD_OP = 7'b0000011;
  localparam BR_OP     = 7'b1100011;
  localparam JAL       = 7'b1101111;
  localparam JALR      = 7'b1100111;
  localparam LUI       = 7'b0110111;
  localparam AUIPC     = 7'b0010111;
  
  always_comb begin
    data_out    = {WIDTH{1'b0}};
  	comparison  = 1'b0;
    
    case(opcode)
      ALI_OP: begin
        case(funct3)
          3'b000: data_out = $signed(data_in_1) + $signed(data_in_2); // addi
          3'b001: data_out = data_in_1 << data_in_2[4:0]; // slli
          3'b010: data_out = ($signed(data_in_1) < $signed(data_in_2)) ? 1 : 0; // slti
          3'b011: data_out = ($unsigned(data_in_1) < $unsigned(data_in_2)) ? 1 : 0; // sltiu
          3'b100: data_out = data_in_1 ^ data_in_2; // xori
          3'b101: begin
            if(funct7 == 7'b0000000) data_out = data_in_1 >> data_in_2[4:0]; // srli
            if(funct7 == 7'b0100000) data_out = $signed(data_in_1) >>> data_in_2[4:0]; // srai
          end
          3'b110: data_out = data_in_1 | data_in_2; // ori
          3'b111: data_out = data_in_1 & data_in_2; // andi
          default: data_out = 0; // <--- default added
        endcase
      end
      
      AL_OP: begin
        case(funct3)
          3'b000: begin
            if(funct7 == 7'b0000000) data_out = $signed(data_in_1) + $signed(data_in_2); // add
            if(funct7 == 7'b0100000) data_out = $signed(data_in_1) - $signed(data_in_2); // sub
          end
          3'b001: data_out = data_in_1 << data_in_2; // sll
          3'b010: data_out = ($signed(data_in_1) < $signed(data_in_2)) ? 1 : 0; // slt
          3'b011: data_out = ($unsigned(data_in_1) < $unsigned(data_in_2)) ? 1 : 0; // sltu
          3'b100: data_out = data_in_1 ^ data_in_2; // xor
          3'b101: begin
            if(funct7 == 7'b0000000) data_out = data_in_1 >> data_in_2; // srl
            if(funct7 == 7'b0100000) data_out = $signed(data_in_1) >>> data_in_2; // sra
          end
          3'b110: data_out = data_in_1 | data_in_2; // or
          3'b111: data_out = data_in_1 & data_in_2; // and
          default: data_out = 0; // <--- default added
        endcase
      end
      
      MEM_WR_OP: data_out = $signed(data_in_1) + $signed(data_in_2); // store addr
      MEM_RD_OP: data_out = $signed(data_in_1) + $signed(data_in_2); // load addr
      
      BR_OP: begin
        case(funct3)
          3'b000: comparison = ($signed(data_in_1) == $signed(data_in_2)) ? 1 : 0; // beq
          3'b001: comparison = ($signed(data_in_1) != $signed(data_in_2)) ? 1 : 0; // bne
          3'b100: comparison = ($signed(data_in_1) < $signed(data_in_2)) ? 1 : 0; // blt
          3'b101: comparison = ($signed(data_in_1) >= $signed(data_in_2)) ? 1 : 0; // bge
          3'b110: comparison = ($unsigned(data_in_1) < $unsigned(data_in_2)) ? 1 : 0; // bltu
          3'b111: comparison = ($unsigned(data_in_1) >= $unsigned(data_in_2)) ? 1 : 0; // bgeu
          default: comparison = 0; // <--- default added
        endcase
      end
      
      JAL, JALR: data_out = $signed(data_in_1) + $signed(data_in_2);
      LUI: data_out = data_in_2;
      AUIPC: data_out = $signed(data_in_1) + $signed(data_in_2);
      
      default: data_out = 0;
    endcase
  end
  
  assign zero = (data_out == 0);
endmodule
