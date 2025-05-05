// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_StoreQueue.h"

VL_ATTR_COLD void VTop_StoreQueue___ctor_var_reset(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__IN_uopLd[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__OUT_fwd[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(82, vlSelf->__PVT__IN_uopSt[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__IN_rnUOp[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__IN_stDataUOp[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->__PVT__IN_curSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__IN_comStSqN = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(74, vlSelf->__PVT__IN_branch);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->__PVT__OUT_uop[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__IN_stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__OUT_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_maxStoreSqN = VL_RAND_RESET_I(7);
    vlSelf->entryReady_r = VL_RAND_RESET_I(16);
    vlSelf->__PVT__entryReady_c = VL_RAND_RESET_I(16);
    vlSelf->__PVT__invalRange_c = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__forwardRange_c[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->entries[__Vi0]);
    }
    vlSelf->baseIndex = VL_RAND_RESET_I(7);
    vlSelf->__PVT__empty = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lookupAddr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__readMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lookupMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lookupData[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lookupConflict[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__deqAddrsSorted[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__deqAddrs[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->__PVT__deqPorts[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->__PVT__deqEntries[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->__PVT__outDeqView[__Vi0]);
    }
    vlSelf->__PVT__unhandled = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__srcIdx[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__entryWasDeqd = VL_RAND_RESET_I(2);
    vlSelf->__PVT__deqCountUnary = VL_RAND_RESET_I(2);
    vlSelf->__PVT__nextBaseIndex = VL_RAND_RESET_I(7);
    vlSelf->__PVT__flushing = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk28__DOT__modified = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__OUT_empty = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__flushing = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__OUT_fwd__v0 = 0;
    vlSelf->__VdlySet__OUT_fwd__v4 = 0;
    vlSelf->__VdlyVal__OUT_fwd__v5 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__OUT_fwd__v6 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__OUT_fwd__v7 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__OUT_fwd__v8 = 0;
    vlSelf->__VdlyVal__OUT_fwd__v9 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__OUT_fwd__v10 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__OUT_fwd__v11 = VL_RAND_RESET_I(1);
}
