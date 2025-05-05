// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Rename__WC5.h"
#include "VTop__Syms.h"

void VTop_Rename__WC5___ctor_var_reset(VTop_Rename__WC5* vlSelf);

VTop_Rename__WC5::VTop_Rename__WC5(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_Rename__WC5___ctor_var_reset(this);
}

void VTop_Rename__WC5::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_Rename__WC5::~VTop_Rename__WC5() {
}

// Savable
void VTop_Rename__WC5::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xdf042b25e6791afULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__RAT_lookupIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__RAT_issueIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__RAT_wbValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__RAT_wbTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__IN_comUOp[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__RAT_commitValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__TB_commitValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__RAT_commitIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__RAT_commitTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__RAT_commitPrevTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__isNewestCommit[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__IN_flagsUOps[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__RAT_lookupAvail[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__RAT_lookupSpecTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os<<__PVT__OUT_uop[__Vi0][__Vi1];
        }
    }
    os<<__PVT__portStall;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__RAT_issueSqNs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__newTags[__Vi0];
    }
    os<<__PVT__OUT_stall;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__RAT_issueValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__RAT_issueAvail[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__TB_issueValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__TB_tagNeeded[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__TB_tags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__TB_tagsValid[__Vi0];
    }
    os<<__PVT__nextCounterSqN;
    os<<__PVT__failSc;
    os<<__PVT__counterSqN;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__OUT_uopOrdering[__Vi0];
    }
    os<<__PVT__counterStoreSqN;
    os<<__PVT__counterLoadSqN;
    os<<__PVT__scheduler__DOT__prio_r;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__SCHED_uopOrder[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__scheduler__DOT__modTable[__Vi0];
    }
    os<<__Vlvbound_hc447bc94__1;
    os<<__Vlvbound_h9bdd01a5__1;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__Vcellinp__scheduler__IN_uopStoreSqN[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__scheduler__DOT__candidates[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__scheduler__DOT__prios_c[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__scheduler__DOT__outOrderRaw[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<scheduler__DOT____Vcellout__genblk1__BRA__0__KET____DOT__penc__OUT_idx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<scheduler__DOT____Vcellout__genblk1__BRA__1__KET____DOT__penc__OUT_idx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<scheduler__DOT____Vcellout__genblk1__BRA__2__KET____DOT__penc__OUT_idx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<scheduler__DOT____Vcellout__genblk1__BRA__3__KET____DOT__penc__OUT_idx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__loadSqNs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__storeSqNs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<__PVT__IN_uop[__Vi0][__Vi1];
        }
    }
    os<<__PVT__cycleValid;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__isSc[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__scSuccessful[__Vi0];
    }
    os<<__PVT__clk;
    os<<__PVT__frontEn;
    os<<__PVT__rst;
    os<<__PVT__IN_stalls;
    os<<__PVT__IN_mispredFlush;
    os<<__PVT__OUT_nextSqN;
    os<<__PVT__OUT_nextLoadSqN;
    os<<__PVT__OUT_nextStoreSqN;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__IN_branch[__Vi0];
    }
}
void VTop_Rename__WC5::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xdf042b25e6791afULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__RAT_lookupIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__RAT_issueIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__RAT_wbValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__RAT_wbTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__IN_comUOp[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__RAT_commitValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__TB_commitValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__RAT_commitIDs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__RAT_commitTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__RAT_commitPrevTags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__isNewestCommit[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__IN_flagsUOps[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__RAT_lookupAvail[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__RAT_lookupSpecTag[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os>>__PVT__OUT_uop[__Vi0][__Vi1];
        }
    }
    os>>__PVT__portStall;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__RAT_issueSqNs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__newTags[__Vi0];
    }
    os>>__PVT__OUT_stall;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__RAT_issueValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__RAT_issueAvail[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__TB_issueValid[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__TB_tagNeeded[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__TB_tags[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__TB_tagsValid[__Vi0];
    }
    os>>__PVT__nextCounterSqN;
    os>>__PVT__failSc;
    os>>__PVT__counterSqN;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__OUT_uopOrdering[__Vi0];
    }
    os>>__PVT__counterStoreSqN;
    os>>__PVT__counterLoadSqN;
    os>>__PVT__scheduler__DOT__prio_r;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__SCHED_uopOrder[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__scheduler__DOT__modTable[__Vi0];
    }
    os>>__Vlvbound_hc447bc94__1;
    os>>__Vlvbound_h9bdd01a5__1;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__Vcellinp__scheduler__IN_uopStoreSqN[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__scheduler__DOT__candidates[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__scheduler__DOT__prios_c[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__scheduler__DOT__outOrderRaw[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>scheduler__DOT____Vcellout__genblk1__BRA__0__KET____DOT__penc__OUT_idx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>scheduler__DOT____Vcellout__genblk1__BRA__1__KET____DOT__penc__OUT_idx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>scheduler__DOT____Vcellout__genblk1__BRA__2__KET____DOT__penc__OUT_idx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>scheduler__DOT____Vcellout__genblk1__BRA__3__KET____DOT__penc__OUT_idx[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__loadSqNs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__storeSqNs[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>__PVT__IN_uop[__Vi0][__Vi1];
        }
    }
    os>>__PVT__cycleValid;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__isSc[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__scSuccessful[__Vi0];
    }
    os>>__PVT__clk;
    os>>__PVT__frontEn;
    os>>__PVT__rst;
    os>>__PVT__IN_stalls;
    os>>__PVT__IN_mispredFlush;
    os>>__PVT__OUT_nextSqN;
    os>>__PVT__OUT_nextLoadSqN;
    os>>__PVT__OUT_nextStoreSqN;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__IN_branch[__Vi0];
    }
}
