`timescale 1ns / 1ps

module inst_mem #(parameter WIDTH = 32, parameter DEPTH = 10)(
    input  logic [(WIDTH - 1) : 0] addr,
    
    output logic [(WIDTH - 1) : 0] instr
);

    localparam MEM_SIZE = 1 << DEPTH;
    logic [(WIDTH - 1) : 0] memory [0 : (MEM_SIZE - 1)];

    initial begin
        $readmemh("program.mem", memory);
    end

    assign instr = memory[addr[DEPTH + 1 : 2]];
    
endmodule