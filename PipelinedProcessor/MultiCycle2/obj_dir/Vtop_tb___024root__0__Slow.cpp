// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelfRef.top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__rst__0 
        = vlSelfRef.top_tb__DOT__rst;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave_pipelined.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 32, 1024, 0, "program.mem"s,  &(vlSelfRef.top_tb__DOT__uut__DOT__u_inst_mem__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("top_tb.sv", 2, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hf4dee90c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h07bddf55_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hc6531e34_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h537b2e3e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_haa783561_0;

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top_tb__DOT__uut__DOT__control_stall 
        = ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ex) 
           & ((0U != (IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_ex)) 
              & (((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_ex) 
                  == (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                     >> 0x0000000fU))) 
                 | ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__rd_ex) 
                    == (0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                       >> 0x00000014U))))));
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel 
        = ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__branch_mem) 
           & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__comparison_mem));
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
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0 
        = (0x000003ffU & vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem);
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a1 
        = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0)));
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2 
        = (0x000003ffU & ((IData)(2U) + (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0)));
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3 
        = (0x000003ffU & ((IData)(3U) + (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0)));
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
    vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data 
        = ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_wb)
            ? vlSelfRef.top_tb__DOT__uut__DOT__mem_read_data_wb
            : vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb);
    if (vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel) {
        vlSelfRef.top_tb__DOT__uut__DOT__pc_in = (vlSelfRef.top_tb__DOT__uut__DOT__imm_ex 
                                                  + vlSelfRef.top_tb__DOT__uut__DOT__pc_ex);
    } else if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel)))) {
        vlSelfRef.top_tb__DOT__uut__DOT__pc_in = ((IData)(4U) 
                                                  + vlSelfRef.top_tb__DOT__uut__DOT__pc_out);
    }
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0 
        = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
        [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0];
    vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1 
        = vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
        [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a1];
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0));
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
}

VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge top_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge top_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root____Vm_traceActivitySetAll\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->top_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17209044258522412720ull);
    vlSelf->top_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5860139420296861047ull);
    vlSelf->top_tb__DOT__uut__DOT__pc_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12866265529798311333ull);
    vlSelf->top_tb__DOT__uut__DOT__pc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7352700946591078755ull);
    vlSelf->top_tb__DOT__uut__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17014405433422579186ull);
    vlSelf->top_tb__DOT__uut__DOT__instr_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1784733349760329054ull);
    vlSelf->top_tb__DOT__uut__DOT__imm_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11731559974947533182ull);
    vlSelf->top_tb__DOT__uut__DOT__rd_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12031090291095935052ull);
    vlSelf->top_tb__DOT__uut__DOT__funct7_id = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16196840196484287099ull);
    vlSelf->top_tb__DOT__uut__DOT__funct3_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15601413391556147285ull);
    vlSelf->top_tb__DOT__uut__DOT__opcode_id = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7213408050721501035ull);
    vlSelf->top_tb__DOT__uut__DOT__read_data_1_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2906425396528620948ull);
    vlSelf->top_tb__DOT__uut__DOT__read_data_2_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7790218449566404173ull);
    vlSelf->top_tb__DOT__uut__DOT__imm_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15258694287545564290ull);
    vlSelf->top_tb__DOT__uut__DOT__pc_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7722762533287695893ull);
    vlSelf->top_tb__DOT__uut__DOT__rd_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8990063054204268529ull);
    vlSelf->top_tb__DOT__uut__DOT__rs1_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8604725680646253425ull);
    vlSelf->top_tb__DOT__uut__DOT__rs2_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2658526492189072217ull);
    vlSelf->top_tb__DOT__uut__DOT__funct7_ex = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12579192759672677325ull);
    vlSelf->top_tb__DOT__uut__DOT__funct3_ex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1546940224133539801ull);
    vlSelf->top_tb__DOT__uut__DOT__opcode_ex = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18121577085684812478ull);
    vlSelf->top_tb__DOT__uut__DOT__regWrite_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 411853882012004252ull);
    vlSelf->top_tb__DOT__uut__DOT__memtoReg_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14446523687319327475ull);
    vlSelf->top_tb__DOT__uut__DOT__memRead_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9609516161127074681ull);
    vlSelf->top_tb__DOT__uut__DOT__memWrite_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6250382919979014461ull);
    vlSelf->top_tb__DOT__uut__DOT__branch_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6610905392253444465ull);
    vlSelf->top_tb__DOT__uut__DOT__aluSrc_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12201323301686271034ull);
    vlSelf->top_tb__DOT__uut__DOT__alu_result_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4788475774268159612ull);
    vlSelf->top_tb__DOT__uut__DOT__comparison_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12569355062153250395ull);
    vlSelf->top_tb__DOT__uut__DOT__rs2_forwarded_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4880831777697053055ull);
    vlSelf->top_tb__DOT__uut__DOT__alu_operand1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17979974952927637978ull);
    vlSelf->top_tb__DOT__uut__DOT__alu_operand2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12372151454913106858ull);
    vlSelf->top_tb__DOT__uut__DOT__alu_result_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14218993434515238629ull);
    vlSelf->top_tb__DOT__uut__DOT__write_data_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9963593776471131560ull);
    vlSelf->top_tb__DOT__uut__DOT__rd_mem = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13047467307089819093ull);
    vlSelf->top_tb__DOT__uut__DOT__funct3_mem = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13976534426239234329ull);
    vlSelf->top_tb__DOT__uut__DOT__regWrite_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14458596318372041364ull);
    vlSelf->top_tb__DOT__uut__DOT__memtoReg_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5362058698374968280ull);
    vlSelf->top_tb__DOT__uut__DOT__memRead_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11909115894398771256ull);
    vlSelf->top_tb__DOT__uut__DOT__memWrite_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12230246158188296417ull);
    vlSelf->top_tb__DOT__uut__DOT__branch_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18305696730964246919ull);
    vlSelf->top_tb__DOT__uut__DOT__comparison_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12083414519827093088ull);
    vlSelf->top_tb__DOT__uut__DOT__mem_read_data_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16626552001850680415ull);
    vlSelf->top_tb__DOT__uut__DOT__alu_result_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 680309175096993526ull);
    vlSelf->top_tb__DOT__uut__DOT__write_data_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4310793109562428077ull);
    vlSelf->top_tb__DOT__uut__DOT__rd_wb = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13311415645849085317ull);
    vlSelf->top_tb__DOT__uut__DOT__regWrite_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9813780571822327210ull);
    vlSelf->top_tb__DOT__uut__DOT__memtoReg_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7496846133360390398ull);
    vlSelf->top_tb__DOT__uut__DOT__memWrite_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6282732606579388198ull);
    vlSelf->top_tb__DOT__uut__DOT__forwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16552977731115639860ull);
    vlSelf->top_tb__DOT__uut__DOT__forwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18809096657189458ull);
    vlSelf->top_tb__DOT__uut__DOT__control_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11161068027566293474ull);
    vlSelf->top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel = 0;
    vlSelf->top_tb__DOT__uut__DOT__branch_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8027369485774907155ull);
    vlSelf->top_tb__DOT__uut__DOT__memRead_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11164084486665941900ull);
    vlSelf->top_tb__DOT__uut__DOT__memtoReg_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16818505158128099619ull);
    vlSelf->top_tb__DOT__uut__DOT__memWrite_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17348406485062351016ull);
    vlSelf->top_tb__DOT__uut__DOT__aluSrc_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15170860134993952386ull);
    vlSelf->top_tb__DOT__uut__DOT__regWrite_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1886822495890076585ull);
    vlSelf->top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_tb__DOT__uut__DOT__u_inst_mem__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7116647238917022697ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__uut__DOT__u_registers__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15184299140856034548ull);
    }
    vlSelf->top_tb__DOT__uut__DOT__u_registers__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8218758670197856200ull);
    vlSelf->top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_I = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6311725436136100161ull);
    vlSelf->top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_S = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15224108833587398827ull);
    vlSelf->top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_B = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2022852402287562649ull);
    vlSelf->top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_U = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5442103285051727184ull);
    vlSelf->top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_J = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 7533119821285485736ull);
    vlSelf->top_tb__DOT__uut__DOT__u_ex_mem__DOT__funct7_in = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17613679190439833121ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top_tb__DOT__uut__DOT__u_data_mem__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17099295949053963319ull);
    }
    vlSelf->top_tb__DOT__uut__DOT__u_data_mem__DOT__a0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8852507112789131175ull);
    vlSelf->top_tb__DOT__uut__DOT__u_data_mem__DOT__a1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14517651371337117197ull);
    vlSelf->top_tb__DOT__uut__DOT__u_data_mem__DOT__a2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11125834762536270947ull);
    vlSelf->top_tb__DOT__uut__DOT__u_data_mem__DOT__a3 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9997832873924222466ull);
    vlSelf->top_tb__DOT__uut__DOT__u_data_mem__DOT__b0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6961947023855828779ull);
    vlSelf->top_tb__DOT__uut__DOT__u_data_mem__DOT__b1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7364824074704454213ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__Vdly__top_tb__DOT__uut__DOT__pc_out = 0;
    vlSelf->__VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v0 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32 = 0;
    vlSelf->__VdlyDim0__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32 = 0;
    vlSelf->__VdlySet__top_tb__DOT__uut__DOT__u_registers__DOT__registers__v32 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0 = 0;
    vlSelf->__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0 = 0;
    vlSelf->__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v0 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1 = 0;
    vlSelf->__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1 = 0;
    vlSelf->__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v1 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v2 = 0;
    vlSelf->__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v2 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3 = 0;
    vlSelf->__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3 = 0;
    vlSelf->__VdlySet__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v3 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v4 = 0;
    vlSelf->__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v4 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v5 = 0;
    vlSelf->__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v5 = 0;
    vlSelf->__VdlyVal__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v6 = 0;
    vlSelf->__VdlyDim0__top_tb__DOT__uut__DOT__u_data_mem__DOT__memory__v6 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
