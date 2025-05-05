// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_BranchPredictor__N3.h"

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__7(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v1] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v1;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v2] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v2;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v4) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v4))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v5))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v6))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v7))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v8))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v9))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v10))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v11))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v12))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v13))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v14))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v15))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v16))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v17))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v18))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v19))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x10U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v20))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x10U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x11U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v21))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x11U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x12U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v22))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x12U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x13U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v23))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x13U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x14U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v24))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x14U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x15U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v25))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x15U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x16U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v26))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x16U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x17U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v27))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x17U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x18U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v28))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x18U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x19U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v29))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x19U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x1aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v30))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x1aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x1bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v31))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x1bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x1cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v32))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x1cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x1dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v33))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x1dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x1eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v34))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x1eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x1fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v35))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x1fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x20U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v36))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x20U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x21U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v37))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x21U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x22U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v38))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x22U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x23U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v39))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x23U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x24U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v40))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x24U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x25U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v41))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x25U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x26U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v42))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x26U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x27U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v43))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x27U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x28U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v44))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x28U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x29U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v45))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x29U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x2aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v46))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x2aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x2bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v47))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x2bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x2cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v48))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x2cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x2dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v49))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x2dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x2eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v50))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x2eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x2fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v51))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x2fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x30U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v52))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x30U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x31U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v53))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x31U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x32U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v54))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x32U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x33U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v55))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x33U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x34U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v56))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x34U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x35U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v57))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x35U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x36U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v58))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x36U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x37U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v59))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x37U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x38U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v60))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x38U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x39U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v61))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x39U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x3aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v62))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x3aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x3bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v63))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x3bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x3cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v64))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x3cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x3dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v65))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x3dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x3eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v66))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x3eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x3fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v67))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x3fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x40U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v68))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x40U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x41U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v69))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x41U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x42U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v70))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x42U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x43U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v71))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x43U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x44U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v72))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x44U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x45U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v73))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x45U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x46U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v74))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x46U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x47U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v75))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x47U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x48U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v76))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x48U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x49U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v77))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x49U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x4aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v78))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x4aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x4bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v79))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x4bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x4cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v80))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x4cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x4dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v81))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x4dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x4eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v82))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x4eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x4fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v83))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x4fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x50U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v84))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x50U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x51U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v85))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x51U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x52U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v86))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x52U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x53U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v87))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x53U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x54U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v88))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x54U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x55U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v89))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x55U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x56U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v90))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x56U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x57U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v91))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x57U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x58U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v92))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x58U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x59U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v93))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x59U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x5aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v94))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x5aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x5bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v95))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x5bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x5cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v96))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x5cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x5dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v97))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x5dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x5eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v98))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x5eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x5fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v99))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x5fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x60U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v100))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x60U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x61U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v101))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x61U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x62U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v102))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x62U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x63U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v103))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x63U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x64U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v104))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x64U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x65U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v105))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x65U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x66U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v106))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x66U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x67U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v107))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x67U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x68U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v108))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x68U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x69U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v109))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x69U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x6aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v110))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x6aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x6bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v111))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x6bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x6cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v112))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x6cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x6dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v113))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x6dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x6eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v114))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x6eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x6fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v115))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x6fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x70U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v116))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x70U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x71U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v117))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x71U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x72U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v118))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x72U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x73U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v119))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x73U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x74U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v120))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x74U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x75U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v121))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x75U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x76U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v122))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x76U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x77U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v123))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x77U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x78U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v124))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x78U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x79U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v125))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x79U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x7aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v126))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x7aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x7bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v127))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x7bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x7cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v128))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x7cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x7dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v129))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x7dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x7eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v130))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x7eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x7fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v131))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x7fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x80U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v132))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x80U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x81U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v133))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x81U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x82U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v134))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x82U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x83U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v135))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x83U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x84U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v136))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x84U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x85U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v137))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x85U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x86U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v138))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x86U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x87U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v139))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x87U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x88U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v140))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x88U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x89U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v141))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x89U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x8aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v142))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x8aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x8bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v143))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x8bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x8cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v144))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x8cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x8dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v145))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x8dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x8eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v146))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x8eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x8fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v147))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x8fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x90U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v148))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x90U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x91U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v149))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x91U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x92U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v150))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x92U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x93U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v151))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x93U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x94U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v152))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x94U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x95U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v153))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x95U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x96U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v154))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x96U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x97U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v155))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x97U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x98U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v156))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x98U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x99U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v157))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x99U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x9aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v158))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x9aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x9bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v159))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x9bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x9cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v160))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x9cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x9dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v161))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x9dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x9eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v162))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x9eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0x9fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v163))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0x9fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v164))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v165))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v166))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v167))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v168))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v169))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v170))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v171))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v172))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xa9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v173))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xa9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xaaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v174))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xaaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xabU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v175))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xabU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xacU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v176))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xacU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xadU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v177))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xadU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xaeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v178))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xaeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xafU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v179))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xafU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v180))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v181))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v182))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v183))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v184))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v185))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v186))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v187))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v188))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xb9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v189))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xb9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xbaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v190))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xbaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xbbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v191))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xbbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xbcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v192))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xbcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xbdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v193))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xbdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xbeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v194))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xbeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xbfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v195))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xbfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v196))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v197))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v198))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v199))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v200))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v201))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v202))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v203))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v204))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xc9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v205))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xc9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xcaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v206))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xcaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xcbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v207))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xcbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xccU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v208))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xccU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xcdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v209))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xcdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xceU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v210))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xceU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xcfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v211))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xcfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v212))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v213))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v214))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v215))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v216))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v217))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v218))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v219))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v220))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xd9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v221))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xd9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xdaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v222))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xdaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xdbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v223))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xdbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xdcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v224))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xdcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xddU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v225))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xddU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xdeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v226))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xdeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xdfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v227))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xdfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v228))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v229))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v230))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v231))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v232))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v233))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v234))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v235))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v236))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xe9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v237))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xe9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xeaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v238))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xeaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xebU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v239))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xebU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xecU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v240))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xecU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xedU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v241))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xedU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xeeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v242))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xeeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xefU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v243))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xefU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v244))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v245))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v246))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v247))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v248))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v249))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v250))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v251))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v252))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xf9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v253))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xf9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xfaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v254))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xfaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xfbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v255))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xfbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xfcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v256))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xfcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xfdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v257))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xfdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xfeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v258))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xfeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[0xffU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v259))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
               [0xffU]);
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v1] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v1;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v2] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v2;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v4) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v4))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v5))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v6))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v7))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v8))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v9))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v10))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v11))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v12))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v13))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v14))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v15))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v16))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v17))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v18))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v19))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x10U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v20))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x10U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x11U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v21))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x11U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x12U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v22))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x12U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x13U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v23))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x13U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x14U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v24))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x14U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x15U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v25))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x15U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x16U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v26))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x16U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x17U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v27))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x17U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x18U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v28))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x18U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x19U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v29))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x19U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x1aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v30))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x1aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x1bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v31))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x1bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x1cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v32))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x1cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x1dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v33))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x1dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x1eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v34))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x1eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x1fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v35))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x1fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x20U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v36))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x20U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x21U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v37))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x21U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x22U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v38))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x22U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x23U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v39))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x23U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x24U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v40))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x24U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x25U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v41))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x25U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x26U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v42))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x26U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x27U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v43))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x27U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x28U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v44))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x28U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x29U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v45))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x29U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x2aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v46))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x2aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x2bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v47))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x2bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x2cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v48))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x2cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x2dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v49))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x2dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x2eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v50))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x2eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x2fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v51))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x2fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x30U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v52))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x30U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x31U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v53))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x31U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x32U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v54))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x32U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x33U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v55))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x33U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x34U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v56))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x34U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x35U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v57))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x35U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x36U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v58))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x36U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x37U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v59))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x37U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x38U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v60))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x38U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x39U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v61))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x39U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x3aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v62))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x3aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x3bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v63))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x3bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x3cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v64))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x3cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x3dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v65))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x3dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x3eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v66))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x3eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x3fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v67))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x3fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x40U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v68))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x40U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x41U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v69))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x41U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x42U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v70))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x42U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x43U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v71))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x43U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x44U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v72))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x44U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x45U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v73))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x45U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x46U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v74))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x46U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x47U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v75))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x47U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x48U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v76))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x48U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x49U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v77))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x49U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x4aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v78))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x4aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x4bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v79))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x4bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x4cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v80))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x4cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x4dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v81))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x4dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x4eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v82))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x4eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x4fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v83))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x4fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x50U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v84))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x50U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x51U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v85))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x51U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x52U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v86))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x52U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x53U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v87))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x53U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x54U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v88))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x54U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x55U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v89))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x55U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x56U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v90))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x56U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x57U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v91))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x57U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x58U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v92))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x58U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x59U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v93))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x59U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x5aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v94))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x5aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x5bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v95))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x5bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x5cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v96))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x5cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x5dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v97))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x5dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x5eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v98))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x5eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x5fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v99))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x5fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x60U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v100))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x60U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x61U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v101))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x61U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x62U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v102))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x62U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x63U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v103))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x63U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x64U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v104))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x64U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x65U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v105))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x65U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x66U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v106))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x66U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x67U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v107))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x67U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x68U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v108))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x68U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x69U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v109))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x69U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x6aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v110))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x6aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x6bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v111))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x6bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x6cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v112))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x6cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x6dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v113))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x6dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x6eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v114))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x6eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x6fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v115))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x6fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x70U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v116))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x70U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x71U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v117))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x71U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x72U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v118))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x72U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x73U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v119))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x73U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x74U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v120))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x74U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x75U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v121))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x75U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x76U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v122))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x76U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x77U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v123))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x77U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x78U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v124))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x78U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x79U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v125))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x79U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x7aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v126))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x7aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x7bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v127))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x7bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x7cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v128))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x7cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x7dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v129))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x7dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x7eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v130))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x7eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x7fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v131))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x7fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x80U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v132))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x80U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x81U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v133))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x81U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x82U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v134))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x82U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x83U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v135))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x83U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x84U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v136))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x84U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x85U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v137))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x85U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x86U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v138))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x86U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x87U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v139))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x87U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x88U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v140))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x88U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x89U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v141))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x89U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x8aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v142))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x8aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x8bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v143))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x8bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x8cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v144))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x8cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x8dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v145))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x8dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x8eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v146))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x8eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x8fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v147))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x8fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x90U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v148))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x90U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x91U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v149))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x91U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x92U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v150))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x92U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x93U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v151))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x93U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x94U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v152))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x94U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x95U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v153))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x95U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x96U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v154))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x96U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x97U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v155))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x97U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x98U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v156))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x98U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x99U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v157))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x99U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x9aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v158))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x9aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x9bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v159))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x9bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x9cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v160))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x9cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x9dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v161))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x9dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x9eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v162))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x9eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0x9fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v163))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0x9fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v164))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v165))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v166))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v167))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v168))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v169))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v170))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v171))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v172))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xa9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v173))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xa9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xaaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v174))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xaaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xabU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v175))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xabU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xacU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v176))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xacU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xadU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v177))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xadU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xaeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v178))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xaeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xafU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v179))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xafU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v180))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v181))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v182))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v183))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v184))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v185))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v186))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v187))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v188))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xb9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v189))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xb9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xbaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v190))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xbaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xbbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v191))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xbbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xbcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v192))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xbcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xbdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v193))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xbdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xbeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v194))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xbeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xbfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v195))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xbfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v196))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v197))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v198))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v199))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v200))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v201))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v202))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v203))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v204))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xc9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v205))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xc9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xcaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v206))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xcaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xcbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v207))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xcbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xccU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v208))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xccU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xcdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v209))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xcdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xceU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v210))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xceU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xcfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v211))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xcfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v212))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v213))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v214))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v215))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v216))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v217))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v218))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v219))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v220))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xd9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v221))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xd9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xdaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v222))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xdaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xdbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v223))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xdbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xdcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v224))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xdcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xddU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v225))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xddU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xdeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v226))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xdeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xdfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v227))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xdfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v228))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v229))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v230))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v231))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v232))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v233))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v234))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v235))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v236))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xe9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v237))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xe9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xeaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v238))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xeaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xebU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v239))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xebU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xecU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v240))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xecU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xedU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v241))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xedU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xeeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v242))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xeeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xefU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v243))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xefU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v244))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v245))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v246))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v247))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v248))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v249))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v250))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v251))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v252))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xf9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v253))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xf9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xfaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v254))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xfaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xfbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v255))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xfbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xfcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v256))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xfcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xfdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v257))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xfdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xfeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v258))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xfeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[0xffU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v259))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
               [0xffU]);
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v1] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v3] = 0U;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v1] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v3] = 0U;
    }
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__8(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__8\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_haea12882__0 = 0;
    CData/*7:0*/ tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = 0;
    CData/*0:0*/ tagePredictor__DOT____Vlvbound_ha9c2078c__0;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = 0;
    CData/*0:0*/ tagePredictor__DOT____Vlvbound_hbd2e4a9d__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = 0;
    // Body
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [0U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [0U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [0U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [0U] 
                                                       >> 3U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 3U)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [1U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 7U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 7U)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [2U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [2U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 0xfU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [3U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x180000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x300000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x600000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc00000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x1800000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x3000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x6000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 0x1fU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x180000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x300000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x600000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc00000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x1800000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x3000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x6000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x18000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x30000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x60000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc0000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x18000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x30000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x60000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc0000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 0x3fU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [0U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [0U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [0U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [0U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [0U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [0U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [0U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [1U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [1U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [1U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [1U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x10U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x11U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x13U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x14U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x15U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x16U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x17U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x18U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x19U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x10U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x11U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x13U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x14U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x15U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x16U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x17U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x18U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x19U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x20U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x21U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x22U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x23U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x24U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x25U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x26U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x27U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x28U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x29U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x30U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x31U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x32U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x33U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x34U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x35U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x36U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x37U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x38U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x39U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__14(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__14\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__btUpdate[0U] = 0U;
    vlSelfRef.__PVT__btUpdate[1U] = 0U;
    vlSelfRef.__PVT__btUpdate[2U] = 0U;
    vlSelfRef.__PVT__btUpdate[0U] = (0xfffffffeU & 
                                     vlSelfRef.__PVT__btUpdate[0U]);
    if ((1U & vlSelfRef.__PVT__IN_btUpdates[0U][0U])) {
        vlSelfRef.__PVT__btUpdate[0U] = vlSelfRef.__PVT__IN_btUpdates
            [0U][0U];
        vlSelfRef.__PVT__btUpdate[1U] = vlSelfRef.__PVT__IN_btUpdates
            [0U][1U];
        vlSelfRef.__PVT__btUpdate[2U] = vlSelfRef.__PVT__IN_btUpdates
            [0U][2U];
    }
    if ((1U & vlSelfRef.__PVT__IN_btUpdates[1U][0U])) {
        vlSelfRef.__PVT__btUpdate[0U] = vlSelfRef.__PVT__IN_btUpdates
            [1U][0U];
        vlSelfRef.__PVT__btUpdate[1U] = vlSelfRef.__PVT__IN_btUpdates
            [1U][1U];
        vlSelfRef.__PVT__btUpdate[2U] = vlSelfRef.__PVT__IN_btUpdates
            [1U][2U];
    }
    if ((1U & vlSelfRef.__PVT__IN_btUpdates[2U][0U])) {
        vlSelfRef.__PVT__btUpdate[0U] = vlSelfRef.__PVT__IN_btUpdates
            [2U][0U];
        vlSelfRef.__PVT__btUpdate[1U] = vlSelfRef.__PVT__IN_btUpdates
            [2U][1U];
        vlSelfRef.__PVT__btUpdate[2U] = vlSelfRef.__PVT__IN_btUpdates
            [2U][2U];
    }
}
