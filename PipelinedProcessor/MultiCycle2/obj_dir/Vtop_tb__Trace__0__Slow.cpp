// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"REG_FILE_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"INST_MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"DATA_MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pc_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"instr_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"instr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"read_data_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"read_data_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"imm_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+128,0,"funct7_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+129,0,"funct3_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+130,0,"opcode_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+5,0,"regWrite_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"memtoReg_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"memRead_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"memWrite_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"branch_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"aluSrc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"read_data_1_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"read_data_2_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"imm_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"pc_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"rd_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"rs1_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"rs2_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"funct7_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+19,0,"funct3_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+20,0,"opcode_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+21,0,"regWrite_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"memtoReg_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"memRead_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"memWrite_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"branch_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"aluSrc_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"alu_result_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"comparison_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"rs2_forwarded_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"alu_operand1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"alu_operand2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"alu_result_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"write_data_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"rd_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"funct3_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"regWrite_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"memtoReg_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"memRead_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"memWrite_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"branch_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"comparison_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"data_mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"mem_bypass_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"mem_read_data_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"alu_result_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"write_data_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"rd_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+47,0,"regWrite_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"memtoReg_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"memWrite_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"forwardA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"forwardB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"if_id_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"control_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"branch_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"memRead_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"memtoReg_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"memWrite_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"aluSrc_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"regWrite_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder_branch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("adder_pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"data_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"data_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+20,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+27,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"comparison",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"ALI_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+133,0,"AL_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+134,0,"MEM_WR_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+135,0,"MEM_RD_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+136,0,"BR_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+137,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+138,0,"JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+139,0,"LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+140,0,"AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+54,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"memRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"memtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"aluSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"ALI_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+133,0,"AL_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+134,0,"MEM_WR_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+135,0,"MEM_RD_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+136,0,"BR_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+138,0,"JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+137,0,"JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+139,0,"LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+140,0,"AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_data_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+63,0,"a1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+64,0,"a2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+65,0,"a3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+113,0,"b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+122,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ex_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"write_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+142,0,"funct7_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+19,0,"funct3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+21,0,"regWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"memtoReg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"memRead_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"memWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"branch_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"comparison_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"alu_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"write_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"funct3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"regWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"memtoReg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"memRead_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"memWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"branch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"comparison_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_forwarding", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"ex_mem_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"ex_mem_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+47,0,"mem_wb_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"mem_wb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"id_ex_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"id_ex_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+50,0,"forwardA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"forwardB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_hazard", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"id_ex_memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"id_ex_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"if_id_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"if_id_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+52,0,"pc_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"if_id_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"control_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_id_ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"read_data_1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"read_data_2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"imm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"funct7_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+70,0,"funct3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+61,0,"opcode_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+5,0,"regWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"memtoReg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"memRead_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"memWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"branch_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"aluSrc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"rs1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"rs2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"read_data_1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"read_data_2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"funct7_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+19,0,"funct3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+20,0,"opcode_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+21,0,"regWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"memtoReg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"memRead_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"memWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"branch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"aluSrc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"rs1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"rs2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_if_id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"instr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"imm_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+73,0,"imm_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+74,0,"imm_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+75,0,"imm_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+76,0,"imm_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_inst_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mem_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"read_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"write_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"regWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"memtoReg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"memWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"read_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"alu_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"write_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+47,0,"regWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"memtoReg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"memWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_register_PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_registers", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reg_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"write_register",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+77,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"read_register_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"read_register_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+118,0,"read_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"read_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+124,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+125,(0x00000020U),32);
    bufp->fullIData(oldp+126,(0x0000000aU),32);
    bufp->fullCData(oldp+127,(vlSelfRef.top_tb__DOT__uut__DOT__rd_id),5);
    bufp->fullCData(oldp+128,(vlSelfRef.top_tb__DOT__uut__DOT__funct7_id),7);
    bufp->fullCData(oldp+129,(vlSelfRef.top_tb__DOT__uut__DOT__funct3_id),3);
    bufp->fullCData(oldp+130,(vlSelfRef.top_tb__DOT__uut__DOT__opcode_id),7);
    bufp->fullIData(oldp+131,(4U),32);
    bufp->fullCData(oldp+132,(0x13U),7);
    bufp->fullCData(oldp+133,(0x33U),7);
    bufp->fullCData(oldp+134,(0x23U),7);
    bufp->fullCData(oldp+135,(3U),7);
    bufp->fullCData(oldp+136,(0x63U),7);
    bufp->fullCData(oldp+137,(0x6fU),7);
    bufp->fullCData(oldp+138,(0x67U),7);
    bufp->fullCData(oldp+139,(0x37U),7);
    bufp->fullCData(oldp+140,(0x17U),7);
    bufp->fullIData(oldp+141,(0x00000400U),32);
    bufp->fullCData(oldp+142,(vlSelfRef.top_tb__DOT__uut__DOT__u_ex_mem__DOT__funct7_in),7);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,((vlSelfRef.top_tb__DOT__uut__DOT__imm_ex 
                             + vlSelfRef.top_tb__DOT__uut__DOT__pc_ex)),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top_tb__DOT__uut__DOT__pc_id),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top_tb__DOT__uut__DOT__instr_id),32);
    bufp->fullIData(oldp+4,(vlSelfRef.top_tb__DOT__uut__DOT__imm_id),32);
    bufp->fullBit(oldp+5,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                           & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ctrl))));
    bufp->fullBit(oldp+6,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                           & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ctrl))));
    bufp->fullBit(oldp+7,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                           & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ctrl))));
    bufp->fullBit(oldp+8,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                           & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ctrl))));
    bufp->fullBit(oldp+9,(((~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)) 
                           & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__branch_ctrl))));
    bufp->fullBit(oldp+10,(vlSelfRef.top_tb__DOT__uut__DOT__aluSrc_ctrl));
    bufp->fullIData(oldp+11,(vlSelfRef.top_tb__DOT__uut__DOT__read_data_1_ex),32);
    bufp->fullIData(oldp+12,(vlSelfRef.top_tb__DOT__uut__DOT__read_data_2_ex),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top_tb__DOT__uut__DOT__imm_ex),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top_tb__DOT__uut__DOT__pc_ex),32);
    bufp->fullCData(oldp+15,(vlSelfRef.top_tb__DOT__uut__DOT__rd_ex),5);
    bufp->fullCData(oldp+16,(vlSelfRef.top_tb__DOT__uut__DOT__rs1_ex),5);
    bufp->fullCData(oldp+17,(vlSelfRef.top_tb__DOT__uut__DOT__rs2_ex),5);
    bufp->fullCData(oldp+18,(vlSelfRef.top_tb__DOT__uut__DOT__funct7_ex),7);
    bufp->fullCData(oldp+19,(vlSelfRef.top_tb__DOT__uut__DOT__funct3_ex),3);
    bufp->fullCData(oldp+20,(vlSelfRef.top_tb__DOT__uut__DOT__opcode_ex),7);
    bufp->fullBit(oldp+21,(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ex));
    bufp->fullBit(oldp+22,(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ex));
    bufp->fullBit(oldp+23,(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ex));
    bufp->fullBit(oldp+24,(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ex));
    bufp->fullBit(oldp+25,(vlSelfRef.top_tb__DOT__uut__DOT__branch_ex));
    bufp->fullBit(oldp+26,(vlSelfRef.top_tb__DOT__uut__DOT__aluSrc_ex));
    bufp->fullIData(oldp+27,(vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex),32);
    bufp->fullBit(oldp+28,(vlSelfRef.top_tb__DOT__uut__DOT__comparison_ex));
    bufp->fullIData(oldp+29,(vlSelfRef.top_tb__DOT__uut__DOT__rs2_forwarded_data),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top_tb__DOT__uut__DOT__alu_operand1),32);
    bufp->fullIData(oldp+31,(vlSelfRef.top_tb__DOT__uut__DOT__alu_operand2),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem),32);
    bufp->fullIData(oldp+33,(vlSelfRef.top_tb__DOT__uut__DOT__write_data_mem),32);
    bufp->fullCData(oldp+34,(vlSelfRef.top_tb__DOT__uut__DOT__rd_mem),5);
    bufp->fullCData(oldp+35,(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem),3);
    bufp->fullBit(oldp+36,(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_mem));
    bufp->fullBit(oldp+37,(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_mem));
    bufp->fullBit(oldp+38,(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem));
    bufp->fullBit(oldp+39,(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_mem));
    bufp->fullBit(oldp+40,(vlSelfRef.top_tb__DOT__uut__DOT__branch_mem));
    bufp->fullBit(oldp+41,(vlSelfRef.top_tb__DOT__uut__DOT__comparison_mem));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem) 
                            & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_wb) 
                               & (vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem 
                                  == vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb)))));
    bufp->fullIData(oldp+43,(vlSelfRef.top_tb__DOT__uut__DOT__mem_read_data_wb),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top_tb__DOT__uut__DOT__write_data_wb),32);
    bufp->fullCData(oldp+46,(vlSelfRef.top_tb__DOT__uut__DOT__rd_wb),5);
    bufp->fullBit(oldp+47,(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_wb));
    bufp->fullBit(oldp+48,(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_wb));
    bufp->fullBit(oldp+49,(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_wb));
    bufp->fullCData(oldp+50,(vlSelfRef.top_tb__DOT__uut__DOT__forwardA),2);
    bufp->fullCData(oldp+51,(vlSelfRef.top_tb__DOT__uut__DOT__forwardB),2);
    bufp->fullBit(oldp+52,((1U & (~ (IData)(vlSelfRef.top_tb__DOT__uut__DOT__control_stall)))));
    bufp->fullBit(oldp+53,(vlSelfRef.top_tb__DOT__uut__DOT__control_stall));
    bufp->fullBit(oldp+54,(vlSelfRef.top_tb__DOT__uut__DOT__branch_ctrl));
    bufp->fullBit(oldp+55,(vlSelfRef.top_tb__DOT__uut__DOT__memRead_ctrl));
    bufp->fullBit(oldp+56,(vlSelfRef.top_tb__DOT__uut__DOT__memtoReg_ctrl));
    bufp->fullBit(oldp+57,(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_ctrl));
    bufp->fullBit(oldp+58,(vlSelfRef.top_tb__DOT__uut__DOT__regWrite_ctrl));
    bufp->fullBit(oldp+59,(vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__pc_mux__sel));
    bufp->fullBit(oldp+60,((0U == vlSelfRef.top_tb__DOT__uut__DOT__alu_result_ex)));
    bufp->fullCData(oldp+61,((0x0000007fU & vlSelfRef.top_tb__DOT__uut__DOT__instr_id)),7);
    bufp->fullSData(oldp+62,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a0),10);
    bufp->fullSData(oldp+63,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a1),10);
    bufp->fullSData(oldp+64,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2),10);
    bufp->fullSData(oldp+65,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3),10);
    bufp->fullCData(oldp+66,((0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+67,((0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+68,((0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                             >> 7U))),5);
    bufp->fullCData(oldp+69,((vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                              >> 0x00000019U)),7);
    bufp->fullCData(oldp+70,((7U & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                    >> 0x0000000cU))),3);
    bufp->fullBit(oldp+71,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__sign));
    bufp->fullSData(oldp+72,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_I),12);
    bufp->fullSData(oldp+73,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_S),12);
    bufp->fullSData(oldp+74,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_B),13);
    bufp->fullIData(oldp+75,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_U),20);
    bufp->fullIData(oldp+76,(vlSelfRef.top_tb__DOT__uut__DOT__u_imm_gen__DOT__imm_J),21);
    bufp->fullIData(oldp+77,(vlSelfRef.top_tb__DOT__uut__DOT____Vcellinp__u_registers__write_data),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top_tb__DOT__uut__DOT__pc_out),32);
    bufp->fullIData(oldp+79,(((IData)(4U) + vlSelfRef.top_tb__DOT__uut__DOT__pc_out)),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[0]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[1]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[2]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[3]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[4]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[5]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[6]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[7]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[8]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[9]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[10]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[11]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[12]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[13]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[14]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[15]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[16]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[17]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[18]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[19]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[20]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[21]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[22]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[23]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[24]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[25]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[26]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[27]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[28]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[29]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[30]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers[31]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top_tb__DOT__uut__DOT__pc_in),32);
    bufp->fullCData(oldp+113,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0),8);
    bufp->fullCData(oldp+114,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1),8);
    bufp->fullBit(oldp+115,(vlSelfRef.top_tb__DOT__clk));
    bufp->fullBit(oldp+116,(vlSelfRef.top_tb__DOT__rst));
    bufp->fullIData(oldp+117,(vlSelfRef.top_tb__DOT__uut__DOT__u_inst_mem__DOT__memory
                              [(0x000003ffU & (vlSelfRef.top_tb__DOT__uut__DOT__pc_out 
                                               >> 2U))]),32);
    bufp->fullIData(oldp+118,(((0U == (0x0000001fU 
                                       & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                          >> 0x0000000fU)))
                                ? 0U : vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                               [(0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+119,(((0U == (0x0000001fU 
                                       & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                          >> 0x00000014U)))
                                ? 0U : vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__registers
                               [(0x0000001fU & (vlSelfRef.top_tb__DOT__uut__DOT__instr_id 
                                                >> 0x00000014U))])),32);
    bufp->fullIData(oldp+120,((((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem) 
                                & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memWrite_wb) 
                                   & (vlSelfRef.top_tb__DOT__uut__DOT__alu_result_mem 
                                      == vlSelfRef.top_tb__DOT__uut__DOT__alu_result_wb)))
                                ? vlSelfRef.top_tb__DOT__uut__DOT__write_data_wb
                                : ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem)
                                    ? ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                        ? ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                             ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                             : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))
                                        : ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                                ? 0U
                                                : (
                                                   (vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                                                    [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3] 
                                                    << 0x00000018U) 
                                                   | ((vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                                                       [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2] 
                                                       << 0x00000010U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                                            : ((1U 
                                                & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b1) 
                                                                   >> 7U)))) 
                                                    << 0x00000010U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))))
                                    : 0U))),32);
    bufp->fullIData(oldp+121,(((IData)(vlSelfRef.top_tb__DOT__uut__DOT__memRead_mem)
                                ? ((4U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                    ? ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                 : (IData)(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__b0)))
                                    : ((2U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                        ? ((1U & (IData)(vlSelfRef.top_tb__DOT__uut__DOT__funct3_mem))
                                            ? 0U : 
                                           ((vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
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
    bufp->fullCData(oldp+122,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                              [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a2]),8);
    bufp->fullCData(oldp+123,(vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__memory
                              [vlSelfRef.top_tb__DOT__uut__DOT__u_data_mem__DOT__a3]),8);
    bufp->fullIData(oldp+124,(vlSelfRef.top_tb__DOT__uut__DOT__u_registers__DOT__unnamedblk1__DOT__i),32);
}
