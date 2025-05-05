// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_RENAME__WC5_H_
#define VERILATED_VTOP_RENAME__WC5_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"
class VTop_RenameTable__ND5;
class VTop_TagBuffer;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_Rename__WC5 final : public VerilatedModule {
  public:
    // CELLS
    VTop_RenameTable__ND5* rt;
    VTop_TagBuffer* tb;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VlUnpacked<CData/*4:0*/, 8> __PVT__RAT_lookupIDs;
        VlUnpacked<CData/*4:0*/, 4> __PVT__RAT_issueIDs;
        VlUnpacked<CData/*0:0*/, 5> __PVT__RAT_wbValid;
        VlUnpacked<CData/*6:0*/, 5> __PVT__RAT_wbTags;
        VL_IN(__PVT__IN_comUOp[4],22,0);
        VlUnpacked<CData/*0:0*/, 4> __PVT__RAT_commitValid;
        VlUnpacked<CData/*0:0*/, 4> __PVT__TB_commitValid;
        VlUnpacked<CData/*4:0*/, 4> __PVT__RAT_commitIDs;
        VlUnpacked<CData/*6:0*/, 4> __PVT__RAT_commitTags;
        VlUnpacked<CData/*6:0*/, 4> __PVT__RAT_commitPrevTags;
        VlUnpacked<CData/*0:0*/, 4> __PVT__isNewestCommit;
        VL_IN(__PVT__IN_flagsUOps[5],19,0);
        VlUnpacked<CData/*0:0*/, 8> __PVT__RAT_lookupAvail;
        VlUnpacked<CData/*6:0*/, 8> __PVT__RAT_lookupSpecTag;
        VL_OUTW(__PVT__OUT_uop[4],128,0,5);
        CData/*3:0*/ __PVT__portStall;
        VlUnpacked<CData/*6:0*/, 4> __PVT__RAT_issueSqNs;
        VlUnpacked<CData/*6:0*/, 4> __PVT__newTags;
        VL_OUT8(__PVT__OUT_stall,0,0);
        VlUnpacked<CData/*0:0*/, 4> __PVT__RAT_issueValid;
        VlUnpacked<CData/*0:0*/, 4> __PVT__RAT_issueAvail;
        VlUnpacked<CData/*0:0*/, 4> __PVT__TB_issueValid;
        VlUnpacked<CData/*0:0*/, 4> __PVT__TB_tagNeeded;
        VlUnpacked<CData/*5:0*/, 4> __PVT__TB_tags;
        VlUnpacked<CData/*0:0*/, 4> __PVT__TB_tagsValid;
        CData/*6:0*/ __PVT__nextCounterSqN;
        CData/*0:0*/ __PVT__failSc;
        CData/*6:0*/ __PVT__counterSqN;
        VL_OUT8(__PVT__OUT_uopOrdering[4],1,0);
        CData/*6:0*/ __PVT__counterStoreSqN;
        CData/*6:0*/ __PVT__counterLoadSqN;
        CData/*1:0*/ __PVT__scheduler__DOT__prio_r;
        VlUnpacked<CData/*1:0*/, 4> __PVT__SCHED_uopOrder;
        VlUnpacked<CData/*1:0*/, 8> __PVT__scheduler__DOT__modTable;
        CData/*6:0*/ __Vlvbound_hc447bc94__1;
        CData/*6:0*/ __Vlvbound_h9bdd01a5__1;
        VlUnpacked<CData/*6:0*/, 4> __Vcellinp__scheduler__IN_uopStoreSqN;
        VlUnpacked<CData/*2:0*/, 4> __PVT__scheduler__DOT__candidates;
        VlUnpacked<CData/*1:0*/, 4> __PVT__scheduler__DOT__prios_c;
        VlUnpacked<CData/*1:0*/, 4> __PVT__scheduler__DOT__outOrderRaw;
        VlUnpacked<CData/*1:0*/, 1> scheduler__DOT____Vcellout__genblk1__BRA__0__KET____DOT__penc__OUT_idx;
        VlUnpacked<CData/*1:0*/, 1> scheduler__DOT____Vcellout__genblk1__BRA__1__KET____DOT__penc__OUT_idx;
        VlUnpacked<CData/*1:0*/, 1> scheduler__DOT____Vcellout__genblk1__BRA__2__KET____DOT__penc__OUT_idx;
        VlUnpacked<CData/*1:0*/, 1> scheduler__DOT____Vcellout__genblk1__BRA__3__KET____DOT__penc__OUT_idx;
        VlUnpacked<CData/*0:0*/, 4> __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s;
        VlUnpacked<CData/*0:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*2:0*/, 1> __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 4> __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s;
        VlUnpacked<CData/*0:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*2:0*/, 1> __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 4> __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s;
        VlUnpacked<CData/*0:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*2:0*/, 1> __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 4> __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*0:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*2:0*/, 1> __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s;
        VlUnpacked<CData/*1:0*/, 2> __PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux;
        VlUnpacked<CData/*6:0*/, 5> __PVT__loadSqNs;
        VlUnpacked<CData/*6:0*/, 5> __PVT__storeSqNs;
        VL_INW(__PVT__IN_uop[4],79,0,3);
        CData/*0:0*/ __PVT__cycleValid;
        VlUnpacked<CData/*0:0*/, 4> __PVT__isSc;
        VlUnpacked<CData/*0:0*/, 4> __PVT__scSuccessful;
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__frontEn,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN(__PVT__IN_stalls,27,0);
        VL_IN8(__PVT__IN_mispredFlush,0,0);
        VL_OUT8(__PVT__OUT_nextSqN,6,0);
        VL_OUT8(__PVT__OUT_nextLoadSqN,6,0);
        VL_OUT8(__PVT__OUT_nextStoreSqN,6,0);
        VL_INW(__PVT__IN_branch,73,0,3);
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_Rename__WC5(VTop__Syms* symsp, const char* v__name);
    ~VTop_Rename__WC5();
    VL_UNCOPYABLE(VTop_Rename__WC5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
