// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL1RW__W2_N40_WB2.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__1(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__we_reg)))) {
            if (vlSelfRef.__PVT__wm_reg) {
                vlSelfRef.__VdlyVal__mem__v0 = vlSelfRef.__PVT__data_reg;
                vlSelfRef.__VdlyDim0__mem__v0 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v0 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__data_reg = (3U & ((IData)(1U) 
                                       + (IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                  >> 0xdU))));
    vlSelfRef.__PVT__we_reg = (1U & (~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c)));
    vlSelfRef.__PVT__ce_reg = (1U & (~ (vlSymsp->TOP__Top__soc__IF_ct.__PVT__re
                                        [0U] | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c))));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__2(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0] 
            = vlSelfRef.__VdlyVal__mem__v0;
    }
    vlSelfRef.__PVT__wm_reg = 1U;
    vlSelfRef.__PVT__addr_reg = (0x3fU & ((IData)(vlSymsp->TOP__Top__soc.__PVT__genblk3__BRA__0__KET____DOT__dctAddr) 
                                          >> 6U));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt__1(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__we_reg)))) {
            if (vlSelfRef.__PVT__wm_reg) {
                vlSelfRef.__VdlyVal__mem__v0 = vlSelfRef.__PVT__data_reg;
                vlSelfRef.__VdlyDim0__mem__v0 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v0 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__data_reg = (3U & ((IData)(1U) 
                                       + (IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                  >> 0xdU))));
    vlSelfRef.__PVT__we_reg = (1U & (~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c)));
    vlSelfRef.__PVT__ce_reg = (1U & (~ (vlSymsp->TOP__Top__soc__IF_ct.__PVT__re
                                        [1U] | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c))));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt__2(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0] 
            = vlSelfRef.__VdlyVal__mem__v0;
    }
    vlSelfRef.__PVT__wm_reg = 1U;
    vlSelfRef.__PVT__addr_reg = (0x3fU & ((IData)(vlSymsp->TOP__Top__soc.__PVT__genblk3__BRA__1__KET____DOT__dctAddr) 
                                          >> 6U));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt__1(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__we_reg)))) {
            if (vlSelfRef.__PVT__wm_reg) {
                vlSelfRef.__VdlyVal__mem__v0 = vlSelfRef.__PVT__data_reg;
                vlSelfRef.__VdlyDim0__mem__v0 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v0 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__data_reg = (3U & ((IData)(1U) 
                                       + (IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                  >> 0xdU))));
    vlSelfRef.__PVT__we_reg = (1U & (~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c)));
    vlSelfRef.__PVT__ce_reg = (1U & (~ (vlSymsp->TOP__Top__soc__IF_ct.__PVT__re
                                        [2U] | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c))));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt__2(VTop_MemRTL1RW__W2_N40_WB2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W2_N40_WB2___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0] 
            = vlSelfRef.__VdlyVal__mem__v0;
    }
    vlSelfRef.__PVT__wm_reg = 1U;
    vlSelfRef.__PVT__addr_reg = (0x3fU & ((IData)(vlSymsp->TOP__Top__soc.__PVT__genblk3__BRA__2__KET____DOT__dctAddr) 
                                          >> 6U));
}
