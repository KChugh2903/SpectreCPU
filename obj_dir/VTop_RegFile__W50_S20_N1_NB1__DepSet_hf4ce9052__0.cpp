// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RegFile__W50_S20_N1_NB1.h"

VL_INLINE_OPT void VTop_RegFile__W50_S20_N1_NB1___nba_sequent__TOP__Top__soc__core__ifetch__bp__bpFile__1(VTop_RegFile__W50_S20_N1_NB1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_RegFile__W50_S20_N1_NB1___nba_sequent__TOP__Top__soc__core__ifetch__bp__bpFile__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U] 
            = vlSelfRef.__VdlyVal__mem__v0[0U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][1U] 
            = vlSelfRef.__VdlyVal__mem__v0[1U];
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][2U] 
            = vlSelfRef.__VdlyVal__mem__v0[2U];
    }
}
