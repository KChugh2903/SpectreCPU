// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_STOREQUEUE_H_
#define VERILATED_VTOP_STOREQUEUE_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_StoreQueue final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__OUT_maxStoreSqN,6,0);
        CData/*1:0*/ __PVT__deqCountUnary;
        VlUnpacked<CData/*5:0*/, 1> __PVT__penc__DOT__gen__BRA__2__KET____DOT__s;
        CData/*1:0*/ __PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
        VlUnpacked<CData/*3:0*/, 2> __PVT__penc__DOT__gen__BRA__1__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*1:0*/, 3> __PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux;
        CData/*3:0*/ __PVT__unhandled;
        VL_IN8(__PVT__IN_stall[2],0,0);
        VlUnpacked<CData/*1:0*/, 4> __PVT__penc__DOT__gen__BRA__0__KET____DOT__s;
        VlUnpacked<CData/*0:0*/, 2> __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 3> __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 2> __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 3> __PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux;
        VL_OUT8(__PVT__OUT_empty,0,0);
        CData/*0:0*/ __Vdly__OUT_empty;
        SData/*15:0*/ __PVT__invalRange_c;
        CData/*0:0*/ __PVT__unnamedblk28__DOT__modified;
        CData/*1:0*/ __PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx;
        CData/*3:0*/ __PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr;
        CData/*3:0*/ __PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx;
        CData/*3:0*/ __PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
        CData/*0:0*/ __PVT__empty;
        VL_INW(__PVT__IN_uopSt[2],81,0,3);
        VlUnpacked<CData/*3:0*/, 2> __PVT__deqAddrsSorted;
        VlUnpacked<CData/*3:0*/, 2> __PVT__deqAddrs;
        VlUnpacked<VlWide<3>/*69:0*/, 2> __PVT__deqPorts;
        VlUnpacked<VlWide<3>/*69:0*/, 2> __PVT__deqEntries;
        SData/*15:0*/ entryReady_r;
        VlUnpacked<VlWide<3>/*67:0*/, 16> entries;
        VL_OUTW(__PVT__OUT_uop[2],69,0,3);
        VL_INW(__PVT__IN_uopLd[2],100,0,4);
        VlUnpacked<CData/*3:0*/, 2> __PVT__lookupMask;
        VlUnpacked<IData/*31:0*/, 2> __PVT__lookupData;
        VlUnpacked<CData/*0:0*/, 2> __PVT__lookupConflict;
        VlUnpacked<IData/*31:0*/, 2> __PVT__forwardRange_c;
        VlUnpacked<IData/*31:0*/, 2> __PVT__lookupAddr;
        VlUnpacked<CData/*3:0*/, 2> __PVT__readMask;
        CData/*0:0*/ __PVT__flushing;
        CData/*0:0*/ __Vdly__flushing;
        VL_OUT64(__PVT__OUT_fwd[2],37,0);
        CData/*0:0*/ __VdlySet__OUT_fwd__v0;
        CData/*0:0*/ __VdlySet__OUT_fwd__v4;
        CData/*3:0*/ __VdlyVal__OUT_fwd__v6;
        CData/*0:0*/ __VdlyVal__OUT_fwd__v7;
        CData/*0:0*/ __VdlySet__OUT_fwd__v8;
        CData/*3:0*/ __VdlyVal__OUT_fwd__v10;
        CData/*0:0*/ __VdlyVal__OUT_fwd__v11;
        IData/*31:0*/ __VdlyVal__OUT_fwd__v5;
        IData/*31:0*/ __VdlyVal__OUT_fwd__v9;
        SData/*15:0*/ __PVT__entryReady_c;
        VL_IN64(__PVT__IN_stDataUOp[2],39,0);
        CData/*1:0*/ __PVT__entryWasDeqd;
        CData/*6:0*/ __PVT__nextBaseIndex;
        VlUnpacked<CData/*1:0*/, 2> __PVT__srcIdx;
        VlUnpacked<VlWide<3>/*69:0*/, 4> __PVT__outDeqView;
        CData/*6:0*/ baseIndex;
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_OUT8(__PVT__OUT_done,0,0);
        VL_IN8(__PVT__IN_curSqN,6,0);
        VL_IN8(__PVT__IN_comStSqN,6,0);
        VL_OUT8(__PVT__OUT_flush,0,0);
        VL_INW(__PVT__IN_branch,73,0,3);
    };
    struct {
        VL_INW(__PVT__IN_rnUOp[4],128,0,5);
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_StoreQueue(VTop__Syms* symsp, const char* v__name);
    ~VTop_StoreQueue();
    VL_UNCOPYABLE(VTop_StoreQueue);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
