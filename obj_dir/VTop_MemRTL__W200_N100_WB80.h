// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_MEMRTL__W200_N100_WB80_H_
#define VERILATED_VTOP_MEMRTL__W200_N100_WB80_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_MemRTL__W200_N100_WB80 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUTW(__PVT__OUT_data1,511,0,16);
    CData/*0:0*/ __PVT__ce_reg;
    CData/*0:0*/ __PVT__ce1_reg;
    CData/*0:0*/ __PVT__we_reg;
    CData/*7:0*/ __PVT__addr_reg;
    CData/*7:0*/ __PVT__addr1_reg;
    CData/*3:0*/ __PVT__wm_reg;
    CData/*7:0*/ __VdlyDim0__mem__v0;
    CData/*0:0*/ __VdlySet__mem__v0;
    CData/*7:0*/ __VdlyDim0__mem__v1;
    CData/*0:0*/ __VdlySet__mem__v1;
    CData/*7:0*/ __VdlyDim0__mem__v2;
    CData/*0:0*/ __VdlySet__mem__v2;
    CData/*7:0*/ __VdlyDim0__mem__v3;
    CData/*0:0*/ __VdlySet__mem__v3;
    VlWide<16>/*511:0*/ __PVT__data_reg;
    VlWide<4>/*127:0*/ __VdlyVal__mem__v0;
    VlWide<4>/*127:0*/ __VdlyVal__mem__v1;
    VlWide<4>/*127:0*/ __VdlyVal__mem__v2;
    VlWide<4>/*127:0*/ __VdlyVal__mem__v3;
    VlUnpacked<VlWide<16>/*511:0*/, 256> mem;
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__IN_nce,0,0);
    VL_IN8(__PVT__IN_nwe,0,0);
    VL_IN8(__PVT__IN_addr,7,0);
    VL_IN8(__PVT__IN_wm,3,0);
    VL_IN8(__PVT__IN_nce1,0,0);
    VL_IN8(__PVT__IN_addr1,7,0);
    VL_INW(__PVT__IN_data,511,0,16);
    VL_OUTW(__PVT__OUT_data,511,0,16);

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_MemRTL__W200_N100_WB80(VTop__Syms* symsp, const char* v__name);
    ~VTop_MemRTL__W200_N100_WB80();
    VL_UNCOPYABLE(VTop_MemRTL__W200_N100_WB80);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
