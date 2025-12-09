`timescale 1ns / 1ps
module top_tb;

    logic clk, rst;

    top_pipelined uut(
        .clk(clk),
        .rst(rst)
    );

    // Clock generator
    always #5 clk = ~clk;

    initial begin
        clk = 0;
        rst = 1;
        #20 rst = 0;

        #1000;
        $display("x1 = %h", uut.u_registers.registers[1]);
        $display("x2 = %h", uut.u_registers.registers[2]);
        $display("x3 = %h", uut.u_registers.registers[3]);
        $display("x4 = %h", uut.u_registers.registers[4]);
        $display("x5 = %h", uut.u_registers.registers[5]);
        $display("x6 = %h", uut.u_registers.registers[6]);

        #100;
        $finish;
    end

    initial begin
        $dumpfile("wave_pipelined.vcd");
        $dumpvars(0, tb_top_pipelined);
    end
endmodule
