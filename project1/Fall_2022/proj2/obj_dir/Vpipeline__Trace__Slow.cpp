// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


//======================

void Vpipeline::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vpipeline::traceInit, &Vpipeline::traceFull, &Vpipeline::traceChg, this);
}
void Vpipeline::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vpipeline* t = (Vpipeline*)userthis;
    Vpipeline__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vpipeline::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpipeline* t = (Vpipeline*)userthis;
    Vpipeline__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vpipeline::traceInitThis(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vpipeline::traceFullThis(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vpipeline::traceInitThis__1(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1209,"clk", false,-1);
        vcdp->declBit(c+1217,"reset", false,-1);
        vcdp->declBit(c+1209,"pipeline clk", false,-1);
        vcdp->declBit(c+1217,"pipeline reset", false,-1);
        vcdp->declBus(c+273,"pipeline cycle_count", false,-1, 31,0);
        vcdp->declArray(c+281,"pipeline FE_latch_out", false,-1, 131,0);
        vcdp->declArray(c+321,"pipeline DE_latch_out", false,-1, 201,0);
        vcdp->declArray(c+377,"pipeline AGEX_latch_out", false,-1, 233,0);
        vcdp->declArray(c+441,"pipeline MEM_latch_out", false,-1, 233,0);
        vcdp->declBus(c+1737,"pipeline from_DE_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1745,"pipeline from_AGEX_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1753,"pipeline from_MEM_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1761,"pipeline from_WB_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1769,"pipeline from_AGEX_to_DE", false,-1, 0,0);
        vcdp->declBus(c+1777,"pipeline from_MEM_to_DE", false,-1, 0,0);
        vcdp->declQuad(c+1,"pipeline from_WB_to_DE", false,-1, 42,0);
        vcdp->declBus(c+1785,"pipeline from_MEM_to_AGEX", false,-1, 0,0);
        vcdp->declBus(c+1793,"pipeline from_WB_to_AGEX", false,-1, 0,0);
        vcdp->declBus(c+1801,"pipeline from_WB_to_MEM", false,-1, 0,0);
        vcdp->declBit(c+1209,"pipeline my_FE_stage clk", false,-1);
        vcdp->declBit(c+1217,"pipeline my_FE_stage reset", false,-1);
        vcdp->declBus(c+1737,"pipeline my_FE_stage from_DE_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1745,"pipeline my_FE_stage from_AGEX_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1753,"pipeline my_FE_stage from_MEM_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1761,"pipeline my_FE_stage from_WB_to_FE", false,-1, 0,0);
        vcdp->declArray(c+281,"pipeline my_FE_stage FE_latch_out", false,-1, 131,0);
        vcdp->declArray(c+281,"pipeline my_FE_stage FE_latch", false,-1, 131,0);
        vcdp->declBus(c+505,"pipeline my_FE_stage PC_FE_latch", false,-1, 31,0);
        vcdp->declBus(c+17,"pipeline my_FE_stage inst_FE", false,-1, 31,0);
        vcdp->declBus(c+513,"pipeline my_FE_stage pcplus_FE", false,-1, 31,0);
        vcdp->declBit(c+1809,"pipeline my_FE_stage stall_pipe_FE", false,-1);
        vcdp->declArray(c+25,"pipeline my_FE_stage FE_latch_contents", false,-1, 131,0);
        vcdp->declBus(c+521,"pipeline my_FE_stage inst_count_FE", false,-1, 31,0);
        vcdp->declBus(c+1817,"pipeline my_FE_stage inst_count_AGEX", false,-1, 31,0);
        vcdp->declBit(c+1209,"pipeline my_DE_stage clk", false,-1);
        vcdp->declBit(c+1217,"pipeline my_DE_stage reset", false,-1);
        vcdp->declArray(c+281,"pipeline my_DE_stage from_FE_latch", false,-1, 131,0);
        vcdp->declBus(c+1769,"pipeline my_DE_stage from_AGEX_to_DE", false,-1, 0,0);
        vcdp->declBus(c+1777,"pipeline my_DE_stage from_MEM_to_DE", false,-1, 0,0);
        vcdp->declQuad(c+1,"pipeline my_DE_stage from_WB_to_DE", false,-1, 42,0);
        vcdp->declBus(c+1737,"pipeline my_DE_stage from_DE_to_FE", false,-1, 0,0);
        vcdp->declArray(c+321,"pipeline my_DE_stage DE_latch_out", false,-1, 201,0);
        vcdp->declArray(c+321,"pipeline my_DE_stage DE_latch", false,-1, 201,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+825+i*1,"pipeline my_DE_stage regs", true,(i+0), 31,0);}}
        {int i; for (i=0; i<16; i++) {
                vcdp->declBus(c+1081+i*1,"pipeline my_DE_stage csr_regs", true,(i+0), 31,0);}}
        vcdp->declBus(c+529,"pipeline my_DE_stage inst_DE", false,-1, 31,0);
        vcdp->declBus(c+537,"pipeline my_DE_stage PC_DE", false,-1, 31,0);
        vcdp->declBus(c+545,"pipeline my_DE_stage pcplus_DE", false,-1, 31,0);
        vcdp->declBus(c+553,"pipeline my_DE_stage inst_count_DE", false,-1, 31,0);
        vcdp->declArray(c+217,"pipeline my_DE_stage DE_latch_contents", false,-1, 201,0);
        vcdp->declBus(c+561,"pipeline my_DE_stage bus_canary_DE", false,-1, 3,0);
        vcdp->declBus(c+569,"pipeline my_DE_stage F3_DE", false,-1, 2,0);
        vcdp->declBus(c+577,"pipeline my_DE_stage F7_DE", false,-1, 6,0);
        vcdp->declBus(c+585,"pipeline my_DE_stage op_DE", false,-1, 6,0);
        vcdp->declBus(c+65,"pipeline my_DE_stage op_I_DE", false,-1, 5,0);
        vcdp->declBus(c+73,"pipeline my_DE_stage type_I_DE", false,-1, 3,0);
        vcdp->declBus(c+81,"pipeline my_DE_stage type_immediate_DE", false,-1, 2,0);
        vcdp->declBus(c+89,"pipeline my_DE_stage sxt_imm_DE", false,-1, 31,0);
        vcdp->declBit(c+97,"pipeline my_DE_stage wr_reg_WB", false,-1);
        vcdp->declBus(c+105,"pipeline my_DE_stage wregno_WB", false,-1, 4,0);
        vcdp->declBus(c+113,"pipeline my_DE_stage regval_WB", false,-1, 31,0);
        vcdp->declBus(c+121,"pipeline my_DE_stage wcsrno_WB", false,-1, 3,0);
        vcdp->declBit(c+129,"pipeline my_DE_stage wr_csr_WB", false,-1);
        vcdp->declBit(c+1737,"pipeline my_DE_stage pipeline_stall_DE", false,-1);
        vcdp->declBit(c+1209,"pipeline my_AGEX_stage clk", false,-1);
        vcdp->declBit(c+1217,"pipeline my_AGEX_stage reset", false,-1);
        vcdp->declBus(c+1785,"pipeline my_AGEX_stage from_MEM_to_AGEX", false,-1, 0,0);
        vcdp->declBus(c+1793,"pipeline my_AGEX_stage from_WB_to_AGEX", false,-1, 0,0);
        vcdp->declArray(c+321,"pipeline my_AGEX_stage from_DE_latch", false,-1, 201,0);
        vcdp->declArray(c+377,"pipeline my_AGEX_stage AGEX_latch_out", false,-1, 233,0);
        vcdp->declBus(c+1745,"pipeline my_AGEX_stage from_AGEX_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1769,"pipeline my_AGEX_stage from_AGEX_to_DE", false,-1, 0,0);
        vcdp->declArray(c+377,"pipeline my_AGEX_stage AGEX_latch", false,-1, 233,0);
        vcdp->declArray(c+137,"pipeline my_AGEX_stage AGEX_latch_contents", false,-1, 233,0);
        vcdp->declBus(c+593,"pipeline my_AGEX_stage inst_AGEX", false,-1, 31,0);
        vcdp->declBus(c+601,"pipeline my_AGEX_stage PC_AGEX", false,-1, 31,0);
        vcdp->declBus(c+609,"pipeline my_AGEX_stage inst_count_AGEX", false,-1, 31,0);
        vcdp->declBus(c+617,"pipeline my_AGEX_stage pcplus_AGEX", false,-1, 31,0);
        vcdp->declBus(c+625,"pipeline my_AGEX_stage op_I_AGEX", false,-1, 5,0);
        vcdp->declBit(c+633,"pipeline my_AGEX_stage br_cond_AGEX", false,-1);
        vcdp->declBus(c+641,"pipeline my_AGEX_stage sxt_imm_AGEX", false,-1, 31,0);
        vcdp->declBus(c+649,"pipeline my_AGEX_stage rs1_AGEX", false,-1, 31,0);
        vcdp->declBus(c+657,"pipeline my_AGEX_stage rs2_AGEX", false,-1, 31,0);
        vcdp->declBus(c+201,"pipeline my_AGEX_stage output_AGEX", false,-1, 31,0);
        vcdp->declBus(c+665,"pipeline my_AGEX_stage bus_canary_AGEX", false,-1, 3,0);
        vcdp->declBit(c+1209,"pipeline my_MEM_stage clk", false,-1);
        vcdp->declBit(c+1217,"pipeline my_MEM_stage reset", false,-1);
        vcdp->declBus(c+1801,"pipeline my_MEM_stage from_WB_to_MEM", false,-1, 0,0);
        vcdp->declArray(c+377,"pipeline my_MEM_stage from_AGEX_latch", false,-1, 233,0);
        vcdp->declArray(c+441,"pipeline my_MEM_stage MEM_latch_out", false,-1, 233,0);
        vcdp->declBus(c+1753,"pipeline my_MEM_stage from_MEM_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1777,"pipeline my_MEM_stage from_MEM_to_DE", false,-1, 0,0);
        vcdp->declBus(c+1785,"pipeline my_MEM_stage from_MEM_to_AGEX", false,-1, 0,0);
        vcdp->declArray(c+441,"pipeline my_MEM_stage MEM_latch", false,-1, 233,0);
        vcdp->declArray(c+377,"pipeline my_MEM_stage MEM_latch_contents", false,-1, 233,0);
        vcdp->declBus(c+673,"pipeline my_MEM_stage op_I_MEM", false,-1, 5,0);
        vcdp->declBus(c+681,"pipeline my_MEM_stage inst_count_MEM", false,-1, 31,0);
        vcdp->declBus(c+689,"pipeline my_MEM_stage inst_MEM", false,-1, 31,0);
        vcdp->declBus(c+697,"pipeline my_MEM_stage PC_MEM", false,-1, 31,0);
        vcdp->declBus(c+705,"pipeline my_MEM_stage sxt_imm_MEM", false,-1, 31,0);
        vcdp->declBus(c+713,"pipeline my_MEM_stage rs1_MEM", false,-1, 31,0);
        vcdp->declBus(c+721,"pipeline my_MEM_stage rs2_MEM", false,-1, 31,0);
        vcdp->declBus(c+729,"pipeline my_MEM_stage output_MEM", false,-1, 31,0);
        vcdp->declBus(c+737,"pipeline my_MEM_stage bus_canary_MEM", false,-1, 3,0);
        vcdp->declBus(c+1825,"pipeline my_MEM_stage memaddr_MEM", false,-1, 31,0);
        vcdp->declBus(c+209,"pipeline my_MEM_stage rd_val_MEM", false,-1, 31,0);
        vcdp->declBus(c+1833,"pipeline my_MEM_stage wr_val_MEM", false,-1, 31,0);
        vcdp->declBit(c+1841,"pipeline my_MEM_stage wr_mem_MEM", false,-1);
        vcdp->declBit(c+1209,"pipeline my_WB_stage clk", false,-1);
        vcdp->declBit(c+1217,"pipeline my_WB_stage reset", false,-1);
        vcdp->declArray(c+441,"pipeline my_WB_stage from_MEM_latch", false,-1, 233,0);
        vcdp->declBus(c+1761,"pipeline my_WB_stage from_WB_to_FE", false,-1, 0,0);
        vcdp->declQuad(c+1,"pipeline my_WB_stage from_WB_to_DE", false,-1, 42,0);
        vcdp->declBus(c+1793,"pipeline my_WB_stage from_WB_to_AGEX", false,-1, 0,0);
        vcdp->declBus(c+1801,"pipeline my_WB_stage from_WB_to_MEM", false,-1, 0,0);
        vcdp->declBus(c+745,"pipeline my_WB_stage op_I_WB", false,-1, 5,0);
        vcdp->declBus(c+753,"pipeline my_WB_stage inst_WB", false,-1, 31,0);
        vcdp->declBus(c+761,"pipeline my_WB_stage PC_WB", false,-1, 31,0);
        vcdp->declBus(c+769,"pipeline my_WB_stage inst_count_WB", false,-1, 31,0);
        vcdp->declBus(c+777,"pipeline my_WB_stage bus_canary_WB", false,-1, 3,0);
        vcdp->declBus(c+785,"pipeline my_WB_stage sxt_imm_WB", false,-1, 31,0);
        vcdp->declBus(c+793,"pipeline my_WB_stage rs1_WB", false,-1, 31,0);
        vcdp->declBus(c+801,"pipeline my_WB_stage rs2_WB", false,-1, 31,0);
        vcdp->declBit(c+1849,"pipeline my_WB_stage wr_reg_WB", false,-1);
        vcdp->declBus(c+809,"pipeline my_WB_stage wregno_WB", false,-1, 4,0);
        vcdp->declBus(c+817,"pipeline my_WB_stage regval_WB", false,-1, 31,0);
        vcdp->declBus(c+1857,"pipeline my_WB_stage wcsrno_WB", false,-1, 3,0);
        vcdp->declBit(c+1865,"pipeline my_WB_stage wr_csr_WB", false,-1);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1225+i*1,"pipeline my_WB_stage last_WB_value", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1481+i*1,"pipeline my_WB_stage WB_counters", true,(i+0), 31,0);}}
    }
}

void Vpipeline::traceFullThis__1(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp3[5];
    WData/*255:0*/ __Vtemp4[8];
    WData/*255:0*/ __Vtemp5[8];
    WData/*255:0*/ __Vtemp6[8];
    WData/*255:0*/ __Vtemp9[8];
    WData/*255:0*/ __Vtemp12[8];
    WData/*223:0*/ __Vtemp17[7];
    WData/*255:0*/ __Vtemp18[8];
    WData/*255:0*/ __Vtemp19[8];
    WData/*255:0*/ __Vtemp20[8];
    WData/*255:0*/ __Vtemp21[8];
    WData/*255:0*/ __Vtemp22[8];
    WData/*255:0*/ __Vtemp23[8];
    WData/*255:0*/ __Vtemp24[8];
    WData/*255:0*/ __Vtemp25[8];
    WData/*255:0*/ __Vtemp26[8];
    WData/*255:0*/ __Vtemp27[8];
    // Body
    {
        vcdp->fullQuad(c+1,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),43);
        vcdp->fullBus(c+17,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                            [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                         >> 2U))]),32);
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
        vcdp->fullArray(c+25,(__Vtemp3),132);
        vcdp->fullBus(c+65,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        vcdp->fullBus(c+73,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        vcdp->fullBus(c+81,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        vcdp->fullBus(c+89,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        vcdp->fullBit(c+97,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x2aU)))));
        vcdp->fullBus(c+105,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x25U)))),5);
        vcdp->fullBus(c+113,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                      >> 5U))),32);
        vcdp->fullBus(c+121,((0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 1U)))),4);
        vcdp->fullBit(c+129,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        VL_EXTEND_WW(234,202, __Vtemp4, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        VL_EXTEND_WW(234,202, __Vtemp5, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        VL_EXTEND_WW(234,202, __Vtemp6, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        VL_EXTEND_WW(234,202, __Vtemp9, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        __Vtemp12[0U] = ((0xfffffff0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                         << 4U)) | 
                         (0xfU & __Vtemp9[0U]));
        __Vtemp12[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & __Vtemp6[0U]));
        __Vtemp12[2U] = ((0xfU & __Vtemp6[1U]) | (0xfffffff0U 
                                                  & __Vtemp6[1U]));
        __Vtemp12[3U] = ((0xfU & __Vtemp6[2U]) | (0xfffffff0U 
                                                  & __Vtemp6[2U]));
        __Vtemp12[4U] = ((0xfU & __Vtemp6[3U]) | (0xfffffff0U 
                                                  & __Vtemp6[3U]));
        __Vtemp12[5U] = ((0xfffffc00U & ((IData)((((QData)((IData)(
                                                                   __Vtemp4[7U])) 
                                                   << 0x36U) 
                                                  | (((QData)((IData)(
                                                                      __Vtemp4[6U])) 
                                                      << 0x16U) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp4[5U])) 
                                                        >> 0xaU)))) 
                                         << 0xaU)) 
                         | ((0x3f0U & __Vtemp5[4U]) 
                            | (0xfU & __Vtemp6[4U])));
        __Vtemp12[6U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                              __Vtemp4[7U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 __Vtemp4[6U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   __Vtemp4[5U])) 
                                                   >> 0xaU)))) 
                                    >> 0x16U)) | (0xfffffc00U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                __Vtemp4[7U])) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                __Vtemp4[6U])) 
                                                                   << 0x16U) 
                                                                  | ((QData)((IData)(
                                                                                __Vtemp4[5U])) 
                                                                     >> 0xaU))) 
                                                              >> 0x20U)) 
                                                     << 0xaU)));
        __Vtemp12[7U] = (0x3ffU & ((IData)(((((QData)((IData)(
                                                              __Vtemp4[7U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 __Vtemp4[6U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   __Vtemp4[5U])) 
                                                   >> 0xaU))) 
                                            >> 0x20U)) 
                                   >> 0x16U));
        vcdp->fullArray(c+137,(__Vtemp12),234);
        vcdp->fullBus(c+201,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX),32);
        vcdp->fullBus(c+209,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                             [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                          >> 2U))]),32);
        __Vtemp17[0U] = ((0xfffffff0U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                         [(0x1fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x18U)))] 
                                         << 4U)) | 
                         (0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]));
        __Vtemp17[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                  [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x18U)))] 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 0xdU) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x13U)))] 
                                                   << 4U)));
        __Vtemp17[2U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                  [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0xdU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x13U)))] 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               << 0x1cU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                                   << 4U)));
        __Vtemp17[3U] = ((0xfU & ((IData)((((QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                              << 0x1cU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                >> 4U)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)))) 
                                  >> 0x1cU)) | (0xfffffff0U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                << 0x1cU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                            >> 0x20U)) 
                                                   << 4U)));
        __Vtemp17[4U] = ((0xfffffc00U & ((IData)((((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                        >> 4U)))) 
                                         << 0xaU)) 
                         | ((0xfffffff0U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                            << 4U)) 
                            | (0xfU & ((IData)(((((QData)((IData)(
                                                                  ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                      >> 4U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE))) 
                                                >> 0x20U)) 
                                       >> 0x1cU))));
        __Vtemp17[5U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                   >> 4U)))) 
                                    >> 0x16U)) | (0xfffffc00U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                << 0x3cU) 
                                                               | (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U])) 
                                                                   << 0x1cU) 
                                                                  | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                     >> 4U))) 
                                                              >> 0x20U)) 
                                                     << 0xaU)));
        __Vtemp17[6U] = (0x3ffU & ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                   >> 4U))) 
                                            >> 0x20U)) 
                                   >> 0x16U));
        vcdp->fullArray(c+217,(__Vtemp17),202);
        vcdp->fullBus(c+273,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        vcdp->fullArray(c+281,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        vcdp->fullArray(c+321,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),202);
        vcdp->fullArray(c+377,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),234);
        vcdp->fullArray(c+441,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),234);
        vcdp->fullBus(c+505,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        vcdp->fullBus(c+513,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        vcdp->fullBus(c+521,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        vcdp->fullBus(c+529,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+537,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+545,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+553,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+561,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        vcdp->fullBus(c+569,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U)))),3);
        vcdp->fullBus(c+577,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1dU)))),7);
        vcdp->fullBus(c+585,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 4U)))),7);
        VL_EXTEND_WW(234,202, __Vtemp18, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+593,(((__Vtemp18[7U] << 0x16U) 
                              | (__Vtemp18[6U] >> 0xaU))),32);
        VL_EXTEND_WW(234,202, __Vtemp19, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+601,(((__Vtemp19[6U] << 0x16U) 
                              | (__Vtemp19[5U] >> 0xaU))),32);
        VL_EXTEND_WW(234,202, __Vtemp20, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+609,(((__Vtemp20[4U] << 0x1cU) 
                              | (__Vtemp20[3U] >> 4U))),32);
        VL_EXTEND_WW(234,202, __Vtemp21, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+617,(((__Vtemp21[5U] << 0x16U) 
                              | (__Vtemp21[4U] >> 0xaU))),32);
        VL_EXTEND_WW(234,202, __Vtemp22, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+625,((0x3fU & ((__Vtemp22[5U] 
                                        << 0x1cU) | 
                                       (__Vtemp22[4U] 
                                        >> 4U)))),6);
        VL_EXTEND_WW(234,202, __Vtemp23, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBit(c+633,((0x1cU == (0x3fU & ((__Vtemp23[5U] 
                                                  << 0x1cU) 
                                                 | (__Vtemp23[4U] 
                                                    >> 4U))))));
        VL_EXTEND_WW(234,202, __Vtemp24, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+641,(((__Vtemp24[3U] << 0x1cU) 
                              | (__Vtemp24[2U] >> 4U))),32);
        VL_EXTEND_WW(234,202, __Vtemp25, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+649,(((__Vtemp25[2U] << 0x1cU) 
                              | (__Vtemp25[1U] >> 4U))),32);
        VL_EXTEND_WW(234,202, __Vtemp26, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+657,(((__Vtemp26[1U] << 0x1cU) 
                              | (__Vtemp26[0U] >> 4U))),32);
        VL_EXTEND_WW(234,202, __Vtemp27, vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch);
        vcdp->fullBus(c+665,((0xfU & __Vtemp27[0U])),4);
        vcdp->fullBus(c+673,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                        >> 4U)))),6);
        vcdp->fullBus(c+681,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+689,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                            >> 0xaU))),32);
        vcdp->fullBus(c+697,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                            >> 0xaU))),32);
        vcdp->fullBus(c+705,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+713,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+721,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+729,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+737,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        vcdp->fullBus(c+745,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                        >> 4U)))),6);
        vcdp->fullBus(c+753,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                            >> 0xaU))),32);
        vcdp->fullBus(c+761,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                               << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                            >> 0xaU))),32);
        vcdp->fullBus(c+769,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+777,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        vcdp->fullBus(c+785,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+793,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+801,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+809,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                        << 0xfU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                        >> 0x11U)))),5);
        vcdp->fullBus(c+817,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                               << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 4U))),32);
        vcdp->fullBus(c+825,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        vcdp->fullBus(c+826,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        vcdp->fullBus(c+827,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        vcdp->fullBus(c+828,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        vcdp->fullBus(c+829,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        vcdp->fullBus(c+830,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        vcdp->fullBus(c+831,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        vcdp->fullBus(c+832,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        vcdp->fullBus(c+833,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        vcdp->fullBus(c+834,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        vcdp->fullBus(c+835,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        vcdp->fullBus(c+836,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        vcdp->fullBus(c+837,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        vcdp->fullBus(c+838,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        vcdp->fullBus(c+839,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        vcdp->fullBus(c+840,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        vcdp->fullBus(c+841,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        vcdp->fullBus(c+842,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        vcdp->fullBus(c+843,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        vcdp->fullBus(c+844,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        vcdp->fullBus(c+845,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        vcdp->fullBus(c+846,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        vcdp->fullBus(c+847,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        vcdp->fullBus(c+848,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        vcdp->fullBus(c+849,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        vcdp->fullBus(c+850,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        vcdp->fullBus(c+851,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        vcdp->fullBus(c+852,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        vcdp->fullBus(c+853,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        vcdp->fullBus(c+854,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        vcdp->fullBus(c+855,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        vcdp->fullBus(c+856,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        vcdp->fullBus(c+1081,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        vcdp->fullBus(c+1082,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        vcdp->fullBus(c+1083,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        vcdp->fullBus(c+1084,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        vcdp->fullBus(c+1085,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        vcdp->fullBus(c+1086,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        vcdp->fullBus(c+1087,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        vcdp->fullBus(c+1088,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        vcdp->fullBus(c+1089,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        vcdp->fullBus(c+1090,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        vcdp->fullBus(c+1091,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        vcdp->fullBus(c+1092,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        vcdp->fullBus(c+1093,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        vcdp->fullBus(c+1094,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        vcdp->fullBus(c+1095,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        vcdp->fullBus(c+1096,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        vcdp->fullBit(c+1209,(vlTOPp->clk));
        vcdp->fullBit(c+1217,(vlTOPp->reset));
        vcdp->fullBus(c+1225,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        vcdp->fullBus(c+1226,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        vcdp->fullBus(c+1227,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        vcdp->fullBus(c+1228,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        vcdp->fullBus(c+1229,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        vcdp->fullBus(c+1230,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        vcdp->fullBus(c+1231,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        vcdp->fullBus(c+1232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        vcdp->fullBus(c+1233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        vcdp->fullBus(c+1234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        vcdp->fullBus(c+1235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        vcdp->fullBus(c+1236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        vcdp->fullBus(c+1237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        vcdp->fullBus(c+1238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        vcdp->fullBus(c+1239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        vcdp->fullBus(c+1240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        vcdp->fullBus(c+1241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        vcdp->fullBus(c+1242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        vcdp->fullBus(c+1243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        vcdp->fullBus(c+1244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        vcdp->fullBus(c+1245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        vcdp->fullBus(c+1246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        vcdp->fullBus(c+1247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        vcdp->fullBus(c+1248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        vcdp->fullBus(c+1249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        vcdp->fullBus(c+1250,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        vcdp->fullBus(c+1251,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        vcdp->fullBus(c+1252,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        vcdp->fullBus(c+1253,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        vcdp->fullBus(c+1254,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        vcdp->fullBus(c+1255,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        vcdp->fullBus(c+1256,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        vcdp->fullBus(c+1481,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        vcdp->fullBus(c+1482,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        vcdp->fullBus(c+1483,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        vcdp->fullBus(c+1484,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        vcdp->fullBus(c+1485,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        vcdp->fullBus(c+1486,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        vcdp->fullBus(c+1487,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        vcdp->fullBus(c+1488,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        vcdp->fullBus(c+1489,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        vcdp->fullBus(c+1490,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        vcdp->fullBus(c+1491,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        vcdp->fullBus(c+1492,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        vcdp->fullBus(c+1493,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        vcdp->fullBus(c+1494,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        vcdp->fullBus(c+1495,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        vcdp->fullBus(c+1496,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        vcdp->fullBus(c+1497,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        vcdp->fullBus(c+1498,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        vcdp->fullBus(c+1499,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        vcdp->fullBus(c+1500,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        vcdp->fullBus(c+1501,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        vcdp->fullBus(c+1502,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        vcdp->fullBus(c+1503,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        vcdp->fullBus(c+1504,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        vcdp->fullBus(c+1505,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        vcdp->fullBus(c+1506,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        vcdp->fullBus(c+1507,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        vcdp->fullBus(c+1508,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        vcdp->fullBus(c+1509,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        vcdp->fullBus(c+1510,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        vcdp->fullBus(c+1511,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        vcdp->fullBus(c+1512,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
        vcdp->fullBit(c+1737,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
        vcdp->fullBit(c+1745,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE));
        vcdp->fullBit(c+1753,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_FE));
        vcdp->fullBit(c+1761,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_FE));
        vcdp->fullBit(c+1769,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        vcdp->fullBit(c+1777,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_DE));
        vcdp->fullBit(c+1785,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_AGEX));
        vcdp->fullBit(c+1793,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_AGEX));
        vcdp->fullBit(c+1801,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_MEM));
        vcdp->fullBit(c+1809,(0U));
        vcdp->fullBus(c+1817,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
        vcdp->fullBus(c+1825,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM),32);
        vcdp->fullBus(c+1833,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_val_MEM),32);
        vcdp->fullBit(c+1841,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_mem_MEM));
        vcdp->fullBit(c+1849,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_reg_WB));
        vcdp->fullBus(c+1857,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wcsrno_WB),4);
        vcdp->fullBit(c+1865,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_csr_WB));
    }
}
