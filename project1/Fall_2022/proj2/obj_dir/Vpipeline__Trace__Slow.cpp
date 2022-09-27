// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


//======================

void Vpipeline::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vpipeline::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vpipeline::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vpipeline::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vpipeline::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+176,"clk", false,-1);
        tracep->declBit(c+177,"reset", false,-1);
        tracep->declBit(c+176,"pipeline clk", false,-1);
        tracep->declBit(c+177,"pipeline reset", false,-1);
        tracep->declBus(c+1,"pipeline cycle_count", false,-1, 31,0);
        tracep->declArray(c+2,"pipeline FE_latch_out", false,-1, 131,0);
        tracep->declArray(c+7,"pipeline DE_latch_out", false,-1, 237,0);
        tracep->declArray(c+15,"pipeline AGEX_latch_out", false,-1, 243,0);
        tracep->declArray(c+23,"pipeline MEM_latch_out", false,-1, 243,0);
        tracep->declBus(c+31,"pipeline from_DE_to_FE", false,-1, 0,0);
        tracep->declQuad(c+32,"pipeline from_AGEX_to_FE", false,-1, 32,0);
        tracep->declBus(c+242,"pipeline from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+243,"pipeline from_WB_to_FE", false,-1, 0,0);
        tracep->declBus(c+34,"pipeline from_AGEX_to_DE", false,-1, 5,0);
        tracep->declBus(c+35,"pipeline from_MEM_to_DE", false,-1, 5,0);
        tracep->declQuad(c+36,"pipeline from_WB_to_DE", false,-1, 48,0);
        tracep->declBus(c+244,"pipeline from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+245,"pipeline from_WB_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+246,"pipeline from_WB_to_MEM", false,-1, 0,0);
        tracep->declBit(c+176,"pipeline my_FE_stage clk", false,-1);
        tracep->declBit(c+177,"pipeline my_FE_stage reset", false,-1);
        tracep->declBus(c+31,"pipeline my_FE_stage from_DE_to_FE", false,-1, 0,0);
        tracep->declQuad(c+32,"pipeline my_FE_stage from_AGEX_to_FE", false,-1, 32,0);
        tracep->declBus(c+242,"pipeline my_FE_stage from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+243,"pipeline my_FE_stage from_WB_to_FE", false,-1, 0,0);
        tracep->declArray(c+2,"pipeline my_FE_stage FE_latch_out", false,-1, 131,0);
        tracep->declArray(c+2,"pipeline my_FE_stage FE_latch", false,-1, 131,0);
        tracep->declBus(c+38,"pipeline my_FE_stage PC_FE_latch", false,-1, 31,0);
        tracep->declBus(c+39,"pipeline my_FE_stage inst_FE", false,-1, 31,0);
        tracep->declBus(c+40,"pipeline my_FE_stage pcplus_FE", false,-1, 31,0);
        tracep->declBit(c+31,"pipeline my_FE_stage stall_pipe_FE", false,-1);
        tracep->declBit(c+41,"pipeline my_FE_stage br_cond_FE", false,-1);
        tracep->declBus(c+42,"pipeline my_FE_stage branch_addr_FE", false,-1, 31,0);
        tracep->declArray(c+43,"pipeline my_FE_stage FE_latch_contents", false,-1, 131,0);
        tracep->declBus(c+48,"pipeline my_FE_stage inst_count_FE", false,-1, 31,0);
        tracep->declBus(c+247,"pipeline my_FE_stage inst_count_AGEX", false,-1, 31,0);
        tracep->declBit(c+176,"pipeline my_DE_stage clk", false,-1);
        tracep->declBit(c+177,"pipeline my_DE_stage reset", false,-1);
        tracep->declArray(c+2,"pipeline my_DE_stage from_FE_latch", false,-1, 131,0);
        tracep->declBus(c+34,"pipeline my_DE_stage from_AGEX_to_DE", false,-1, 5,0);
        tracep->declBus(c+35,"pipeline my_DE_stage from_MEM_to_DE", false,-1, 5,0);
        tracep->declQuad(c+36,"pipeline my_DE_stage from_WB_to_DE", false,-1, 48,0);
        tracep->declBus(c+31,"pipeline my_DE_stage from_DE_to_FE", false,-1, 0,0);
        tracep->declArray(c+7,"pipeline my_DE_stage DE_latch_out", false,-1, 237,0);
        tracep->declArray(c+7,"pipeline my_DE_stage DE_latch", false,-1, 237,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+128+i*1,"pipeline my_DE_stage regs", true,(i+0), 31,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+160+i*1,"pipeline my_DE_stage csr_regs", true,(i+0), 31,0);}}
        tracep->declBus(c+49,"pipeline my_DE_stage inst_DE", false,-1, 31,0);
        tracep->declBus(c+50,"pipeline my_DE_stage PC_DE", false,-1, 31,0);
        tracep->declBus(c+51,"pipeline my_DE_stage pcplus_DE", false,-1, 31,0);
        tracep->declBus(c+52,"pipeline my_DE_stage inst_count_DE", false,-1, 31,0);
        tracep->declArray(c+120,"pipeline my_DE_stage DE_latch_contents", false,-1, 237,0);
        tracep->declBus(c+53,"pipeline my_DE_stage bus_canary_DE", false,-1, 3,0);
        tracep->declBus(c+54,"pipeline my_DE_stage F3_DE", false,-1, 2,0);
        tracep->declBus(c+55,"pipeline my_DE_stage F7_DE", false,-1, 6,0);
        tracep->declBus(c+56,"pipeline my_DE_stage op_DE", false,-1, 6,0);
        tracep->declBus(c+57,"pipeline my_DE_stage op_I_DE", false,-1, 5,0);
        tracep->declBus(c+58,"pipeline my_DE_stage type_I_DE", false,-1, 3,0);
        tracep->declBus(c+59,"pipeline my_DE_stage type_immediate_DE", false,-1, 2,0);
        tracep->declBus(c+60,"pipeline my_DE_stage sxt_imm_DE", false,-1, 31,0);
        tracep->declBit(c+61,"pipeline my_DE_stage wr_reg_WB", false,-1);
        tracep->declBus(c+62,"pipeline my_DE_stage wregno_WB", false,-1, 4,0);
        tracep->declBus(c+63,"pipeline my_DE_stage regval_WB", false,-1, 31,0);
        tracep->declBus(c+64,"pipeline my_DE_stage wcsrno_WB", false,-1, 3,0);
        tracep->declBit(c+65,"pipeline my_DE_stage wr_csr_WB", false,-1);
        tracep->declBus(c+66,"pipeline my_DE_stage agex_forward_reg_addr", false,-1, 4,0);
        tracep->declBus(c+67,"pipeline my_DE_stage mem_forward_reg_addr", false,-1, 4,0);
        tracep->declBus(c+68,"pipeline my_DE_stage wb_forward_reg_addr", false,-1, 4,0);
        tracep->declBit(c+69,"pipeline my_DE_stage is_forwarding_agex", false,-1);
        tracep->declBit(c+70,"pipeline my_DE_stage is_forwarding_mem", false,-1);
        tracep->declBit(c+71,"pipeline my_DE_stage is_forwarding_wb", false,-1);
        tracep->declBit(c+31,"pipeline my_DE_stage stall_next", false,-1);
        tracep->declBit(c+31,"pipeline my_DE_stage pipeline_stall_DE", false,-1);
        tracep->declBit(c+176,"pipeline my_AGEX_stage clk", false,-1);
        tracep->declBit(c+177,"pipeline my_AGEX_stage reset", false,-1);
        tracep->declBus(c+244,"pipeline my_AGEX_stage from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+245,"pipeline my_AGEX_stage from_WB_to_AGEX", false,-1, 0,0);
        tracep->declArray(c+7,"pipeline my_AGEX_stage from_DE_latch", false,-1, 237,0);
        tracep->declArray(c+15,"pipeline my_AGEX_stage AGEX_latch_out", false,-1, 243,0);
        tracep->declQuad(c+32,"pipeline my_AGEX_stage from_AGEX_to_FE", false,-1, 32,0);
        tracep->declBus(c+34,"pipeline my_AGEX_stage from_AGEX_to_DE", false,-1, 5,0);
        tracep->declArray(c+15,"pipeline my_AGEX_stage AGEX_latch", false,-1, 243,0);
        tracep->declArray(c+72,"pipeline my_AGEX_stage AGEX_latch_contents", false,-1, 243,0);
        tracep->declBus(c+80,"pipeline my_AGEX_stage inst_AGEX", false,-1, 31,0);
        tracep->declBus(c+81,"pipeline my_AGEX_stage PC_AGEX", false,-1, 31,0);
        tracep->declBus(c+82,"pipeline my_AGEX_stage inst_count_AGEX", false,-1, 31,0);
        tracep->declBus(c+83,"pipeline my_AGEX_stage pcplus_AGEX", false,-1, 31,0);
        tracep->declBus(c+84,"pipeline my_AGEX_stage op_I_AGEX", false,-1, 5,0);
        tracep->declBit(c+85,"pipeline my_AGEX_stage br_cond_AGEX", false,-1);
        tracep->declBus(c+86,"pipeline my_AGEX_stage sxt_imm_AGEX", false,-1, 31,0);
        tracep->declBus(c+87,"pipeline my_AGEX_stage rs1_AGEX", false,-1, 31,0);
        tracep->declBus(c+88,"pipeline my_AGEX_stage rs2_AGEX", false,-1, 31,0);
        tracep->declBus(c+89,"pipeline my_AGEX_stage type_I_AGEX", false,-1, 3,0);
        tracep->declBus(c+90,"pipeline my_AGEX_stage output_AGEX", false,-1, 31,0);
        tracep->declBus(c+91,"pipeline my_AGEX_stage branch_addr_AGEX", false,-1, 31,0);
        tracep->declBus(c+92,"pipeline my_AGEX_stage forward_reg", false,-1, 4,0);
        tracep->declBit(c+93,"pipeline my_AGEX_stage is_forwarding", false,-1);
        tracep->declBus(c+94,"pipeline my_AGEX_stage bus_canary_AGEX", false,-1, 3,0);
        tracep->declBit(c+176,"pipeline my_MEM_stage clk", false,-1);
        tracep->declBit(c+177,"pipeline my_MEM_stage reset", false,-1);
        tracep->declBus(c+246,"pipeline my_MEM_stage from_WB_to_MEM", false,-1, 0,0);
        tracep->declArray(c+15,"pipeline my_MEM_stage from_AGEX_latch", false,-1, 243,0);
        tracep->declArray(c+23,"pipeline my_MEM_stage MEM_latch_out", false,-1, 243,0);
        tracep->declBus(c+242,"pipeline my_MEM_stage from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+35,"pipeline my_MEM_stage from_MEM_to_DE", false,-1, 5,0);
        tracep->declBus(c+244,"pipeline my_MEM_stage from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declArray(c+23,"pipeline my_MEM_stage MEM_latch", false,-1, 243,0);
        tracep->declArray(c+15,"pipeline my_MEM_stage MEM_latch_contents", false,-1, 243,0);
        tracep->declBus(c+95,"pipeline my_MEM_stage op_I_MEM", false,-1, 5,0);
        tracep->declBus(c+96,"pipeline my_MEM_stage inst_count_MEM", false,-1, 31,0);
        tracep->declBus(c+97,"pipeline my_MEM_stage inst_MEM", false,-1, 31,0);
        tracep->declBus(c+98,"pipeline my_MEM_stage PC_MEM", false,-1, 31,0);
        tracep->declBus(c+99,"pipeline my_MEM_stage sxt_imm_MEM", false,-1, 31,0);
        tracep->declBus(c+100,"pipeline my_MEM_stage rs1_MEM", false,-1, 31,0);
        tracep->declBus(c+101,"pipeline my_MEM_stage rs2_MEM", false,-1, 31,0);
        tracep->declBus(c+102,"pipeline my_MEM_stage output_MEM", false,-1, 31,0);
        tracep->declBus(c+103,"pipeline my_MEM_stage type_I_MEM", false,-1, 3,0);
        tracep->declBus(c+67,"pipeline my_MEM_stage forward_reg_MEM", false,-1, 4,0);
        tracep->declBit(c+70,"pipeline my_MEM_stage is_forwarding_MEM", false,-1);
        tracep->declBus(c+104,"pipeline my_MEM_stage bus_canary_MEM", false,-1, 3,0);
        tracep->declBus(c+248,"pipeline my_MEM_stage memaddr_MEM", false,-1, 31,0);
        tracep->declBus(c+105,"pipeline my_MEM_stage rd_val_MEM", false,-1, 31,0);
        tracep->declBus(c+249,"pipeline my_MEM_stage wr_val_MEM", false,-1, 31,0);
        tracep->declBit(c+250,"pipeline my_MEM_stage wr_mem_MEM", false,-1);
        tracep->declBit(c+176,"pipeline my_WB_stage clk", false,-1);
        tracep->declBit(c+177,"pipeline my_WB_stage reset", false,-1);
        tracep->declArray(c+23,"pipeline my_WB_stage from_MEM_latch", false,-1, 243,0);
        tracep->declBus(c+243,"pipeline my_WB_stage from_WB_to_FE", false,-1, 0,0);
        tracep->declQuad(c+36,"pipeline my_WB_stage from_WB_to_DE", false,-1, 48,0);
        tracep->declBus(c+245,"pipeline my_WB_stage from_WB_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+246,"pipeline my_WB_stage from_WB_to_MEM", false,-1, 0,0);
        tracep->declBus(c+106,"pipeline my_WB_stage op_I_WB", false,-1, 5,0);
        tracep->declBus(c+107,"pipeline my_WB_stage inst_WB", false,-1, 31,0);
        tracep->declBus(c+108,"pipeline my_WB_stage PC_WB", false,-1, 31,0);
        tracep->declBus(c+109,"pipeline my_WB_stage inst_count_WB", false,-1, 31,0);
        tracep->declBus(c+110,"pipeline my_WB_stage bus_canary_WB", false,-1, 3,0);
        tracep->declBus(c+111,"pipeline my_WB_stage sxt_imm_WB", false,-1, 31,0);
        tracep->declBus(c+112,"pipeline my_WB_stage rs1_WB", false,-1, 31,0);
        tracep->declBus(c+113,"pipeline my_WB_stage rs2_WB", false,-1, 31,0);
        tracep->declBus(c+114,"pipeline my_WB_stage type_I_WB", false,-1, 3,0);
        tracep->declBus(c+115,"pipeline my_WB_stage forward_reg_WB", false,-1, 4,0);
        tracep->declBit(c+116,"pipeline my_WB_stage is_forwarding_WB", false,-1);
        tracep->declBit(c+117,"pipeline my_WB_stage wr_reg_WB", false,-1);
        tracep->declBus(c+118,"pipeline my_WB_stage wregno_WB", false,-1, 4,0);
        tracep->declBus(c+119,"pipeline my_WB_stage regval_WB", false,-1, 31,0);
        tracep->declBus(c+251,"pipeline my_WB_stage wcsrno_WB", false,-1, 3,0);
        tracep->declBit(c+252,"pipeline my_WB_stage wr_csr_WB", false,-1);
        tracep->declBit(c+117,"pipeline my_WB_stage is_wb", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+178+i*1,"pipeline my_WB_stage last_WB_value", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+210+i*1,"pipeline my_WB_stage WB_counters", true,(i+0), 31,0);}}
    }
}

void Vpipeline::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vpipeline::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vpipeline::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp3[5];
    WData/*255:0*/ __Vtemp8[8];
    WData/*255:0*/ __Vtemp14[8];
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        tracep->fullWData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        tracep->fullWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),238);
        tracep->fullWData(oldp+15,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),244);
        tracep->fullWData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),244);
        tracep->fullBit(oldp+31,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next));
        tracep->fullQData(oldp+32,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),33);
        tracep->fullCData(oldp+34,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE),6);
        tracep->fullCData(oldp+35,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 4U)))),6);
        tracep->fullQData(oldp+36,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),49);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                   [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                >> 2U))]),32);
        tracep->fullIData(oldp+40,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        tracep->fullBit(oldp+41,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                                                >> 0x20U)))));
        tracep->fullIData(oldp+42,((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE)),32);
        __Vtemp3[0U] = (0xfU | (0xfffffff0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                               << 4U)));
        __Vtemp3[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0x1cU)) | (0xfffffff0U 
                                               & (((IData)(4U) 
                                                   + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                  << 4U)));
        __Vtemp3[2U] = ((0xfU & (((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x1cU)) | (0xfffffff0U 
                                               & ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                            [
                                                                            (0x3fffU 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                                  << 4U)));
        __Vtemp3[3U] = ((0xfU & ((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x1cU)) | (0xfffffff0U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                             [
                                                                             (0x3fffU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                           >> 0x20U)) 
                                                  << 4U)));
        __Vtemp3[4U] = (0xfU & ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                         >> 0x20U)) 
                                >> 0x1cU));
        tracep->fullWData(oldp+43,(__Vtemp3),132);
        tracep->fullIData(oldp+48,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        tracep->fullIData(oldp+49,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+50,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+51,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+52,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                  >> 4U))),32);
        tracep->fullCData(oldp+53,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        tracep->fullCData(oldp+54,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x10U)))),3);
        tracep->fullCData(oldp+55,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 3U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x1dU)))),7);
        tracep->fullCData(oldp+56,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 4U)))),7);
        tracep->fullCData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        tracep->fullCData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        tracep->fullCData(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        tracep->fullBit(oldp+61,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x30U)))));
        tracep->fullCData(oldp+62,((0x1fU & (IData)(
                                                    (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                     >> 0x2bU)))),5);
        tracep->fullIData(oldp+63,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 0xbU))),32);
        tracep->fullCData(oldp+64,((0xfU & (IData)(
                                                   (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                    >> 7U)))),4);
        tracep->fullBit(oldp+65,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 6U)))));
        tracep->fullCData(oldp+66,((0x1fU & ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                             >> 1U))),5);
        tracep->fullCData(oldp+67,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              << 0x1bU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 5U)))),5);
        tracep->fullCData(oldp+68,((0x1fU & (IData)(
                                                    (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                     >> 1U)))),5);
        tracep->fullBit(oldp+69,((1U & (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE))));
        tracep->fullBit(oldp+70,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 4U))));
        tracep->fullBit(oldp+71,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        __Vtemp8[0U] = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                        << 0xeU)) | 
                        ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     << 6U)) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding) 
                                                    << 4U) 
                                                   | (0xfU 
                                                      & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
        __Vtemp8[1U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                    >> 0x12U)) | (0xffffc000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     << 6U)));
        __Vtemp8[2U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 6U)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0x1aU))) 
                        | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          << 6U)));
        __Vtemp8[3U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 6U)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x1aU))) 
                        | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          << 6U)));
        __Vtemp8[4U] = ((0x3fffU & ((0x3fc0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 6U)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x1aU))) 
                        | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 6U)));
        __Vtemp8[5U] = ((0xfff00000U & ((IData)((((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                     << 0x12U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                       >> 0xeU)))) 
                                        << 0x14U)) 
                        | ((0xfc000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        << 6U)) | (0x3fffU 
                                                   & ((0x3fc0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          << 6U)) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x1aU)))));
        __Vtemp8[6U] = ((0xfffffU & ((IData)((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                    >> 0xeU)))) 
                                     >> 0xcU)) | (0xfff00000U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                                << 0x32U) 
                                                               | (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                                   << 0x12U) 
                                                                  | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                                     >> 0xeU))) 
                                                              >> 0x20U)) 
                                                     << 0x14U)));
        __Vtemp8[7U] = (0xfffffU & ((IData)(((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                  << 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                    >> 0xeU))) 
                                             >> 0x20U)) 
                                    >> 0xcU));
        tracep->fullWData(oldp+72,(__Vtemp8),244);
        tracep->fullIData(oldp+80,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                     << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xeU))),32);
        tracep->fullIData(oldp+81,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                     << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xeU))),32);
        tracep->fullIData(oldp+82,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 8U))),32);
        tracep->fullIData(oldp+83,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xeU))),32);
        tracep->fullCData(oldp+84,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 8U)))),6);
        tracep->fullBit(oldp+85,(((0x1cU == (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 8U))))
                                   ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 8U)) == 
                                      ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 8U))) : 
                                  ((0x1dU == (0x3fU 
                                              & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 8U))))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x18U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 8U)) 
                                       != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                              >> 8U)))
                                    : ((0x1eU == (0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 8U))))
                                        ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 0x18U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 8U)) 
                                           <= ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                << 0x18U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 8U)))
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 8U)))) 
                                           & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x18U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 8U)) 
                                              >= ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                     >> 8U)))))))));
        tracep->fullIData(oldp+86,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 8U))),32);
        tracep->fullIData(oldp+87,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 8U))),32);
        tracep->fullIData(oldp+88,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 8U))),32);
        tracep->fullCData(oldp+89,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             << 0x1cU) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 4U)))),4);
        tracep->fullIData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX),32);
        tracep->fullIData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX),32);
        tracep->fullCData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg),5);
        tracep->fullBit(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding));
        tracep->fullCData(oldp+94,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        tracep->fullCData(oldp+95,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                              << 0x12U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                >> 0xeU)))),6);
        tracep->fullIData(oldp+96,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                     << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                                  >> 0xeU))),32);
        tracep->fullIData(oldp+97,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
                                     << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                                 >> 0x14U))),32);
        tracep->fullIData(oldp+98,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                     << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                                 >> 0x14U))),32);
        tracep->fullIData(oldp+99,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 0xeU))),32);
        tracep->fullIData(oldp+100,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                   >> 0xeU))),32);
        tracep->fullIData(oldp+101,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                   >> 0xeU))),32);
        tracep->fullIData(oldp+102,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 0xeU))),32);
        tracep->fullCData(oldp+103,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              << 0x16U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 0xaU)))),4);
        tracep->fullCData(oldp+104,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        tracep->fullIData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                    [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                                 >> 2U))]),32);
        tracep->fullCData(oldp+106,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                               << 0x12U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                                 >> 0xeU)))),6);
        tracep->fullIData(oldp+107,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                      << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                  >> 0x14U))),32);
        tracep->fullIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                      << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                                  >> 0x14U))),32);
        tracep->fullIData(oldp+109,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                   >> 0xeU))),32);
        tracep->fullCData(oldp+110,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        tracep->fullIData(oldp+111,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                   >> 0xeU))),32);
        tracep->fullIData(oldp+112,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                   >> 0xeU))),32);
        tracep->fullIData(oldp+113,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                   >> 0xeU))),32);
        tracep->fullCData(oldp+114,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                              << 0x16U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 0xaU)))),4);
        tracep->fullCData(oldp+115,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                               << 0x1bU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                 >> 5U)))),5);
        tracep->fullBit(oldp+116,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                         >> 4U))));
        tracep->fullBit(oldp+117,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__is_wb));
        tracep->fullCData(oldp+118,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                               << 5U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                 >> 0x1bU)))),5);
        tracep->fullIData(oldp+119,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                   >> 0xeU))),32);
        __Vtemp14[0U] = ((0xffffff00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                         [(0x1fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x18U)))] 
                                         << 8U)) | 
                         (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE) 
                           << 4U) | (0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])));
        __Vtemp14[1U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                   [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x18U)))] 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                    [
                                                    (0x1fU 
                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         << 0xdU) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x13U)))] 
                                                    << 8U)));
        __Vtemp14[2U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                   [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0xdU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x13U)))] 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                << 0x1cU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                                    << 8U)));
        __Vtemp14[3U] = ((0xffU & ((IData)((((QData)((IData)(
                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                               << 0x1cU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                 >> 4U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                   >> 0x18U)) | (0xffffff00U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                             >> 0x20U)) 
                                                    << 8U)));
        __Vtemp14[4U] = ((0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                         << 0xaU)) 
                         | ((0xffffff00U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                            << 8U)) 
                            | (0xffU & ((IData)(((((QData)((IData)(
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                       >> 4U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                 >> 0x20U)) 
                                        >> 0x18U))));
        __Vtemp14[5U] = ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                 << 0xaU)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 0x16U))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           << 0xaU)));
        __Vtemp14[6U] = ((0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 << 0xaU)) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        >> 0x16U))) 
                         | (0xffffc000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           << 0xaU)));
        __Vtemp14[7U] = (0x3fffU & ((0x3c00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0xaU)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x16U)));
        tracep->fullWData(oldp+120,(__Vtemp14),238);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        tracep->fullIData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        tracep->fullIData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        tracep->fullIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        tracep->fullIData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        tracep->fullIData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        tracep->fullIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        tracep->fullIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        tracep->fullIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        tracep->fullIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        tracep->fullIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        tracep->fullIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        tracep->fullIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        tracep->fullIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        tracep->fullIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        tracep->fullIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        tracep->fullIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        tracep->fullIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        tracep->fullIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        tracep->fullIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        tracep->fullIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        tracep->fullIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        tracep->fullIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        tracep->fullIData(oldp+156,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        tracep->fullIData(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        tracep->fullIData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        tracep->fullIData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        tracep->fullIData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        tracep->fullIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        tracep->fullIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        tracep->fullIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        tracep->fullIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        tracep->fullIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        tracep->fullIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        tracep->fullIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        tracep->fullIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        tracep->fullIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        tracep->fullIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        tracep->fullIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        tracep->fullIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        tracep->fullIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        tracep->fullIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        tracep->fullIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        tracep->fullBit(oldp+176,(vlTOPp->clk));
        tracep->fullBit(oldp+177,(vlTOPp->reset));
        tracep->fullIData(oldp+178,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        tracep->fullIData(oldp+179,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        tracep->fullIData(oldp+180,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        tracep->fullIData(oldp+181,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        tracep->fullIData(oldp+182,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        tracep->fullIData(oldp+184,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        tracep->fullIData(oldp+185,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        tracep->fullIData(oldp+187,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        tracep->fullIData(oldp+188,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        tracep->fullIData(oldp+190,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        tracep->fullIData(oldp+191,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        tracep->fullIData(oldp+192,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        tracep->fullIData(oldp+193,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        tracep->fullIData(oldp+194,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        tracep->fullIData(oldp+195,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        tracep->fullIData(oldp+196,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        tracep->fullIData(oldp+197,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        tracep->fullIData(oldp+198,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        tracep->fullIData(oldp+199,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        tracep->fullIData(oldp+200,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        tracep->fullIData(oldp+201,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        tracep->fullIData(oldp+202,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        tracep->fullIData(oldp+203,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        tracep->fullIData(oldp+204,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        tracep->fullIData(oldp+205,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        tracep->fullIData(oldp+206,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        tracep->fullIData(oldp+208,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        tracep->fullIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        tracep->fullIData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        tracep->fullIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        tracep->fullIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        tracep->fullIData(oldp+214,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        tracep->fullIData(oldp+215,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        tracep->fullIData(oldp+216,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        tracep->fullIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        tracep->fullIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        tracep->fullIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        tracep->fullIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        tracep->fullIData(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        tracep->fullIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        tracep->fullIData(oldp+223,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        tracep->fullIData(oldp+224,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        tracep->fullIData(oldp+225,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        tracep->fullIData(oldp+226,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        tracep->fullIData(oldp+227,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        tracep->fullIData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        tracep->fullIData(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        tracep->fullIData(oldp+230,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        tracep->fullIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        tracep->fullIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        tracep->fullIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        tracep->fullIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        tracep->fullIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        tracep->fullIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        tracep->fullIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        tracep->fullIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        tracep->fullIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        tracep->fullIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        tracep->fullIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
        tracep->fullBit(oldp+242,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_FE));
        tracep->fullBit(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_FE));
        tracep->fullBit(oldp+244,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_AGEX));
        tracep->fullBit(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_AGEX));
        tracep->fullBit(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_MEM));
        tracep->fullIData(oldp+247,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
        tracep->fullIData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM),32);
        tracep->fullIData(oldp+249,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_val_MEM),32);
        tracep->fullBit(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_mem_MEM));
        tracep->fullCData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wcsrno_WB),4);
        tracep->fullBit(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_csr_WB));
    }
}
