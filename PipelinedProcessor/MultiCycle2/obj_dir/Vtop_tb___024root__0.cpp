// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_initial__TOP(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__clk = 0U;
    vlSelfRef.top_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "top_tb.sv", 
                                         17);
    vlSelfRef.top_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                         nullptr, "top_tb.sv", 
                                         19);
    VL_WRITEF_NX("x1 = %x\nx2 = %x\nx3 = %x\nx4 = %x\nx5 = %x\nx6 = %x\n",0,
                 32,vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                 [1U],32,vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                 [2U],32,vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                 [3U],32,vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                 [4U],32,vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                 [5U],32,vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                 [6U]);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "top_tb.sv", 
                                         27);
    VL_FINISH_MT("top_tb.sv", 28, "");
}

VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "top_tb.sv", 
                                             12);
        vlSelfRef.top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.top_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.top_tb__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.top_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelfRef.top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__rst__0 
        = vlSelfRef.top_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__pc_out 
        = vlSelfRef.top_tb__DOT__uut__DOT__pc_out;
    vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0 = 0U;
    vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1 = 0U;
    vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3 = 0U;
    vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v0 = 0U;
    vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32 = 0U;
    if (vlSelfRef.top_tb__DOT__rst) {
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__unnamedblk1__DOT__i = 0x00000020U;
        vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__pc_out = 0U;
        vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v0 = 1U;
    } else {
        vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__pc_out 
            = ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)
                ? vlSelfRef.top_tb__DOT__uut__DOT__pc_out
                : vlSelfRef.top_tb__DOT__uut__DOT__pc_in);
        if (((IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_wb) 
             & (0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_wb)))) {
            vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32 
                = vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data;
            vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32 
                = vlSelfRef.top_tb__DOT__uut__DOT__rd_wb;
            vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32 = 1U;
        }
    }
    if (vlSelfRef.top_tb__DOT__uut__DOT__memWrite_mem) {
        if ((0U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))) {
            vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0 
                = (0x000000ffU & vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem);
            vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0 
                = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0;
            vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))) {
            vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1 
                = (0x000000ffU & vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem);
            vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1 
                = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0;
            vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1 = 1U;
            vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v2 
                = (0x000000ffU & (vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v2 
                = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a1;
        } else if ((2U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))) {
            vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3 
                = (0x000000ffU & vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem);
            vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3 
                = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0;
            vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3 = 1U;
            vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v4 
                = (0x000000ffU & (vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v4 
                = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a1;
            vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v5 
                = (0x000000ffU & (vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem 
                                  >> 0x10U));
            vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v5 
                = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2;
            vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v6 
                = (vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem 
                   >> 0x18U);
            vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v6 
                = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3;
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hf4dee90c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h07bddf55_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hc6531e34_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h537b2e3e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_haa783561_0;

void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__1\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top_tb__DOT__uut__DOT__comparison_mem 
        = ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__comparison_ex));
    vlSelfRef.top_tb__DOT__uut__DOT__aluSrc_ex = ((1U 
                                                   & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall))) 
                                                      && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__aluSrc_ctrl)));
    if (vlSelfRef.top_tb__DOT__rst) {
        vlSelfRef.top_tb__DOT__uut__DOT__imm_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__pc_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__read_data_1_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__rs1_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__read_data_2_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__rs2_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__mem_read_data_wb = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__rd_wb = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__pc_id = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__write_data_wb = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__rd_mem = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__rd_ex = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__instr_id = 0U;
    } else {
        vlSelfRef.top_tb__DOT__uut__DOT__pc_ex = vlSelfRef.top_tb__DOT__uut__DOT__pc_id;
        vlSelfRef.top_tb__DOT__uut__DOT__mem_read_data_wb 
            = (((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem) 
                & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_wb) 
                   & (vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem 
                      == vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb)))
                ? vlSelfRef.top_tb__DOT__uut__DOT__write_data_wb
                : ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem)
                    ? ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                        ? ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                            ? 0U : ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                     : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))
                        : ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                            ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                ? 0U : ((vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                                         [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3] 
                                         << 0x00000018U) 
                                        | ((vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                                            [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2] 
                                            << 0x00000010U) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                            : ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                ? (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1) 
                                                   >> 7U)))) 
                                    << 0x00000010U) 
                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                : (((- (IData)((1U 
                                                & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0) 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))))
                    : 0U));
        vlSelfRef.top_tb__DOT__uut__DOT__rd_wb = vlSelfRef.top_tb__DOT__uut__DOT__rd_mem;
        vlSelfRef.top_tb__DOT__uut__DOT__write_data_wb 
            = vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem;
        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb 
            = vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem;
        vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem 
            = vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex;
        vlSelfRef.top_tb__DOT__uut__DOT__rd_mem = vlSelfRef.top_tb__DOT__uut__DOT__rd_ex;
        if (vlSelfRef.top_tb__DOT__uut__DOT__control_stall) {
            vlSelfRef.top_tb__DOT__uut__DOT__imm_ex = 0U;
            vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex = 0U;
            vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex = 0x00000013U;
            vlSelfRef.top_tb__DOT__uut__DOT__read_data_1_ex = 0U;
            vlSelfRef.top_tb__DOT__uut__DOT__rs1_ex = 0U;
            vlSelfRef.top_tb__DOT__uut__DOT__read_data_2_ex = 0U;
            vlSelfRef.top_tb__DOT__uut__DOT__rs2_ex = 0U;
            vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex = 0U;
            vlSelfRef.top_tb__DOT__uut__DOT__rd_ex = 0U;
        } else {
            vlSelfRef.top_tb__DOT__uut__DOT__imm_ex 
                = vlSelfRef.top_tb__DOT__uut__DOT__imm_id;
            vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex 
                = (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                   >> 0x00000019U);
            vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex 
                = (0x0000007fU & vlSelfRef.top_tb__DOT__uut__DOT__instr_id);
            vlSelfRef.top_tb__DOT__uut__DOT__read_data_1_ex 
                = ((0U == (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                          >> 0x0000000fU)))
                    ? 0U : vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                   [(0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                    >> 0x0000000fU))]);
            vlSelfRef.top_tb__DOT__uut__DOT__rs1_ex 
                = (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                  >> 0x0000000fU));
            vlSelfRef.top_tb__DOT__uut__DOT__read_data_2_ex 
                = ((0U == (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                          >> 0x00000014U)))
                    ? 0U : vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                   [(0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                    >> 0x00000014U))]);
            vlSelfRef.top_tb__DOT__uut__DOT__rs2_ex 
                = (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                  >> 0x00000014U));
            vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex 
                = (7U & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                         >> 0x0000000cU));
            vlSelfRef.top_tb__DOT__uut__DOT__rd_ex 
                = (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                  >> 7U));
        }
        if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)))) {
            vlSelfRef.top_tb__DOT__uut__DOT__pc_id 
                = vlSelfRef.top_tb__DOT__uut__DOT__pc_out;
            vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                = vlSelfRef.top_tb__DOT__uut__DOT__u_inst_mem__DOT__memory
                [(0x000003ffU & (vlSelfRef.top_tb__DOT__uut__DOT__pc_out 
                                 >> 2U))];
        }
        vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem 
            = vlSelfRef.top_tb__DOT__uut__DOT__rs2_forwarded_data;
        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem 
            = vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex;
    }
    vlSelfRef.top_tb__DOT__uut__DOT__branch_mem = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
                                                   && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__branch_ex));
    vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_wb = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_mem));
    vlSelfRef.top_tb__DOT__uut__DOT__regWrite_wb = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_mem));
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel 
        = ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__branch_mem) 
           & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__comparison_mem));
    vlSelfRef.top_tb__DOT__uut__DOT__branch_ex = ((1U 
                                                   & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall))) 
                                                      && ((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                                                          & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__branch_ctrl))));
    vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_mem = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ex));
    vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ex));
    vlSelfRef.top_tb__DOT__uut__DOT__memWrite_wb = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_mem));
    vlSelfRef.top_tb__DOT__uut__DOT__regWrite_mem = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ex));
    vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ex = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall))) 
             && ((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                 & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ctrl))));
    vlSelfRef.top_tb__DOT__uut__DOT__memRead_ex = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
                                                   && ((1U 
                                                        & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall))) 
                                                       && ((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                                                           & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ctrl))));
    vlSelfRef.top_tb__DOT__uut__DOT__memWrite_mem = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ex));
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data 
        = ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_wb)
            ? vlSelfRef.top_tb__DOT__uut__DOT__mem_read_data_wb
            : vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb);
    vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ex = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall))) 
             && ((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                 & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ctrl))));
    vlSelfRef.top_tb__DOT__uut__DOT__forwardA = 0U;
    if ((((IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_mem) 
          & (0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem))) 
         & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem) 
            == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rs1_ex)))) {
        vlSelfRef.top_tb__DOT__uut__DOT__forwardA = 2U;
    }
    if (((((IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_wb) 
           & (0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_wb))) 
          & (~ (((IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_mem) 
                 & (0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem))) 
                & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem) 
                   == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rs1_ex))))) 
         & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_wb) 
            == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rs1_ex)))) {
        vlSelfRef.top_tb__DOT__uut__DOT__forwardA = 1U;
    }
    vlSelfRef.top_tb__DOT__uut__DOT__forwardB = 0U;
    if ((((IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_mem) 
          & (0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem))) 
         & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem) 
            == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rs2_ex)))) {
        vlSelfRef.top_tb__DOT__uut__DOT__forwardB = 2U;
    }
    if (((((IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_wb) 
           & (0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_wb))) 
          & (~ (((IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_mem) 
                 & (0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem))) 
                & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem) 
                   == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rs2_ex))))) 
         & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_wb) 
            == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rs2_ex)))) {
        vlSelfRef.top_tb__DOT__uut__DOT__forwardB = 1U;
    }
    vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ex = 
        ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst))) 
         && ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall))) 
             && ((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                 & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ctrl))));
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0 
        = (0x000003ffU & vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem);
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a1 
        = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0)));
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2 
        = (0x000003ffU & ((IData)(2U) + (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0)));
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3 
        = (0x000003ffU & ((IData)(3U) + (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0)));
    vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 = 
        ((2U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__forwardA))
          ? vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem
          : ((1U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__forwardA))
              ? vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data
              : vlSelfRef.top_tb__DOT__uut__DOT__read_data_1_ex));
    vlSelfRef.top_tb__DOT__uut__DOT__rs2_forwarded_data 
        = ((2U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__forwardB))
            ? vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem
            : ((1U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__forwardB))
                ? vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data
                : vlSelfRef.top_tb__DOT__uut__DOT__read_data_2_ex));
    vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2 = 
        ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__aluSrc_ex)
          ? vlSelfRef.top_tb__DOT__uut__DOT__imm_ex
          : vlSelfRef.top_tb__DOT__uut__DOT__rs2_forwarded_data);
    vlSelfRef.top_tb__DOT__uut__DOT__comparison_ex = 0U;
    vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
        if ((0x00000020U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                            if ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                                vlSelfRef.top_tb__DOT__uut__DOT__comparison_ex 
                                    = (1U & ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                                   ? 
                                                  ((vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                                    >= vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                                    < vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                                   ? 
                                                  (VL_GTES_III(32, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(32, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                                    ? 1U
                                                    : 0U)))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex) 
                                                      >> 1U))) 
                                                 && (1U 
                                                     & ((1U 
                                                         & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                                         ? 
                                                        ((vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                                          != vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                                          ? 1U
                                                          : 0U)
                                                         : 
                                                        ((vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                                          == vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                                          ? 1U
                                                          : 0U))))));
                            }
                        }
                    }
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
            } else if ((8U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                    = ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                        ? ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                            ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                                ? (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   + vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                : 0U) : 0U) : 0U);
            } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                    = ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                        ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                            ? (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                               + vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                            : 0U) : 0U);
            } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex)))) {
                    vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
        if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
            if ((8U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
            } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                    = ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                        ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                            ? vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2
                            : 0U) : 0U);
            } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                    if ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))) {
                        if ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))) {
                            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                                = ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                    ? (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                       & vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                    : (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                       | vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2));
                        } else if ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))) {
                            if ((0U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex))) {
                                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                                    = VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2);
                            }
                            if ((0x20U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex))) {
                                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                                    = VL_SHIFTRS_III(32,32,32, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2);
                            }
                        } else {
                            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                                = (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   ^ vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2);
                        }
                    } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))) {
                        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                            = ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                ? ((vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                    < vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                    ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                                   ? 1U
                                                   : 0U));
                    } else if ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))) {
                        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2);
                    } else {
                        if ((0U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex))) {
                            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                                = (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   + vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2);
                        }
                        if ((0x20U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex))) {
                            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                                = (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   - vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2);
                        }
                    }
                } else {
                    vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                = ((8U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                    ? 0U : ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                             ? 0U : ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                                      ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                                          ? (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                             + vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                          : 0U) : 0U)));
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
        if ((8U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
        } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                = ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                    ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                        ? (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                           + vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                        : 0U) : 0U);
        } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
            if ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))) {
                if ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))) {
                    if ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))) {
                        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                            = ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                ? (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   & vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                : (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   | vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2));
                    } else if ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))) {
                        if ((0U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex))) {
                            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                                = (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   >> (0x0000001fU 
                                       & vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2));
                        }
                        if ((0x20U == (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex))) {
                            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                                = VL_SHIFTRS_III(32,32,5, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1, 
                                                 (0x0000001fU 
                                                  & vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2));
                        }
                    } else {
                        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                            = (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                               ^ vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2);
                    }
                } else {
                    vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
                        = ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                            ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                ? ((vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                    < vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                    ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1, vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                                   ? 1U
                                                   : 0U))
                            : ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex))
                                ? (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   << (0x0000001fU 
                                       & vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2))
                                : (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                   + vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)));
                }
            } else {
                vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex = 0U;
        }
    } else {
        vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex 
            = ((8U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                ? 0U : ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                         ? 0U : ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                                  ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex))
                                      ? (vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1 
                                         + vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2)
                                      : 0U) : 0U)));
    }
    vlSelfRef.top_tb__DOT__uut__DOT__control_stall 
        = ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ex) 
           & ((0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_ex)) 
              & (((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_ex) 
                  == (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                     >> 0x0000000fU))) 
                 | ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_ex) 
                    == (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                       >> 0x00000014U))))));
    vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign 
        = (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
           >> 0x1fU);
    vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_I 
        = (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
           >> 0x14U);
    vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_S 
        = ((0x00000fe0U & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                           >> 0x00000014U)) | (0x0000001fU 
                                               & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                  >> 7U)));
    vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_B 
        = ((((2U & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                    >> 0x0000001eU)) | (1U & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                              >> 7U))) 
            << 0x0000000bU) | ((0x000007e0U & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                               >> 0x00000014U)) 
                               | (0x0000001eU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                 >> 7U))));
    vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_U 
        = (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
           >> 0x0cU);
    vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_J 
        = ((((0x00000200U & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                             >> 0x00000016U)) | ((0x000001feU 
                                                  & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                     >> 0x0000000bU)) 
                                                 | (1U 
                                                    & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                       >> 0x14U)))) 
            << 0x0000000bU) | (0x000007feU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                              >> 0x00000014U)));
    vlSelfRef.top_tb__DOT__uut__DOT__imm_id = ((0x00000040U 
                                                & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                ? (
                                                   (0x00000020U 
                                                    & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                    ? 
                                                   ((0x00000010U 
                                                     & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                      ? 
                                                     ((4U 
                                                       & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                       ? 
                                                      ((2U 
                                                        & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                         ? 
                                                        (((- (IData)((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign))) 
                                                          << 0x00000015U) 
                                                         | vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_J)
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                         ? 
                                                        (((- (IData)((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign))) 
                                                          << 0x0000000dU) 
                                                         | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_B))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                : (
                                                   (0x00000020U 
                                                    & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                    ? 
                                                   ((0x00000010U 
                                                     & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                     ? 
                                                    ((8U 
                                                      & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                       ? 
                                                      ((2U 
                                                        & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                         ? 
                                                        (vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_U 
                                                         << 0x0000000cU)
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                         ? 
                                                        (((- (IData)((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign))) 
                                                          << 0x0000000cU) 
                                                         | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_S))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x00000010U 
                                                     & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                     ? 
                                                    ((8U 
                                                      & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                       ? 
                                                      ((2U 
                                                        & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                         ? 
                                                        (vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_U 
                                                         << 0x0000000cU)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                         ? 
                                                        (((- (IData)((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign))) 
                                                          << 0x0000000cU) 
                                                         | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_I))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                        ? 
                                                       ((1U 
                                                         & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)
                                                         ? 
                                                        (((- (IData)((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign))) 
                                                          << 0x0000000cU) 
                                                         | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_I))
                                                         : 0U)
                                                        : 0U))))));
    __Vtableidx1 = (0x0000007fU & vlSelfRef.top_tb__DOT__uut__DOT__instr_id);
    vlSelfRef.top_tb__DOT__uut__DOT__branch_ctrl = 
        Vtop_tb__ConstPool__TABLE_hf4dee90c_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__uut__DOT__memRead_ctrl = 
        Vtop_tb__ConstPool__TABLE_h07bddf55_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ctrl 
        = Vtop_tb__ConstPool__TABLE_h07bddf55_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ctrl 
        = Vtop_tb__ConstPool__TABLE_hc6531e34_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__uut__DOT__aluSrc_ctrl = 
        Vtop_tb__ConstPool__TABLE_h537b2e3e_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ctrl 
        = Vtop_tb__ConstPool__TABLE_haa783561_0[__Vtableidx1];
}

void Vtop_tb___024root___nba_sequent__TOP__2(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__2\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v0) {
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[1U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[2U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[3U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[4U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[5U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[6U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[7U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[8U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[9U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x0aU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x0bU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x0cU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x0dU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x0eU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x0fU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x10U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x11U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x12U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x13U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x14U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x15U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x16U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x17U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x18U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x19U] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x1aU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x1bU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x1cU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x1dU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x1eU] = 0U;
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0x1fU] = 0U;
    }
    if (vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32) {
        vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32;
    }
    if (vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0) {
        vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory[vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0;
    }
    if (vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1) {
        vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory[vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1;
        vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory[vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v2] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v2;
    }
    if (vlSelfRef.__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3) {
        vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory[vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3;
        vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory[vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v4] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v4;
        vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory[vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v5] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v5;
        vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory[vlSelfRef.__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v6] 
            = vlSelfRef.__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v6;
    }
    vlSelfRef.top_tb__DOT__uut__DOT__pc_out = vlSelfRef.__Vdly__top_tb__DOT__uut__DOT__pc_out;
}

void Vtop_tb___024root___nba_comb__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_comb__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0 
        = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
        [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0];
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1 
        = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
        [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a1];
    if (vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel) {
        vlSelfRef.top_tb__DOT__uut__DOT__pc_in = (vlSelfRef.top_tb__DOT__uut__DOT__imm_ex 
                                                  + vlSelfRef.top_tb__DOT__uut__DOT__pc_ex);
    } else if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel)))) {
        vlSelfRef.top_tb__DOT__uut__DOT__pc_in = ((IData)(4U) 
                                                  + vlSelfRef.top_tb__DOT__uut__DOT__pc_out);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0));
}

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    Vtop_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtop_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vtop_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        Vtop_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("top_tb.sv", 2, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("top_tb.sv", 2, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop_tb___024root___eval_phase__act(vlSelf));
    } while (Vtop_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
