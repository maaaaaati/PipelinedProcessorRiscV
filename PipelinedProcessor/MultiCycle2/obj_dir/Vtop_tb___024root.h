// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top_tb__DOT__clk;
        CData/*0:0*/ top_tb__DOT__rst;
        CData/*4:0*/ top_tb__DOT__uut__DOT__rd_id;
        CData/*6:0*/ top_tb__DOT__uut__DOT__funct7_id;
        CData/*2:0*/ top_tb__DOT__uut__DOT__funct3_id;
        CData/*6:0*/ top_tb__DOT__uut__DOT__opcode_id;
        CData/*4:0*/ top_tb__DOT__uut__DOT__rd_ex;
        CData/*4:0*/ top_tb__DOT__uut__DOT__rs1_ex;
        CData/*4:0*/ top_tb__DOT__uut__DOT__rs2_ex;
        CData/*6:0*/ top_tb__DOT__uut__DOT__funct7_ex;
        CData/*2:0*/ top_tb__DOT__uut__DOT__funct3_ex;
        CData/*6:0*/ top_tb__DOT__uut__DOT__opcode_ex;
        CData/*0:0*/ top_tb__DOT__uut__DOT__regWrite_ex;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memtoReg_ex;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memRead_ex;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memWrite_ex;
        CData/*0:0*/ top_tb__DOT__uut__DOT__branch_ex;
        CData/*0:0*/ top_tb__DOT__uut__DOT__aluSrc_ex;
        CData/*0:0*/ top_tb__DOT__uut__DOT__comparison_ex;
        CData/*4:0*/ top_tb__DOT__uut__DOT__rd_mem;
        CData/*2:0*/ top_tb__DOT__uut__DOT__funct3_mem;
        CData/*0:0*/ top_tb__DOT__uut__DOT__regWrite_mem;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memtoReg_mem;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memRead_mem;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memWrite_mem;
        CData/*0:0*/ top_tb__DOT__uut__DOT__branch_mem;
        CData/*0:0*/ top_tb__DOT__uut__DOT__comparison_mem;
        CData/*4:0*/ top_tb__DOT__uut__DOT__rd_wb;
        CData/*0:0*/ top_tb__DOT__uut__DOT__regWrite_wb;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memtoReg_wb;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memWrite_wb;
        CData/*1:0*/ top_tb__DOT__uut__DOT__forwardA;
        CData/*1:0*/ top_tb__DOT__uut__DOT__forwardB;
        CData/*0:0*/ top_tb__DOT__uut__DOT__control_stall;
        CData/*0:0*/ top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel;
        CData/*0:0*/ top_tb__DOT__uut__DOT__branch_ctrl;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memRead_ctrl;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memtoReg_ctrl;
        CData/*0:0*/ top_tb__DOT__uut__DOT__memWrite_ctrl;
        CData/*0:0*/ top_tb__DOT__uut__DOT__aluSrc_ctrl;
        CData/*0:0*/ top_tb__DOT__uut__DOT__regWrite_ctrl;
        CData/*0:0*/ top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign;
        CData/*6:0*/ top_tb__DOT__uut__DOT__u_ex_mem__DOT__funct7_in;
        CData/*7:0*/ top_tb__DOT__uut__DOT__u_data_mem__DOT__b0;
        CData/*7:0*/ top_tb__DOT__uut__DOT__u_data_mem__DOT__b1;
        CData/*0:0*/ __VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v0;
        CData/*4:0*/ __VdlyDim0__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32;
        CData/*0:0*/ __VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32;
        CData/*7:0*/ __VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0;
        CData/*0:0*/ __VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0;
        CData/*7:0*/ __VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1;
        CData/*0:0*/ __VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1;
        CData/*7:0*/ __VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v2;
        CData/*7:0*/ __VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3;
        CData/*0:0*/ __VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3;
        CData/*7:0*/ __VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v4;
        CData/*7:0*/ __VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v5;
        CData/*7:0*/ __VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v6;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__rst__0;
        SData/*11:0*/ top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_I;
        SData/*11:0*/ top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_S;
        SData/*12:0*/ top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_B;
    };
    struct {
        SData/*9:0*/ top_tb__DOT__uut__DOT__u_data_mem__DOT__a0;
        SData/*9:0*/ top_tb__DOT__uut__DOT__u_data_mem__DOT__a1;
        SData/*9:0*/ top_tb__DOT__uut__DOT__u_data_mem__DOT__a2;
        SData/*9:0*/ top_tb__DOT__uut__DOT__u_data_mem__DOT__a3;
        SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        SData/*9:0*/ __VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0;
        SData/*9:0*/ __VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1;
        SData/*9:0*/ __VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v2;
        SData/*9:0*/ __VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3;
        SData/*9:0*/ __VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v4;
        SData/*9:0*/ __VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v5;
        SData/*9:0*/ __VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v6;
        IData/*31:0*/ top_tb__DOT__uut__DOT__pc_in;
        IData/*31:0*/ top_tb__DOT__uut__DOT__pc_out;
        IData/*31:0*/ top_tb__DOT__uut__DOT__pc_id;
        IData/*31:0*/ top_tb__DOT__uut__DOT__instr_id;
        IData/*31:0*/ top_tb__DOT__uut__DOT__imm_id;
        IData/*31:0*/ top_tb__DOT__uut__DOT__read_data_1_ex;
        IData/*31:0*/ top_tb__DOT__uut__DOT__read_data_2_ex;
        IData/*31:0*/ top_tb__DOT__uut__DOT__imm_ex;
        IData/*31:0*/ top_tb__DOT__uut__DOT__pc_ex;
        IData/*31:0*/ top_tb__DOT__uut__DOT__alu_result_ex;
        IData/*31:0*/ top_tb__DOT__uut__DOT__rs2_forwarded_data;
        IData/*31:0*/ top_tb__DOT__uut__DOT__alu_operand1;
        IData/*31:0*/ top_tb__DOT__uut__DOT__alu_operand2;
        IData/*31:0*/ top_tb__DOT__uut__DOT__alu_result_mem;
        IData/*31:0*/ top_tb__DOT__uut__DOT__write_data_mem;
        IData/*31:0*/ top_tb__DOT__uut__DOT__mem_read_data_wb;
        IData/*31:0*/ top_tb__DOT__uut__DOT__alu_result_wb;
        IData/*31:0*/ top_tb__DOT__uut__DOT__write_data_wb;
        IData/*31:0*/ top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data;
        IData/*31:0*/ top_tb__DOT__uut__DOT__u_registers__DOT__unnamedblk1__DOT__i;
        IData/*19:0*/ top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_U;
        IData/*20:0*/ top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_J;
        IData/*31:0*/ __Vdly__top_tb__DOT__uut__DOT__pc_out;
        IData/*31:0*/ __VdlyVal__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 1024> top_tb__DOT__uut__DOT__u_inst_mem__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__uut__DOT__u_registers__DOT__registers;
        VlUnpacked<CData/*7:0*/, 1024> top_tb__DOT__uut__DOT__u_data_mem__DOT__memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* namep);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
