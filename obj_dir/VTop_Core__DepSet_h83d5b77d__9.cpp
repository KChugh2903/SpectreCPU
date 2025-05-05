// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__30(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__30\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.comUOps[3U] = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_comUOp
        [3U];
    vlSelfRef.comUOps[2U] = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_comUOp
        [2U];
    vlSelfRef.comUOps[1U] = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_comUOp
        [1U];
    vlSelfRef.comUOps[0U] = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_comUOp
        [0U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[3U] 
        = vlSelfRef.comUOps[3U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[2U] 
        = vlSelfRef.comUOps[2U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[1U] 
        = vlSelfRef.comUOps[1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[0U] 
        = vlSelfRef.comUOps[0U];
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__32(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__32\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__sqb__DOT__mmioOpInEv;
    __PVT__sqb__DOT__mmioOpInEv = 0;
    CData/*0:0*/ __PVT__sqb__DOT__mgmtOpInEv;
    __PVT__sqb__DOT__mgmtOpInEv = 0;
    CData/*1:0*/ __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift;
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift = 0;
    IData/*31:0*/ __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data;
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data = 0;
    CData/*3:0*/ __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask;
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask = 0;
    CData/*1:0*/ __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift;
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift = 0;
    IData/*31:0*/ __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data;
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data = 0;
    CData/*3:0*/ __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask;
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask = 0;
    VlWide<6>/*179:0*/ sqb__DOT____Vlvbound_h80e7cd4d__0;
    VL_ZERO_W(180, sqb__DOT____Vlvbound_h80e7cd4d__0);
    SData/*15:0*/ genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    // Body
    if (vlSelfRef.__VdlySet__sqb__DOT__evicted__v0) {
        vlSelfRef.__PVT__sqb__DOT__evicted[0U][0U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[0U][1U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[0U][2U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[0U][3U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[0U][4U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[0U][5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__sqb__DOT__evicted__v1) {
        vlSelfRef.__PVT__sqb__DOT__evicted[1U][0U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[1U][1U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[1U][2U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[1U][3U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[1U][4U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[1U][5U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[2U][0U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[2U][1U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[2U][2U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[2U][3U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[2U][4U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[2U][5U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[3U][0U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[3U][1U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[3U][2U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[3U][3U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[3U][4U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__evicted[3U][5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__sqb__DOT__evicted__v4) {
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v4][0U] 
            = (0xffffffefU & vlSelfRef.__PVT__sqb__DOT__evicted
               [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v4][0U]);
    }
    if (vlSelfRef.__VdlySet__sqb__DOT__evicted__v5) {
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v5][0U] 
            = (0xffffffefU & vlSelfRef.__PVT__sqb__DOT__evicted
               [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v5][0U]);
    }
    if (vlSelfRef.__VdlySet__sqb__DOT__evicted__v6) {
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v6][0U] 
            = (0xffc0003fU & vlSelfRef.__PVT__sqb__DOT__evicted
               [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v6][0U]);
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v7][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__sqb__DOT__evicted
               [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v7][0U]);
    }
    if (vlSelfRef.__VdlySet__sqb__DOT__evicted__v8) {
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v8][0U] 
            = (0x10U | vlSelfRef.__PVT__sqb__DOT__evicted
               [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v8][0U]);
    }
    if (vlSelfRef.__VdlySet__sqb__DOT__evicted__v9) {
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v9][1U] 
            = ((0xfffffU & vlSelfRef.__PVT__sqb__DOT__evicted
                [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v9][1U]) 
               | (vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[0U] 
                  << 0x14U));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v9][2U] 
            = ((vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[0U] 
                >> 0xcU) | (vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[1U] 
                            << 0x14U));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v9][3U] 
            = ((vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[1U] 
                >> 0xcU) | (vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[2U] 
                            << 0x14U));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v9][4U] 
            = ((vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[2U] 
                >> 0xcU) | (vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[3U] 
                            << 0x14U));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v9][5U] 
            = (vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[3U] 
               >> 0xcU);
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v10][0U] 
            = ((0xffc0003fU & vlSelfRef.__PVT__sqb__DOT__evicted
                [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v10][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__sqb__DOT__evicted__v10) 
                  << 6U));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v11][0U] 
            = ((0x3fffffU & vlSelfRef.__PVT__sqb__DOT__evicted
                [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v11][0U]) 
               | (vlSelfRef.__VdlyVal__sqb__DOT__evicted__v11 
                  << 0x16U));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v11][1U] 
            = ((0xfff00000U & vlSelfRef.__PVT__sqb__DOT__evicted
                [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v11][1U]) 
               | (vlSelfRef.__VdlyVal__sqb__DOT__evicted__v11 
                  >> 0xaU));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v12][0U] 
            = (0xffffffefU & vlSelfRef.__PVT__sqb__DOT__evicted
               [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v12][0U]);
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v13][0U] 
            = ((0xfffffff1U & vlSelfRef.__PVT__sqb__DOT__evicted
                [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v13][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__sqb__DOT__evicted__v13) 
                  << 1U));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v14][0U] 
            = ((0xffffffdfU & vlSelfRef.__PVT__sqb__DOT__evicted
                [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v14][0U]) 
               | ((IData)(vlSelfRef.__VdlyVal__sqb__DOT__evicted__v14) 
                  << 5U));
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v15][0U] 
            = (1U | vlSelfRef.__PVT__sqb__DOT__evicted
               [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v15][0U]);
    }
    if (vlSelfRef.__VdlySet__sqb__DOT__evicted__v16) {
        vlSelfRef.__PVT__sqb__DOT__evicted[vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v16][0U] 
            = (0x10U | vlSelfRef.__PVT__sqb__DOT__evicted
               [vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v16][0U]);
    }
    vlSelfRef.__PVT__lb__DOT__specRsv = vlSelfRef.__Vdly__lb__DOT__specRsv;
    vlSelfRef.__PVT__SQ_uops[1U][0U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_uop
        [1U][0U];
    vlSelfRef.__PVT__SQ_uops[1U][1U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_uop
        [1U][1U];
    vlSelfRef.__PVT__SQ_uops[1U][2U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_uop
        [1U][2U];
    vlSelfRef.__PVT__SQ_uops[0U][0U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_uop
        [0U][0U];
    vlSelfRef.__PVT__SQ_uops[0U][1U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_uop
        [0U][1U];
    vlSelfRef.__PVT__SQ_uops[0U][2U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_uop
        [0U][2U];
    vlSelfRef.__PVT__TH_trapInfo[0U] = vlSelfRef.__PVT__trapHandler__DOT__trapInfo_r[0U];
    vlSelfRef.__PVT__TH_trapInfo[1U] = vlSelfRef.__PVT__trapHandler__DOT__trapInfo_r[1U];
    vlSelfRef.__PVT__TH_trapInfo[2U] = vlSelfRef.__PVT__trapHandler__DOT__trapInfo_r[2U];
    vlSelfRef.__PVT__TH_trapInfo[0U] = ((0xffU & vlSelfRef.__PVT__TH_trapInfo[0U]) 
                                        | (vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0 
                                           << 8U));
    vlSelfRef.__PVT__TH_trapInfo[1U] = ((0xffffff00U 
                                         & vlSelfRef.__PVT__TH_trapInfo[1U]) 
                                        | (vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0 
                                           >> 0x18U));
    if ((2U & (IData)(vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_r))) {
        vlSelfRef.__PVT__TH_trapInfo[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TH_trapInfo[1U]) 
                                            | (((1U 
                                                 & (IData)(vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_r))
                                                 ? 
                                                (vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0 
                                                 - (IData)(2U))
                                                 : vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0) 
                                               << 8U));
        vlSelfRef.__PVT__TH_trapInfo[2U] = (((1U & (IData)(vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_r))
                                              ? (vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0 
                                                 - (IData)(2U))
                                              : vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0) 
                                            >> 0x18U);
    } else if ((1U & (IData)(vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_r))) {
        vlSelfRef.__PVT__TH_trapInfo[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TH_trapInfo[1U]) 
                                            | (((IData)(2U) 
                                                + vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0) 
                                               << 8U));
        vlSelfRef.__PVT__TH_trapInfo[2U] = (((IData)(2U) 
                                             + vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0) 
                                            >> 0x18U);
    }
    vlSelfRef.ROB_curSqN = vlSymsp->TOP__Top__soc__core__rob.__PVT__baseIndex;
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.__PVT__sqb__DOT__reIssue = 0U;
    if ((1U & (vlSelfRef.__PVT__sqb__DOT__evicted[3U][0U] 
               & (~ (vlSelfRef.__PVT__sqb__DOT__evicted
                     [3U][0U] >> 4U))))) {
        vlSelfRef.__PVT__sqb__DOT__reIssue = 7U;
    }
    if ((1U & (vlSelfRef.__PVT__sqb__DOT__evicted[2U][0U] 
               & (~ (vlSelfRef.__PVT__sqb__DOT__evicted
                     [2U][0U] >> 4U))))) {
        vlSelfRef.__PVT__sqb__DOT__reIssue = 5U;
    }
    if ((1U & (vlSelfRef.__PVT__sqb__DOT__evicted[1U][0U] 
               & (~ (vlSelfRef.__PVT__sqb__DOT__evicted
                     [1U][0U] >> 4U))))) {
        vlSelfRef.__PVT__sqb__DOT__reIssue = 3U;
    }
    if ((1U & (vlSelfRef.__PVT__sqb__DOT__evicted[0U][0U] 
               & (~ (vlSelfRef.__PVT__sqb__DOT__evicted
                     [0U][0U] >> 4U))))) {
        vlSelfRef.__PVT__sqb__DOT__reIssue = 1U;
    }
    __PVT__sqb__DOT__mgmtOpInEv = 0U;
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[0U][0U])) {
        if ((0x20U & vlSelfRef.__PVT__sqb__DOT__evicted
             [0U][0U])) {
            __PVT__sqb__DOT__mgmtOpInEv = 1U;
        }
    }
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[1U][0U])) {
        if ((0x20U & vlSelfRef.__PVT__sqb__DOT__evicted
             [1U][0U])) {
            __PVT__sqb__DOT__mgmtOpInEv = 1U;
        }
    }
    __PVT__sqb__DOT__mmioOpInEv = 0U;
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[0U][0U])) {
        if ((0x80000000U > (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                            [0U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                 [0U][0U] 
                                                 >> 0x14U)))))) {
            __PVT__sqb__DOT__mmioOpInEv = 1U;
        }
    }
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[1U][0U])) {
        if ((0x80000000U > (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                            [1U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                 [1U][0U] 
                                                 >> 0x14U)))))) {
            __PVT__sqb__DOT__mmioOpInEv = 1U;
        }
    }
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[2U][0U])) {
        if ((0x20U & vlSelfRef.__PVT__sqb__DOT__evicted
             [2U][0U])) {
            __PVT__sqb__DOT__mgmtOpInEv = 1U;
        }
        if ((0x80000000U > (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                            [2U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                 [2U][0U] 
                                                 >> 0x14U)))))) {
            __PVT__sqb__DOT__mmioOpInEv = 1U;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[5U] = 0U;
    } else {
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] = 
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U];
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] = 
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U];
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U] = 
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U];
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U] = 
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U];
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U] = 
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U];
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[5U] = 
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U];
    }
    vlSelfRef.__PVT__BS_PERFC_branchMispr = vlSelfRef.__PVT__bsel__DOT__OUT_PERFC_branchMispr_c;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [0U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [0U][1U] >> 0x1eU)) 
                 | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [1U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [1U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [2U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [2U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [3U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [3U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [4U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [4U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [5U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [5U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [6U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [6U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                   [7U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                      [7U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xeU)));
    vlSelfRef.__PVT__SQB_busy = 0U;
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[0U][0U])) {
        vlSelfRef.__PVT__SQB_busy = 1U;
    }
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[1U][0U])) {
        vlSelfRef.__PVT__SQB_busy = 1U;
    }
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[2U][0U])) {
        vlSelfRef.__PVT__SQB_busy = 1U;
    }
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[3U][0U])) {
        if ((0x20U & vlSelfRef.__PVT__sqb__DOT__evicted
             [3U][0U])) {
            __PVT__sqb__DOT__mgmtOpInEv = 1U;
        }
        if ((0x80000000U > (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                            [3U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                 [3U][0U] 
                                                 >> 0x14U)))))) {
            __PVT__sqb__DOT__mmioOpInEv = 1U;
        }
        vlSelfRef.__PVT__SQB_busy = 1U;
    }
    if ((1U & vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U])) {
        vlSelfRef.__PVT__SQB_busy = 1U;
    }
    if ((1U & vlSelfRef.__PVT__SQ_uops[0U][0U])) {
        vlSelfRef.__PVT__SQB_busy = 1U;
    }
    if ((1U & vlSelfRef.__PVT__SQ_uops[1U][0U])) {
        vlSelfRef.__PVT__SQB_busy = 1U;
    }
    sqb__DOT____Vlvbound_h80e7cd4d__0[0U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [0U][0U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[1U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [0U][1U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[2U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [0U][2U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[3U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [0U][3U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[4U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [0U][4U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[5U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [0U][5U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[0U][0U] = sqb__DOT____Vlvbound_h80e7cd4d__0[0U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[0U][1U] = sqb__DOT____Vlvbound_h80e7cd4d__0[1U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[0U][2U] = sqb__DOT____Vlvbound_h80e7cd4d__0[2U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[0U][3U] = sqb__DOT____Vlvbound_h80e7cd4d__0[3U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[0U][4U] = sqb__DOT____Vlvbound_h80e7cd4d__0[4U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[0U][5U] = sqb__DOT____Vlvbound_h80e7cd4d__0[5U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[0U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [1U][0U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[1U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [1U][1U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[2U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [1U][2U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[3U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [1U][3U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[4U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [1U][4U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[5U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [1U][5U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[1U][0U] = sqb__DOT____Vlvbound_h80e7cd4d__0[0U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[1U][1U] = sqb__DOT____Vlvbound_h80e7cd4d__0[1U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[1U][2U] = sqb__DOT____Vlvbound_h80e7cd4d__0[2U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[1U][3U] = sqb__DOT____Vlvbound_h80e7cd4d__0[3U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[1U][4U] = sqb__DOT____Vlvbound_h80e7cd4d__0[4U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[1U][5U] = sqb__DOT____Vlvbound_h80e7cd4d__0[5U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[0U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [2U][0U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[1U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [2U][1U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[2U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [2U][2U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[3U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [2U][3U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[4U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [2U][4U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[5U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [2U][5U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[2U][0U] = sqb__DOT____Vlvbound_h80e7cd4d__0[0U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[2U][1U] = sqb__DOT____Vlvbound_h80e7cd4d__0[1U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[2U][2U] = sqb__DOT____Vlvbound_h80e7cd4d__0[2U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[2U][3U] = sqb__DOT____Vlvbound_h80e7cd4d__0[3U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[2U][4U] = sqb__DOT____Vlvbound_h80e7cd4d__0[4U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[2U][5U] = sqb__DOT____Vlvbound_h80e7cd4d__0[5U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[0U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [3U][0U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[1U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [3U][1U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[2U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [3U][2U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[3U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [3U][3U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[4U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [3U][4U];
    sqb__DOT____Vlvbound_h80e7cd4d__0[5U] = vlSelfRef.__PVT__sqb__DOT__evicted
        [3U][5U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[3U][0U] = sqb__DOT____Vlvbound_h80e7cd4d__0[0U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[3U][1U] = sqb__DOT____Vlvbound_h80e7cd4d__0[1U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[3U][2U] = sqb__DOT____Vlvbound_h80e7cd4d__0[2U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[3U][3U] = sqb__DOT____Vlvbound_h80e7cd4d__0[3U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[3U][4U] = sqb__DOT____Vlvbound_h80e7cd4d__0[4U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[3U][5U] = sqb__DOT____Vlvbound_h80e7cd4d__0[5U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[4U][0U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[4U][1U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[4U][2U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[4U][3U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[4U][4U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U];
    vlSelfRef.__PVT__sqb__DOT__evictedV[4U][5U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[5U];
    vlSelfRef.__PVT__sqb__DOT__evInsert = 0U;
    if ((1U & ((~ ((IData)(__PVT__sqb__DOT__mmioOpInEv) 
                   & (0x80000000U > (0xfffffffcU & 
                                     ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                       << 0xcU) | (0xffcU 
                                                   & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                      >> 0x14U))))))) 
               & (~ (IData)(__PVT__sqb__DOT__mgmtOpInEv))))) {
        if ((1U & ((vlSelfRef.__PVT__sqb__DOT__evicted
                    [0U][0U] & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                                [0U][1U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                  [0U][0U] 
                                                  >> 0x18U))) 
                                == (0xfffffffU & ((
                                                   vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                     >> 0x18U))))) 
                   | ((~ vlSelfRef.__PVT__sqb__DOT__evicted
                       [0U][0U]) & (~ (IData)(vlSelfRef.__PVT__sqb__DOT__evInsert)))))) {
            vlSelfRef.__PVT__sqb__DOT__evInsert = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__sqb__DOT__evicted
                    [1U][0U] & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                                [1U][1U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                  [1U][0U] 
                                                  >> 0x18U))) 
                                == (0xfffffffU & ((
                                                   vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                     >> 0x18U))))) 
                   | ((~ vlSelfRef.__PVT__sqb__DOT__evicted
                       [1U][0U]) & (~ (IData)(vlSelfRef.__PVT__sqb__DOT__evInsert)))))) {
            vlSelfRef.__PVT__sqb__DOT__evInsert = 3U;
        }
        if ((1U & ((vlSelfRef.__PVT__sqb__DOT__evicted
                    [2U][0U] & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                                [2U][1U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                  [2U][0U] 
                                                  >> 0x18U))) 
                                == (0xfffffffU & ((
                                                   vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                     >> 0x18U))))) 
                   | ((~ vlSelfRef.__PVT__sqb__DOT__evicted
                       [2U][0U]) & (~ (IData)(vlSelfRef.__PVT__sqb__DOT__evInsert)))))) {
            vlSelfRef.__PVT__sqb__DOT__evInsert = 5U;
        }
        if ((1U & ((vlSelfRef.__PVT__sqb__DOT__evicted
                    [3U][0U] & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                                [3U][1U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                  [3U][0U] 
                                                  >> 0x18U))) 
                                == (0xfffffffU & ((
                                                   vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                                   << 8U) 
                                                  | (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                     >> 0x18U))))) 
                   | ((~ vlSelfRef.__PVT__sqb__DOT__evicted
                       [3U][0U]) & (~ (IData)(vlSelfRef.__PVT__sqb__DOT__evInsert)))))) {
            vlSelfRef.__PVT__sqb__DOT__evInsert = 7U;
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                 & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                    [0U][0U])) & ((5U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U))) 
                                  | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
               & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [0U][0U] >> 1U))) 
                         | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [0U][0U] 
                                           >> 1U)))) 
                        | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [0U][0U] 
                                          >> 1U)))) 
                       | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [0U][0U] >> 1U)))) 
                      | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 1U)))) 
                     & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
              & ((0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [0U][0U] >> 1U))) 
                 | ((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                              [0U][1U] >> 8U)) == (IData)(vlSelfRef.ROB_curSqN)))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][1U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [1U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [1U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [1U][0U] >> 1U)))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][2U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [2U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [2U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [2U][0U] >> 1U)))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][3U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [3U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [3U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [3U][0U] >> 1U)))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][4U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [4U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [4U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [4U][0U] >> 1U)))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][5U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [5U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [5U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [5U][0U] >> 1U)))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][6U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [6U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [6U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [6U][0U] >> 1U)))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)) 
                  & (3U == vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c
                     [0U][7U])) & ((5U != (0xfU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U))) 
                                   | (~ (IData)(vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv)))) 
                & (~ ((((((0U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 1U))) 
                          | (1U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                            [7U][0U] 
                                            >> 1U)))) 
                         | (2U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                           [7U][0U] 
                                           >> 1U)))) 
                        | (6U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 1U)))) 
                       | (7U == (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 1U)))) 
                      & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs)))) 
               & (0xbU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue
                                   [7U][0U] >> 1U)))) 
              << 7U));
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift 
        = (3U & (vlSelfRef.__PVT__CC_SQ_uopLd[0U][1U] 
                 >> 6U));
    vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] = 0U;
    vlSelfRef.__PVT__sqb__DOT__lookupData[0U] = 0U;
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [0U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [0U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [0U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [0U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[0U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [0U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [0U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [0U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [0U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [0U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [0U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [1U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [1U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [1U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [1U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[1U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [1U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [1U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [0U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [0U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [1U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [1U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [2U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [2U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [2U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [2U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[2U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [2U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [2U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [0U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [0U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [2U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [2U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [3U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [3U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [3U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [3U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[3U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [3U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [3U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [0U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [0U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [3U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [3U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [4U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [4U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [4U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [4U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[4U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [4U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [4U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [0U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [0U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [4U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [4U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[0U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [0U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[0U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__0__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift 
        = (3U & (vlSelfRef.__PVT__CC_SQ_uopLd[1U][1U] 
                 >> 6U));
    vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] = 0U;
    vlSelfRef.__PVT__sqb__DOT__lookupData[1U] = 0U;
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [0U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [0U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [0U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [0U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[0U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [0U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [0U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [1U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [1U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [0U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [0U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [1U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [1U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [1U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [1U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[1U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [1U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [1U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [1U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [1U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [1U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [1U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [2U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [2U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [2U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [2U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[2U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [2U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [2U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [1U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [1U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [2U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [2U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [3U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [3U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [3U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [3U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[3U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [3U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [3U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [1U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [1U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [3U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [3U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask));
    }
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask 
        = ((0xb3U >= ((IData)(6U) + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))
            ? (0xfU & (((0U == (0x1fU & ((IData)(6U) 
                                         + (0xfU & 
                                            VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))
                         ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                                 [4U][(((IData)(9U) 
                                        + (0xfU & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))))))) 
                       | (vlSelfRef.__PVT__sqb__DOT__evictedV
                          [4U][(((IData)(6U) + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(6U) 
                                             + (0xfU 
                                                & VL_SHIFTL_III(4,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 2U)))))))
            : 0U);
    __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data 
        = ((0xb3U >= ((IData)(0x34U) + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))
            ? (((0U == (0x1fU & ((IData)(0x34U) + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U)))))
                 ? 0U : (vlSelfRef.__PVT__sqb__DOT__evictedV
                         [4U][(((IData)(0x53U) + (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x34U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))) 
               | (vlSelfRef.__PVT__sqb__DOT__evictedV
                  [4U][(((IData)(0x34U) + (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__shift), 5U))))))
            : 0U);
    if (((vlSelfRef.__PVT__sqb__DOT__evictedV[4U][0U] 
          & ((0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                             [4U][1U] << 8U) | (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                [4U][0U] 
                                                >> 0x18U))) 
             == (0xfffffffU & ((vlSelfRef.__PVT__CC_SQ_uopLd
                                [1U][2U] << 0x18U) 
                               | (vlSelfRef.__PVT__CC_SQ_uopLd
                                  [1U][1U] >> 8U))))) 
         & (0x80000000U <= (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evictedV
                                            [4U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evictedV
                                                 [4U][0U] 
                                                 >> 0x14U))))))) {
        if ((1U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xffU & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((2U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff00U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((4U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff0000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        if ((8U & (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask))) {
            vlSelfRef.__PVT__sqb__DOT__lookupData[1U] 
                = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__lookupData
                    [1U]) | (0xff000000U & __PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__data));
        }
        vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] = 
            (vlSelfRef.__PVT__sqb__DOT__lookupMask[1U] 
             | (IData)(__PVT__sqb__DOT__genblk1__BRA__1__KET____DOT__unnamedblk7__DOT__mask));
    }
    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U];
    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U];
    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U];
    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U];
    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U];
    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U] = vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[5U];
    if ((1U & (IData)(vlSelfRef.__PVT__sqb__DOT__evInsert))) {
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U] = 0U;
    }
    vlSelfRef.__PVT__SQ_stall[0U] = 1U;
    vlSelfRef.__PVT__SQ_stall[1U] = 1U;
    if ((1U & (((~ vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U]) 
                | (IData)(vlSelfRef.__PVT__sqb__DOT__evInsert)) 
               & vlSelfRef.__PVT__SQ_uops[0U][0U]))) {
        vlSelfRef.__PVT__SQ_stall[0U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] = 
            (1U | (0xffffffc0U & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]));
        if ((1U & ((0x80000000U > ((vlSelfRef.__PVT__SQ_uops
                                    [0U][1U] << 0x1aU) 
                                   | (vlSelfRef.__PVT__SQ_uops
                                      [0U][0U] >> 6U))) 
                   | (vlSelfRef.__PVT__SQ_uops[0U][0U] 
                      >> 1U)))) {
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                = ((0xffc0003fU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]) 
                   | (0x3c0U & (vlSelfRef.__PVT__SQ_uops
                                [0U][0U] << 4U)));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                = ((0x3fffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]) 
                   | (0xffc00000U & (vlSelfRef.__PVT__SQ_uops
                                     [0U][0U] << 0xeU)));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] 
                = ((0xfff00000U & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U]) 
                   | (0xfffffU & ((0x3fc000U & (vlSelfRef.__PVT__SQ_uops
                                                [0U][1U] 
                                                << 0xeU)) 
                                  | (vlSelfRef.__PVT__SQ_uops
                                     [0U][0U] >> 0x12U))));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] 
                = ((0xfffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U]) 
                   | (0xfff00000U & (vlSelfRef.__PVT__SQ_uops
                                     [0U][1U] << 0xeU)));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] 
                = ((0xfc000U & (vlSelfRef.__PVT__SQ_uops
                                [0U][2U] << 0xeU)) 
                   | (vlSelfRef.__PVT__SQ_uops[0U][1U] 
                      >> 0x12U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] = 0U;
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] = 0U;
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U] = 0U;
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                = ((0xffffffdfU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]) 
                   | (0x20U & (vlSelfRef.__PVT__SQ_uops
                               [0U][0U] << 4U)));
        } else {
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                = ((0xffc0003fU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]) 
                   | (0x3fffc0U & (VL_SHIFTL_III(16,16,32, 
                                                 (0xfU 
                                                  & (vlSelfRef.__PVT__SQ_uops
                                                     [0U][0U] 
                                                     >> 2U)), 
                                                 VL_SHIFTL_III(32,32,32, 
                                                               (3U 
                                                                & (vlSelfRef.__PVT__SQ_uops
                                                                   [0U][0U] 
                                                                   >> 8U)), 2U)) 
                                   << 6U)));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                = ((0x3fffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]) 
                   | (0xff000000U & (vlSelfRef.__PVT__SQ_uops
                                     [0U][0U] << 0xeU)));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] 
                = ((0xfff00000U & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U]) 
                   | (0xfffffU & ((0x3fc000U & (vlSelfRef.__PVT__SQ_uops
                                                [0U][1U] 
                                                << 0xeU)) 
                                  | (vlSelfRef.__PVT__SQ_uops
                                     [0U][0U] >> 0x12U))));
            __Vtemp_25[0U] = ((vlSelfRef.__PVT__SQ_uops
                               [0U][2U] << 0x1aU) | 
                              (vlSelfRef.__PVT__SQ_uops
                               [0U][1U] >> 6U));
            __Vtemp_25[1U] = 0U;
            __Vtemp_25[2U] = 0U;
            __Vtemp_25[3U] = 0U;
            VL_SHIFTL_WWI(128,128,32, __Vtemp_26, __Vtemp_25, 
                          VL_SHIFTL_III(32,32,32, (3U 
                                                   & (vlSelfRef.__PVT__SQ_uops
                                                      [0U][0U] 
                                                      >> 8U)), 5U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] 
                = ((0xfffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U]) 
                   | (__Vtemp_26[0U] << 0x14U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] 
                = ((__Vtemp_26[0U] >> 0xcU) | (__Vtemp_26[1U] 
                                               << 0x14U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] 
                = ((__Vtemp_26[1U] >> 0xcU) | (__Vtemp_26[2U] 
                                               << 0x14U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] 
                = ((__Vtemp_26[2U] >> 0xcU) | (__Vtemp_26[3U] 
                                               << 0x14U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U] 
                = (__Vtemp_26[3U] >> 0xcU);
            if (((vlSelfRef.__PVT__SQ_uops[1U][0U] 
                  & ((0xfffffffU & ((vlSelfRef.__PVT__SQ_uops
                                     [1U][1U] << 0x16U) 
                                    | (vlSelfRef.__PVT__SQ_uops
                                       [1U][0U] >> 0xaU))) 
                     == (0xfffffffU & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] 
                                        << 8U) | (vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                                                  >> 0x18U))))) 
                 & (0x80000000U <= ((vlSelfRef.__PVT__SQ_uops
                                     [1U][1U] << 0x1aU) 
                                    | (vlSelfRef.__PVT__SQ_uops
                                       [1U][0U] >> 6U))))) {
                vlSelfRef.__PVT__SQ_stall[1U] = 0U;
                if (((0U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 2U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 6U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] 
                        = ((0xf00fffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0x14U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((0U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 3U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 0xeU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0x1cU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              >> 4U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((0U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 4U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 0x16U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] 
                        = ((0xfffff00fU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 4U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((0U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 5U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & ((vlSelfRef.__PVT__SQ_uops
                                     [1U][2U] << 2U) 
                                    | (vlSelfRef.__PVT__SQ_uops
                                       [1U][1U] >> 0x1eU)));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] 
                        = ((0xfff00fffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0xcU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((1U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 2U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 6U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] 
                        = ((0xf00fffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0x14U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((1U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 3U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 0xeU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0x1cU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              >> 4U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((1U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 4U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 0x16U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] 
                        = ((0xfffff00fU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 4U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((1U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 5U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & ((vlSelfRef.__PVT__SQ_uops
                                     [1U][2U] << 2U) 
                                    | (vlSelfRef.__PVT__SQ_uops
                                       [1U][1U] >> 0x1eU)));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] 
                        = ((0xfff00fffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0xcU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((2U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 2U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 6U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] 
                        = ((0xf00fffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0x14U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((2U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 3U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 0xeU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0x1cU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              >> 4U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((2U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 4U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 0x16U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] 
                        = ((0xfffff00fU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 4U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x10000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((2U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 5U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & ((vlSelfRef.__PVT__SQ_uops
                                     [1U][2U] << 2U) 
                                    | (vlSelfRef.__PVT__SQ_uops
                                       [1U][1U] >> 0x1eU)));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] 
                        = ((0xfff00fffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0xcU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x20000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((3U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 2U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 6U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] 
                        = ((0xf00fffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0x14U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x40000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((3U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 3U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 0xeU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U]) 
                           | ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                              << 0x1cU));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U] 
                        = ((0xffff0U & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U]) 
                           | (0xfffffU & ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                                          >> 4U)));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x80000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((3U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 4U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & (vlSelfRef.__PVT__SQ_uops
                                    [1U][1U] >> 0x16U));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U] 
                        = ((0xff00fU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U]) 
                           | (0xfffffU & ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                                          << 4U)));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x100000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
                if (((3U == (3U & (vlSelfRef.__PVT__SQ_uops
                                   [1U][0U] >> 8U))) 
                     & (vlSelfRef.__PVT__SQ_uops[1U][0U] 
                        >> 5U))) {
                    vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0 
                        = (0xffU & ((vlSelfRef.__PVT__SQ_uops
                                     [1U][2U] << 2U) 
                                    | (vlSelfRef.__PVT__SQ_uops
                                       [1U][1U] >> 0x1eU)));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U] 
                        = ((0xfffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U]) 
                           | (0xfffffU & ((IData)(vlSelfRef.sqb__DOT____Vlvbound_hef0a1584__0) 
                                          << 0xcU)));
                    vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U] 
                        = (0x200000U | vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[0U]);
                }
            }
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_stall[1U] 
        = vlSelfRef.__PVT__SQ_stall[1U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_stall[0U] 
        = vlSelfRef.__PVT__SQ_stall[0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__33(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__33\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__STORE_busy = (1U & ((~ (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_empty)) 
                                         | (IData)(vlSelfRef.__PVT__SQB_busy)));
    vlSelfRef.__PVT__MEM_busy = ((IData)(vlSelfRef.__PVT__STORE_busy) 
                                 | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__flushQueued) 
                                    | ((1U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state)) 
                                       | ((4U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state)) 
                                          | ((2U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state)) 
                                             | ((3U 
                                                 == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state)) 
                                                | (5U 
                                                   == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state))))))));
}

extern const VlWide<12>/*383:0*/ VTop__ConstPool__CONST_h997e551f_0;

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__34(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__34\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*12:0*/ __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp;
    __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp = 0;
    SData/*12:0*/ __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp;
    __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp = 0;
    CData/*0:0*/ __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    CData/*0:0*/ __PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx;
    __PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx = 0;
    CData/*0:0*/ lsu__DOT____Vlvbound_h519ab844__0;
    lsu__DOT____Vlvbound_h519ab844__0 = 0;
    SData/*11:0*/ lsu__DOT____Vlvbound_hb4ca6dc7__0;
    lsu__DOT____Vlvbound_hb4ca6dc7__0 = 0;
    SData/*14:0*/ cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2;
    cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2 = 0;
    CData/*7:0*/ genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 = 0;
    CData/*7:0*/ genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 = 0;
    // Body
    vlSelfRef.__PVT__LB_uopLd[0U][0U] = 0U;
    vlSelfRef.__PVT__LB_uopLd[0U][1U] = 0U;
    vlSelfRef.__PVT__LB_uopLd[0U][2U] = 0U;
    vlSelfRef.__PVT__LB_uopLd[0U][3U] = 0U;
    vlSelfRef.__PVT__LB_uopLd[0U][0U] = (0xfffffffeU 
                                         & vlSelfRef.__PVT__LB_uopLd
                                         [0U][0U]);
    vlSelfRef.__PVT__LB_uopLd[0U][0U] = vlSelfRef.__PVT__lb__DOT__lateLoadUOp
        [0U][0U];
    vlSelfRef.__PVT__LB_uopLd[0U][1U] = vlSelfRef.__PVT__lb__DOT__lateLoadUOp
        [0U][1U];
    vlSelfRef.__PVT__LB_uopLd[0U][2U] = vlSelfRef.__PVT__lb__DOT__lateLoadUOp
        [0U][2U];
    vlSelfRef.__PVT__LB_uopLd[0U][3U] = vlSelfRef.__PVT__lb__DOT__lateLoadUOp
        [0U][3U];
    vlSelfRef.__PVT__LB_uopLd[1U][0U] = 0U;
    vlSelfRef.__PVT__LB_uopLd[1U][1U] = 0U;
    vlSelfRef.__PVT__LB_uopLd[1U][2U] = 0U;
    vlSelfRef.__PVT__LB_uopLd[1U][3U] = 0U;
    vlSelfRef.__PVT__LB_uopLd[1U][0U] = (0xfffffffeU 
                                         & vlSelfRef.__PVT__LB_uopLd
                                         [1U][0U]);
    vlSelfRef.__PVT__LB_uopLd[1U][0U] = vlSelfRef.__PVT__lb__DOT__lateLoadUOp
        [1U][0U];
    vlSelfRef.__PVT__LB_uopLd[1U][1U] = vlSelfRef.__PVT__lb__DOT__lateLoadUOp
        [1U][1U];
    vlSelfRef.__PVT__LB_uopLd[1U][2U] = vlSelfRef.__PVT__lb__DOT__lateLoadUOp
        [1U][2U];
    vlSelfRef.__PVT__LB_uopLd[1U][3U] = vlSelfRef.__PVT__lb__DOT__lateLoadUOp
        [1U][3U];
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__isIllegalInstr_c = 0U;
    if ((6U <= (0x3fU & (vlSelfRef.LD_uop[3U][1U] >> 8U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelfRef.LD_uop[3U][1U])) {
                    if ((0x400U & vlSelfRef.LD_uop[3U][1U])) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [3U][1U] >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.LD_uop
                                          [3U][1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                              >> 2U)))) {
                                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__isIllegalInstr_c = 1U;
                                }
                            }
                        }
                    } else if ((0x200U & vlSelfRef.LD_uop
                                [3U][1U])) {
                        if ((0x100U & vlSelfRef.LD_uop
                             [3U][1U])) {
                            if ((0U == (3U & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                              >> 3U)))) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__isIllegalInstr_c = 1U;
                            }
                        } else if ((1U & (~ (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                             >> 2U)))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__isIllegalInstr_c = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__isIllegalInstr_c = 0U;
    if ((6U <= (0x3fU & (vlSelfRef.LD_uop[4U][1U] >> 8U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelfRef.LD_uop[4U][1U])) {
                    if ((0x400U & vlSelfRef.LD_uop[4U][1U])) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [4U][1U] >> 9U)))) {
                            if ((1U & (~ (vlSelfRef.LD_uop
                                          [4U][1U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                              >> 2U)))) {
                                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__isIllegalInstr_c = 1U;
                                }
                            }
                        }
                    } else if ((0x200U & vlSelfRef.LD_uop
                                [4U][1U])) {
                        if ((0x100U & vlSelfRef.LD_uop
                             [4U][1U])) {
                            if ((0U == (3U & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                              >> 3U)))) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__isIllegalInstr_c = 1U;
                            }
                        } else if ((1U & (~ (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                             >> 2U)))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__isIllegalInstr_c = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr 
        = (((vlSelfRef.LD_uop[3U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [3U][4U] 
                                                >> 0x17U)) 
           + ((vlSelfRef.LD_uop[3U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [3U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr 
        = (((vlSelfRef.LD_uop[4U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [4U][4U] 
                                                >> 0x17U)) 
           + ((vlSelfRef.LD_uop[4U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [4U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall 
        = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [0U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall 
                = (1U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall 
        = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [1U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall 
                = (2U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall 
        = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [2U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall 
                = (4U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall 
        = (7U & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [3U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall 
                = (8U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall 
        = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [0U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall 
                = (1U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall 
        = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [1U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall 
                = (2U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall 
        = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [2U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall 
                = (4U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall 
        = (7U & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [3U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall 
                = (8U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall 
        = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((IData)(vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
                      & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                         [0U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall 
                = (1U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall 
        = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ (((IData)(vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
                       >> 1U) & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                 [1U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall 
                = (2U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall 
        = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ (((IData)(vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
                       >> 2U) & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                 [2U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall 
                = (4U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall 
        = (7U & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ (((IData)(vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
                       >> 3U) & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                 [3U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall 
                = (8U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall));
        }
    }
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0U] 
        = VTop__ConstPool__CONST_h997e551f_0[0U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[1U] 
        = VTop__ConstPool__CONST_h997e551f_0[1U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[2U] 
        = VTop__ConstPool__CONST_h997e551f_0[2U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[3U] 
        = VTop__ConstPool__CONST_h997e551f_0[3U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[4U] 
        = VTop__ConstPool__CONST_h997e551f_0[4U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[5U] 
        = VTop__ConstPool__CONST_h997e551f_0[5U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[6U] 
        = VTop__ConstPool__CONST_h997e551f_0[6U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[7U] 
        = VTop__ConstPool__CONST_h997e551f_0[7U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[8U] 
        = VTop__ConstPool__CONST_h997e551f_0[8U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[9U] 
        = VTop__ConstPool__CONST_h997e551f_0[9U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xaU] 
        = VTop__ConstPool__CONST_h997e551f_0[0xaU];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xbU] 
        = VTop__ConstPool__CONST_h997e551f_0[0xbU];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask = 0ULL;
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc = 0U;
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__we = 7U;
    cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2 
        = (1U | ((0x6000U & (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                             << 8U)) | (0x1ffeU & (
                                                   vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                                   >> 6U))));
    vlSelfRef.__PVT__cacheLineManager__DOT__forwardMiss 
        = ((IData)(vlSelfRef.__PVT__CLM_missReady) 
           & (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
              & ((6U != (0xfU & (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                 >> 1U))) & (2U != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                                 >> 1U))))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_h7888c631__0;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    vlSelfRef.__PVT__lsu__DOT__genblk1__DOT__startIdx 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__lsu__DOT__genblk1__DOT__startIdx))));
    vlSelfRef.__PVT__LS_uopLd[0U][0U] = 0U;
    vlSelfRef.__PVT__LS_uopLd[0U][1U] = 0U;
    vlSelfRef.__PVT__LS_uopLd[0U][2U] = 0U;
    vlSelfRef.__PVT__LS_uopLd[0U][3U] = 0U;
    vlSelfRef.__PVT__LS_uopLd[0U][0U] = (0xfffffffeU 
                                         & vlSelfRef.__PVT__LS_uopLd
                                         [0U][0U]);
    if ((1U & vlSelfRef.__PVT__LB_uopLd[0U][0U])) {
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = vlSelfRef.__PVT__LB_uopLd
            [0U][0U];
        vlSelfRef.__PVT__LS_uopLd[0U][1U] = vlSelfRef.__PVT__LB_uopLd
            [0U][1U];
        vlSelfRef.__PVT__LS_uopLd[0U][2U] = vlSelfRef.__PVT__LB_uopLd
            [0U][2U];
        vlSelfRef.__PVT__LS_uopLd[0U][3U] = vlSelfRef.__PVT__LB_uopLd
            [0U][3U];
    }
    if ((1U & (IData)(vlSelfRef.__PVT__PW_LD_uop[0U]))) {
        vlSelfRef.__PVT__LS_uopLd[0U][2U] = (0x1fU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][2U]);
        vlSelfRef.__PVT__LS_uopLd[0U][3U] = 0U;
        vlSelfRef.__PVT__LS_uopLd[0U][2U] = (0xffffffefU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][2U]);
        vlSelfRef.__PVT__LS_uopLd[0U][1U] = ((0xfU 
                                              & vlSelfRef.__PVT__LS_uopLd
                                              [0U][1U]) 
                                             | ((IData)(
                                                        (vlSelfRef.__PVT__PW_LD_uop
                                                         [0U] 
                                                         >> 1U)) 
                                                << 4U));
        vlSelfRef.__PVT__LS_uopLd[0U][2U] = ((0xfffffff0U 
                                              & vlSelfRef.__PVT__LS_uopLd
                                              [0U][2U]) 
                                             | ((IData)(
                                                        (vlSelfRef.__PVT__PW_LD_uop
                                                         [0U] 
                                                         >> 1U)) 
                                                >> 0x1cU));
        vlSelfRef.__PVT__LS_uopLd[0U][1U] = (0xfffffff7U 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][1U]);
        vlSelfRef.__PVT__LS_uopLd[0U][1U] = (4U | (0xfffffff9U 
                                                   & vlSelfRef.__PVT__LS_uopLd
                                                   [0U][1U]));
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = (0xfffff01fU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][0U]);
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = (0x40000U 
                                             | (0xfff80fffU 
                                                & vlSelfRef.__PVT__LS_uopLd
                                                [0U][0U]));
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = (0xfc07ffffU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][0U]);
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = (0x3ffffffU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][0U]);
        vlSelfRef.__PVT__LS_uopLd[0U][1U] = (0xfffffffeU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][1U]);
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = (8U | vlSelfRef.__PVT__LS_uopLd
                                             [0U][0U]);
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = (0xffffffefU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][0U]);
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = (4U | vlSelfRef.__PVT__LS_uopLd
                                             [0U][0U]);
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = (0xfffffffdU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [0U][0U]);
        vlSelfRef.__PVT__LS_uopLd[0U][0U] = ((0xfffffffeU 
                                              & vlSelfRef.__PVT__LS_uopLd
                                              [0U][0U]) 
                                             | (1U 
                                                & (IData)(
                                                          vlSelfRef.__PVT__PW_LD_uop
                                                          [0U])));
    }
    vlSelfRef.__PVT__LS_uopLd[1U][0U] = 0U;
    vlSelfRef.__PVT__LS_uopLd[1U][1U] = 0U;
    vlSelfRef.__PVT__LS_uopLd[1U][2U] = 0U;
    vlSelfRef.__PVT__LS_uopLd[1U][3U] = 0U;
    vlSelfRef.__PVT__LS_uopLd[1U][0U] = (0xfffffffeU 
                                         & vlSelfRef.__PVT__LS_uopLd
                                         [1U][0U]);
    if ((1U & vlSelfRef.__PVT__LB_uopLd[1U][0U])) {
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = vlSelfRef.__PVT__LB_uopLd
            [1U][0U];
        vlSelfRef.__PVT__LS_uopLd[1U][1U] = vlSelfRef.__PVT__LB_uopLd
            [1U][1U];
        vlSelfRef.__PVT__LS_uopLd[1U][2U] = vlSelfRef.__PVT__LB_uopLd
            [1U][2U];
        vlSelfRef.__PVT__LS_uopLd[1U][3U] = vlSelfRef.__PVT__LB_uopLd
            [1U][3U];
    }
    if ((1U & (IData)(vlSelfRef.__PVT__PW_LD_uop[1U]))) {
        vlSelfRef.__PVT__LS_uopLd[1U][2U] = (0x1fU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][2U]);
        vlSelfRef.__PVT__LS_uopLd[1U][3U] = 0U;
        vlSelfRef.__PVT__LS_uopLd[1U][2U] = (0xffffffefU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][2U]);
        vlSelfRef.__PVT__LS_uopLd[1U][1U] = ((0xfU 
                                              & vlSelfRef.__PVT__LS_uopLd
                                              [1U][1U]) 
                                             | ((IData)(
                                                        (vlSelfRef.__PVT__PW_LD_uop
                                                         [1U] 
                                                         >> 1U)) 
                                                << 4U));
        vlSelfRef.__PVT__LS_uopLd[1U][2U] = ((0xfffffff0U 
                                              & vlSelfRef.__PVT__LS_uopLd
                                              [1U][2U]) 
                                             | ((IData)(
                                                        (vlSelfRef.__PVT__PW_LD_uop
                                                         [1U] 
                                                         >> 1U)) 
                                                >> 0x1cU));
        vlSelfRef.__PVT__LS_uopLd[1U][1U] = (0xfffffff7U 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][1U]);
        vlSelfRef.__PVT__LS_uopLd[1U][1U] = (4U | (0xfffffff9U 
                                                   & vlSelfRef.__PVT__LS_uopLd
                                                   [1U][1U]));
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = (0xfffff01fU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][0U]);
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = (0x40000U 
                                             | (0xfff80fffU 
                                                & vlSelfRef.__PVT__LS_uopLd
                                                [1U][0U]));
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = (0xfc07ffffU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][0U]);
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = (0x3ffffffU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][0U]);
        vlSelfRef.__PVT__LS_uopLd[1U][1U] = (0xfffffffeU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][1U]);
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = (8U | vlSelfRef.__PVT__LS_uopLd
                                             [1U][0U]);
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = (0xffffffefU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][0U]);
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = (4U | vlSelfRef.__PVT__LS_uopLd
                                             [1U][0U]);
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = (0xfffffffdU 
                                             & vlSelfRef.__PVT__LS_uopLd
                                             [1U][0U]);
        vlSelfRef.__PVT__LS_uopLd[1U][0U] = ((0xfffffffeU 
                                              & vlSelfRef.__PVT__LS_uopLd
                                              [1U][0U]) 
                                             | (1U 
                                                & (IData)(
                                                          vlSelfRef.__PVT__PW_LD_uop
                                                          [1U])));
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[2U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = ((0x3ffffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]) 
           | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr 
              << 0x12U));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[2U] 
        = (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr 
           >> 0xeU);
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfe000007U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (0xfffffff8U & ((0x1fff800U & (vlSelfRef.LD_uop
                                            [3U][0U] 
                                            << 5U)) 
                             | ((0x700U & (vlSelfRef.LD_uop
                                           [3U][2U] 
                                           >> 0xcU)) 
                                | (0xf8U & (vlSelfRef.LD_uop
                                            [3U][0U] 
                                            >> 0x12U))))));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0x1ffffffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (0xfe000000U & ((vlSelfRef.LD_uop[3U][1U] 
                              << 0x1fU) | (0x7e000000U 
                                           & (vlSelfRef.LD_uop
                                              [3U][0U] 
                                              >> 1U)))));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = ((0xffffff80U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]) 
           | (0x7fU & (vlSelfRef.LD_uop[3U][1U] >> 1U)));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = (0xfffffeffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfffffffdU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (2U & vlSelfRef.LD_uop[3U][0U]));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (vlSelfRef.LD_uop[3U][0U] & ((3U == (0xfU 
                                                  & (vlSelfRef.LD_uop
                                                     [3U][0U] 
                                                     >> 2U))) 
                                          | (0xaU == 
                                             (0xfU 
                                              & (vlSelfRef.LD_uop
                                                 [3U][0U] 
                                                 >> 2U))))));
    if ((6U > (0x3fU & (vlSelfRef.LD_uop[3U][1U] >> 8U)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x200U | (0xfffff9ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
        if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelfRef.LD_uop[3U][1U])) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [3U][1U] >> 9U)))) {
                            if ((0x100U & vlSelfRef.LD_uop
                                 [3U][1U])) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x100U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x1000U | (0xffffc7ffU 
                                                  & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                            } else {
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x800U | (0xffffc7ffU 
                                                 & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = ((0xffffc7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]) 
                               | (((0x200U & vlSelfRef.LD_uop
                                    [3U][1U]) ? ((0x100U 
                                                  & vlSelfRef.LD_uop
                                                  [3U][1U])
                                                  ? 0U
                                                  : 2U)
                                    : ((0x100U & vlSelfRef.LD_uop
                                        [3U][1U]) ? 5U
                                        : 4U)) << 0xbU));
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x400U | (0xfffff9ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x1000U | (0xffffe7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
        if ((0x2000U & vlSelfRef.LD_uop[3U][1U])) {
            if ((0x1000U & vlSelfRef.LD_uop[3U][1U])) {
                if ((0x800U & vlSelfRef.LD_uop[3U][1U])) {
                    if ((0x37U != (0x3fU & (vlSelfRef.LD_uop
                                            [3U][1U] 
                                            >> 8U)))) {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                            = (4U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
                    }
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x200U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x1000U | (0xffffc7ffU & 
                                      vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                } else if ((0x400U & vlSelfRef.LD_uop
                            [3U][1U])) {
                    if ((0x200U & vlSelfRef.LD_uop[3U][1U])) {
                        if ((0x100U & vlSelfRef.LD_uop
                             [3U][1U])) {
                            if ((0x37U != (0x3fU & 
                                           (vlSelfRef.LD_uop
                                            [3U][1U] 
                                            >> 8U)))) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                    = (4U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
                            }
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x200U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x1000U | (0xffffc7ffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                             >> 0xcU)))) {
            if ((0x800U & vlSelfRef.LD_uop[3U][1U])) {
                if ((0x400U & vlSelfRef.LD_uop[3U][1U])) {
                    if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [3U][1U] >> 8U)))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0xfffc3fffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        }
                    }
                } else if ((0x200U & vlSelfRef.LD_uop
                            [3U][1U])) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0xfffc3fffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                } else if ((0x100U & vlSelfRef.LD_uop
                            [3U][1U])) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                } else {
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x800U | (0xffffe7ffU & 
                                     vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    if ((2U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr)) {
                        if ((2U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr)) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x30000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0xc000U | (0xfffc3fffU 
                                          & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    }
                }
            } else if ((0x400U & vlSelfRef.LD_uop[3U][1U])) {
                if ((0x200U & vlSelfRef.LD_uop[3U][1U])) {
                    if ((0x100U & vlSelfRef.LD_uop[3U][1U])) {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0xffffe7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        if ((0U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x4000U | (0xfffc3fffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((1U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x8000U | (0xfffc3fffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((2U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x10000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((3U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x20000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x40U | (0xffffff80U 
                                        & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[2U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = ((0x3ffffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]) 
           | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr 
              << 0x12U));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[2U] 
        = (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr 
           >> 0xeU);
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfe000007U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (0xfffffff8U & ((0x1fff800U & (vlSelfRef.LD_uop
                                            [4U][0U] 
                                            << 5U)) 
                             | ((0x700U & (vlSelfRef.LD_uop
                                           [4U][2U] 
                                           >> 0xcU)) 
                                | (0xf8U & (vlSelfRef.LD_uop
                                            [4U][0U] 
                                            >> 0x12U))))));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0x1ffffffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (0xfe000000U & ((vlSelfRef.LD_uop[4U][1U] 
                              << 0x1fU) | (0x7e000000U 
                                           & (vlSelfRef.LD_uop
                                              [4U][0U] 
                                              >> 1U)))));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = ((0xffffff80U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]) 
           | (0x7fU & (vlSelfRef.LD_uop[4U][1U] >> 1U)));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = (0xfffffeffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfffffffdU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (2U & vlSelfRef.LD_uop[4U][0U]));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (vlSelfRef.LD_uop[4U][0U] & ((3U == (0xfU 
                                                  & (vlSelfRef.LD_uop
                                                     [4U][0U] 
                                                     >> 2U))) 
                                          | (0xaU == 
                                             (0xfU 
                                              & (vlSelfRef.LD_uop
                                                 [4U][0U] 
                                                 >> 2U))))));
    if ((6U > (0x3fU & (vlSelfRef.LD_uop[4U][1U] >> 8U)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x200U | (0xfffff9ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
        if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelfRef.LD_uop[4U][1U])) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [4U][1U] >> 9U)))) {
                            if ((0x100U & vlSelfRef.LD_uop
                                 [4U][1U])) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x100U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x1000U | (0xffffc7ffU 
                                                  & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                            } else {
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x800U | (0xffffc7ffU 
                                                 & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = ((0xffffc7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]) 
                               | (((0x200U & vlSelfRef.LD_uop
                                    [4U][1U]) ? ((0x100U 
                                                  & vlSelfRef.LD_uop
                                                  [4U][1U])
                                                  ? 0U
                                                  : 2U)
                                    : ((0x100U & vlSelfRef.LD_uop
                                        [4U][1U]) ? 5U
                                        : 4U)) << 0xbU));
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x400U | (0xfffff9ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x1000U | (0xffffe7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
        if ((0x2000U & vlSelfRef.LD_uop[4U][1U])) {
            if ((0x1000U & vlSelfRef.LD_uop[4U][1U])) {
                if ((0x800U & vlSelfRef.LD_uop[4U][1U])) {
                    if ((0x37U != (0x3fU & (vlSelfRef.LD_uop
                                            [4U][1U] 
                                            >> 8U)))) {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                            = (4U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
                    }
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x200U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x1000U | (0xffffc7ffU & 
                                      vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                } else if ((0x400U & vlSelfRef.LD_uop
                            [4U][1U])) {
                    if ((0x200U & vlSelfRef.LD_uop[4U][1U])) {
                        if ((0x100U & vlSelfRef.LD_uop
                             [4U][1U])) {
                            if ((0x37U != (0x3fU & 
                                           (vlSelfRef.LD_uop
                                            [4U][1U] 
                                            >> 8U)))) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                    = (4U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
                            }
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x200U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x1000U | (0xffffc7ffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                             >> 0xcU)))) {
            if ((0x800U & vlSelfRef.LD_uop[4U][1U])) {
                if ((0x400U & vlSelfRef.LD_uop[4U][1U])) {
                    if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [4U][1U] >> 8U)))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0xfffc3fffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        }
                    }
                } else if ((0x200U & vlSelfRef.LD_uop
                            [4U][1U])) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0xfffc3fffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                } else if ((0x100U & vlSelfRef.LD_uop
                            [4U][1U])) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                } else {
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x800U | (0xffffe7ffU & 
                                     vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    if ((2U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr)) {
                        if ((2U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr)) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x30000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0xc000U | (0xfffc3fffU 
                                          & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    }
                }
            } else if ((0x400U & vlSelfRef.LD_uop[4U][1U])) {
                if ((0x200U & vlSelfRef.LD_uop[4U][1U])) {
                    if ((0x100U & vlSelfRef.LD_uop[4U][1U])) {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0xffffe7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        if ((0U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x4000U | (0xfffc3fffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((1U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x8000U | (0xfffc3fffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((2U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x10000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((3U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x20000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x40U | (0xffffff80U 
                                        & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__IQ_stalls = ((((IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall) 
                                    << 0x18U) | (((IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall) 
                                                  << 0x14U) 
                                                 | ((IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall) 
                                                    << 0x10U))) 
                                  | ((((IData)(vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall) 
                                       << 0xcU) | ((IData)(vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall) 
                                                   << 8U)) 
                                     | (((IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall) 
                                         << 4U) | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall))));
    vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c = 0ULL;
    if (((0U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state)) 
         & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__forwardMiss))) {
        if ((1U & (~ (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                      >> 4U)))) {
            if ((8U & vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U])) {
                if ((1U & (~ (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                              >> 2U)))) {
                    vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c 
                        = (QData)((IData)(cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2));
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                 >> 2U)))) {
                vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                           << 0xdU) 
                                          | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                             >> 0x13U))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0x8000U 
                                                     | (IData)(cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2)))));
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__flushDone)))) {
            vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c 
                = (((QData)((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__flushAssocIdx)) 
                    << 0xdU) | (QData)((IData)((1U 
                                                | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__flushIdx) 
                                                   << 7U)))));
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_dequeue = 0U;
    if ((1U & (~ (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                  & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free)))))) {
        if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U])) {
            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_dequeue = 1U;
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
        = (0xffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c);
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U]);
    if ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
         & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
            = ((0xfffc0U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c) 
               | ((((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__isIllegalInstr_c)
                     ? 6U : 0U) << 2U) | ((2U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                                 >> 1U)) 
                                          | (1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]))));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
            = ((0x3fU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c) 
               | (0xfffc0U & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                               << 0xdU) | (0x1fc0U 
                                           & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                              >> 0x13U)))));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[2U];
    } else if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U])) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
            = ((0xfffc0U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c) 
               | ((2U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
                         >> 1U)) | (1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U])));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
            = ((0x3fU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c) 
               | (0xfffc0U & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U] 
                               << 0xdU) | (0x1fc0U 
                                           & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
                                              >> 0x13U)))));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U];
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_dequeue = 0U;
    if ((1U & (~ (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                  & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free)))))) {
        if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U])) {
            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_dequeue = 1U;
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
        = (0xffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c);
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U]);
    if ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
         & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
            = ((0xfffc0U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c) 
               | ((((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__isIllegalInstr_c)
                     ? 6U : 0U) << 2U) | ((2U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                                 >> 1U)) 
                                          | (1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]))));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
            = ((0x3fU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c) 
               | (0xfffc0U & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                               << 0xdU) | (0x1fc0U 
                                           & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                              >> 0x13U)))));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[2U];
    } else if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U])) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
            = ((0xfffc0U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c) 
               | ((2U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
                         >> 1U)) | (1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U])));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
            = ((0x3fU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c) 
               | (0xfffc0U & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U] 
                               << 0xdU) | (0x1fc0U 
                                           & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
                                              >> 0x13U)))));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U];
    }
    vlSelfRef.__PVT__CLM_ctReadReady[0U] = 1U;
    vlSelfRef.__PVT__CLM_ctReadReady[1U] = 1U;
    vlSelfRef.__PVT__CLM_ctReadReady[2U] = 1U;
    if ((2U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state))) {
        vlSelfRef.__PVT__CLM_ctReadReady[0U] = 0U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c))) {
        vlSelfRef.__PVT__CLM_ctReadReady[0U] = 0U;
        vlSelfRef.__PVT__CLM_ctReadReady[1U] = 0U;
        vlSelfRef.__PVT__CLM_ctReadReady[2U] = 0U;
    }
    vlSelfRef.__PVT__lsu__DOT__idxs_c = ((2U & (((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__lsu__DOT__genblk1__DOT__startIdx)) 
                                                << 1U)) 
                                         | (IData)(vlSelfRef.__PVT__lsu__DOT__genblk1__DOT__startIdx));
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb 
        = ((0x1ffffeU & vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb) 
           | (IData)((((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                        >> 0x1eU) & (~ (IData)(vlSymsp->TOP.rst))) 
                      & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U])));
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb 
        = ((1U & vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb) 
           | (0x1ffffeU & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
                            << 3U) | (6U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                                            >> 0x1dU)))));
    __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp = 0U;
    __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp 
        = ((0x1ffeU & (IData)(__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp)) 
           | (1U & ((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U]) 
                     & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                        >> 9U)) & ((~ vlSelfRef.branch[0U]) 
                                   | VL_GTES_III(32, 0U, 
                                                 VL_EXTENDS_II(32,7, 
                                                               (0x7fU 
                                                                & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                     << 7U) 
                                                                    | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                       >> 0x19U)) 
                                                                   - 
                                                                   ((vlSelfRef.branch[0U] 
                                                                     << 0xbU) 
                                                                    | (vlSelfRef.branch[0U] 
                                                                       >> 0x15U))))))))));
    if ((1U & (IData)(__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp))) {
        __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp 
            = ((1U & (IData)(__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp)) 
               | (0x1ffeU & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                             >> 0x11U)));
    }
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb 
        = ((0x1ffffeU & vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb) 
           | (IData)((((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                        >> 0x1eU) & (~ (IData)(vlSymsp->TOP.rst))) 
                      & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U])));
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb 
        = ((1U & vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb) 
           | (0x1ffffeU & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
                            << 3U) | (6U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                                            >> 0x1dU)))));
    __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp = 0U;
    __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp 
        = ((0x1ffeU & (IData)(__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp)) 
           | (1U & ((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U]) 
                     & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                        >> 9U)) & ((~ vlSelfRef.branch[0U]) 
                                   | VL_GTES_III(32, 0U, 
                                                 VL_EXTENDS_II(32,7, 
                                                               (0x7fU 
                                                                & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                     << 7U) 
                                                                    | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                       >> 0x19U)) 
                                                                   - 
                                                                   ((vlSelfRef.branch[0U] 
                                                                     << 0xbU) 
                                                                    | (vlSelfRef.branch[0U] 
                                                                       >> 0x15U))))))))));
    if ((1U & (IData)(__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp))) {
        __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp 
            = ((1U & (IData)(__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp)) 
               | (0x1ffeU & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                             >> 0x11U)));
    }
    vlSelfRef.__PVT__TLB_rqs[0U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb;
    vlSelfRef.__PVT__AGU_eLdUOp[0U] = __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp;
    vlSelfRef.__PVT__TLB_rqs[1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb;
    vlSelfRef.__PVT__AGU_eLdUOp[1U] = __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp;
    vlSelfRef.__PVT__dtlb__DOT__inc = 0U;
    __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = (1U & (vlSelfRef.__PVT__TLB_rqs[0U] >> 1U));
    vlSelfRef.__PVT__TLB_res[0U] = 0U;
    vlSelfRef.__PVT__TLB_res[0U] = (0xfffff7fU & vlSelfRef.__PVT__TLB_res
                                    [0U]);
    vlSelfRef.__PVT__TLB_res[0U] = (0xfffffbfU & vlSelfRef.__PVT__TLB_res
                                    [0U]);
    vlSelfRef.__PVT__TLB_res[0U] = (0xffffffeU & vlSelfRef.__PVT__TLB_res
                                    [0U]);
    if ((1U & vlSelfRef.__PVT__TLB_rqs[0U])) {
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [0U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [0U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [0U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[0U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [0U]);
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [0U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [0U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [0U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [0U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((0U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [1U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [1U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [1U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [1U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[0U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [0U]);
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [1U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [1U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [0U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [1U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((1U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [2U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [2U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [2U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [2U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[0U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [0U]);
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [2U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [2U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [0U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [2U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((2U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [3U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [3U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [3U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [3U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[0U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [0U]);
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [3U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [3U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [0U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [3U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((3U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
    }
    __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = (1U & (vlSelfRef.__PVT__TLB_rqs[1U] >> 1U));
    vlSelfRef.__PVT__TLB_res[1U] = 0U;
    vlSelfRef.__PVT__TLB_res[1U] = (0xfffff7fU & vlSelfRef.__PVT__TLB_res
                                    [1U]);
    vlSelfRef.__PVT__TLB_res[1U] = (0xfffffbfU & vlSelfRef.__PVT__TLB_res
                                    [1U]);
    vlSelfRef.__PVT__TLB_res[1U] = (0xffffffeU & vlSelfRef.__PVT__TLB_res
                                    [1U]);
    if ((1U & vlSelfRef.__PVT__TLB_rqs[1U])) {
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [0U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [0U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [0U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [1U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [1U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[1U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [1U]);
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [0U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [0U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [1U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [0U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((0U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (2U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [1U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [1U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [1U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [1U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [1U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [1U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[1U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [1U]);
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [1U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [1U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [1U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [1U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((1U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (2U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [2U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [2U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [2U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [1U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [2U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [1U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[1U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [1U]);
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [2U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [2U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [1U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [2U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((2U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (2U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [3U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [3U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [3U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [1U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [3U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [1U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[1U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [1U]);
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [3U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [3U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [1U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [3U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((3U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (2U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
    }
    __PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx 
        = (1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c) 
                 >> 1U));
    vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[1U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[1U][3U] = 0U;
    if (vlSelfRef.__PVT__CLM_ctReadReady[1U]) {
        if ((1U & (vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                   & (((~ vlSelfRef.branch[0U]) | (
                                                   vlSelfRef.__PVT__LS_uopLd
                                                   [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                   >> 2U)) 
                      | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                          (0x7fU 
                                                           & (((vlSelfRef.__PVT__LS_uopLd
                                                                [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                                << 0x1bU) 
                                                               | (vlSelfRef.__PVT__LS_uopLd
                                                                  [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                                  >> 5U)) 
                                                              - 
                                                              ((vlSelfRef.branch[0U] 
                                                                << 0xbU) 
                                                               | (vlSelfRef.branch[0U] 
                                                                  >> 0x15U)))))))))) {
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U];
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][1U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][1U];
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][2U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][2U];
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][3U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][3U];
            vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[1U] = 1U;
        } else if ((1U & vlSelfRef.__PVT__AGU_eLdUOp
                    [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx])) {
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__selLd
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[1U] = 0U;
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
                = (0xfffffffbU & vlSelfRef.__PVT__lsu__DOT__selLd
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][1U] 
                = ((0xffff000fU & vlSelfRef.__PVT__lsu__DOT__selLd
                    [1U][1U]) | (0xfff0U & (vlSelfRef.__PVT__AGU_eLdUOp
                                            [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx] 
                                            << 3U)));
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__lsu__DOT__selLd
                   [1U][0U]);
        }
    }
    __PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx 
        = (1U & (IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c));
    vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[0U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[0U][3U] = 0U;
    if (vlSelfRef.__PVT__CLM_ctReadReady[0U]) {
        if ((1U & (vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                   & (((~ vlSelfRef.branch[0U]) | (
                                                   vlSelfRef.__PVT__LS_uopLd
                                                   [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                   >> 2U)) 
                      | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                          (0x7fU 
                                                           & (((vlSelfRef.__PVT__LS_uopLd
                                                                [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                                << 0x1bU) 
                                                               | (vlSelfRef.__PVT__LS_uopLd
                                                                  [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                                  >> 5U)) 
                                                              - 
                                                              ((vlSelfRef.branch[0U] 
                                                                << 0xbU) 
                                                               | (vlSelfRef.branch[0U] 
                                                                  >> 0x15U)))))))))) {
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U];
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][1U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][1U];
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][2U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][2U];
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][3U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][3U];
            vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[0U] = 1U;
        } else if ((1U & vlSelfRef.__PVT__AGU_eLdUOp
                    [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx])) {
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__selLd
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[0U] = 0U;
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
                = (0xfffffffbU & vlSelfRef.__PVT__lsu__DOT__selLd
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][1U] 
                = ((0xffff000fU & vlSelfRef.__PVT__lsu__DOT__selLd
                    [0U][1U]) | (0xfff0U & (vlSelfRef.__PVT__AGU_eLdUOp
                                            [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx] 
                                            << 3U)));
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__lsu__DOT__selLd
                   [0U][0U]);
        }
    }
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__re = 7U;
    lsu__DOT____Vlvbound_h519ab844__0 = (1U & (~ (vlSelfRef.__PVT__lsu__DOT__selLd
                                                  [0U][0U] 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__lsu__DOT__selLd
                                                      [0U][0U] 
                                                      >> 1U)))));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__re = ((6U 
                                                   & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re)) 
                                                  | (IData)(lsu__DOT____Vlvbound_h519ab844__0));
    lsu__DOT____Vlvbound_h519ab844__0 = (1U & (~ (vlSelfRef.__PVT__lsu__DOT__selLd
                                                  [1U][0U] 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__lsu__DOT__selLd
                                                      [1U][0U] 
                                                      >> 1U)))));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__re = ((5U 
                                                   & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re)) 
                                                  | ((IData)(lsu__DOT____Vlvbound_h519ab844__0) 
                                                     << 1U));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr = 0ULL;
    lsu__DOT____Vlvbound_hb4ca6dc7__0 = (0xfffU & (
                                                   vlSelfRef.__PVT__lsu__DOT__selLd
                                                   [0U][1U] 
                                                   >> 4U));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr = 
        ((0xffffff000ULL & vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr) 
         | (IData)((IData)(lsu__DOT____Vlvbound_hb4ca6dc7__0)));
    lsu__DOT____Vlvbound_hb4ca6dc7__0 = (0xfffU & (
                                                   vlSelfRef.__PVT__lsu__DOT__selLd
                                                   [1U][1U] 
                                                   >> 4U));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr = 
        ((0xfff000fffULL & vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr) 
         | ((QData)((IData)(lsu__DOT____Vlvbound_hb4ca6dc7__0)) 
            << 0xcU));
    if (vlSelfRef.__PVT__lsu__DOT__storeWriteToCache) {
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[8U] 
            = ((vlSelfRef.__PVT__lsu__DOT__stOps[1U][1U] 
                << 8U) | (vlSelfRef.__PVT__lsu__DOT__stOps
                          [1U][0U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[9U] 
            = ((vlSelfRef.__PVT__lsu__DOT__stOps[1U][2U] 
                << 8U) | (vlSelfRef.__PVT__lsu__DOT__stOps
                          [1U][1U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xaU] 
            = ((vlSelfRef.__PVT__lsu__DOT__stOps[1U][3U] 
                << 8U) | (vlSelfRef.__PVT__lsu__DOT__stOps
                          [1U][2U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xbU] 
            = ((vlSelfRef.__PVT__lsu__DOT__stOps[1U][4U] 
                << 8U) | (vlSelfRef.__PVT__lsu__DOT__stOps
                          [1U][3U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask 
            = ((0xffffffffULL & vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask) 
               | ((QData)((IData)((0xffffU & (vlSelfRef.__PVT__lsu__DOT__stOps
                                              [1U][0U] 
                                              >> 8U)))) 
                  << 0x20U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc 
            = ((0xfU & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc)) 
               | ((IData)(vlSelfRef.__PVT__lsu__DOT__storeWriteAssoc) 
                  << 4U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__we 
            = (3U & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__we));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__re 
            = (3U & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr 
            = ((0xffffffULL & vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr) 
               | ((QData)((IData)((0xfffU & ((vlSelfRef.__PVT__lsu__DOT__stOps
                                              [1U][5U] 
                                              << 8U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__stOps
                                                [1U][4U] 
                                                >> 0x18U))))) 
                  << 0x18U));
    }
}
