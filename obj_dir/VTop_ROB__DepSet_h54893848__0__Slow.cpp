// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ROB.h"

VL_ATTR_COLD void VTop_ROB___ctor_var_reset(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__IN_uop[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__IN_flagUOps[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->IN_interruptPending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_perfcInfo = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(74, vlSelf->__PVT__IN_branch);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__IN_stComLimit[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__IN_ldComLimit = VL_RAND_RESET_I(8);
    vlSelf->__PVT__OUT_maxSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__OUT_curSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__OUT_lastLoadSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__OUT_lastStoreSqN = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__OUT_comUOp[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->__PVT__OUT_fpNewFlags = VL_RAND_RESET_I(5);
    vlSelf->__PVT__OUT_curFetchID = VL_RAND_RESET_I(5);
    vlSelf->__PVT__OUT_trapUOp = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__OUT_bpUpdate = VL_RAND_RESET_I(10);
    vlSelf->__PVT__OUT_mispredFlush = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__rnUOpSorted[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__flags[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__PVT__baseIndex = VL_RAND_RESET_I(7);
    vlSelf->__PVT__lastIndex = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__deqEntries[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__deqFlags[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__deqAddrs[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__deqAddrsSorted[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__deqPorts[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__deqFlagPorts[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__PVT__storeSqN_r = VL_RAND_RESET_I(7);
    vlSelf->__PVT__loadSqN_r = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__storeSqNs_c[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__loadSqNs_c[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__misprReplay_r = VL_RAND_RESET_I(15);
    vlSelf->__PVT__misprReplay_c = VL_RAND_RESET_I(15);
    vlSelf->__PVT__misprReplayFwdMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__misprReplayEnd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__didCommit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hangCounter = VL_RAND_RESET_I(16);
    vlSelf->__PVT__hangDetected = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__gen__BRA__0__KET____DOT__entries[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__gen__BRA__1__KET____DOT__entries[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__gen__BRA__2__KET____DOT__entries[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__gen__BRA__3__KET____DOT__entries[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->__PVT__unnamedblk14__DOT__temp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__temp2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__pred = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__id = VL_RAND_RESET_I(6);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__loadSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__storeSqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__timeoutCommit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isRenamed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__isExecuted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__noFlagConflict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__lbAllowsCommit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__sqAllowsCommit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isBranch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__minstretRetire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__isException = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sendTrapUOp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk14__DOT__unnamedblk15__DOT__unnamedblk16__DOT__unnamedblk18__DOT__sqN = VL_RAND_RESET_I(7);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id = VL_RAND_RESET_I(6);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__id0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__unnamedblk19__DOT__unnamedblk20__DOT__entry = VL_RAND_RESET_I(24);
    vlSelf->__PVT__unnamedblk22__DOT__unnamedblk23__DOT__id = VL_RAND_RESET_I(6);
    vlSelf->__Vlvbound_h3cfa08f5__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_hc62d1ce5__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__baseIndex = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__stop = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__lastIndex = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__OUT_lastLoadSqN = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__hangCounter = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__hangDetected = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__OUT_comUOp__v0 = 0;
    vlSelf->__VdlyVal__flags__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v0 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v0 = 0;
    vlSelf->__VdlyVal__gen__BRA__0__KET____DOT__entries__v0 = VL_RAND_RESET_I(24);
    vlSelf->__VdlyDim0__gen__BRA__0__KET____DOT__entries__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gen__BRA__0__KET____DOT__entries__v0 = 0;
    vlSelf->__VdlySet__OUT_comUOp__v8 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v10 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyVal__OUT_comUOp__v11 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__OUT_comUOp__v13 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v15 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyVal__OUT_comUOp__v16 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__OUT_comUOp__v18 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v20 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyVal__OUT_comUOp__v21 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__OUT_comUOp__v23 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v25 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyVal__OUT_comUOp__v26 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v28 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__OUT_comUOp__v28 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v29 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v30 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v31 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__OUT_comUOp__v32 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__OUT_comUOp__v34 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v36 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__OUT_comUOp__v36 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v37 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v38 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v39 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__OUT_comUOp__v40 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__OUT_comUOp__v42 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v44 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__OUT_comUOp__v44 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v45 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v46 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v47 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__OUT_comUOp__v48 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__OUT_comUOp__v50 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v52 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__OUT_comUOp__v52 = 0;
    vlSelf->__VdlyVal__OUT_comUOp__v53 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v54 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__OUT_comUOp__v55 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__OUT_comUOp__v56 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__OUT_comUOp__v58 = 0;
    vlSelf->__VdlyVal__flags__v1 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v1 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v1 = 0;
    vlSelf->__VdlyVal__gen__BRA__1__KET____DOT__entries__v0 = VL_RAND_RESET_I(24);
    vlSelf->__VdlyDim0__gen__BRA__1__KET____DOT__entries__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gen__BRA__1__KET____DOT__entries__v0 = 0;
    vlSelf->__VdlySet__gen__BRA__2__KET____DOT__entries__v0 = 0;
    vlSelf->__VdlySet__gen__BRA__3__KET____DOT__entries__v0 = 0;
    vlSelf->__VdlyVal__flags__v2 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v2 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v2 = 0;
    vlSelf->__VdlySet__gen__BRA__1__KET____DOT__entries__v1 = 0;
    vlSelf->__VdlyVal__gen__BRA__2__KET____DOT__entries__v1 = VL_RAND_RESET_I(24);
    vlSelf->__VdlyDim0__gen__BRA__2__KET____DOT__entries__v1 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gen__BRA__2__KET____DOT__entries__v1 = 0;
    vlSelf->__VdlyVal__gen__BRA__3__KET____DOT__entries__v1 = VL_RAND_RESET_I(24);
    vlSelf->__VdlyDim0__gen__BRA__3__KET____DOT__entries__v1 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gen__BRA__3__KET____DOT__entries__v1 = 0;
    vlSelf->__VdlyVal__flags__v3 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v3 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v3 = 0;
    vlSelf->__VdlySet__gen__BRA__1__KET____DOT__entries__v2 = 0;
    vlSelf->__VdlyVal__gen__BRA__2__KET____DOT__entries__v2 = VL_RAND_RESET_I(24);
    vlSelf->__VdlyDim0__gen__BRA__2__KET____DOT__entries__v2 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gen__BRA__2__KET____DOT__entries__v2 = 0;
    vlSelf->__VdlyVal__gen__BRA__3__KET____DOT__entries__v2 = VL_RAND_RESET_I(24);
    vlSelf->__VdlyDim0__gen__BRA__3__KET____DOT__entries__v2 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__gen__BRA__3__KET____DOT__entries__v2 = 0;
    vlSelf->__VdlyVal__flags__v4 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v4 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v4 = 0;
    vlSelf->__VdlyVal__flags__v5 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v5 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v5 = 0;
    vlSelf->__VdlyVal__flags__v6 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v6 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v6 = 0;
    vlSelf->__VdlyVal__flags__v7 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v7 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v7 = 0;
    vlSelf->__VdlyVal__flags__v8 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v8 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v8 = 0;
    vlSelf->__VdlyVal__flags__v9 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v9 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v9 = 0;
    vlSelf->__VdlyVal__flags__v10 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__flags__v10 = VL_RAND_RESET_I(6);
    vlSelf->__VdlySet__flags__v10 = 0;
}
