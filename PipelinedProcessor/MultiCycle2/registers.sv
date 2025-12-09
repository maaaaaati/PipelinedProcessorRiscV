`timescale 1ns / 1ps

module registers #(parameter WIDTH = 32, parameter DEPTH = 32)(
  input logic 					clk,
  input logic 					rst,
  input logic					reg_wr,
  input logic [4 : 0] 			write_register,	 // Registro sobre el cual se escribe
  input logic [(WIDTH - 1) : 0] write_data,      // Dato entrante
  input logic [4 : 0] 			read_register_1, // Direcciones de registros a leer
  input logic [4 : 0] 			read_register_2, // Direcciones de registros a leer
  
  output logic [(WIDTH - 1) : 0] read_data_1,
  output logic [(WIDTH - 1) : 0] read_data_2	 
);
  //Ancho y profundidad de los 32 registros necesarios
  logic [(WIDTH - 1) : 0] registers [0 : (DEPTH - 1)];
  
  always_ff @(posedge clk) begin
    if(rst) begin
        for (int i = 0; i < DEPTH; i++) registers[i] <= '0;
        
    end else if (reg_wr && write_register != 5'b0) begin
        registers[write_register] <= write_data;
        
    end
  end
  
  assign read_data_1 = (read_register_1 == 5'b0) ? '0 : registers[read_register_1];
  assign read_data_2 = (read_register_2 == 5'b0) ? '0 : registers[read_register_2];
  
endmodule