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
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
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
        vcdp->declBit(c+1673,"clk", false,-1);
        vcdp->declBit(c+1681,"reset", false,-1);
        vcdp->declBit(c+1673,"pipeline clk", false,-1);
        vcdp->declBit(c+1681,"pipeline reset", false,-1);
        vcdp->declBus(c+1041,"pipeline cycle_count", false,-1, 31,0);
        vcdp->declArray(c+1049,"pipeline FE_latch_out", false,-1, 131,0);
        vcdp->declArray(c+1089,"pipeline DE_latch_out", false,-1, 237,0);
        vcdp->declArray(c+1153,"pipeline AGEX_latch_out", false,-1, 243,0);
        vcdp->declArray(c+1217,"pipeline MEM_latch_out", false,-1, 243,0);
        vcdp->declBus(c+1281,"pipeline from_DE_to_FE", false,-1, 0,0);
        vcdp->declQuad(c+17,"pipeline from_AGEX_to_FE", false,-1, 32,0);
        vcdp->declBus(c+2201,"pipeline from_MEM_to_FE", false,-1, 0,0);
        vcdp->declBus(c+2209,"pipeline from_WB_to_FE", false,-1, 0,0);
        vcdp->declBus(c+33,"pipeline from_AGEX_to_DE", false,-1, 5,0);
        vcdp->declBus(c+1289,"pipeline from_MEM_to_DE", false,-1, 5,0);
        vcdp->declQuad(c+41,"pipeline from_WB_to_DE", false,-1, 48,0);
        vcdp->declBus(c+2217,"pipeline from_MEM_to_AGEX", false,-1, 0,0);
        vcdp->declBus(c+2225,"pipeline from_WB_to_AGEX", false,-1, 0,0);
        vcdp->declBus(c+2233,"pipeline from_WB_to_MEM", false,-1, 0,0);
        vcdp->declBit(c+1673,"pipeline my_FE_stage clk", false,-1);
        vcdp->declBit(c+1681,"pipeline my_FE_stage reset", false,-1);
        vcdp->declBus(c+1281,"pipeline my_FE_stage from_DE_to_FE", false,-1, 0,0);
        vcdp->declQuad(c+17,"pipeline my_FE_stage from_AGEX_to_FE", false,-1, 32,0);
        vcdp->declBus(c+2201,"pipeline my_FE_stage from_MEM_to_FE", false,-1, 0,0);
        vcdp->declBus(c+2209,"pipeline my_FE_stage from_WB_to_FE", false,-1, 0,0);
        vcdp->declArray(c+1049,"pipeline my_FE_stage FE_latch_out", false,-1, 131,0);
        vcdp->declArray(c+1049,"pipeline my_FE_stage FE_latch", false,-1, 131,0);
        vcdp->declBus(c+1297,"pipeline my_FE_stage PC_FE_latch", false,-1, 31,0);
        vcdp->declBus(c+57,"pipeline my_FE_stage inst_FE", false,-1, 31,0);
        vcdp->declBus(c+1305,"pipeline my_FE_stage pcplus_FE", false,-1, 31,0);
        vcdp->declBit(c+1281,"pipeline my_FE_stage stall_pipe_FE", false,-1);
        vcdp->declBit(c+65,"pipeline my_FE_stage br_cond_FE", false,-1);
        vcdp->declBus(c+73,"pipeline my_FE_stage branch_addr_FE", false,-1, 31,0);
        vcdp->declArray(c+81,"pipeline my_FE_stage FE_latch_contents", false,-1, 131,0);
        vcdp->declBus(c+1313,"pipeline my_FE_stage inst_count_FE", false,-1, 31,0);
        vcdp->declBus(c+2241,"pipeline my_FE_stage inst_count_AGEX", false,-1, 31,0);
        vcdp->declBit(c+1673,"pipeline my_DE_stage clk", false,-1);
        vcdp->declBit(c+1681,"pipeline my_DE_stage reset", false,-1);
        vcdp->declArray(c+1049,"pipeline my_DE_stage from_FE_latch", false,-1, 131,0);
        vcdp->declBus(c+33,"pipeline my_DE_stage from_AGEX_to_DE", false,-1, 5,0);
        vcdp->declBus(c+1289,"pipeline my_DE_stage from_MEM_to_DE", false,-1, 5,0);
        vcdp->declQuad(c+41,"pipeline my_DE_stage from_WB_to_DE", false,-1, 48,0);
        vcdp->declBus(c+1281,"pipeline my_DE_stage from_DE_to_FE", false,-1, 0,0);
        vcdp->declArray(c+1089,"pipeline my_DE_stage DE_latch_out", false,-1, 237,0);
        vcdp->declArray(c+1089,"pipeline my_DE_stage DE_latch", false,-1, 237,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+393+i*1,"pipeline my_DE_stage regs", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+785+i*1,"pipeline my_DE_stage score_regs", true,(i+0), 31,0);}}
        {int i; for (i=0; i<16; i++) {
                vcdp->declBus(c+649+i*1,"pipeline my_DE_stage csr_regs", true,(i+0), 31,0);}}
        vcdp->declBus(c+1321,"pipeline my_DE_stage inst_DE", false,-1, 31,0);
        vcdp->declBus(c+1329,"pipeline my_DE_stage PC_DE", false,-1, 31,0);
        vcdp->declBus(c+1337,"pipeline my_DE_stage pcplus_DE", false,-1, 31,0);
        vcdp->declBus(c+1345,"pipeline my_DE_stage inst_count_DE", false,-1, 31,0);
        vcdp->declArray(c+329,"pipeline my_DE_stage DE_latch_contents", false,-1, 237,0);
        vcdp->declBus(c+1353,"pipeline my_DE_stage bus_canary_DE", false,-1, 3,0);
        vcdp->declBus(c+1,"pipeline my_DE_stage rs1_content", false,-1, 31,0);
        vcdp->declBus(c+9,"pipeline my_DE_stage rs2_content", false,-1, 31,0);
        vcdp->declBus(c+1361,"pipeline my_DE_stage F3_DE", false,-1, 2,0);
        vcdp->declBus(c+1369,"pipeline my_DE_stage F7_DE", false,-1, 6,0);
        vcdp->declBus(c+1377,"pipeline my_DE_stage op_DE", false,-1, 6,0);
        vcdp->declBus(c+121,"pipeline my_DE_stage op_I_DE", false,-1, 5,0);
        vcdp->declBus(c+129,"pipeline my_DE_stage type_I_DE", false,-1, 3,0);
        vcdp->declBus(c+137,"pipeline my_DE_stage type_immediate_DE", false,-1, 2,0);
        vcdp->declBus(c+145,"pipeline my_DE_stage sxt_imm_DE", false,-1, 31,0);
        vcdp->declBit(c+153,"pipeline my_DE_stage wr_reg_WB", false,-1);
        vcdp->declBus(c+161,"pipeline my_DE_stage wregno_WB", false,-1, 4,0);
        vcdp->declBus(c+169,"pipeline my_DE_stage regval_WB", false,-1, 31,0);
        vcdp->declBus(c+177,"pipeline my_DE_stage wcsrno_WB", false,-1, 3,0);
        vcdp->declBit(c+185,"pipeline my_DE_stage wr_csr_WB", false,-1);
        vcdp->declBus(c+193,"pipeline my_DE_stage agex_forward_reg_addr", false,-1, 4,0);
        vcdp->declBus(c+1385,"pipeline my_DE_stage mem_forward_reg_addr", false,-1, 4,0);
        vcdp->declBus(c+201,"pipeline my_DE_stage wb_forward_reg_addr", false,-1, 4,0);
        vcdp->declBit(c+209,"pipeline my_DE_stage is_forwarding_agex", false,-1);
        vcdp->declBit(c+1393,"pipeline my_DE_stage is_forwarding_mem", false,-1);
        vcdp->declBit(c+217,"pipeline my_DE_stage is_forwarding_wb", false,-1);
        vcdp->declBit(c+1281,"pipeline my_DE_stage stall_next", false,-1);
        vcdp->declBit(c+1281,"pipeline my_DE_stage pipeline_stall_DE", false,-1);
        vcdp->declBit(c+1401,"pipeline my_DE_stage continue_stall", false,-1);
        vcdp->declBus(c+777,"pipeline my_DE_stage unnamedblk1 i", false,-1, 31,0);
        vcdp->declBit(c+1673,"pipeline my_AGEX_stage clk", false,-1);
        vcdp->declBit(c+1681,"pipeline my_AGEX_stage reset", false,-1);
        vcdp->declBus(c+2217,"pipeline my_AGEX_stage from_MEM_to_AGEX", false,-1, 0,0);
        vcdp->declBus(c+2225,"pipeline my_AGEX_stage from_WB_to_AGEX", false,-1, 0,0);
        vcdp->declArray(c+1089,"pipeline my_AGEX_stage from_DE_latch", false,-1, 237,0);
        vcdp->declArray(c+1153,"pipeline my_AGEX_stage AGEX_latch_out", false,-1, 243,0);
        vcdp->declQuad(c+17,"pipeline my_AGEX_stage from_AGEX_to_FE", false,-1, 32,0);
        vcdp->declBus(c+33,"pipeline my_AGEX_stage from_AGEX_to_DE", false,-1, 5,0);
        vcdp->declArray(c+1153,"pipeline my_AGEX_stage AGEX_latch", false,-1, 243,0);
        vcdp->declArray(c+225,"pipeline my_AGEX_stage AGEX_latch_contents", false,-1, 243,0);
        vcdp->declBus(c+1409,"pipeline my_AGEX_stage inst_AGEX", false,-1, 31,0);
        vcdp->declBus(c+1417,"pipeline my_AGEX_stage PC_AGEX", false,-1, 31,0);
        vcdp->declBus(c+1425,"pipeline my_AGEX_stage inst_count_AGEX", false,-1, 31,0);
        vcdp->declBus(c+1433,"pipeline my_AGEX_stage pcplus_AGEX", false,-1, 31,0);
        vcdp->declBus(c+1441,"pipeline my_AGEX_stage op_I_AGEX", false,-1, 5,0);
        vcdp->declBit(c+289,"pipeline my_AGEX_stage br_cond_AGEX", false,-1);
        vcdp->declBus(c+1449,"pipeline my_AGEX_stage sxt_imm_AGEX", false,-1, 31,0);
        vcdp->declBus(c+1457,"pipeline my_AGEX_stage rs1_AGEX", false,-1, 31,0);
        vcdp->declBus(c+1465,"pipeline my_AGEX_stage rs2_AGEX", false,-1, 31,0);
        vcdp->declBus(c+1473,"pipeline my_AGEX_stage type_I_AGEX", false,-1, 3,0);
        vcdp->declBus(c+297,"pipeline my_AGEX_stage output_AGEX", false,-1, 31,0);
        vcdp->declBus(c+305,"pipeline my_AGEX_stage branch_addr_AGEX", false,-1, 31,0);
        vcdp->declBus(c+193,"pipeline my_AGEX_stage forward_reg", false,-1, 4,0);
        vcdp->declBit(c+209,"pipeline my_AGEX_stage is_forwarding", false,-1);
        vcdp->declBus(c+1481,"pipeline my_AGEX_stage bus_canary_AGEX", false,-1, 3,0);
        vcdp->declBit(c+1673,"pipeline my_MEM_stage clk", false,-1);
        vcdp->declBit(c+1681,"pipeline my_MEM_stage reset", false,-1);
        vcdp->declBus(c+2233,"pipeline my_MEM_stage from_WB_to_MEM", false,-1, 0,0);
        vcdp->declArray(c+1153,"pipeline my_MEM_stage from_AGEX_latch", false,-1, 243,0);
        vcdp->declArray(c+1217,"pipeline my_MEM_stage MEM_latch_out", false,-1, 243,0);
        vcdp->declBus(c+2201,"pipeline my_MEM_stage from_MEM_to_FE", false,-1, 0,0);
        vcdp->declBus(c+1289,"pipeline my_MEM_stage from_MEM_to_DE", false,-1, 5,0);
        vcdp->declBus(c+2217,"pipeline my_MEM_stage from_MEM_to_AGEX", false,-1, 0,0);
        vcdp->declArray(c+1217,"pipeline my_MEM_stage MEM_latch", false,-1, 243,0);
        vcdp->declArray(c+1153,"pipeline my_MEM_stage MEM_latch_contents", false,-1, 243,0);
        vcdp->declBus(c+1489,"pipeline my_MEM_stage op_I_MEM", false,-1, 5,0);
        vcdp->declBus(c+1497,"pipeline my_MEM_stage inst_count_MEM", false,-1, 31,0);
        vcdp->declBus(c+1505,"pipeline my_MEM_stage inst_MEM", false,-1, 31,0);
        vcdp->declBus(c+1513,"pipeline my_MEM_stage PC_MEM", false,-1, 31,0);
        vcdp->declBus(c+1521,"pipeline my_MEM_stage sxt_imm_MEM", false,-1, 31,0);
        vcdp->declBus(c+1529,"pipeline my_MEM_stage rs1_MEM", false,-1, 31,0);
        vcdp->declBus(c+1537,"pipeline my_MEM_stage rs2_MEM", false,-1, 31,0);
        vcdp->declBus(c+1545,"pipeline my_MEM_stage output_MEM", false,-1, 31,0);
        vcdp->declBus(c+1553,"pipeline my_MEM_stage type_I_MEM", false,-1, 3,0);
        vcdp->declBus(c+1385,"pipeline my_MEM_stage forward_reg_MEM", false,-1, 4,0);
        vcdp->declBit(c+1393,"pipeline my_MEM_stage is_forwarding_MEM", false,-1);
        vcdp->declBus(c+1561,"pipeline my_MEM_stage bus_canary_MEM", false,-1, 3,0);
        vcdp->declBus(c+2249,"pipeline my_MEM_stage memaddr_MEM", false,-1, 31,0);
        vcdp->declBus(c+313,"pipeline my_MEM_stage rd_val_MEM", false,-1, 31,0);
        vcdp->declBus(c+2257,"pipeline my_MEM_stage wr_val_MEM", false,-1, 31,0);
        vcdp->declBit(c+2265,"pipeline my_MEM_stage wr_mem_MEM", false,-1);
        vcdp->declBit(c+1673,"pipeline my_WB_stage clk", false,-1);
        vcdp->declBit(c+1681,"pipeline my_WB_stage reset", false,-1);
        vcdp->declArray(c+1217,"pipeline my_WB_stage from_MEM_latch", false,-1, 243,0);
        vcdp->declBus(c+2209,"pipeline my_WB_stage from_WB_to_FE", false,-1, 0,0);
        vcdp->declQuad(c+41,"pipeline my_WB_stage from_WB_to_DE", false,-1, 48,0);
        vcdp->declBus(c+2225,"pipeline my_WB_stage from_WB_to_AGEX", false,-1, 0,0);
        vcdp->declBus(c+2233,"pipeline my_WB_stage from_WB_to_MEM", false,-1, 0,0);
        vcdp->declBus(c+1569,"pipeline my_WB_stage op_I_WB", false,-1, 5,0);
        vcdp->declBus(c+1577,"pipeline my_WB_stage inst_WB", false,-1, 31,0);
        vcdp->declBus(c+1585,"pipeline my_WB_stage PC_WB", false,-1, 31,0);
        vcdp->declBus(c+1593,"pipeline my_WB_stage inst_count_WB", false,-1, 31,0);
        vcdp->declBus(c+1601,"pipeline my_WB_stage bus_canary_WB", false,-1, 3,0);
        vcdp->declBus(c+1609,"pipeline my_WB_stage sxt_imm_WB", false,-1, 31,0);
        vcdp->declBus(c+1617,"pipeline my_WB_stage rs1_WB", false,-1, 31,0);
        vcdp->declBus(c+1625,"pipeline my_WB_stage rs2_WB", false,-1, 31,0);
        vcdp->declBus(c+1633,"pipeline my_WB_stage type_I_WB", false,-1, 3,0);
        vcdp->declBus(c+1641,"pipeline my_WB_stage forward_reg_WB", false,-1, 4,0);
        vcdp->declBit(c+1649,"pipeline my_WB_stage is_forwarding_WB", false,-1);
        vcdp->declBit(c+321,"pipeline my_WB_stage wr_reg_WB", false,-1);
        vcdp->declBus(c+1657,"pipeline my_WB_stage wregno_WB", false,-1, 4,0);
        vcdp->declBus(c+1665,"pipeline my_WB_stage regval_WB", false,-1, 31,0);
        vcdp->declBus(c+2273,"pipeline my_WB_stage wcsrno_WB", false,-1, 3,0);
        vcdp->declBit(c+2281,"pipeline my_WB_stage wr_csr_WB", false,-1);
        vcdp->declBit(c+321,"pipeline my_WB_stage is_wb", false,-1);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1689+i*1,"pipeline my_WB_stage last_WB_value", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1945+i*1,"pipeline my_WB_stage WB_counters", true,(i+0), 31,0);}}
    }
}

void Vpipeline::traceFullThis__1(Vpipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp3[5];
    WData/*255:0*/ __Vtemp8[8];
    WData/*255:0*/ __Vtemp14[8];
    // Body
    {
        vcdp->fullBus(c+1,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                             ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                            [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x13U)))]
                             : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                 ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 0xdU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x13U)))]
                                 : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                     ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                    [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0xdU) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x13U)))]
                                     : 0U)))),32);
        vcdp->fullBus(c+9,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                             ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                            [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x18U)))]
                             : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                 ? 0U : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE))
                                          ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                         [(0x1fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 8U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x18U)))]
                                          : 0U)))),32);
        vcdp->fullQuad(c+17,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),33);
        vcdp->fullBus(c+33,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg) 
                              << 1U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding))),6);
        vcdp->fullQuad(c+41,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),49);
        vcdp->fullBus(c+57,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                            [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                         >> 2U))]),32);
        vcdp->fullBit(c+65,((1U & (IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                                           >> 0x20U)))));
        vcdp->fullBus(c+73,((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE)),32);
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
        vcdp->fullArray(c+81,(__Vtemp3),132);
        vcdp->fullBus(c+121,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        vcdp->fullBus(c+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        vcdp->fullBus(c+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        vcdp->fullBus(c+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        vcdp->fullBit(c+153,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 0x30U)))));
        vcdp->fullBus(c+161,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x2bU)))),5);
        vcdp->fullBus(c+169,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                      >> 0xbU))),32);
        vcdp->fullBus(c+177,((0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 7U)))),4);
        vcdp->fullBit(c+185,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 6U)))));
        vcdp->fullBus(c+193,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__forward_reg),5);
        vcdp->fullBus(c+201,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 1U)))),5);
        vcdp->fullBit(c+209,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__is_forwarding));
        vcdp->fullBit(c+217,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
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
                                        << 0xeU)) | 
                        ((0x3f00U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U]) 
                         | (0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])));
        __Vtemp8[6U] = ((0x3fffU & ((IData)((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                   >> 0xeU)))) 
                                    >> 0x12U)) | (0xffffc000U 
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
        vcdp->fullArray(c+225,(__Vtemp8),244);
        vcdp->fullBit(c+289,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
        vcdp->fullBus(c+297,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__output_AGEX),32);
        vcdp->fullBus(c+305,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__branch_addr_AGEX),32);
        vcdp->fullBus(c+313,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                             [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                          >> 2U))]),32);
        vcdp->fullBit(c+321,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__is_wb));
        vcdp->fullArray(c+329,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch_contents),238);
        vcdp->fullBus(c+393,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        vcdp->fullBus(c+394,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        vcdp->fullBus(c+395,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        vcdp->fullBus(c+396,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        vcdp->fullBus(c+397,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        vcdp->fullBus(c+398,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        vcdp->fullBus(c+399,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        vcdp->fullBus(c+400,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        vcdp->fullBus(c+401,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        vcdp->fullBus(c+402,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        vcdp->fullBus(c+403,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        vcdp->fullBus(c+404,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        vcdp->fullBus(c+405,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        vcdp->fullBus(c+406,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        vcdp->fullBus(c+407,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        vcdp->fullBus(c+408,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        vcdp->fullBus(c+409,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        vcdp->fullBus(c+410,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        vcdp->fullBus(c+411,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        vcdp->fullBus(c+412,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        vcdp->fullBus(c+413,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        vcdp->fullBus(c+414,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        vcdp->fullBus(c+415,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        vcdp->fullBus(c+416,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        vcdp->fullBus(c+417,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        vcdp->fullBus(c+418,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        vcdp->fullBus(c+419,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        vcdp->fullBus(c+420,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        vcdp->fullBus(c+421,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        vcdp->fullBus(c+422,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        vcdp->fullBus(c+423,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        vcdp->fullBus(c+424,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        vcdp->fullBus(c+649,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        vcdp->fullBus(c+650,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        vcdp->fullBus(c+651,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        vcdp->fullBus(c+652,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        vcdp->fullBus(c+653,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        vcdp->fullBus(c+654,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        vcdp->fullBus(c+655,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        vcdp->fullBus(c+656,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        vcdp->fullBus(c+657,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        vcdp->fullBus(c+658,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        vcdp->fullBus(c+659,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        vcdp->fullBus(c+660,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        vcdp->fullBus(c+661,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        vcdp->fullBus(c+662,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        vcdp->fullBus(c+663,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        vcdp->fullBus(c+664,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        vcdp->fullBus(c+777,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
        vcdp->fullBus(c+785,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[0]),32);
        vcdp->fullBus(c+786,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[1]),32);
        vcdp->fullBus(c+787,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[2]),32);
        vcdp->fullBus(c+788,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[3]),32);
        vcdp->fullBus(c+789,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[4]),32);
        vcdp->fullBus(c+790,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[5]),32);
        vcdp->fullBus(c+791,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[6]),32);
        vcdp->fullBus(c+792,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[7]),32);
        vcdp->fullBus(c+793,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[8]),32);
        vcdp->fullBus(c+794,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[9]),32);
        vcdp->fullBus(c+795,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[10]),32);
        vcdp->fullBus(c+796,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[11]),32);
        vcdp->fullBus(c+797,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[12]),32);
        vcdp->fullBus(c+798,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[13]),32);
        vcdp->fullBus(c+799,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[14]),32);
        vcdp->fullBus(c+800,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[15]),32);
        vcdp->fullBus(c+801,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[16]),32);
        vcdp->fullBus(c+802,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[17]),32);
        vcdp->fullBus(c+803,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[18]),32);
        vcdp->fullBus(c+804,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[19]),32);
        vcdp->fullBus(c+805,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[20]),32);
        vcdp->fullBus(c+806,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[21]),32);
        vcdp->fullBus(c+807,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[22]),32);
        vcdp->fullBus(c+808,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[23]),32);
        vcdp->fullBus(c+809,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[24]),32);
        vcdp->fullBus(c+810,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[25]),32);
        vcdp->fullBus(c+811,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[26]),32);
        vcdp->fullBus(c+812,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[27]),32);
        vcdp->fullBus(c+813,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[28]),32);
        vcdp->fullBus(c+814,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[29]),32);
        vcdp->fullBus(c+815,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[30]),32);
        vcdp->fullBus(c+816,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__score_regs[31]),32);
        vcdp->fullBus(c+1041,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        vcdp->fullArray(c+1049,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        vcdp->fullArray(c+1089,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),238);
        vcdp->fullArray(c+1153,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),244);
        vcdp->fullArray(c+1217,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),244);
        vcdp->fullBit(c+1281,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_next));
        vcdp->fullBus(c+1289,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                         << 0x1cU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 4U)))),6);
        vcdp->fullBus(c+1297,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        vcdp->fullBus(c+1305,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        vcdp->fullBus(c+1313,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        vcdp->fullBus(c+1321,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 4U))),32);
        vcdp->fullBus(c+1329,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                             >> 4U))),32);
        vcdp->fullBus(c+1337,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                             >> 4U))),32);
        vcdp->fullBus(c+1345,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                             >> 4U))),32);
        vcdp->fullBus(c+1353,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        vcdp->fullBus(c+1361,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 0x10U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x10U)))),3);
        vcdp->fullBus(c+1369,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 3U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1dU)))),7);
        vcdp->fullBus(c+1377,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 0x1cU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 4U)))),7);
        vcdp->fullBus(c+1385,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 5U)))),5);
        vcdp->fullBit(c+1393,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                     >> 4U))));
        vcdp->fullBit(c+1401,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__continue_stall));
        vcdp->fullBus(c+1409,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1417,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1425,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 8U))),32);
        vcdp->fullBus(c+1433,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1441,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 0x18U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 8U)))),6);
        vcdp->fullBus(c+1449,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 8U))),32);
        vcdp->fullBus(c+1457,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 8U))),32);
        vcdp->fullBus(c+1465,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 8U))),32);
        vcdp->fullBus(c+1473,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 4U)))),4);
        vcdp->fullBus(c+1481,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        vcdp->fullBus(c+1489,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                           >> 0xeU)))),6);
        vcdp->fullBus(c+1497,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1505,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[7U] 
                                << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                            >> 0x14U))),32);
        vcdp->fullBus(c+1513,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[6U] 
                                << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[5U] 
                                            >> 0x14U))),32);
        vcdp->fullBus(c+1521,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1529,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1537,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1545,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1553,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 0xaU)))),4);
        vcdp->fullBus(c+1561,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        vcdp->fullBus(c+1569,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                         << 0x12U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                           >> 0xeU)))),6);
        vcdp->fullBus(c+1577,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                            >> 0x14U))),32);
        vcdp->fullBus(c+1585,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                << 0xcU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                            >> 0x14U))),32);
        vcdp->fullBus(c+1593,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1601,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        vcdp->fullBus(c+1609,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1617,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1625,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 0xeU))),32);
        vcdp->fullBus(c+1633,((0xfU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                        >> 0xaU)))),4);
        vcdp->fullBus(c+1641,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                           >> 5U)))),5);
        vcdp->fullBit(c+1649,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 4U))));
        vcdp->fullBus(c+1657,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[7U] 
                                         << 5U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[6U] 
                                                   >> 0x1bU)))),5);
        vcdp->fullBus(c+1665,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 0xeU))),32);
        vcdp->fullBit(c+1673,(vlTOPp->clk));
        vcdp->fullBit(c+1681,(vlTOPp->reset));
        vcdp->fullBus(c+1689,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        vcdp->fullBus(c+1690,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        vcdp->fullBus(c+1691,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        vcdp->fullBus(c+1692,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        vcdp->fullBus(c+1693,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        vcdp->fullBus(c+1694,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        vcdp->fullBus(c+1695,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        vcdp->fullBus(c+1696,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        vcdp->fullBus(c+1697,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        vcdp->fullBus(c+1698,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        vcdp->fullBus(c+1699,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        vcdp->fullBus(c+1700,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        vcdp->fullBus(c+1701,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        vcdp->fullBus(c+1702,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        vcdp->fullBus(c+1703,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        vcdp->fullBus(c+1704,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        vcdp->fullBus(c+1705,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        vcdp->fullBus(c+1706,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        vcdp->fullBus(c+1707,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        vcdp->fullBus(c+1708,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        vcdp->fullBus(c+1709,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        vcdp->fullBus(c+1710,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        vcdp->fullBus(c+1711,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        vcdp->fullBus(c+1712,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        vcdp->fullBus(c+1713,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        vcdp->fullBus(c+1714,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        vcdp->fullBus(c+1715,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        vcdp->fullBus(c+1716,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        vcdp->fullBus(c+1717,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        vcdp->fullBus(c+1718,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        vcdp->fullBus(c+1719,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        vcdp->fullBus(c+1720,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        vcdp->fullBus(c+1945,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        vcdp->fullBus(c+1946,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        vcdp->fullBus(c+1947,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        vcdp->fullBus(c+1948,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        vcdp->fullBus(c+1949,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        vcdp->fullBus(c+1950,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        vcdp->fullBus(c+1951,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        vcdp->fullBus(c+1952,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        vcdp->fullBus(c+1953,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        vcdp->fullBus(c+1954,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        vcdp->fullBus(c+1955,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        vcdp->fullBus(c+1956,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        vcdp->fullBus(c+1957,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        vcdp->fullBus(c+1958,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        vcdp->fullBus(c+1959,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        vcdp->fullBus(c+1960,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        vcdp->fullBus(c+1961,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        vcdp->fullBus(c+1962,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        vcdp->fullBus(c+1963,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        vcdp->fullBus(c+1964,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        vcdp->fullBus(c+1965,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        vcdp->fullBus(c+1966,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        vcdp->fullBus(c+1967,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        vcdp->fullBus(c+1968,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        vcdp->fullBus(c+1969,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        vcdp->fullBus(c+1970,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        vcdp->fullBus(c+1971,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        vcdp->fullBus(c+1972,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        vcdp->fullBus(c+1973,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        vcdp->fullBus(c+1974,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        vcdp->fullBus(c+1975,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        vcdp->fullBus(c+1976,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
        vcdp->fullBit(c+2201,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_FE));
        vcdp->fullBit(c+2209,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_FE));
        vcdp->fullBit(c+2217,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_AGEX));
        vcdp->fullBit(c+2225,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_AGEX));
        vcdp->fullBit(c+2233,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_MEM));
        vcdp->fullBus(c+2241,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
        vcdp->fullBus(c+2249,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM),32);
        vcdp->fullBus(c+2257,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_val_MEM),32);
        vcdp->fullBit(c+2265,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_mem_MEM));
        vcdp->fullBus(c+2273,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wcsrno_WB),4);
        vcdp->fullBit(c+2281,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_csr_WB));
    }
}
