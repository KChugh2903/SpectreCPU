// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Rename__WC5.h"

VL_ATTR_COLD void VTop_Rename__WC5___eval_initial__TOP__Top__soc__core__rn(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___eval_initial__TOP__Top__soc__core__rn\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__scheduler__DOT__modTable[0U] = 0U;
    vlSelfRef.__PVT__scheduler__DOT__modTable[1U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__modTable[2U] = 2U;
    vlSelfRef.__PVT__scheduler__DOT__modTable[3U] = 0U;
    vlSelfRef.__PVT__scheduler__DOT__modTable[4U] = 1U;
    vlSelfRef.__PVT__scheduler__DOT__modTable[5U] = 2U;
    vlSelfRef.__PVT__scheduler__DOT__modTable[6U] = 0U;
    vlSelfRef.__PVT__scheduler__DOT__modTable[7U] = 1U;
}

VL_ATTR_COLD void VTop_Rename__WC5___ctor_var_reset(VTop_Rename__WC5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Rename__WC5___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__frontEn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_stalls = VL_RAND_RESET_I(28);
    vlSelf->__PVT__OUT_stall = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(80, vlSelf->__PVT__IN_uop[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__IN_comUOp[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__IN_flagsUOps[__Vi0] = VL_RAND_RESET_I(20);
    }
    VL_RAND_RESET_W(74, vlSelf->__PVT__IN_branch);
    vlSelf->__PVT__IN_mispredFlush = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__OUT_uop[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__OUT_uopOrdering[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__OUT_nextSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__OUT_nextLoadSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__OUT_nextStoreSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__portStall = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__RAT_lookupAvail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__RAT_lookupSpecTag[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__RAT_lookupIDs[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RAT_issueIDs[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RAT_issueValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RAT_issueAvail[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RAT_issueSqNs[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__TB_issueValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__TB_tagNeeded[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RAT_commitValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__TB_commitValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RAT_commitIDs[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RAT_commitTags[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RAT_commitPrevTags[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__RAT_wbValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__RAT_wbTags[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__nextCounterSqN = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__isSc[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__scSuccessful[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__failSc = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__TB_tags[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__newTags[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__TB_tagsValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__isNewestCommit[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__cycleValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__counterSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__counterStoreSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__counterLoadSqN = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__loadSqNs[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__storeSqNs[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__SCHED_uopOrder[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__scheduler__IN_uopStoreSqN[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__Vlvbound_hc447bc94__1 = VL_RAND_RESET_I(7);
    vlSelf->__Vlvbound_h9bdd01a5__1 = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__modTable[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__candidates[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__scheduler__DOT__prio_r = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__prios_c[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__outOrderRaw[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->scheduler__DOT____Vcellout__genblk1__BRA__0__KET____DOT__penc__OUT_idx[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->scheduler__DOT____Vcellout__genblk1__BRA__1__KET____DOT__penc__OUT_idx[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->scheduler__DOT____Vcellout__genblk1__BRA__2__KET____DOT__penc__OUT_idx[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->scheduler__DOT____Vcellout__genblk1__BRA__3__KET____DOT__penc__OUT_idx[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__0__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__1__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__2__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__scheduler__DOT__genblk1__BRA__3__KET____DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
}
