// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_MEMRTL1RW__W2_N40_WB2_H_
#define VERILATED_VTOP_MEMRTL1RW__W2_N40_WB2_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_MemRTL1RW__W2_N40_WB2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__wm_reg;
    CData/*1:0*/ __VdlyVal__mem__v0;
    CData/*5:0*/ __VdlyDim0__mem__v0;
    CData/*0:0*/ __VdlySet__mem__v0;
    CData/*5:0*/ __PVT__addr_reg;
    VlUnpacked<CData/*1:0*/, 64> mem;
    VL_OUT8(__PVT__OUT_data,1,0);
    CData/*0:0*/ __PVT__ce_reg;
    CData/*0:0*/ __PVT__we_reg;
    CData/*1:0*/ __PVT__data_reg;
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__IN_nce,0,0);
    VL_IN8(__PVT__IN_nwe,0,0);
    VL_IN8(__PVT__IN_addr,5,0);
    VL_IN8(__PVT__IN_data,1,0);
    VL_IN8(__PVT__IN_wm,0,0);

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_MemRTL1RW__W2_N40_WB2(VTop__Syms* symsp, const char* v__name);
    ~VTop_MemRTL1RW__W2_N40_WB2();
    VL_UNCOPYABLE(VTop_MemRTL1RW__W2_N40_WB2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
