// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL__W200_N40.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__1(VTop_MemRTL__W200_N40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ce_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                     [0U][1U][4U] >> 0x1dU));
    vlSelfRef.__PVT__ce1_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                      [0U][0U][4U] 
                                      >> 0x1dU));
    vlSelfRef.__PVT__we_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                     [0U][1U][4U] >> 0x1cU));
    vlSelfRef.__PVT__addr_reg = (0x3fU & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                          [0U][1U][4U] 
                                          >> 4U));
    vlSelfRef.__PVT__addr1_reg = (0x3fU & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                           [0U][0U][4U] 
                                           >> 4U));
    vlSelfRef.__PVT__data_reg[0U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][0U];
    vlSelfRef.__PVT__data_reg[1U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][1U];
    vlSelfRef.__PVT__data_reg[2U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][2U];
    vlSelfRef.__PVT__data_reg[3U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][3U];
    vlSelfRef.__PVT__data_reg[4U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][0U];
    vlSelfRef.__PVT__data_reg[5U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][1U];
    vlSelfRef.__PVT__data_reg[6U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][2U];
    vlSelfRef.__PVT__data_reg[7U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][3U];
    vlSelfRef.__PVT__data_reg[8U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][0U];
    vlSelfRef.__PVT__data_reg[9U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][1U];
    vlSelfRef.__PVT__data_reg[0xaU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][2U];
    vlSelfRef.__PVT__data_reg[0xbU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][3U];
    vlSelfRef.__PVT__data_reg[0xcU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][0U];
    vlSelfRef.__PVT__data_reg[0xdU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][1U];
    vlSelfRef.__PVT__data_reg[0xeU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][2U];
    vlSelfRef.__PVT__data_reg[0xfU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [0U][1U][3U];
    vlSelfRef.__PVT__wm_reg = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                                                          [0U]
                                                                          [1U][4U] 
                                                                          >> 0xcU)))), 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (3U 
                                                           & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                                              [0U]
                                                              [1U][4U] 
                                                              >> 0xaU)), 4U));
}

VL_INLINE_OPT void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache__1(VTop_MemRTL__W200_N40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ce_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                     [1U][1U][4U] >> 0x1dU));
    vlSelfRef.__PVT__ce1_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                      [1U][0U][4U] 
                                      >> 0x1dU));
    vlSelfRef.__PVT__we_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                     [1U][1U][4U] >> 0x1cU));
    vlSelfRef.__PVT__addr_reg = (0x3fU & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                          [1U][1U][4U] 
                                          >> 4U));
    vlSelfRef.__PVT__addr1_reg = (0x3fU & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                           [1U][0U][4U] 
                                           >> 4U));
    vlSelfRef.__PVT__data_reg[0U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][0U];
    vlSelfRef.__PVT__data_reg[1U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][1U];
    vlSelfRef.__PVT__data_reg[2U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][2U];
    vlSelfRef.__PVT__data_reg[3U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][3U];
    vlSelfRef.__PVT__data_reg[4U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][0U];
    vlSelfRef.__PVT__data_reg[5U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][1U];
    vlSelfRef.__PVT__data_reg[6U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][2U];
    vlSelfRef.__PVT__data_reg[7U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][3U];
    vlSelfRef.__PVT__data_reg[8U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][0U];
    vlSelfRef.__PVT__data_reg[9U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][1U];
    vlSelfRef.__PVT__data_reg[0xaU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][2U];
    vlSelfRef.__PVT__data_reg[0xbU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][3U];
    vlSelfRef.__PVT__data_reg[0xcU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][0U];
    vlSelfRef.__PVT__data_reg[0xdU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][1U];
    vlSelfRef.__PVT__data_reg[0xeU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][2U];
    vlSelfRef.__PVT__data_reg[0xfU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [1U][1U][3U];
    vlSelfRef.__PVT__wm_reg = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                                                          [1U]
                                                                          [1U][4U] 
                                                                          >> 0xcU)))), 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (3U 
                                                           & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                                              [1U]
                                                              [1U][4U] 
                                                              >> 0xaU)), 4U));
}

VL_INLINE_OPT void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache__1(VTop_MemRTL__W200_N40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ce_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                     [2U][1U][4U] >> 0x1dU));
    vlSelfRef.__PVT__ce1_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                      [2U][0U][4U] 
                                      >> 0x1dU));
    vlSelfRef.__PVT__we_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                     [2U][1U][4U] >> 0x1cU));
    vlSelfRef.__PVT__addr_reg = (0x3fU & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                          [2U][1U][4U] 
                                          >> 4U));
    vlSelfRef.__PVT__addr1_reg = (0x3fU & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                           [2U][0U][4U] 
                                           >> 4U));
    vlSelfRef.__PVT__data_reg[0U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][0U];
    vlSelfRef.__PVT__data_reg[1U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][1U];
    vlSelfRef.__PVT__data_reg[2U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][2U];
    vlSelfRef.__PVT__data_reg[3U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][3U];
    vlSelfRef.__PVT__data_reg[4U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][0U];
    vlSelfRef.__PVT__data_reg[5U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][1U];
    vlSelfRef.__PVT__data_reg[6U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][2U];
    vlSelfRef.__PVT__data_reg[7U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][3U];
    vlSelfRef.__PVT__data_reg[8U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][0U];
    vlSelfRef.__PVT__data_reg[9U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][1U];
    vlSelfRef.__PVT__data_reg[0xaU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][2U];
    vlSelfRef.__PVT__data_reg[0xbU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][3U];
    vlSelfRef.__PVT__data_reg[0xcU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][0U];
    vlSelfRef.__PVT__data_reg[0xdU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][1U];
    vlSelfRef.__PVT__data_reg[0xeU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][2U];
    vlSelfRef.__PVT__data_reg[0xfU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [2U][1U][3U];
    vlSelfRef.__PVT__wm_reg = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                                                          [2U]
                                                                          [1U][4U] 
                                                                          >> 0xcU)))), 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (3U 
                                                           & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                                              [2U]
                                                              [1U][4U] 
                                                              >> 0xaU)), 4U));
}

VL_INLINE_OPT void VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache__1(VTop_MemRTL__W200_N40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemRTL__W200_N40___nba_sequent__TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__mem__v0) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v0][0U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v0));
    }
    if (vlSelfRef.__VdlySet__mem__v1) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v1][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v2) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][0U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v2][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v2) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v3) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][0U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v3][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v3) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v4) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v4][1U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v4][1U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v4));
    }
    if (vlSelfRef.__VdlySet__mem__v5) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v5][1U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v5][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v5) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v6) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v6][1U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v6][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v6) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v7) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v7][1U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v7][1U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v7) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v8) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v8][2U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v8][2U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v8));
    }
    if (vlSelfRef.__VdlySet__mem__v9) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v9][2U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v9][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v9) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v10) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v10][2U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v10][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v10) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v11) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v11][2U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v11][2U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v11) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v12) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v12][3U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v12][3U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v12));
    }
    if (vlSelfRef.__VdlySet__mem__v13) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v13][3U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v13][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v13) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v14) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v14][3U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v14][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v14) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v15) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v15][3U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v15][3U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v15) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v16) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v16][4U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v16][4U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v16));
    }
    if (vlSelfRef.__VdlySet__mem__v17) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v17][4U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v17][4U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v17) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v18) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v18][4U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v18][4U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v18) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v19) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v19][4U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v19][4U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v19) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v20) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v20][5U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v20][5U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v20));
    }
    if (vlSelfRef.__VdlySet__mem__v21) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v21][5U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v21][5U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v21) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v22) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v22][5U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v22][5U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v22) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v23) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v23][5U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v23][5U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v23) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v24) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v24][6U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v24][6U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v24));
    }
    if (vlSelfRef.__VdlySet__mem__v25) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v25][6U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v25][6U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v25) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v26) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v26][6U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v26][6U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v26) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v27) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v27][6U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v27][6U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v27) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v28) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v28][7U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v28][7U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v28));
    }
    if (vlSelfRef.__VdlySet__mem__v29) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v29][7U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v29][7U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v29) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v30) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v30][7U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v30][7U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v30) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v31) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v31][7U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v31][7U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v31) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v32) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v32][8U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v32][8U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v32));
    }
    if (vlSelfRef.__VdlySet__mem__v33) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v33][8U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v33][8U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v33) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v34) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v34][8U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v34][8U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v34) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v35) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v35][8U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v35][8U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v35) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v36) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v36][9U] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v36][9U]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v36));
    }
    if (vlSelfRef.__VdlySet__mem__v37) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v37][9U] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v37][9U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v37) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v38) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v38][9U] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v38][9U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v38) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v39) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v39][9U] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v39][9U]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v39) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v40) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v40][0xaU] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v40][0xaU]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v40));
    }
    if (vlSelfRef.__VdlySet__mem__v41) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v41][0xaU] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v41][0xaU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v41) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v42) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v42][0xaU] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v42][0xaU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v42) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v43) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v43][0xaU] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v43][0xaU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v43) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v44) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v44][0xbU] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v44][0xbU]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v44));
    }
    if (vlSelfRef.__VdlySet__mem__v45) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v45][0xbU] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v45][0xbU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v45) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v46) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v46][0xbU] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v46][0xbU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v46) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v47) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v47][0xbU] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v47][0xbU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v47) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v48) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v48][0xcU] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v48][0xcU]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v48));
    }
    if (vlSelfRef.__VdlySet__mem__v49) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v49][0xcU] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v49][0xcU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v49) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v50) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v50][0xcU] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v50][0xcU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v50) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v51) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v51][0xcU] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v51][0xcU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v51) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v52) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v52][0xdU] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v52][0xdU]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v52));
    }
    if (vlSelfRef.__VdlySet__mem__v53) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v53][0xdU] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v53][0xdU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v53) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v54) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v54][0xdU] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v54][0xdU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v54) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v55) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v55][0xdU] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v55][0xdU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v55) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v56) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v56][0xeU] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v56][0xeU]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v56));
    }
    if (vlSelfRef.__VdlySet__mem__v57) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v57][0xeU] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v57][0xeU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v57) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v58) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v58][0xeU] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v58][0xeU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v58) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v59) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v59][0xeU] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v59][0xeU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v59) 
                  << 0x18U));
    }
    if (vlSelfRef.__VdlySet__mem__v60) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v60][0xfU] 
            = ((0xffffff00U & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v60][0xfU]) 
               | (IData)(vlSelfRef.__VdlyVal__mem__v60));
    }
    if (vlSelfRef.__VdlySet__mem__v61) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v61][0xfU] 
            = ((0xffff00ffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v61][0xfU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v61) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__mem__v62) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v62][0xfU] 
            = ((0xff00ffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v62][0xfU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v62) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__mem__v63) {
        vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v63][0xfU] 
            = ((0xffffffU & vlSelfRef.mem[vlSelfRef.__VdlyDim0__mem__v63][0xfU]) 
               | ((IData)(vlSelfRef.__VdlyVal__mem__v63) 
                  << 0x18U));
    }
    vlSelfRef.__PVT__ce_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                     [3U][1U][4U] >> 0x1dU));
    vlSelfRef.__PVT__ce1_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                      [3U][0U][4U] 
                                      >> 0x1dU));
    vlSelfRef.__PVT__we_reg = (1U & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                     [3U][1U][4U] >> 0x1cU));
    vlSelfRef.__PVT__addr_reg = (0x3fU & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                          [3U][1U][4U] 
                                          >> 4U));
    vlSelfRef.__PVT__addr1_reg = (0x3fU & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                           [3U][0U][4U] 
                                           >> 4U));
    vlSelfRef.__PVT__data_reg[0U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][0U];
    vlSelfRef.__PVT__data_reg[1U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][1U];
    vlSelfRef.__PVT__data_reg[2U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][2U];
    vlSelfRef.__PVT__data_reg[3U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][3U];
    vlSelfRef.__PVT__data_reg[4U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][0U];
    vlSelfRef.__PVT__data_reg[5U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][1U];
    vlSelfRef.__PVT__data_reg[6U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][2U];
    vlSelfRef.__PVT__data_reg[7U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][3U];
    vlSelfRef.__PVT__data_reg[8U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][0U];
    vlSelfRef.__PVT__data_reg[9U] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][1U];
    vlSelfRef.__PVT__data_reg[0xaU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][2U];
    vlSelfRef.__PVT__data_reg[0xbU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][3U];
    vlSelfRef.__PVT__data_reg[0xcU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][0U];
    vlSelfRef.__PVT__data_reg[0xdU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][1U];
    vlSelfRef.__PVT__data_reg[0xeU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][2U];
    vlSelfRef.__PVT__data_reg[0xfU] = vlSymsp->TOP__Top__soc.__PVT__bankIFs
        [3U][1U][3U];
    vlSelfRef.__PVT__wm_reg = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                                                          [3U]
                                                                          [1U][4U] 
                                                                          >> 0xcU)))), 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (3U 
                                                           & (vlSymsp->TOP__Top__soc.__PVT__bankIFs
                                                              [3U]
                                                              [1U][4U] 
                                                              >> 0xaU)), 4U));
}
