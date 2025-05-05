// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_MEMRTL1RW__W54_N40_WB15_H_
#define VERILATED_VTOP_MEMRTL1RW__W54_N40_WB15_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_MemRTL1RW__W54_N40_WB15 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUTW(__PVT__OUT_data,83,0,3);
    VlUnpacked<VlWide<3>/*83:0*/, 64> mem;
    CData/*5:0*/ __PVT__addr_reg;
    CData/*0:0*/ __PVT__ce_reg;
    CData/*0:0*/ __PVT__we_reg;
    CData/*3:0*/ __PVT__wm_reg;
    VlWide<3>/*83:0*/ __PVT__data_reg;
    IData/*20:0*/ __Vlvbound_h0a746fb9__0;
    CData/*5:0*/ __VdlyDim0__mem__v0;
    CData/*0:0*/ __VdlySet__mem__v0;
    CData/*5:0*/ __VdlyDim0__mem__v1;
    CData/*0:0*/ __VdlySet__mem__v1;
    CData/*5:0*/ __VdlyDim0__mem__v2;
    CData/*0:0*/ __VdlySet__mem__v2;
    CData/*5:0*/ __VdlyDim0__mem__v3;
    CData/*0:0*/ __VdlySet__mem__v3;
    IData/*20:0*/ __VdlyVal__mem__v0;
    IData/*20:0*/ __VdlyVal__mem__v1;
    IData/*20:0*/ __VdlyVal__mem__v2;
    IData/*20:0*/ __VdlyVal__mem__v3;
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__IN_nce,0,0);
    VL_IN8(__PVT__IN_nwe,0,0);
    VL_IN8(__PVT__IN_addr,5,0);
    VL_IN8(__PVT__IN_wm,3,0);
    VL_INW(__PVT__IN_data,83,0,3);

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_MemRTL1RW__W54_N40_WB15(VTop__Syms* symsp, const char* v__name);
    ~VTop_MemRTL1RW__W54_N40_WB15();
    VL_UNCOPYABLE(VTop_MemRTL1RW__W54_N40_WB15);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
