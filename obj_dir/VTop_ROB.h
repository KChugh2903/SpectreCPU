// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_ROB_H_
#define VERILATED_VTOP_ROB_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_ROB final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__OUT_lastLoadSqN,6,0);
        CData/*6:0*/ __Vdly__OUT_lastLoadSqN;
        CData/*6:0*/ __PVT__storeSqN_r;
        CData/*6:0*/ __PVT__loadSqN_r;
        CData/*3:0*/ __VdlyVal__flags__v0;
        CData/*5:0*/ __VdlyDim0__flags__v0;
        CData/*3:0*/ __VdlyDim0__gen__BRA__0__KET____DOT__entries__v0;
        CData/*3:0*/ __VdlyVal__flags__v1;
        CData/*5:0*/ __VdlyDim0__flags__v1;
        CData/*3:0*/ __VdlyDim0__gen__BRA__1__KET____DOT__entries__v0;
        CData/*3:0*/ __VdlyVal__flags__v2;
        CData/*5:0*/ __VdlyDim0__flags__v2;
        CData/*3:0*/ __VdlyDim0__gen__BRA__2__KET____DOT__entries__v1;
        CData/*3:0*/ __VdlyDim0__gen__BRA__3__KET____DOT__entries__v1;
        CData/*3:0*/ __VdlyVal__flags__v3;
        CData/*5:0*/ __VdlyDim0__flags__v3;
        CData/*3:0*/ __VdlyDim0__gen__BRA__2__KET____DOT__entries__v2;
        CData/*3:0*/ __VdlyDim0__gen__BRA__3__KET____DOT__entries__v2;
        CData/*3:0*/ __VdlyVal__flags__v4;
        CData/*5:0*/ __VdlyDim0__flags__v4;
        CData/*3:0*/ __VdlyVal__flags__v5;
        CData/*5:0*/ __VdlyDim0__flags__v5;
        CData/*3:0*/ __VdlyVal__flags__v6;
        CData/*5:0*/ __VdlyDim0__flags__v6;
        CData/*3:0*/ __VdlyVal__flags__v7;
        CData/*5:0*/ __VdlyDim0__flags__v7;
        CData/*3:0*/ __VdlyVal__flags__v8;
        CData/*5:0*/ __VdlyDim0__flags__v8;
        CData/*3:0*/ __VdlyVal__flags__v9;
        CData/*5:0*/ __VdlyDim0__flags__v9;
        CData/*3:0*/ __VdlyVal__flags__v10;
        CData/*5:0*/ __VdlyDim0__flags__v10;
        VL_OUT16(__PVT__OUT_perfcInfo,12,0);
        IData/*23:0*/ __VdlyVal__gen__BRA__0__KET____DOT__entries__v0;
        IData/*23:0*/ __VdlyVal__gen__BRA__1__KET____DOT__entries__v0;
        IData/*23:0*/ __VdlyVal__gen__BRA__2__KET____DOT__entries__v1;
        IData/*23:0*/ __VdlyVal__gen__BRA__3__KET____DOT__entries__v1;
        IData/*23:0*/ __VdlyVal__gen__BRA__2__KET____DOT__entries__v2;
        IData/*23:0*/ __VdlyVal__gen__BRA__3__KET____DOT__entries__v2;
        VL_OUT64(__PVT__OUT_trapUOp,47,0);
        VL_IN8(__PVT__IN_stComLimit[2],7,0);
        VlUnpacked<IData/*23:0*/, 4> __PVT__deqEntries;
        VlUnpacked<CData/*3:0*/, 4> __PVT__deqFlags;
        VlUnpacked<IData/*23:0*/, 4> __PVT__deqPorts;
        VlUnpacked<CData/*6:0*/, 5> __PVT__storeSqNs_c;
        VlUnpacked<CData/*6:0*/, 5> __PVT__loadSqNs_c;
        CData/*0:0*/ __PVT__misprReplayEnd;
        SData/*14:0*/ __PVT__misprReplay_r;
        VlUnpacked<CData/*3:0*/, 64> __PVT__flags;
        VlUnpacked<CData/*5:0*/, 4> __PVT__deqAddrs;
        VlUnpacked<CData/*3:0*/, 4> __PVT__deqAddrsSorted;
        VlUnpacked<CData/*3:0*/, 4> __PVT__deqFlagPorts;
        VlUnpacked<IData/*23:0*/, 16> __PVT__gen__BRA__0__KET____DOT__entries;
        VlUnpacked<IData/*23:0*/, 16> __PVT__gen__BRA__1__KET____DOT__entries;
        VlUnpacked<IData/*23:0*/, 16> __PVT__gen__BRA__2__KET____DOT__entries;
        VlUnpacked<IData/*23:0*/, 16> __PVT__gen__BRA__3__KET____DOT__entries;
        CData/*0:0*/ __Vdly__hangDetected;
        CData/*0:0*/ __VdlySet__gen__BRA__2__KET____DOT__entries__v0;
        CData/*0:0*/ __VdlySet__gen__BRA__3__KET____DOT__entries__v0;
        CData/*0:0*/ __VdlySet__gen__BRA__1__KET____DOT__entries__v1;
        CData/*0:0*/ __VdlySet__gen__BRA__1__KET____DOT__entries__v2;
        SData/*15:0*/ __PVT__hangCounter;
        SData/*15:0*/ __Vdly__hangCounter;
        CData/*3:0*/ __PVT__misprReplayFwdMask;
    };
    struct {
        SData/*14:0*/ __PVT__misprReplay_c;
        VL_OUT8(__PVT__OUT_mispredFlush,0,0);
        VL_IN8(IN_interruptPending,0,0);
        VL_OUT(__PVT__OUT_comUOp[4],22,0);
        CData/*4:0*/ __VdlyVal__OUT_comUOp__v10;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v11;
        CData/*4:0*/ __VdlyVal__OUT_comUOp__v15;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v16;
        CData/*4:0*/ __VdlyVal__OUT_comUOp__v20;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v21;
        CData/*4:0*/ __VdlyVal__OUT_comUOp__v25;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v26;
        CData/*4:0*/ __VdlyVal__OUT_comUOp__v28;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v29;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v30;
        CData/*0:0*/ __VdlyVal__OUT_comUOp__v31;
        CData/*0:0*/ __VdlyVal__OUT_comUOp__v32;
        CData/*4:0*/ __VdlyVal__OUT_comUOp__v36;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v37;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v38;
        CData/*0:0*/ __VdlyVal__OUT_comUOp__v39;
        CData/*0:0*/ __VdlyVal__OUT_comUOp__v40;
        CData/*4:0*/ __VdlyVal__OUT_comUOp__v44;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v45;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v46;
        CData/*0:0*/ __VdlyVal__OUT_comUOp__v47;
        CData/*0:0*/ __VdlyVal__OUT_comUOp__v48;
        CData/*4:0*/ __VdlyVal__OUT_comUOp__v52;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v53;
        CData/*6:0*/ __VdlyVal__OUT_comUOp__v54;
        CData/*0:0*/ __VdlyVal__OUT_comUOp__v55;
        CData/*0:0*/ __VdlyVal__OUT_comUOp__v56;
        VL_INW(__PVT__IN_uop[4],128,0,5);
        VL_IN(__PVT__IN_flagUOps[7],19,0);
        VlUnpacked<VlWide<5>/*128:0*/, 4> __PVT__rnUOpSorted;
        VL_OUT8(__PVT__OUT_lastStoreSqN,6,0);
        CData/*0:0*/ __VdlySet__OUT_comUOp__v0;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v8;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v13;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v18;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v23;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v28;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v34;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v36;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v42;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v44;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v50;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v52;
        CData/*0:0*/ __VdlySet__OUT_comUOp__v58;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__temp;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__temp2;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__pred;
        CData/*5:0*/ __PVT__unnamedblk14__DOT__cnt;
        CData/*5:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id;
        CData/*6:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN;
        CData/*6:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire;
    };
    struct {
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException;
        CData/*0:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp;
        CData/*6:0*/ __PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN;
        CData/*5:0*/ __PVT__unnamedblk19__DOT__unnamedblk20__DOT__id;
        CData/*3:0*/ __PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1;
        CData/*1:0*/ __PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0;
        CData/*5:0*/ __PVT__unnamedblk22__DOT__unnamedblk23__DOT__id;
        CData/*0:0*/ __Vlvbound_h3cfa08f5__0;
        CData/*0:0*/ __Vlvbound_hc62d1ce5__0;
        IData/*23:0*/ __PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry;
        CData/*0:0*/ __PVT__didCommit;
        CData/*6:0*/ __Vdly__baseIndex;
        CData/*6:0*/ __PVT__baseIndex;
        VL_OUT8(__PVT__OUT_curFetchID,4,0);
        CData/*6:0*/ __PVT__lastIndex;
        CData/*0:0*/ __PVT__stop;
        CData/*0:0*/ __PVT__hangDetected;
        CData/*0:0*/ __Vdly__stop;
        CData/*6:0*/ __Vdly__lastIndex;
        CData/*0:0*/ __VdlySet__flags__v0;
        CData/*0:0*/ __VdlySet__gen__BRA__0__KET____DOT__entries__v0;
        CData/*0:0*/ __VdlySet__flags__v1;
        CData/*0:0*/ __VdlySet__gen__BRA__1__KET____DOT__entries__v0;
        CData/*0:0*/ __VdlySet__flags__v2;
        CData/*0:0*/ __VdlySet__gen__BRA__2__KET____DOT__entries__v1;
        CData/*0:0*/ __VdlySet__gen__BRA__3__KET____DOT__entries__v1;
        CData/*0:0*/ __VdlySet__flags__v3;
        CData/*0:0*/ __VdlySet__gen__BRA__2__KET____DOT__entries__v2;
        CData/*0:0*/ __VdlySet__gen__BRA__3__KET____DOT__entries__v2;
        CData/*0:0*/ __VdlySet__flags__v4;
        CData/*0:0*/ __VdlySet__flags__v5;
        CData/*0:0*/ __VdlySet__flags__v6;
        CData/*0:0*/ __VdlySet__flags__v7;
        CData/*0:0*/ __VdlySet__flags__v8;
        CData/*0:0*/ __VdlySet__flags__v9;
        CData/*0:0*/ __VdlySet__flags__v10;
        VL_OUT16(__PVT__OUT_bpUpdate,9,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__IN_ldComLimit,7,0);
        VL_OUT8(__PVT__OUT_maxSqN,6,0);
        VL_OUT8(__PVT__OUT_curSqN,6,0);
        VL_OUT8(__PVT__OUT_fpNewFlags,4,0);
        VL_INW(__PVT__IN_branch,73,0,3);
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_ROB(VTop__Syms* symsp, const char* v__name);
    ~VTop_ROB();
    VL_UNCOPYABLE(VTop_ROB);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
