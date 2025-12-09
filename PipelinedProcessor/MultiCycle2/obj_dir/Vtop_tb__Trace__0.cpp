// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,((vlSelfRef.top_tb__DOT__uut__DOT__imm_ex 
                                + vlSelfRef.top_tb__DOT__uut__DOT__pc_ex)),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top_tb__DOT__uut__DOT__pc_id),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top_tb__DOT__uut__DOT__instr_id),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top_tb__DOT__uut__DOT__imm_id),32);
        bufp->chgBit(oldp+4,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                              & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ctrl))));
        bufp->chgBit(oldp+5,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                              & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ctrl))));
        bufp->chgBit(oldp+6,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                              & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ctrl))));
        bufp->chgBit(oldp+7,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                              & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ctrl))));
        bufp->chgBit(oldp+8,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                              & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__branch_ctrl))));
        bufp->chgBit(oldp+9,(vlSelfRef.top_tb__DOT__uut__DOT__aluSrc_ctrl));
        bufp->chgIData(oldp+10,(vlSelfRef.top_tb__DOT__uut__DOT__read_data_1_ex),32);
        bufp->chgIData(oldp+11,(vlSelfRef.top_tb__DOT__uut__DOT__read_data_2_ex),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top_tb__DOT__uut__DOT__imm_ex),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top_tb__DOT__uut__DOT__pc_ex),32);
        bufp->chgCData(oldp+14,(vlSelfRef.top_tb__DOT__uut__DOT__rd_ex),5);
        bufp->chgCData(oldp+15,(vlSelfRef.top_tb__DOT__uut__DOT__rs1_ex),5);
        bufp->chgCData(oldp+16,(vlSelfRef.top_tb__DOT__uut__DOT__rs2_ex),5);
        bufp->chgCData(oldp+17,(vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex),7);
        bufp->chgCData(oldp+18,(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex),3);
        bufp->chgCData(oldp+19,(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex),7);
        bufp->chgBit(oldp+20,(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ex));
        bufp->chgBit(oldp+21,(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ex));
        bufp->chgBit(oldp+22,(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ex));
        bufp->chgBit(oldp+23,(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ex));
        bufp->chgBit(oldp+24,(vlSelfRef.top_tb__DOT__uut__DOT__branch_ex));
        bufp->chgBit(oldp+25,(vlSelfRef.top_tb__DOT__uut__DOT__aluSrc_ex));
        bufp->chgIData(oldp+26,(vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex),32);
        bufp->chgBit(oldp+27,(vlSelfRef.top_tb__DOT__uut__DOT__comparison_ex));
        bufp->chgIData(oldp+28,(vlSelfRef.top_tb__DOT__uut__DOT__rs2_forwarded_data),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem),32);
        bufp->chgCData(oldp+33,(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem),5);
        bufp->chgCData(oldp+34,(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem),3);
        bufp->chgBit(oldp+35,(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_mem));
        bufp->chgBit(oldp+36,(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_mem));
        bufp->chgBit(oldp+37,(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem));
        bufp->chgBit(oldp+38,(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_mem));
        bufp->chgBit(oldp+39,(vlSelfRef.top_tb__DOT__uut__DOT__branch_mem));
        bufp->chgBit(oldp+40,(vlSelfRef.top_tb__DOT__uut__DOT__comparison_mem));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem) 
                               & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_wb) 
                                  & (vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem 
                                     == vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb)))));
        bufp->chgIData(oldp+42,(vlSelfRef.top_tb__DOT__uut__DOT__mem_read_data_wb),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top_tb__DOT__uut__DOT__write_data_wb),32);
        bufp->chgCData(oldp+45,(vlSelfRef.top_tb__DOT__uut__DOT__rd_wb),5);
        bufp->chgBit(oldp+46,(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_wb));
        bufp->chgBit(oldp+47,(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_wb));
        bufp->chgBit(oldp+48,(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_wb));
        bufp->chgCData(oldp+49,(vlSelfRef.top_tb__DOT__uut__DOT__forwardA),2);
        bufp->chgCData(oldp+50,(vlSelfRef.top_tb__DOT__uut__DOT__forwardB),2);
        bufp->chgBit(oldp+51,((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)))));
        bufp->chgBit(oldp+52,(vlSelfRef.top_tb__DOT__uut__DOT__control_stall));
        bufp->chgBit(oldp+53,(vlSelfRef.top_tb__DOT__uut__DOT__branch_ctrl));
        bufp->chgBit(oldp+54,(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ctrl));
        bufp->chgBit(oldp+55,(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ctrl));
        bufp->chgBit(oldp+56,(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ctrl));
        bufp->chgBit(oldp+57,(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ctrl));
        bufp->chgBit(oldp+58,(vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel));
        bufp->chgBit(oldp+59,((0U == vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex)));
        bufp->chgCData(oldp+60,((0x0000007fU & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)),7);
        bufp->chgSData(oldp+61,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0),10);
        bufp->chgSData(oldp+62,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a1),10);
        bufp->chgSData(oldp+63,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2),10);
        bufp->chgSData(oldp+64,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3),10);
        bufp->chgCData(oldp+65,((0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+66,((0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+67,((0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                >> 7U))),5);
        bufp->chgCData(oldp+68,((vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                 >> 0x00000019U)),7);
        bufp->chgCData(oldp+69,((7U & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                       >> 0x0000000cU))),3);
        bufp->chgBit(oldp+70,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign));
        bufp->chgSData(oldp+71,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_I),12);
        bufp->chgSData(oldp+72,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_S),12);
        bufp->chgSData(oldp+73,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_B),13);
        bufp->chgIData(oldp+74,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_U),20);
        bufp->chgIData(oldp+75,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_J),21);
        bufp->chgIData(oldp+76,(vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+77,(vlSelfRef.top_tb__DOT__uut__DOT__pc_out),32);
        bufp->chgIData(oldp+78,(((IData)(4U) + vlSelfRef.top_tb__DOT__uut__DOT__pc_out)),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[1]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[2]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[3]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[4]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[5]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[6]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[7]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[8]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[9]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[10]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[11]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[12]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[13]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[14]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[15]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[16]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[17]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[18]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[19]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[20]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[21]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[22]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[23]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[24]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[25]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[26]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[27]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[28]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[29]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[30]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+111,(vlSelfRef.top_tb__DOT__uut__DOT__pc_in),32);
        bufp->chgCData(oldp+112,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0),8);
        bufp->chgCData(oldp+113,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1),8);
    }
    bufp->chgBit(oldp+114,(vlSelfRef.top_tb__DOT__clk));
    bufp->chgBit(oldp+115,(vlSelfRef.top_tb__DOT__rst));
    bufp->chgIData(oldp+116,(vlSelfRef.top_tb__DOT__uut__DOT__u_inst_mem__DOT__memory
                             [(0x000003ffU & (vlSelfRef.top_tb__DOT__uut__DOT__pc_out 
                                              >> 2U))]),32);
    bufp->chgIData(oldp+117,(((0U == (0x0000001fU & 
                                      (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                       >> 0x0000000fU)))
                               ? 0U : vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                              [(0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                               >> 0x0000000fU))])),32);
    bufp->chgIData(oldp+118,(((0U == (0x0000001fU & 
                                      (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                       >> 0x00000014U)))
                               ? 0U : vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                              [(0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                               >> 0x00000014U))])),32);
    bufp->chgIData(oldp+119,((((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem) 
                               & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_wb) 
                                  & (vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem 
                                     == vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb)))
                               ? vlSelfRef.top_tb__DOT__uut__DOT__write_data_wb
                               : ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem)
                                   ? ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                       ? ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                                    ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                    : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))
                                       : ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                           ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                               ? 0U
                                               : ((
                                                   vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                                                   [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3] 
                                                   << 0x00000018U) 
                                                  | ((vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                                                      [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2] 
                                                      << 0x00000010U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                                           : ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1) 
                                                                  >> 7U)))) 
                                                   << 0x00000010U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0) 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))))
                                   : 0U))),32);
    bufp->chgIData(oldp+120,(((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem)
                               ? ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                   ? ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                                ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))
                                   : ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                       ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                           ? 0U : (
                                                   (vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                                                    [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3] 
                                                    << 0x00000018U) 
                                                   | ((vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                                                       [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2] 
                                                       << 0x00000010U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                                       : ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1) 
                                                              >> 7U)))) 
                                               << 0x00000010U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                           : (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0) 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))))
                               : 0U)),32);
    bufp->chgCData(oldp+121,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                             [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2]),8);
    bufp->chgCData(oldp+122,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                             [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3]),8);
    bufp->chgIData(oldp+123,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__unnamedblk1__DOT__i),32);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
