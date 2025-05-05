// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL1RW__W54_N40_WB15.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__1(VTop_MemRTL1RW__W54_N40_WB15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__ictable__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*20:0*/ __VdlyVal__mem__v0;
    __VdlyVal__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v0;
    __VdlyDim0__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__mem__v0;
    __VdlySet__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__mem__v1;
    __VdlyVal__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v1;
    __VdlyDim0__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__mem__v1;
    __VdlySet__mem__v1 = 0;
    IData/*20:0*/ __VdlyVal__mem__v2;
    __VdlyVal__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v2;
    __VdlyDim0__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__mem__v2;
    __VdlySet__mem__v2 = 0;
    IData/*20:0*/ __VdlyVal__mem__v3;
    __VdlyVal__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__mem__v3;
    __VdlyDim0__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__mem__v3;
    __VdlySet__mem__v3 = 0;
    // Body
    __VdlySet__mem__v0 = 0U;
    __VdlySet__mem__v1 = 0U;
    __VdlySet__mem__v2 = 0U;
    __VdlySet__mem__v3 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__we_reg)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & vlSelfRef.__PVT__data_reg[0U]);
                __VdlyVal__mem__v0 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                __VdlyDim0__mem__v0 = vlSelfRef.__PVT__addr_reg;
                __VdlySet__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & ((vlSelfRef.__PVT__data_reg[1U] 
                                   << 0xbU) | (vlSelfRef.__PVT__data_reg[0U] 
                                               >> 0x15U)));
                __VdlyVal__mem__v1 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                __VdlyDim0__mem__v1 = vlSelfRef.__PVT__addr_reg;
                __VdlySet__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & (vlSelfRef.__PVT__data_reg[1U] 
                                  >> 0xaU));
                __VdlyVal__mem__v2 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                __VdlyDim0__mem__v2 = vlSelfRef.__PVT__addr_reg;
                __VdlySet__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & ((vlSelfRef.__PVT__data_reg[2U] 
                                   << 1U) | (vlSelfRef.__PVT__data_reg[1U] 
                                             >> 0x1fU)));
                __VdlyVal__mem__v3 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                __VdlyDim0__mem__v3 = vlSelfRef.__PVT__addr_reg;
                __VdlySet__mem__v3 = 1U;
            }
        }
    }
    if (__VdlySet__mem__v0) {
        vlSelfRef.mem[__VdlyDim0__mem__v0][0U] = ((0xffe00000U 
                                                   & vlSelfRef.mem
                                                   [__VdlyDim0__mem__v0][0U]) 
                                                  | __VdlyVal__mem__v0);
    }
    if (__VdlySet__mem__v1) {
        vlSelfRef.mem[__VdlyDim0__mem__v1][0U] = ((0x1fffffU 
                                                   & vlSelfRef.mem
                                                   [__VdlyDim0__mem__v1][0U]) 
                                                  | (__VdlyVal__mem__v1 
                                                     << 0x15U));
        vlSelfRef.mem[__VdlyDim0__mem__v1][1U] = ((0xfffffc00U 
                                                   & vlSelfRef.mem
                                                   [__VdlyDim0__mem__v1][1U]) 
                                                  | (__VdlyVal__mem__v1 
                                                     >> 0xbU));
    }
    if (__VdlySet__mem__v2) {
        vlSelfRef.mem[__VdlyDim0__mem__v2][1U] = ((0x800003ffU 
                                                   & vlSelfRef.mem
                                                   [__VdlyDim0__mem__v2][1U]) 
                                                  | (__VdlyVal__mem__v2 
                                                     << 0xaU));
    }
    if (__VdlySet__mem__v3) {
        vlSelfRef.mem[__VdlyDim0__mem__v3][1U] = ((0x7fffffffU 
                                                   & vlSelfRef.mem
                                                   [__VdlyDim0__mem__v3][1U]) 
                                                  | (__VdlyVal__mem__v3 
                                                     << 0x1fU));
        vlSelfRef.mem[__VdlyDim0__mem__v3][2U] = (0xfffffU 
                                                  & (__VdlyVal__mem__v3 
                                                     >> 1U));
    }
    vlSelfRef.__PVT__data_reg[0U] = ((vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata 
                                      << 0x15U) | vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata);
    vlSelfRef.__PVT__data_reg[1U] = ((vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata 
                                      << 0x1fU) | (
                                                   (vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata 
                                                    << 0xaU) 
                                                   | (vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata 
                                                      >> 0xbU)));
    vlSelfRef.__PVT__data_reg[2U] = (0xfffffU & ((vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata 
                                                  >> 1U) 
                                                 | (vlSymsp->TOP__Top__soc__IF_ict.__PVT__wdata 
                                                    >> 0x16U)));
    vlSelfRef.__PVT__wm_reg = (0xfU & ((IData)(1U) 
                                       << (IData)(vlSymsp->TOP__Top__soc__IF_ict.__PVT__wassoc)));
    vlSelfRef.__PVT__we_reg = (1U & (~ (IData)(vlSymsp->TOP__Top__soc__IF_ict.__PVT__we)));
    vlSelfRef.__PVT__ce_reg = (1U & (~ ((IData)(vlSymsp->TOP__Top__soc__IF_ict.__PVT__we) 
                                        | (IData)(vlSymsp->TOP__Top__soc__IF_ict.__PVT__re))));
    vlSelfRef.__PVT__addr_reg = (0x3fU & (((IData)(vlSymsp->TOP__Top__soc__IF_ict.__PVT__we)
                                            ? (IData)(vlSymsp->TOP__Top__soc__IF_ict.__PVT__waddr)
                                            : (IData)(vlSymsp->TOP__Top__soc__IF_ict.__PVT__raddr)) 
                                          >> 6U));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable__1(VTop_MemRTL1RW__W54_N40_WB15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    vlSelfRef.__VdlySet__mem__v1 = 0U;
    vlSelfRef.__VdlySet__mem__v2 = 0U;
    vlSelfRef.__VdlySet__mem__v3 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__we_reg)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & vlSelfRef.__PVT__data_reg[0U]);
                vlSelfRef.__VdlyVal__mem__v0 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v0 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & ((vlSelfRef.__PVT__data_reg[1U] 
                                   << 0xbU) | (vlSelfRef.__PVT__data_reg[0U] 
                                               >> 0x15U)));
                vlSelfRef.__VdlyVal__mem__v1 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v1 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & (vlSelfRef.__PVT__data_reg[1U] 
                                  >> 0xaU));
                vlSelfRef.__VdlyVal__mem__v2 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v2 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & ((vlSelfRef.__PVT__data_reg[2U] 
                                   << 1U) | (vlSelfRef.__PVT__data_reg[1U] 
                                             >> 0x1fU)));
                vlSelfRef.__VdlyVal__mem__v3 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v3 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v3 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__wm_reg = (0xfU & ((IData)(1U) 
                                       << (3U & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                         >> 0xdU)))));
    vlSelfRef.__PVT__data_reg[0U] = (((IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                               >> 0xfU)) 
                                      << 0x15U) | (0x1fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                              >> 0xfU))));
    vlSelfRef.__PVT__data_reg[1U] = (((IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                               >> 0xfU)) 
                                      << 0x1fU) | (
                                                   (0x7ffffc00U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                                >> 0xfU)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                                  >> 0xfU)) 
                                                         >> 0xbU))));
    vlSelfRef.__PVT__data_reg[2U] = (0xfffffU & ((IData)(
                                                         (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                          >> 0xfU)) 
                                                 >> 1U));
    vlSelfRef.__PVT__we_reg = (1U & (~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c)));
    vlSelfRef.__PVT__ce_reg = (1U & (~ (vlSymsp->TOP__Top__soc__IF_ct.__PVT__re
                                        [0U] | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c))));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable__2(VTop_MemRTL1RW__W54_N40_WB15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U] 
            = ((0xffe00000U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U]) 
               | vlSelfRef.__VdlyVal__mem__v0);
    }
    if (vlSelfRef.__VdlySet__mem__v1) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U] 
            = ((0x1fffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U]) 
               | (vlSelfRef.__VdlyVal__mem__v1 << 0x15U));
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][1U] 
            = ((0xfffffc00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v1 >> 0xbU));
    }
    if (vlSelfRef.__VdlySet__mem__v2) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][1U] 
            = ((0x800003ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v2 << 0xaU));
    }
    if (vlSelfRef.__VdlySet__mem__v3) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][1U] 
            = ((0x7fffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v3 << 0x1fU));
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][2U] 
            = (0xfffffU & (vlSelfRef.__VdlyVal__mem__v3 
                           >> 1U));
    }
    vlSelfRef.__PVT__addr_reg = (0x3fU & ((IData)(vlSymsp->TOP__Top__soc.__PVT__genblk3__BRA__0__KET____DOT__dctAddr) 
                                          >> 6U));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable__1(VTop_MemRTL1RW__W54_N40_WB15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    vlSelfRef.__VdlySet__mem__v1 = 0U;
    vlSelfRef.__VdlySet__mem__v2 = 0U;
    vlSelfRef.__VdlySet__mem__v3 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__we_reg)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & vlSelfRef.__PVT__data_reg[0U]);
                vlSelfRef.__VdlyVal__mem__v0 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v0 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & ((vlSelfRef.__PVT__data_reg[1U] 
                                   << 0xbU) | (vlSelfRef.__PVT__data_reg[0U] 
                                               >> 0x15U)));
                vlSelfRef.__VdlyVal__mem__v1 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v1 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & (vlSelfRef.__PVT__data_reg[1U] 
                                  >> 0xaU));
                vlSelfRef.__VdlyVal__mem__v2 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v2 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & ((vlSelfRef.__PVT__data_reg[2U] 
                                   << 1U) | (vlSelfRef.__PVT__data_reg[1U] 
                                             >> 0x1fU)));
                vlSelfRef.__VdlyVal__mem__v3 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v3 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v3 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__wm_reg = (0xfU & ((IData)(1U) 
                                       << (3U & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                         >> 0xdU)))));
    vlSelfRef.__PVT__data_reg[0U] = (((IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                               >> 0xfU)) 
                                      << 0x15U) | (0x1fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                              >> 0xfU))));
    vlSelfRef.__PVT__data_reg[1U] = (((IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                               >> 0xfU)) 
                                      << 0x1fU) | (
                                                   (0x7ffffc00U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                                >> 0xfU)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                                  >> 0xfU)) 
                                                         >> 0xbU))));
    vlSelfRef.__PVT__data_reg[2U] = (0xfffffU & ((IData)(
                                                         (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                          >> 0xfU)) 
                                                 >> 1U));
    vlSelfRef.__PVT__we_reg = (1U & (~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c)));
    vlSelfRef.__PVT__ce_reg = (1U & (~ (vlSymsp->TOP__Top__soc__IF_ct.__PVT__re
                                        [1U] | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c))));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable__2(VTop_MemRTL1RW__W54_N40_WB15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U] 
            = ((0xffe00000U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U]) 
               | vlSelfRef.__VdlyVal__mem__v0);
    }
    if (vlSelfRef.__VdlySet__mem__v1) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U] 
            = ((0x1fffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U]) 
               | (vlSelfRef.__VdlyVal__mem__v1 << 0x15U));
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][1U] 
            = ((0xfffffc00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v1 >> 0xbU));
    }
    if (vlSelfRef.__VdlySet__mem__v2) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][1U] 
            = ((0x800003ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v2 << 0xaU));
    }
    if (vlSelfRef.__VdlySet__mem__v3) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][1U] 
            = ((0x7fffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v3 << 0x1fU));
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][2U] 
            = (0xfffffU & (vlSelfRef.__VdlyVal__mem__v3 
                           >> 1U));
    }
    vlSelfRef.__PVT__addr_reg = (0x3fU & ((IData)(vlSymsp->TOP__Top__soc.__PVT__genblk3__BRA__1__KET____DOT__dctAddr) 
                                          >> 6U));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable__1(VTop_MemRTL1RW__W54_N40_WB15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__mem__v0 = 0U;
    vlSelfRef.__VdlySet__mem__v1 = 0U;
    vlSelfRef.__VdlySet__mem__v2 = 0U;
    vlSelfRef.__VdlySet__mem__v3 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__ce_reg)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__we_reg)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & vlSelfRef.__PVT__data_reg[0U]);
                vlSelfRef.__VdlyVal__mem__v0 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v0 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & ((vlSelfRef.__PVT__data_reg[1U] 
                                   << 0xbU) | (vlSelfRef.__PVT__data_reg[0U] 
                                               >> 0x15U)));
                vlSelfRef.__VdlyVal__mem__v1 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v1 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & (vlSelfRef.__PVT__data_reg[1U] 
                                  >> 0xaU));
                vlSelfRef.__VdlyVal__mem__v2 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v2 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__wm_reg))) {
                vlSelfRef.__Vlvbound_h0a746fb9__0 = 
                    (0x1fffffU & ((vlSelfRef.__PVT__data_reg[2U] 
                                   << 1U) | (vlSelfRef.__PVT__data_reg[1U] 
                                             >> 0x1fU)));
                vlSelfRef.__VdlyVal__mem__v3 = vlSelfRef.__Vlvbound_h0a746fb9__0;
                vlSelfRef.__VdlyDim0__mem__v3 = vlSelfRef.__PVT__addr_reg;
                vlSelfRef.__VdlySet__mem__v3 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__wm_reg = (0xfU & ((IData)(1U) 
                                       << (3U & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                         >> 0xdU)))));
    vlSelfRef.__PVT__data_reg[0U] = (((IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                               >> 0xfU)) 
                                      << 0x15U) | (0x1fffffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                              >> 0xfU))));
    vlSelfRef.__PVT__data_reg[1U] = (((IData)((vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                               >> 0xfU)) 
                                      << 0x1fU) | (
                                                   (0x7ffffc00U 
                                                    & ((IData)(
                                                               (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                                >> 0xfU)) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                                  >> 0xfU)) 
                                                         >> 0xbU))));
    vlSelfRef.__PVT__data_reg[2U] = (0xfffffU & ((IData)(
                                                         (vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c 
                                                          >> 0xfU)) 
                                                 >> 1U));
    vlSelfRef.__PVT__we_reg = (1U & (~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c)));
    vlSelfRef.__PVT__ce_reg = (1U & (~ (vlSymsp->TOP__Top__soc__IF_ct.__PVT__re
                                        [2U] | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__cacheLineManager__DOT__ctWrite_c))));
}

VL_INLINE_OPT void VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable__2(VTop_MemRTL1RW__W54_N40_WB15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL1RW__W54_N40_WB15___nba_sequent__TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U] 
            = ((0xffe00000U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U]) 
               | vlSelfRef.__VdlyVal__mem__v0);
    }
    if (vlSelfRef.__VdlySet__mem__v1) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U] 
            = ((0x1fffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U]) 
               | (vlSelfRef.__VdlyVal__mem__v1 << 0x15U));
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][1U] 
            = ((0xfffffc00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v1 >> 0xbU));
    }
    if (vlSelfRef.__VdlySet__mem__v2) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][1U] 
            = ((0x800003ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v2 << 0xaU));
    }
    if (vlSelfRef.__VdlySet__mem__v3) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][1U] 
            = ((0x7fffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][1U]) 
               | (vlSelfRef.__VdlyVal__mem__v3 << 0x1fU));
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][2U] 
            = (0xfffffU & (vlSelfRef.__VdlyVal__mem__v3 
                           >> 1U));
    }
    vlSelfRef.__PVT__addr_reg = (0x3fU & ((IData)(vlSymsp->TOP__Top__soc.__PVT__genblk3__BRA__2__KET____DOT__dctAddr) 
                                          >> 6U));
}
