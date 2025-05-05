// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Core___ico_sequent__TOP__Top__soc__core__0(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___ico_sequent__TOP__Top__soc__core__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vlvbound_h6c6e4181__0;
    __Vlvbound_h6c6e4181__0 = 0;
    IData/*31:0*/ __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = 0;
    CData/*0:0*/ __Vlvbound_hc2f0efdf__0;
    __Vlvbound_hc2f0efdf__0 = 0;
    CData/*5:0*/ ld__DOT____Vlvbound_h3256ea86__0;
    ld__DOT____Vlvbound_h3256ea86__0 = 0;
    CData/*0:0*/ ld__DOT____Vlvbound_hd7824600__0;
    ld__DOT____Vlvbound_hd7824600__0 = 0;
    CData/*5:0*/ ld__DOT____Vlvbound_h4106c72c__0;
    ld__DOT____Vlvbound_h4106c72c__0 = 0;
    CData/*0:0*/ ld__DOT____Vlvbound_hf441be8f__0;
    ld__DOT____Vlvbound_hf441be8f__0 = 0;
    IData/*31:0*/ __PVT__pageWalker__DOT__unnamedblk2__DOT__pte;
    __PVT__pageWalker__DOT__unnamedblk2__DOT__pte = 0;
    CData/*0:0*/ lb__DOT____Vcellinp__invalMaskBrGen__IN_enable;
    lb__DOT____Vcellinp__invalMaskBrGen__IN_enable = 0;
    CData/*0:0*/ lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes;
    lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes = 0;
    SData/*15:0*/ __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates;
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates = 0;
    CData/*3:0*/ __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx;
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx = 0;
    CData/*0:0*/ __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflict;
    __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflict = 0;
    CData/*6:0*/ __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflictSqN;
    __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflictSqN = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active;
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
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
    CData/*0:0*/ __PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx;
    __PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx = 0;
    CData/*0:0*/ lsu__DOT__ohEnc__DOT____Vlvbound_hd3d84657__1;
    lsu__DOT__ohEnc__DOT____Vlvbound_hd3d84657__1 = 0;
    VlWide<3>/*73:0*/ __PVT__trapHandler__DOT__OUT_branch_c;
    VL_ZERO_W(74, __PVT__trapHandler__DOT__OUT_branch_c);
    CData/*2:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*2:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*2:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*0:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red = 0;
    CData/*2:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*0:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red = 0;
    CData/*2:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*0:0*/ __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx;
    __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx = 0;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx;
    __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx = 0;
    CData/*0:0*/ __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit;
    __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit = 0;
    CData/*0:0*/ __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx;
    __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx = 0;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx;
    __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx = 0;
    CData/*0:0*/ __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit;
    __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 = 0;
    // Body
    vlSymsp->TOP__Top__soc__core__rob.IN_interruptPending 
        = (1U & (vlSelfRef.CSR_trapControl[0U] >> 6U));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__flags = 0U;
    if (((0U == (0xfU & (vlSelfRef.LD_uop[0U][0U] >> 2U))) 
         & (0xbU == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                              >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__flags 
            = (0xfU & (vlSelfRef.LD_uop[0U][1U] >> 0xeU));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__flags = 0U;
    if (((0U == (0xfU & (vlSelfRef.LD_uop[1U][0U] >> 2U))) 
         & (0xbU == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                              >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__flags 
            = (0xfU & (vlSelfRef.LD_uop[1U][1U] >> 0xeU));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__flags = 0U;
    if (((0U == (0xfU & (vlSelfRef.LD_uop[2U][0U] >> 2U))) 
         & (0xbU == (0x3fU & (vlSelfRef.LD_uop[2U][1U] 
                              >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__flags 
            = (0xfU & (vlSelfRef.LD_uop[2U][1U] >> 0xeU));
    }
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[1U][0U] = 
        vlSelfRef.IS_uop[1U][0U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[1U][1U] = 
        vlSelfRef.IS_uop[1U][1U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[1U][2U] = 
        vlSelfRef.IS_uop[1U][2U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[1U][3U] = 
        vlSelfRef.IS_uop[1U][3U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[0U][0U] = 
        vlSelfRef.IS_uop[0U][0U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[0U][1U] = 
        vlSelfRef.IS_uop[0U][1U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[0U][2U] = 
        vlSelfRef.IS_uop[0U][2U];
    vlSelfRef.__Vcellinp__bsel__IN_isUOps[0U][3U] = 
        vlSelfRef.IS_uop[0U][3U];
    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__invalidateActiveLd 
        = (1U & (~ ((vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[0U] 
                     >> 2U) | ((~ vlSelfRef.branch[0U]) 
                               | VL_GTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[0U] 
                                                                 << 0x1bU) 
                                                                | (vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[0U] 
                                                                   >> 5U)) 
                                                               - 
                                                               ((vlSelfRef.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 0x15U))))))))));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [0U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0x3fffffc0U 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | (IData)(__Vlvbound_h6c6e4181__0));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [1U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0x3ffff03fU 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | ((IData)(__Vlvbound_h6c6e4181__0) 
                                           << 6U));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [2U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0x3ffc0fffU 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | ((IData)(__Vlvbound_h6c6e4181__0) 
                                           << 0xcU));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [3U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0x3f03ffffU 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | ((IData)(__Vlvbound_h6c6e4181__0) 
                                           << 0x12U));
    __Vlvbound_h6c6e4181__0 = (0x3fU & (IData)((vlSelfRef.resultUOps
                                                [4U] 
                                                >> 2U)));
    vlSelfRef.__PVT__RF_writeAddress = ((0xffffffU 
                                         & vlSelfRef.__PVT__RF_writeAddress) 
                                        | ((IData)(__Vlvbound_h6c6e4181__0) 
                                           << 0x18U));
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [0U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[0U] = __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [1U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[1U] = __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [2U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[2U] = __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [3U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[3U] = __Vlvbound_he342138a__0;
    __Vlvbound_he342138a__0 = (IData)((vlSelfRef.resultUOps
                                       [4U] >> 9U));
    vlSelfRef.__PVT__RF_writeData[4U] = __Vlvbound_he342138a__0;
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [0U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [0U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0x1eU & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | (IData)(__Vlvbound_hc2f0efdf__0));
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [1U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [1U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0x1dU & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | ((IData)(__Vlvbound_hc2f0efdf__0) 
                                          << 1U));
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [2U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [2U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0x1bU & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | ((IData)(__Vlvbound_hc2f0efdf__0) 
                                          << 2U));
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [3U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [3U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0x17U & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | ((IData)(__Vlvbound_hc2f0efdf__0) 
                                          << 3U));
    __Vlvbound_hc2f0efdf__0 = (1U & ((IData)(vlSelfRef.resultUOps
                                             [4U]) 
                                     & (~ (IData)((
                                                   vlSelfRef.resultUOps
                                                   [4U] 
                                                   >> 8U)))));
    vlSelfRef.__PVT__RF_writeEnable = ((0xfU & (IData)(vlSelfRef.__PVT__RF_writeEnable)) 
                                       | ((IData)(__Vlvbound_hc2f0efdf__0) 
                                          << 4U));
    vlSelfRef.__PVT__tvalSelect__DOT__invalidateCurTVal_c 
        = ((IData)(vlSelfRef.__PVT__tvalSelect__DOT__curTVal) 
           & (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                               (0x7fU 
                                                & ((IData)(vlSelfRef.ROB_curSqN) 
                                                   - (IData)(
                                                             (vlSelfRef.__PVT__tvalSelect__DOT__curTVal 
                                                              >> 1U)))))) 
              | (vlSelfRef.branch[0U] & VL_LTS_III(32, 0U, 
                                                   VL_EXTENDS_II(32,7, 
                                                                 (0x7fU 
                                                                  & ((IData)(
                                                                             (vlSelfRef.__PVT__tvalSelect__DOT__curTVal 
                                                                              >> 1U)) 
                                                                     - 
                                                                     ((vlSelfRef.branch[0U] 
                                                                       << 0xbU) 
                                                                      | (vlSelfRef.branch[0U] 
                                                                         >> 0x15U)))))))));
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][0U] 
        = vlSelfRef.RN_uop[3U][0U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][1U] 
        = vlSelfRef.RN_uop[3U][1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][2U] 
        = vlSelfRef.RN_uop[3U][2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][3U] 
        = vlSelfRef.RN_uop[3U][3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[3U][4U] 
        = vlSelfRef.RN_uop[3U][4U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][0U] 
        = vlSelfRef.RN_uop[2U][0U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][1U] 
        = vlSelfRef.RN_uop[2U][1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][2U] 
        = vlSelfRef.RN_uop[2U][2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][3U] 
        = vlSelfRef.RN_uop[2U][3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[2U][4U] 
        = vlSelfRef.RN_uop[2U][4U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][0U] 
        = vlSelfRef.RN_uop[1U][0U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][1U] 
        = vlSelfRef.RN_uop[1U][1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][2U] 
        = vlSelfRef.RN_uop[1U][2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][3U] 
        = vlSelfRef.RN_uop[1U][3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[1U][4U] 
        = vlSelfRef.RN_uop[1U][4U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][0U] 
        = vlSelfRef.RN_uop[0U][0U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][1U] 
        = vlSelfRef.RN_uop[0U][1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][2U] 
        = vlSelfRef.RN_uop[0U][2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][3U] 
        = vlSelfRef.RN_uop[0U][3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_uop[0U][4U] 
        = vlSelfRef.RN_uop[0U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][0U] 
        = vlSelfRef.LD_uop[4U][0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][1U] 
        = vlSelfRef.LD_uop[4U][1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][2U] 
        = vlSelfRef.LD_uop[4U][2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][3U] 
        = vlSelfRef.LD_uop[4U][3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][4U] 
        = vlSelfRef.LD_uop[4U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][5U] 
        = vlSelfRef.LD_uop[4U][5U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][0U] 
        = vlSelfRef.LD_uop[3U][0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][1U] 
        = vlSelfRef.LD_uop[3U][1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][2U] 
        = vlSelfRef.LD_uop[3U][2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][3U] 
        = vlSelfRef.LD_uop[3U][3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][4U] 
        = vlSelfRef.LD_uop[3U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][5U] 
        = vlSelfRef.LD_uop[3U][5U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][0U] 
        = vlSelfRef.LD_uop[4U][0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][1U] 
        = vlSelfRef.LD_uop[4U][1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][2U] 
        = vlSelfRef.LD_uop[4U][2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][3U] 
        = vlSelfRef.LD_uop[4U][3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][4U] 
        = vlSelfRef.LD_uop[4U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][5U] 
        = vlSelfRef.LD_uop[4U][5U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][0U] 
        = vlSelfRef.LD_uop[3U][0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][1U] 
        = vlSelfRef.LD_uop[3U][1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][2U] 
        = vlSelfRef.LD_uop[3U][2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][3U] 
        = vlSelfRef.LD_uop[3U][3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][4U] 
        = vlSelfRef.LD_uop[3U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][5U] 
        = vlSelfRef.LD_uop[3U][5U];
    lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes 
        = (IData)((0x41U == (0x41U & vlSelfRef.branch[0U])));
    lb__DOT____Vcellinp__invalMaskBrGen__IN_enable 
        = (vlSelfRef.branch[0U] & VL_GTS_III(32, 0x10U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.branch[0U] 
                                                                 << 0x19U) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 7U)) 
                                                               - (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))))));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates = 0U;
    vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = 0U;
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfffeU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (1U & (((IData)(vlSelfRef.__PVT__lb__DOT__entries
                             [0U]) & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [0U] 
                                                 >> 2U)))) 
                    & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                  [0U] >> 3U))))));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfffdU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (2U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                              [1U]) & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [1U] 
                                                  >> 2U)))) 
                     & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                   [1U] >> 3U)))) << 1U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfffbU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (4U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                              [2U]) & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [2U] 
                                                  >> 2U)))) 
                     & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                   [2U] >> 3U)))) << 2U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfff7U & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (8U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                              [3U]) & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [3U] 
                                                  >> 2U)))) 
                     & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                   [3U] >> 3U)))) << 3U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xffefU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x10U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                 [4U]) & (~ (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [4U] 
                                                     >> 2U)))) 
                        & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                      [4U] >> 3U)))) 
                       << 4U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xffdfU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x20U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                 [5U]) & (~ (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [5U] 
                                                     >> 2U)))) 
                        & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                      [5U] >> 3U)))) 
                       << 5U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xffbfU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x40U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                 [6U]) & (~ (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [6U] 
                                                     >> 2U)))) 
                        & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                      [6U] >> 3U)))) 
                       << 6U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xff7fU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x80U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                 [7U]) & (~ (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [7U] 
                                                     >> 2U)))) 
                        & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                      [7U] >> 3U)))) 
                       << 7U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfeffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x100U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                  [8U]) & (~ (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [8U] 
                                                      >> 2U)))) 
                         & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                       [8U] >> 3U)))) 
                        << 8U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfdffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x200U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                  [9U]) & (~ (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [9U] 
                                                      >> 2U)))) 
                         & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                       [9U] >> 3U)))) 
                        << 9U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfbffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x400U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                  [0xaU]) & (~ (IData)(
                                                       (vlSelfRef.__PVT__lb__DOT__entries
                                                        [0xaU] 
                                                        >> 2U)))) 
                         & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                       [0xaU] >> 3U)))) 
                        << 0xaU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xf7ffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x800U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                  [0xbU]) & (~ (IData)(
                                                       (vlSelfRef.__PVT__lb__DOT__entries
                                                        [0xbU] 
                                                        >> 2U)))) 
                         & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                       [0xbU] >> 3U)))) 
                        << 0xbU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xefffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x1000U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                   [0xcU]) & (~ (IData)(
                                                        (vlSelfRef.__PVT__lb__DOT__entries
                                                         [0xcU] 
                                                         >> 2U)))) 
                          & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                        [0xcU] >> 3U)))) 
                         << 0xcU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xdfffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x2000U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                   [0xdU]) & (~ (IData)(
                                                        (vlSelfRef.__PVT__lb__DOT__entries
                                                         [0xdU] 
                                                         >> 2U)))) 
                          & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                        [0xdU] >> 3U)))) 
                         << 0xdU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xbfffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x4000U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                   [0xeU]) & (~ (IData)(
                                                        (vlSelfRef.__PVT__lb__DOT__entries
                                                         [0xeU] 
                                                         >> 2U)))) 
                          & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                        [0xeU] >> 3U)))) 
                         << 0xeU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0x7fffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x8000U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                   [0xfU]) & (~ (IData)(
                                                        (vlSelfRef.__PVT__lb__DOT__entries
                                                         [0xfU] 
                                                         >> 2U)))) 
                          & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                        [0xfU] >> 3U)))) 
                         << 0xfU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(2U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(3U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(4U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(5U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(6U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(7U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(8U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(9U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xaU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xbU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xcU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xdU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xeU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xfU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [0U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    if (((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                   [(0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))]) 
           & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                         [(0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))] 
                         >> 2U)))) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                              [(0xfU 
                                                & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))] 
                                              >> 3U))) 
         & (((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
             == ([&]() {
                            vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__idx 
                                = (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN));
                            vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__hiBits 
                                = (7U & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
                                         >> 4U));
                            vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__rv 
                                = ((0x70U & ((((IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__idx) 
                                               >= (0xfU 
                                                   & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)))
                                               ? (IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__hiBits)
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__hiBits))) 
                                             << 4U)) 
                                   | (IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__idx));
                            vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__Vfuncout 
                                = vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__rv;
                        }(), (IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__Vfuncout))) 
            & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN) 
               == (IData)(vlSymsp->TOP__Top__soc__core__sq.baseIndex))))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [0U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[0U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [0U]) 
                                                 | (0x3cU 
                                                    & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
                                                       << 2U)));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates = 0U;
    vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = 0U;
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfffeU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (1U & (((IData)(vlSelfRef.__PVT__lb__DOT__entries
                             [0U]) & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [0U] 
                                                 >> 2U)))) 
                    & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                  [0U] >> 3U))))));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfffdU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (2U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                              [1U]) & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [1U] 
                                                  >> 2U)))) 
                     & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                   [1U] >> 3U)))) << 1U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfffbU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (4U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                              [2U]) & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [2U] 
                                                  >> 2U)))) 
                     & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                   [2U] >> 3U)))) << 2U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfff7U & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (8U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                              [3U]) & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [3U] 
                                                  >> 2U)))) 
                     & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                   [3U] >> 3U)))) << 3U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xffefU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x10U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                 [4U]) & (~ (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [4U] 
                                                     >> 2U)))) 
                        & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                      [4U] >> 3U)))) 
                       << 4U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xffdfU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x20U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                 [5U]) & (~ (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [5U] 
                                                     >> 2U)))) 
                        & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                      [5U] >> 3U)))) 
                       << 5U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xffbfU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x40U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                 [6U]) & (~ (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [6U] 
                                                     >> 2U)))) 
                        & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                      [6U] >> 3U)))) 
                       << 6U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xff7fU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x80U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                 [7U]) & (~ (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [7U] 
                                                     >> 2U)))) 
                        & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                      [7U] >> 3U)))) 
                       << 7U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfeffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x100U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                  [8U]) & (~ (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [8U] 
                                                      >> 2U)))) 
                         & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                       [8U] >> 3U)))) 
                        << 8U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfdffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x200U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                  [9U]) & (~ (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [9U] 
                                                      >> 2U)))) 
                         & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                       [9U] >> 3U)))) 
                        << 9U)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xfbffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x400U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                  [0xaU]) & (~ (IData)(
                                                       (vlSelfRef.__PVT__lb__DOT__entries
                                                        [0xaU] 
                                                        >> 2U)))) 
                         & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                       [0xaU] >> 3U)))) 
                        << 0xaU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xf7ffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x800U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                  [0xbU]) & (~ (IData)(
                                                       (vlSelfRef.__PVT__lb__DOT__entries
                                                        [0xbU] 
                                                        >> 2U)))) 
                         & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                       [0xbU] >> 3U)))) 
                        << 0xbU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xefffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x1000U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                   [0xcU]) & (~ (IData)(
                                                        (vlSelfRef.__PVT__lb__DOT__entries
                                                         [0xcU] 
                                                         >> 2U)))) 
                          & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                        [0xcU] >> 3U)))) 
                         << 0xcU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xdfffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x2000U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                   [0xdU]) & (~ (IData)(
                                                        (vlSelfRef.__PVT__lb__DOT__entries
                                                         [0xdU] 
                                                         >> 2U)))) 
                          & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                        [0xdU] >> 3U)))) 
                         << 0xdU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0xbfffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x4000U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                   [0xeU]) & (~ (IData)(
                                                        (vlSelfRef.__PVT__lb__DOT__entries
                                                         [0xeU] 
                                                         >> 2U)))) 
                          & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                        [0xeU] >> 3U)))) 
                         << 0xeU)));
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
        = ((0x7fffU & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates)) 
           | (0x8000U & ((((IData)(vlSelfRef.__PVT__lb__DOT__entries
                                   [0xfU]) & (~ (IData)(
                                                        (vlSelfRef.__PVT__lb__DOT__entries
                                                         [0xfU] 
                                                         >> 2U)))) 
                          & (~ (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                        [0xfU] >> 3U)))) 
                         << 0xfU)));
    if ((1U & vlSelfRef.__PVT__lb__DOT__ltIssue[0U])) {
        __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates 
            = ((~ ((IData)(1U) << (0xfU & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                           [0U] >> 2U)))) 
               & (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(2U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(3U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(4U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(5U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(6U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(7U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(8U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(9U) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xaU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xbU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xcU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xdU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xeU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx 
        = (0xfU & ((IData)(0xfU) + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    if ((1U & (((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates) 
                >> (IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx)) 
               & (~ vlSelfRef.__PVT__lb__DOT__ltIssue
                  [1U])))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | ((IData)(__PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx) 
                                                    << 2U));
    }
    if ((0U & (((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
                == ([&]() {
                            vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__idx 
                                = (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN));
                            vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__hiBits 
                                = (7U & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
                                         >> 4U));
                            vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__rv 
                                = ((0x70U & ((((IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__idx) 
                                               >= (0xfU 
                                                   & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)))
                                               ? (IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__hiBits)
                                               : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__hiBits))) 
                                             << 4U)) 
                                   | (IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__idx));
                            vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__Vfuncout 
                                = vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__rv;
                        }(), (IData)(vlSelfRef.__Vfunc_lb__DOT__GetLoadSqN__4__Vfuncout))) 
               & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN) 
                  == (IData)(vlSymsp->TOP__Top__soc__core__sq.baseIndex))))) {
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (0x3dU 
                                                 & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = (1U 
                                                 | vlSelfRef.__PVT__lb__DOT__ltIssue
                                                 [1U]);
        vlSelfRef.__PVT__lb__DOT__ltIssue[1U] = ((3U 
                                                  & vlSelfRef.__PVT__lb__DOT__ltIssue
                                                  [1U]) 
                                                 | (0x3cU 
                                                    & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
                                                       << 2U)));
    }
    vlSelfRef.__PVT__PC_readReq[0U] = ((0x3eU & vlSelfRef.__PVT__PC_readReq
                                        [0U]) | (1U 
                                                 & vlSelfRef.IS_uop
                                                 [0U][0U]));
    vlSelfRef.__PVT__PC_readReq[0U] = ((1U & vlSelfRef.__PVT__PC_readReq
                                        [0U]) | (0x3eU 
                                                 & (vlSelfRef.IS_uop
                                                    [0U][0U] 
                                                    >> 0x16U)));
    vlSelfRef.__PVT__PC_readReq[1U] = ((0x3eU & vlSelfRef.__PVT__PC_readReq
                                        [1U]) | (1U 
                                                 & vlSelfRef.IS_uop
                                                 [1U][0U]));
    vlSelfRef.__PVT__PC_readReq[1U] = ((1U & vlSelfRef.__PVT__PC_readReq
                                        [1U]) | (0x3eU 
                                                 & (vlSelfRef.IS_uop
                                                    [1U][0U] 
                                                    >> 0x16U)));
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][0U] 
        = vlSelfRef.RN_uop[3U][0U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][1U] 
        = vlSelfRef.RN_uop[3U][1U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][2U] 
        = vlSelfRef.RN_uop[3U][2U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][3U] 
        = vlSelfRef.RN_uop[3U][3U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][4U] 
        = vlSelfRef.RN_uop[3U][4U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][0U] 
        = vlSelfRef.RN_uop[2U][0U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][1U] 
        = vlSelfRef.RN_uop[2U][1U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][2U] 
        = vlSelfRef.RN_uop[2U][2U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][3U] 
        = vlSelfRef.RN_uop[2U][3U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][4U] 
        = vlSelfRef.RN_uop[2U][4U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][0U] 
        = vlSelfRef.RN_uop[1U][0U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][1U] 
        = vlSelfRef.RN_uop[1U][1U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][2U] 
        = vlSelfRef.RN_uop[1U][2U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][3U] 
        = vlSelfRef.RN_uop[1U][3U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][4U] 
        = vlSelfRef.RN_uop[1U][4U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][0U] 
        = vlSelfRef.RN_uop[0U][0U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][1U] 
        = vlSelfRef.RN_uop[0U][1U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][2U] 
        = vlSelfRef.RN_uop[0U][2U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][3U] 
        = vlSelfRef.RN_uop[0U][3U];
    vlSelfRef.genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][4U] 
        = vlSelfRef.RN_uop[0U][4U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][0U] 
        = vlSelfRef.RN_uop[3U][0U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][1U] 
        = vlSelfRef.RN_uop[3U][1U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][2U] 
        = vlSelfRef.RN_uop[3U][2U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][3U] 
        = vlSelfRef.RN_uop[3U][3U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][4U] 
        = vlSelfRef.RN_uop[3U][4U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][0U] 
        = vlSelfRef.RN_uop[2U][0U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][1U] 
        = vlSelfRef.RN_uop[2U][1U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][2U] 
        = vlSelfRef.RN_uop[2U][2U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][3U] 
        = vlSelfRef.RN_uop[2U][3U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][4U] 
        = vlSelfRef.RN_uop[2U][4U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][0U] 
        = vlSelfRef.RN_uop[1U][0U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][1U] 
        = vlSelfRef.RN_uop[1U][1U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][2U] 
        = vlSelfRef.RN_uop[1U][2U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][3U] 
        = vlSelfRef.RN_uop[1U][3U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][4U] 
        = vlSelfRef.RN_uop[1U][4U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][0U] 
        = vlSelfRef.RN_uop[0U][0U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][1U] 
        = vlSelfRef.RN_uop[0U][1U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][2U] 
        = vlSelfRef.RN_uop[0U][2U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][3U] 
        = vlSelfRef.RN_uop[0U][3U];
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][4U] 
        = vlSelfRef.RN_uop[0U][4U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][0U] 
        = vlSelfRef.RN_uop[3U][0U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][1U] 
        = vlSelfRef.RN_uop[3U][1U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][2U] 
        = vlSelfRef.RN_uop[3U][2U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][3U] 
        = vlSelfRef.RN_uop[3U][3U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][4U] 
        = vlSelfRef.RN_uop[3U][4U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][0U] 
        = vlSelfRef.RN_uop[2U][0U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][1U] 
        = vlSelfRef.RN_uop[2U][1U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][2U] 
        = vlSelfRef.RN_uop[2U][2U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][3U] 
        = vlSelfRef.RN_uop[2U][3U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][4U] 
        = vlSelfRef.RN_uop[2U][4U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][0U] 
        = vlSelfRef.RN_uop[1U][0U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][1U] 
        = vlSelfRef.RN_uop[1U][1U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][2U] 
        = vlSelfRef.RN_uop[1U][2U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][3U] 
        = vlSelfRef.RN_uop[1U][3U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][4U] 
        = vlSelfRef.RN_uop[1U][4U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][0U] 
        = vlSelfRef.RN_uop[0U][0U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][1U] 
        = vlSelfRef.RN_uop[0U][1U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][2U] 
        = vlSelfRef.RN_uop[0U][2U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][3U] 
        = vlSelfRef.RN_uop[0U][3U];
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][4U] 
        = vlSelfRef.RN_uop[0U][4U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][0U] 
        = vlSelfRef.RN_uop[3U][0U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][1U] 
        = vlSelfRef.RN_uop[3U][1U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][2U] 
        = vlSelfRef.RN_uop[3U][2U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][3U] 
        = vlSelfRef.RN_uop[3U][3U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][4U] 
        = vlSelfRef.RN_uop[3U][4U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][0U] 
        = vlSelfRef.RN_uop[2U][0U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][1U] 
        = vlSelfRef.RN_uop[2U][1U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][2U] 
        = vlSelfRef.RN_uop[2U][2U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][3U] 
        = vlSelfRef.RN_uop[2U][3U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][4U] 
        = vlSelfRef.RN_uop[2U][4U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][0U] 
        = vlSelfRef.RN_uop[1U][0U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][1U] 
        = vlSelfRef.RN_uop[1U][1U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][2U] 
        = vlSelfRef.RN_uop[1U][2U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][3U] 
        = vlSelfRef.RN_uop[1U][3U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][4U] 
        = vlSelfRef.RN_uop[1U][4U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][0U] 
        = vlSelfRef.RN_uop[0U][0U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][1U] 
        = vlSelfRef.RN_uop[0U][1U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][2U] 
        = vlSelfRef.RN_uop[0U][2U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][3U] 
        = vlSelfRef.RN_uop[0U][3U];
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][4U] 
        = vlSelfRef.RN_uop[0U][4U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][0U] 
        = vlSelfRef.RN_uop[3U][0U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][1U] 
        = vlSelfRef.RN_uop[3U][1U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][2U] 
        = vlSelfRef.RN_uop[3U][2U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][3U] 
        = vlSelfRef.RN_uop[3U][3U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[3U][4U] 
        = vlSelfRef.RN_uop[3U][4U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][0U] 
        = vlSelfRef.RN_uop[2U][0U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][1U] 
        = vlSelfRef.RN_uop[2U][1U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][2U] 
        = vlSelfRef.RN_uop[2U][2U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][3U] 
        = vlSelfRef.RN_uop[2U][3U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[2U][4U] 
        = vlSelfRef.RN_uop[2U][4U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][0U] 
        = vlSelfRef.RN_uop[1U][0U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][1U] 
        = vlSelfRef.RN_uop[1U][1U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][2U] 
        = vlSelfRef.RN_uop[1U][2U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][3U] 
        = vlSelfRef.RN_uop[1U][3U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[1U][4U] 
        = vlSelfRef.RN_uop[1U][4U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][0U] 
        = vlSelfRef.RN_uop[0U][0U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][1U] 
        = vlSelfRef.RN_uop[0U][1U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][2U] 
        = vlSelfRef.RN_uop[0U][2U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][3U] 
        = vlSelfRef.RN_uop[0U][3U];
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[0U][4U] 
        = vlSelfRef.RN_uop[0U][4U];
    vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp[1U] 
        = vlSelfRef.resultUOps[4U];
    vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp[0U] 
        = vlSelfRef.resultUOps[3U];
    vlSelfRef.__PVT__trapHandler__DOT__OUT_fence_c = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__OUT_clearICache_c = 0U;
    __PVT__trapHandler__DOT__OUT_branch_c[0U] = 0U;
    __PVT__trapHandler__DOT__OUT_branch_c[1U] = 0U;
    __PVT__trapHandler__DOT__OUT_branch_c[2U] = 0U;
    __PVT__trapHandler__DOT__OUT_branch_c[0U] = (0xfffffffeU 
                                                 & __PVT__trapHandler__DOT__OUT_branch_c[0U]);
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U] = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]);
    vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__OUT_flushTLB_c = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__setMemoryWait = 0U;
    vlSelfRef.__PVT__trapHandler__DOT__OUT_dbgStallPC_c 
        = vlSelfRef.__PVT__TH_stallPC;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (IData)(vlSelfRef.ROB_trapUOp))) {
            if (((~ (IData)((vlSelfRef.ROB_trapUOp 
                             >> 0x2fU))) & ((((4U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.ROB_trapUOp 
                                                           >> 0x2bU)))) 
                                              | (5U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.ROB_trapUOp 
                                                             >> 0x2bU))))) 
                                             | (0xeU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.ROB_trapUOp 
                                                            >> 0x2bU))))) 
                                            | (IData)(
                                                      (0x380000003c00ULL 
                                                       == 
                                                       (0x780000007c00ULL 
                                                        & vlSelfRef.ROB_trapUOp)))))) {
                if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                   >> 0x2eU)))) {
                    if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                       >> 0x2dU)))) {
                        if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                           >> 0x2cU)))) {
                            if ((1U & (~ (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2bU))))) {
                                __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                                    = (0x39fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]);
                                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                                    = ((0xfffffffU 
                                        & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                                       | (0xe0000000U 
                                          & (vlSelfRef.CSR_trapControl[3U] 
                                             << 0x16U)));
                                __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                                    = ((0xf0000000U 
                                        & __PVT__trapHandler__DOT__OUT_branch_c[1U]) 
                                       | (0xfffffffU 
                                          & ((0xfc00000U 
                                              & (vlSelfRef.CSR_trapControl[4U] 
                                                 << 0x16U)) 
                                             | (vlSelfRef.CSR_trapControl[3U] 
                                                >> 0xaU))));
                            }
                        }
                    }
                } else if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                          >> 0x2dU)))) {
                    if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                       >> 0x2cU)))) {
                        if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                           >> 0x2bU)))) {
                            vlSelfRef.__PVT__trapHandler__DOT__OUT_flushTLB_c = 1U;
                            __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                                = (0x20U | (0x39fU 
                                            & __PVT__trapHandler__DOT__OUT_branch_c[2U]));
                        }
                    } else if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                              >> 0x2bU)))) {
                        __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                            = (0x20U | (0x39fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]));
                    } else {
                        vlSelfRef.__PVT__trapHandler__DOT__OUT_clearICache_c = 1U;
                        vlSelfRef.__PVT__trapHandler__DOT__setMemoryWait = 1U;
                        vlSelfRef.__PVT__trapHandler__DOT__OUT_fence_c = 1U;
                        __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                            = (0x20U | (0x39fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]));
                    }
                }
                if (((0xeU == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                               >> 0x2bU)))) 
                     | (5U == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                               >> 0x2bU)))))) {
                    if ((0x40U & vlSelfRef.CSR_trapControl[0U])) {
                        vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                            = (1U | vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]);
                        __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                            = (0x39fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]);
                        vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                            = (0xffU & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]);
                        vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] 
                            = (0xffffff00U & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U]);
                        __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                            = ((0xfffffffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                               | (0xf0000000U & (((1U 
                                                   & vlSelfRef.CSR_trapControl[0U])
                                                   ? 
                                                  ((vlSelfRef.CSR_trapControl[2U] 
                                                    << 0x16U) 
                                                   | (vlSelfRef.CSR_trapControl[1U] 
                                                      >> 0xaU))
                                                   : 
                                                  ((vlSelfRef.CSR_trapControl[3U] 
                                                    << 0x17U) 
                                                   | (vlSelfRef.CSR_trapControl[2U] 
                                                      >> 9U))) 
                                                 << 0x1eU)));
                        __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                            = ((0xf0000000U & __PVT__trapHandler__DOT__OUT_branch_c[1U]) 
                               | (0xfffffffU & (((1U 
                                                  & vlSelfRef.CSR_trapControl[0U])
                                                  ? 
                                                 ((vlSelfRef.CSR_trapControl[2U] 
                                                   << 0x16U) 
                                                  | (vlSelfRef.CSR_trapControl[1U] 
                                                     >> 0xaU))
                                                  : 
                                                 ((vlSelfRef.CSR_trapControl[3U] 
                                                   << 0x17U) 
                                                  | (vlSelfRef.CSR_trapControl[2U] 
                                                     >> 9U))) 
                                                >> 2U)));
                        if ((0xeU == (0xfU & (IData)(
                                                     (vlSelfRef.ROB_trapUOp 
                                                      >> 0x2bU))))) {
                            vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] 
                                = ((0xffU & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U]) 
                                   | (0xfffffe00U & 
                                      (vlSelfRef.CSR_trapControl[3U] 
                                       << 2U)));
                            vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U] 
                                = (0xffU & ((0xfcU 
                                             & (vlSelfRef.CSR_trapControl[4U] 
                                                << 2U)) 
                                            | (vlSelfRef.CSR_trapControl[3U] 
                                               >> 0x1eU)));
                            vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c = 0U;
                        } else {
                            vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] 
                                = (0xffU & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U]);
                            vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U] = 0U;
                            vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c = 1U;
                        }
                        vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                            = ((0xffffff01U & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]) 
                               | (0xfffffffeU & (0x80U 
                                                 | (0x7eU 
                                                    & (vlSelfRef.CSR_trapControl[0U] 
                                                       << 1U)))));
                    }
                }
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = (1U | __PVT__trapHandler__DOT__OUT_branch_c[0U]);
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xf01fffffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xfe00000U & ((IData)((vlSelfRef.ROB_trapUOp 
                                                 >> 0x1dU)) 
                                        << 0x15U)));
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xffe0003fU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xffffffc0U & (0x40U | ((0x1fc000U 
                                                   & ((IData)(
                                                              (vlSelfRef.ROB_trapUOp 
                                                               >> 0xfU)) 
                                                      << 0xeU)) 
                                                  | (0x3f80U 
                                                     & ((IData)(
                                                                (vlSelfRef.ROB_trapUOp 
                                                                 >> 0x16U)) 
                                                        << 7U))))));
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xffffffc1U & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0x3eU & ((IData)((vlSelfRef.ROB_trapUOp 
                                            >> 2U)) 
                                   << 1U)));
                __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                    = (0xfffffffU & __PVT__trapHandler__DOT__OUT_branch_c[1U]);
                __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                    = ((0x3e0U & __PVT__trapHandler__DOT__OUT_branch_c[2U]) 
                       | (0xeU & ((IData)((vlSelfRef.ROB_trapUOp 
                                           >> 7U)) 
                                  << 1U)));
                __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                    = (0x7fU & __PVT__trapHandler__DOT__OUT_branch_c[2U]);
            } else if ((1U & ((IData)((vlSelfRef.ROB_trapUOp 
                                       >> 0x2fU)) | 
                              ((6U <= (0xfU & (IData)(
                                                      (vlSelfRef.ROB_trapUOp 
                                                       >> 0x2bU)))) 
                               & (0xdU >= (0xfU & (IData)(
                                                          (vlSelfRef.ROB_trapUOp 
                                                           >> 0x2bU)))))))) {
                vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = 2U;
                vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c 
                    = ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                      >> 1U))) ? 2U
                        : 3U);
                vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt 
                    = (IData)((0x380000004000ULL == 
                               (0xf80000007c00ULL & vlSelfRef.ROB_trapUOp)));
                if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                   >> 0x2fU)))) {
                    vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = 0x18U;
                } else if (vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt) {
                    vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause 
                        = (0x1fU & (vlSelfRef.CSR_trapControl[0U] 
                                    >> 1U));
                } else {
                    if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                       >> 0x2eU)))) {
                        if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                           >> 0x2dU)))) {
                            if ((1U & (~ (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2cU))))) {
                                vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause 
                                    = ((1U & (IData)(
                                                     (vlSelfRef.ROB_trapUOp 
                                                      >> 0x2bU)))
                                        ? 0xfU : 7U);
                            }
                        } else {
                            vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause 
                                = ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2cU)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.ROB_trapUOp 
                                                      >> 0x2bU)))
                                        ? 6U : 0xdU)
                                    : ((1U & (IData)(
                                                     (vlSelfRef.ROB_trapUOp 
                                                      >> 0x2bU)))
                                        ? 5U : 4U));
                        }
                    } else if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                              >> 0x2dU)))) {
                        if ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                           >> 0x2cU)))) {
                            vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause 
                                = ((1U & (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2bU)))
                                    ? (0x1fU & (IData)(
                                                       (vlSelfRef.ROB_trapUOp 
                                                        >> 0xaU)))
                                    : 2U);
                        }
                    }
                    if ((0xbU == (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause))) {
                        if ((1U == (3U & (vlSelfRef.CSR_trapControl[0U] 
                                          >> 7U)))) {
                            vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = 9U;
                        } else if ((0U == (3U & (vlSelfRef.CSR_trapControl[0U] 
                                                 >> 7U)))) {
                            vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = 8U;
                        }
                    }
                }
                vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate 
                    = (((0xfU >= (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)) 
                        & (3U != (3U & (vlSelfRef.CSR_trapControl[0U] 
                                        >> 7U)))) & 
                       ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt)
                         ? ((0x85U >= ((IData)(9U) 
                                       + (0xfU & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)))) 
                            && (1U & (vlSelfRef.CSR_trapControl[
                                      (((IData)(9U) 
                                        + (0xfU & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(9U) 
                                                      + 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)))))))
                         : ((0x85U >= ((IData)(0x19U) 
                                       + (0xfU & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)))) 
                            && (1U & (vlSelfRef.CSR_trapControl[
                                      (((IData)(0x19U) 
                                        + (0xfU & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x19U) 
                                                      + 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause)))))))));
                vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                    = (1U | vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]);
                vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U] 
                    = ((1U & vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U]) 
                       | (((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt) 
                           << 7U) | (((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause) 
                                      << 2U) | ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate) 
                                                << 1U))));
                vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U] 
                    = ((1U & ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt) 
                              >> 0x19U)) | ((1U & ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause) 
                                                   >> 0x1eU)) 
                                            | ((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate) 
                                               >> 0x1fU)));
                vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U] = 0U;
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = (1U | __PVT__trapHandler__DOT__OUT_branch_c[0U]);
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xfffffffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xf0000000U & (((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate)
                                           ? ((vlSelfRef.CSR_trapControl[2U] 
                                               << 0x16U) 
                                              | (vlSelfRef.CSR_trapControl[1U] 
                                                 >> 0xaU))
                                           : ((vlSelfRef.CSR_trapControl[3U] 
                                               << 0x17U) 
                                              | (vlSelfRef.CSR_trapControl[2U] 
                                                 >> 9U))) 
                                         << 0x1eU)));
                __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                    = ((0xf0000000U & __PVT__trapHandler__DOT__OUT_branch_c[1U]) 
                       | (0xfffffffU & (((IData)(vlSelfRef.__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate)
                                          ? ((vlSelfRef.CSR_trapControl[2U] 
                                              << 0x16U) 
                                             | (vlSelfRef.CSR_trapControl[1U] 
                                                >> 0xaU))
                                          : ((vlSelfRef.CSR_trapControl[3U] 
                                              << 0x17U) 
                                             | (vlSelfRef.CSR_trapControl[2U] 
                                                >> 9U))) 
                                        >> 2U)));
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xf01fffffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xfe00000U & ((IData)((vlSelfRef.ROB_trapUOp 
                                                 >> 0x1dU)) 
                                        << 0x15U)));
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xffe0003fU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0xffffffc0U & (0x40U | ((0x1fc000U 
                                                   & ((IData)(
                                                              (vlSelfRef.ROB_trapUOp 
                                                               >> 0xfU)) 
                                                      << 0xeU)) 
                                                  | (0x3f80U 
                                                     & ((IData)(
                                                                (vlSelfRef.ROB_trapUOp 
                                                                 >> 0x16U)) 
                                                        << 7U))))));
                if ((((0xbU == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                                >> 0x2bU)))) 
                      | (0xcU == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                                  >> 0x2bU))))) 
                     | (0xdU == (0xfU & (IData)((vlSelfRef.ROB_trapUOp 
                                                 >> 0x2bU)))))) {
                    __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                        = ((0xffe03fffU & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                           | (0x1fc000U & (((IData)(
                                                    (vlSelfRef.ROB_trapUOp 
                                                     >> 0xfU)) 
                                            - (IData)(1U)) 
                                           << 0xeU)));
                }
                __PVT__trapHandler__DOT__OUT_branch_c[0U] 
                    = ((0xffffffc1U & __PVT__trapHandler__DOT__OUT_branch_c[0U]) 
                       | (0x3eU & ((IData)((vlSelfRef.ROB_trapUOp 
                                            >> 2U)) 
                                   << 1U)));
                __PVT__trapHandler__DOT__OUT_branch_c[1U] 
                    = (0xfffffffU & __PVT__trapHandler__DOT__OUT_branch_c[1U]);
                __PVT__trapHandler__DOT__OUT_branch_c[2U] 
                    = (0xeU & ((IData)((vlSelfRef.ROB_trapUOp 
                                        >> 7U)) << 1U));
            } else {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0xfU != (0xfU 
                                               & (IData)(
                                                         (vlSelfRef.ROB_trapUOp 
                                                          >> 0x2bU))))))) {
                        VL_WRITEF_NX("[%0t] %%Error: TrapHandler.sv:242: Assertion failed in %NTop.soc.core.trapHandler: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/TrapHandler.sv", 242, "");
                    }
                }
                vlSelfRef.__PVT__trapHandler__DOT__OUT_dbgStallPC_c 
                    = vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0;
            }
        }
    }
    __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflict = 0U;
    __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflictSqN = 0U;
    vlSelfRef.__Vcellout__lb__OUT_branch[0U] = 0U;
    vlSelfRef.__Vcellout__lb__OUT_branch[1U] = 0U;
    vlSelfRef.__Vcellout__lb__OUT_branch[2U] = 0U;
    vlSelfRef.__Vcellout__lb__OUT_branch[0U] = (0xfffffffeU 
                                                & vlSelfRef.__Vcellout__lb__OUT_branch[0U]);
    if ((1U & ((vlSelfRef.__PVT__AGU_uop[0U][0U] & 
                (vlSelfRef.__PVT__AGU_uop[0U][1U] >> 0xaU)) 
               & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,7, 
                                                                       (0x7fU 
                                                                        & (((vlSelfRef.__PVT__AGU_uop
                                                                             [0U][0U] 
                                                                             << 7U) 
                                                                            | (vlSelfRef.__PVT__AGU_uop
                                                                               [0U][0U] 
                                                                               >> 0x19U)) 
                                                                           - 
                                                                           ((vlSelfRef.branch[0U] 
                                                                             << 0xbU) 
                                                                            | (vlSelfRef.branch[0U] 
                                                                               >> 0x15U)))))))))) {
        if ((1U & ((vlSelfRef.__PVT__lb__DOT__storeIsConflict
                    [0U] | ((vlSelfRef.__PVT__AGU_uop
                             [0U][1U] >> 8U) & (~ vlSelfRef.__PVT__lb__DOT__storeHasRsv
                                                [0U]))) 
                   & ((~ (IData)(__PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflict)) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                         (0x7fU 
                                                          & (((vlSelfRef.__PVT__AGU_uop
                                                               [0U][0U] 
                                                               << 7U) 
                                                              | (vlSelfRef.__PVT__AGU_uop
                                                                 [0U][0U] 
                                                                 >> 0x19U)) 
                                                             - (IData)(__PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflictSqN))))))))) {
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = (1U | vlSelfRef.__Vcellout__lb__OUT_branch[0U]);
            __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflict = 1U;
            __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflictSqN 
                = (vlSelfRef.__PVT__AGU_uop[0U][0U] 
                   >> 0x19U);
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = ((0x1fffffU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                   | ((IData)((QData)((IData)((vlSelfRef.__PVT__AGU_uop
                                               [0U][0U] 
                                               >> 0x19U)))) 
                      << 0x15U));
            vlSelfRef.__Vcellout__lb__OUT_branch[1U] 
                = ((0xf0000000U & vlSelfRef.__Vcellout__lb__OUT_branch[1U]) 
                   | (((IData)((QData)((IData)((vlSelfRef.__PVT__AGU_uop
                                                [0U][0U] 
                                                >> 0x19U)))) 
                       >> 0xbU) | ((IData)(((QData)((IData)(
                                                            (vlSelfRef.__PVT__AGU_uop
                                                             [0U][0U] 
                                                             >> 0x19U))) 
                                            >> 0x20U)) 
                                   << 0x15U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = ((0xffffc07fU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                   | (0x3f80U & ((((vlSelfRef.__PVT__AGU_uop
                                    [0U][0U] << 0x15U) 
                                   | (vlSelfRef.__PVT__AGU_uop
                                      [0U][0U] >> 0xbU)) 
                                  + ((1U & ((vlSelfRef.__PVT__AGU_uop
                                             [0U][1U] 
                                             >> 9U) 
                                            & (vlSelfRef.__PVT__AGU_uop
                                               [0U][1U] 
                                               >> 0xaU)))
                                      ? 1U : 0U)) << 7U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = ((0xffe03fffU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                   | (0x1fc000U & (vlSelfRef.__PVT__AGU_uop
                                   [0U][0U] >> 4U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = ((0xffffffc1U & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                   | (0x3eU & (vlSelfRef.__PVT__AGU_uop
                               [0U][0U] >> 2U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                = ((0x3f1U & vlSelfRef.__Vcellout__lb__OUT_branch[2U]) 
                   | (0xeU & (vlSelfRef.__PVT__AGU_uop
                              [0U][0U] >> 7U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = (0xffffffbfU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]);
            vlSelfRef.__Vcellout__lb__OUT_branch[1U] 
                = (0xfffffffU & vlSelfRef.__Vcellout__lb__OUT_branch[1U]);
            vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                = (0x3feU & vlSelfRef.__Vcellout__lb__OUT_branch[2U]);
            vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                = (0x2a0U | (0xfU & vlSelfRef.__Vcellout__lb__OUT_branch[2U]));
            if ((1U & ((vlSelfRef.__PVT__AGU_uop[0U][1U] 
                        >> 8U) & (~ vlSelfRef.__PVT__lb__DOT__storeHasRsv
                                  [0U])))) {
                vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                    = ((0xf01fffffU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                       | (0xfe00000U & ((((vlSelfRef.__PVT__AGU_uop
                                           [0U][0U] 
                                           << 7U) | 
                                          (vlSelfRef.__PVT__AGU_uop
                                           [0U][0U] 
                                           >> 0x19U)) 
                                         - (IData)(1U)) 
                                        << 0x15U)));
                vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                    = ((0xffe03fffU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                       | (0x1fc000U & ((((vlSelfRef.__PVT__AGU_uop
                                          [0U][0U] 
                                          << 0xeU) 
                                         | (vlSelfRef.__PVT__AGU_uop
                                            [0U][0U] 
                                            >> 0x12U)) 
                                        - (IData)(1U)) 
                                       << 0xeU)));
                vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                    = (0x10U | vlSelfRef.__Vcellout__lb__OUT_branch[2U]);
                vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                    = ((0x39fU & vlSelfRef.__Vcellout__lb__OUT_branch[2U]) 
                       | (0x3ffU & (((2U & vlSelfRef.__PVT__AGU_uop
                                      [0U][0U]) ? 2U
                                      : 3U) << 5U)));
            }
        }
    }
    if ((1U & ((vlSelfRef.__PVT__AGU_uop[1U][0U] & 
                (vlSelfRef.__PVT__AGU_uop[1U][1U] >> 0xaU)) 
               & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,7, 
                                                                       (0x7fU 
                                                                        & (((vlSelfRef.__PVT__AGU_uop
                                                                             [1U][0U] 
                                                                             << 7U) 
                                                                            | (vlSelfRef.__PVT__AGU_uop
                                                                               [1U][0U] 
                                                                               >> 0x19U)) 
                                                                           - 
                                                                           ((vlSelfRef.branch[0U] 
                                                                             << 0xbU) 
                                                                            | (vlSelfRef.branch[0U] 
                                                                               >> 0x15U)))))))))) {
        if ((1U & ((vlSelfRef.__PVT__lb__DOT__storeIsConflict
                    [1U] | ((vlSelfRef.__PVT__AGU_uop
                             [1U][1U] >> 8U) & (~ vlSelfRef.__PVT__lb__DOT__storeHasRsv
                                                [1U]))) 
                   & ((~ (IData)(__PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflict)) 
                      | VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                         (0x7fU 
                                                          & (((vlSelfRef.__PVT__AGU_uop
                                                               [1U][0U] 
                                                               << 7U) 
                                                              | (vlSelfRef.__PVT__AGU_uop
                                                                 [1U][0U] 
                                                                 >> 0x19U)) 
                                                             - (IData)(__PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflictSqN))))))))) {
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = (1U | vlSelfRef.__Vcellout__lb__OUT_branch[0U]);
            __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflict = 1U;
            __PVT__lb__DOT__unnamedblk17__DOT__prevStoreConflictSqN 
                = (vlSelfRef.__PVT__AGU_uop[1U][0U] 
                   >> 0x19U);
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = ((0x1fffffU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                   | ((IData)((QData)((IData)((vlSelfRef.__PVT__AGU_uop
                                               [1U][0U] 
                                               >> 0x19U)))) 
                      << 0x15U));
            vlSelfRef.__Vcellout__lb__OUT_branch[1U] 
                = ((0xf0000000U & vlSelfRef.__Vcellout__lb__OUT_branch[1U]) 
                   | (((IData)((QData)((IData)((vlSelfRef.__PVT__AGU_uop
                                                [1U][0U] 
                                                >> 0x19U)))) 
                       >> 0xbU) | ((IData)(((QData)((IData)(
                                                            (vlSelfRef.__PVT__AGU_uop
                                                             [1U][0U] 
                                                             >> 0x19U))) 
                                            >> 0x20U)) 
                                   << 0x15U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = ((0xffffc07fU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                   | (0x3f80U & ((((vlSelfRef.__PVT__AGU_uop
                                    [1U][0U] << 0x15U) 
                                   | (vlSelfRef.__PVT__AGU_uop
                                      [1U][0U] >> 0xbU)) 
                                  + ((1U & ((vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 9U) 
                                            & (vlSelfRef.__PVT__AGU_uop
                                               [1U][1U] 
                                               >> 0xaU)))
                                      ? 1U : 0U)) << 7U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = ((0xffe03fffU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                   | (0x1fc000U & (vlSelfRef.__PVT__AGU_uop
                                   [1U][0U] >> 4U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = ((0xffffffc1U & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                   | (0x3eU & (vlSelfRef.__PVT__AGU_uop
                               [1U][0U] >> 2U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                = ((0x3f1U & vlSelfRef.__Vcellout__lb__OUT_branch[2U]) 
                   | (0xeU & (vlSelfRef.__PVT__AGU_uop
                              [1U][0U] >> 7U)));
            vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                = (0xffffffbfU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]);
            vlSelfRef.__Vcellout__lb__OUT_branch[1U] 
                = (0xfffffffU & vlSelfRef.__Vcellout__lb__OUT_branch[1U]);
            vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                = (0x3feU & vlSelfRef.__Vcellout__lb__OUT_branch[2U]);
            vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                = (0x2a0U | (0xfU & vlSelfRef.__Vcellout__lb__OUT_branch[2U]));
            if ((1U & ((vlSelfRef.__PVT__AGU_uop[1U][1U] 
                        >> 8U) & (~ vlSelfRef.__PVT__lb__DOT__storeHasRsv
                                  [1U])))) {
                vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                    = ((0xf01fffffU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                       | (0xfe00000U & ((((vlSelfRef.__PVT__AGU_uop
                                           [1U][0U] 
                                           << 7U) | 
                                          (vlSelfRef.__PVT__AGU_uop
                                           [1U][0U] 
                                           >> 0x19U)) 
                                         - (IData)(1U)) 
                                        << 0x15U)));
                vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                    = ((0xffe03fffU & vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                       | (0x1fc000U & ((((vlSelfRef.__PVT__AGU_uop
                                          [1U][0U] 
                                          << 0xeU) 
                                         | (vlSelfRef.__PVT__AGU_uop
                                            [1U][0U] 
                                            >> 0x12U)) 
                                        - (IData)(1U)) 
                                       << 0xeU)));
                vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                    = (0x10U | vlSelfRef.__Vcellout__lb__OUT_branch[2U]);
                vlSelfRef.__Vcellout__lb__OUT_branch[2U] 
                    = ((0x39fU & vlSelfRef.__Vcellout__lb__OUT_branch[2U]) 
                       | (0x3ffU & (((2U & vlSelfRef.__PVT__AGU_uop
                                      [1U][0U]) ? 2U
                                      : 3U) << 5U)));
            }
        }
    }
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
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst = 0U;
    if ((((8U == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                           >> 8U))) || (9U == (0x3fU 
                                               & (vlSelfRef.LD_uop
                                                  [0U][1U] 
                                                  >> 8U)))) 
         || (0xaU == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                               >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
            = (((vlSelfRef.LD_uop[0U][5U] << 9U) | 
                (vlSelfRef.LD_uop[0U][4U] >> 0x17U)) 
               + (((- (IData)((1U & (vlSelfRef.LD_uop
                                     [0U][1U] >> 0x19U)))) 
                   << 0xcU) | (0xfffU & (vlSelfRef.LD_uop
                                         [0U][1U] >> 0xeU))));
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst);
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect 
            = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                >> 1U) == (0x7fffffffU & ((vlSelfRef.LD_uop
                                           [0U][4U] 
                                           << 8U) | 
                                          (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x18U))));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst = 0U;
    if ((((8U == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                           >> 8U))) || (9U == (0x3fU 
                                               & (vlSelfRef.LD_uop
                                                  [1U][1U] 
                                                  >> 8U)))) 
         || (0xaU == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                               >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
            = (((vlSelfRef.LD_uop[1U][5U] << 9U) | 
                (vlSelfRef.LD_uop[1U][4U] >> 0x17U)) 
               + (((- (IData)((1U & (vlSelfRef.LD_uop
                                     [1U][1U] >> 0x19U)))) 
                   << 0xcU) | (0xfffU & (vlSelfRef.LD_uop
                                         [1U][1U] >> 0xeU))));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect 
            = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                >> 1U) == (0x7fffffffU & ((vlSelfRef.LD_uop
                                           [1U][4U] 
                                           << 8U) | 
                                          (vlSelfRef.LD_uop
                                           [1U][3U] 
                                           >> 0x18U))));
    }
    if ((1U == (0xfU & (vlSelfRef.LD_uop[0U][0U] >> 2U)))) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch 
            = ((((((2U == (0x3fU & (vlSelfRef.LD_uop
                                    [0U][1U] >> 8U))) 
                   | (3U == (0x3fU & (vlSelfRef.LD_uop
                                      [0U][1U] >> 8U)))) 
                  | (4U == (0x3fU & (vlSelfRef.LD_uop
                                     [0U][1U] >> 8U)))) 
                 | (5U == (0x3fU & (vlSelfRef.LD_uop
                                    [0U][1U] >> 8U)))) 
                | (6U == (0x3fU & (vlSelfRef.LD_uop
                                   [0U][1U] >> 8U)))) 
               | (7U == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                                  >> 8U))));
    }
    if ((1U == (0xfU & (vlSelfRef.LD_uop[1U][0U] >> 2U)))) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch 
            = ((((((2U == (0x3fU & (vlSelfRef.LD_uop
                                    [1U][1U] >> 8U))) 
                   | (3U == (0x3fU & (vlSelfRef.LD_uop
                                      [1U][1U] >> 8U)))) 
                  | (4U == (0x3fU & (vlSelfRef.LD_uop
                                     [1U][1U] >> 8U)))) 
                 | (5U == (0x3fU & (vlSelfRef.LD_uop
                                    [1U][1U] >> 8U)))) 
                | (6U == (0x3fU & (vlSelfRef.LD_uop
                                   [1U][1U] >> 8U)))) 
               | (7U == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                                  >> 8U))));
    }
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd, 
                    ((vlSelfRef.LD_uop[0U][0U] & ([&]() {
                        vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__fu 
                            = (0xfU & (vlSelfRef.LD_uop
                                       [0U][0U] >> 2U));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__rv 
                            = (0U != (0x403U & ((IData)(1U) 
                                                << (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__fu))));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__Vfuncout 
                            = vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__Vfuncout))) 
                     & (~ (vlSelfRef.LD_uop[0U][1U] 
                           >> 7U))));
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd, 
                    ((vlSelfRef.LD_uop[1U][0U] & ([&]() {
                        vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__fu 
                            = (0xfU & (vlSelfRef.LD_uop
                                       [1U][0U] >> 2U));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__rv 
                            = (0U != (0x403U & ((IData)(1U) 
                                                << (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__fu))));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__Vfuncout 
                            = vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__Vfuncout))) 
                     & (~ (vlSelfRef.LD_uop[1U][1U] 
                           >> 7U))));
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd, 
                    ((vlSelfRef.LD_uop[2U][0U] & ([&]() {
                        vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__fu 
                            = (0xfU & (vlSelfRef.LD_uop
                                       [2U][0U] >> 2U));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__rv 
                            = (0U != (5U & ((IData)(1U) 
                                            << (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__fu))));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__Vfuncout 
                            = vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__Vfuncout))) 
                     & (~ (vlSelfRef.LD_uop[2U][1U] 
                           >> 7U))));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           + ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           ^ ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           | ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           & ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           << (0x1fU & (vlSelfRef.LD_uop[0U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           >> (0x1fU & (vlSelfRef.LD_uop[0U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           + ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           ^ ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           | ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           & ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           << (0x1fU & (vlSelfRef.LD_uop[1U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           >> (0x1fU & (vlSelfRef.LD_uop[1U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           + ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           ^ ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           | ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           & ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           << (0x1fU & (vlSelfRef.LD_uop[2U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           >> (0x1fU & (vlSelfRef.LD_uop[2U][3U] >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
        = (((vlSelfRef.LD_uop[0U][3U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][2U] 
                                                >> 0x17U)) 
           - ((2U & vlSelfRef.LD_uop[0U][0U]) ? 0U : 2U));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
        = (((vlSelfRef.LD_uop[1U][3U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][2U] 
                                                >> 0x17U)) 
           - ((2U & vlSelfRef.LD_uop[1U][0U]) ? 0U : 2U));
    __PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx 
        = (1U & (IData)(vlSelfRef.__PVT__lsu__DOT__idxs_r));
    vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] = vlSelfRef.__PVT__lsu__DOT__ldOps
        [0U][0U][0U];
    vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][1U] = vlSelfRef.__PVT__lsu__DOT__ldOps
        [0U][0U][1U];
    vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][2U] = vlSelfRef.__PVT__lsu__DOT__ldOps
        [0U][0U][2U];
    vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][3U] = vlSelfRef.__PVT__lsu__DOT__ldOps
        [0U][0U][3U];
    if ((1U & (vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] 
               & (~ vlSelfRef.__PVT__lsu__DOT__selLdSrc_r
                  [0U])))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ (((IData)(vlSymsp->TOP.rst) 
                                        | (~ vlSelfRef.__PVT__LB_aguUOpLd
                                           [__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][0U])) 
                                       | ((0xfffU & 
                                           (vlSelfRef.__PVT__LB_aguUOpLd
                                            [__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][1U] 
                                            >> 4U)) 
                                          == (0xfffU 
                                              & (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                 [0U][1U] 
                                                 >> 4U))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: LoadStoreUnit.sv:266: Assertion failed in %NTop.soc.core.lsu.unnamedblk11.unnamedblk12: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("src/LoadStoreUnit.sv", 266, "");
            }
        }
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][3U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__lsu__DOT__ldOps_0
               [0U][0U]);
        if ((1U & vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][0U])) {
            vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] 
                = vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][0U];
            vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][1U] 
                = vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][1U];
            vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][2U] 
                = vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][2U];
            vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][3U] 
                = vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][3U];
        }
    }
    __PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx 
        = (1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__idxs_r) 
                 >> 1U));
    vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][0U] = vlSelfRef.__PVT__lsu__DOT__ldOps
        [1U][0U][0U];
    vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][1U] = vlSelfRef.__PVT__lsu__DOT__ldOps
        [1U][0U][1U];
    vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][2U] = vlSelfRef.__PVT__lsu__DOT__ldOps
        [1U][0U][2U];
    vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][3U] = vlSelfRef.__PVT__lsu__DOT__ldOps
        [1U][0U][3U];
    if ((1U & (vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][0U] 
               & (~ vlSelfRef.__PVT__lsu__DOT__selLdSrc_r
                  [1U])))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ (((IData)(vlSymsp->TOP.rst) 
                                        | (~ vlSelfRef.__PVT__LB_aguUOpLd
                                           [__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][0U])) 
                                       | ((0xfffU & 
                                           (vlSelfRef.__PVT__LB_aguUOpLd
                                            [__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][1U] 
                                            >> 4U)) 
                                          == (0xfffU 
                                              & (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                 [1U][1U] 
                                                 >> 4U))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: LoadStoreUnit.sv:266: Assertion failed in %NTop.soc.core.lsu.unnamedblk11.unnamedblk12: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("src/LoadStoreUnit.sv", 266, "");
            }
        }
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][3U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__lsu__DOT__ldOps_0
               [1U][0U]);
        if ((1U & vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][0U])) {
            vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][0U] 
                = vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][0U];
            vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][1U] 
                = vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][1U];
            vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][2U] 
                = vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][2U];
            vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][3U] 
                = vlSelfRef.__PVT__LB_aguUOpLd[__PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx][3U];
        }
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffffcU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (3U & ((1U & (vlSelfRef.LD_uop[0U][4U] 
                           >> 0x17U)) + (1U & (vlSelfRef.LD_uop
                                               [0U][4U] 
                                               >> 0x18U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffff3U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xcU & (((1U & (vlSelfRef.LD_uop[0U][4U] 
                              >> 0x19U)) + (1U & (vlSelfRef.LD_uop
                                                  [0U][4U] 
                                                  >> 0x1aU))) 
                      << 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffffcfU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30U & (((1U & (vlSelfRef.LD_uop[0U][4U] 
                               >> 0x1bU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x1cU))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffff3fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0U & (((1U & (vlSelfRef.LD_uop[0U][4U] 
                               >> 0x1dU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x1eU))) 
                       << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffcffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300U & (((vlSelfRef.LD_uop[0U][4U] 
                          >> 0x1fU) + (1U & vlSelfRef.LD_uop
                                       [0U][5U])) << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffff3ffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                >> 1U)) + (1U & (vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 >> 2U))) 
                        << 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffcfffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                 >> 3U)) + (1U & (vlSelfRef.LD_uop
                                                  [0U][5U] 
                                                  >> 4U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffff3fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                 >> 5U)) + (1U & (vlSelfRef.LD_uop
                                                  [0U][5U] 
                                                  >> 6U))) 
                         << 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffcffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                  >> 7U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][5U] 
                                                   >> 8U))) 
                          << 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfff3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0000U & (((1U & (vlSelfRef.LD_uop[0U][5U] 
                                  >> 9U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][5U] 
                                                   >> 0xaU))) 
                          << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffcfffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300000U & (((1U & (vlSelfRef.LD_uop
                                   [0U][5U] >> 0xbU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [0U][5U] >> 0xcU))) 
                           << 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xff3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00000U & (((1U & (vlSelfRef.LD_uop
                                   [0U][5U] >> 0xdU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [0U][5U] >> 0xeU))) 
                           << 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfcffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000000U & (((1U & (vlSelfRef.LD_uop
                                    [0U][5U] >> 0xfU)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [0U][5U] >> 0x10U))) 
                            << 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xf3ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000000U & (((1U & (vlSelfRef.LD_uop
                                    [0U][5U] >> 0x11U)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [0U][5U] >> 0x12U))) 
                            << 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xcfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000000U & (((1U & (vlSelfRef.LD_uop
                                     [0U][5U] >> 0x13U)) 
                              + (1U & (vlSelfRef.LD_uop
                                       [0U][5U] >> 0x14U))) 
                             << 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (((1U & (vlSelfRef.LD_uop[0U][5U] >> 0x15U)) 
               + (1U & (vlSelfRef.LD_uop[0U][5U] >> 0x16U))) 
              << 0x1eU));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffffcU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (3U & ((1U & (vlSelfRef.LD_uop[1U][4U] 
                           >> 0x17U)) + (1U & (vlSelfRef.LD_uop
                                               [1U][4U] 
                                               >> 0x18U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffff3U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xcU & (((1U & (vlSelfRef.LD_uop[1U][4U] 
                              >> 0x19U)) + (1U & (vlSelfRef.LD_uop
                                                  [1U][4U] 
                                                  >> 0x1aU))) 
                      << 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffffcfU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30U & (((1U & (vlSelfRef.LD_uop[1U][4U] 
                               >> 0x1bU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x1cU))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffff3fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0U & (((1U & (vlSelfRef.LD_uop[1U][4U] 
                               >> 0x1dU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x1eU))) 
                       << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffcffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300U & (((vlSelfRef.LD_uop[1U][4U] 
                          >> 0x1fU) + (1U & vlSelfRef.LD_uop
                                       [1U][5U])) << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffff3ffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                >> 1U)) + (1U & (vlSelfRef.LD_uop
                                                 [1U][5U] 
                                                 >> 2U))) 
                        << 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffcfffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                 >> 3U)) + (1U & (vlSelfRef.LD_uop
                                                  [1U][5U] 
                                                  >> 4U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffff3fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                 >> 5U)) + (1U & (vlSelfRef.LD_uop
                                                  [1U][5U] 
                                                  >> 6U))) 
                         << 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffcffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                  >> 7U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][5U] 
                                                   >> 8U))) 
                          << 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfff3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0000U & (((1U & (vlSelfRef.LD_uop[1U][5U] 
                                  >> 9U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][5U] 
                                                   >> 0xaU))) 
                          << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffcfffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300000U & (((1U & (vlSelfRef.LD_uop
                                   [1U][5U] >> 0xbU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [1U][5U] >> 0xcU))) 
                           << 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xff3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00000U & (((1U & (vlSelfRef.LD_uop
                                   [1U][5U] >> 0xdU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [1U][5U] >> 0xeU))) 
                           << 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfcffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000000U & (((1U & (vlSelfRef.LD_uop
                                    [1U][5U] >> 0xfU)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [1U][5U] >> 0x10U))) 
                            << 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xf3ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000000U & (((1U & (vlSelfRef.LD_uop
                                    [1U][5U] >> 0x11U)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [1U][5U] >> 0x12U))) 
                            << 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xcfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000000U & (((1U & (vlSelfRef.LD_uop
                                     [1U][5U] >> 0x13U)) 
                              + (1U & (vlSelfRef.LD_uop
                                       [1U][5U] >> 0x14U))) 
                             << 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (((1U & (vlSelfRef.LD_uop[1U][5U] >> 0x15U)) 
               + (1U & (vlSelfRef.LD_uop[1U][5U] >> 0x16U))) 
              << 0x1eU));
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[3U] 
        = vlSelfRef.comUOps[3U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[2U] 
        = vlSelfRef.comUOps[2U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[1U] 
        = vlSelfRef.comUOps[1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[0U] 
        = vlSelfRef.comUOps[0U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThan 
        = VL_LTS_III(32, ((vlSelfRef.LD_uop[2U][5U] 
                           << 9U) | (vlSelfRef.LD_uop
                                     [2U][4U] >> 0x17U)), 
                     ((vlSelfRef.LD_uop[2U][4U] << 9U) 
                      | (vlSelfRef.LD_uop[2U][3U] >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           < ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan 
        = VL_LTS_III(32, ((vlSelfRef.LD_uop[0U][5U] 
                           << 9U) | (vlSelfRef.LD_uop
                                     [0U][4U] >> 0x17U)), 
                     ((vlSelfRef.LD_uop[0U][4U] << 9U) 
                      | (vlSelfRef.LD_uop[0U][3U] >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           < ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan 
        = VL_LTS_III(32, ((vlSelfRef.LD_uop[1U][5U] 
                           << 9U) | (vlSelfRef.LD_uop
                                     [1U][4U] >> 0x17U)), 
                     ((vlSelfRef.LD_uop[1U][4U] << 9U) 
                      | (vlSelfRef.LD_uop[1U][3U] >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           < ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv 
        = (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running) 
            & ((0U != (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt)) 
               & (0x3fU != (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt)))) 
           | ((vlSelfRef.LD_uop[0U][0U] & (5U == (0xfU 
                                                  & (vlSelfRef.LD_uop
                                                     [0U][0U] 
                                                     >> 2U)))) 
              | (IData)((0x15U == (0x3dU & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U])))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffffcU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (3U & ((1U & (vlSelfRef.LD_uop[2U][4U] 
                           >> 0x17U)) + (1U & (vlSelfRef.LD_uop
                                               [2U][4U] 
                                               >> 0x18U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffff3U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xcU & (((1U & (vlSelfRef.LD_uop[2U][4U] 
                              >> 0x19U)) + (1U & (vlSelfRef.LD_uop
                                                  [2U][4U] 
                                                  >> 0x1aU))) 
                      << 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffffcfU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30U & (((1U & (vlSelfRef.LD_uop[2U][4U] 
                               >> 0x1bU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x1cU))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffff3fU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0U & (((1U & (vlSelfRef.LD_uop[2U][4U] 
                               >> 0x1dU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x1eU))) 
                       << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffcffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300U & (((vlSelfRef.LD_uop[2U][4U] 
                          >> 0x1fU) + (1U & vlSelfRef.LD_uop
                                       [2U][5U])) << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffff3ffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                >> 1U)) + (1U & (vlSelfRef.LD_uop
                                                 [2U][5U] 
                                                 >> 2U))) 
                        << 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffcfffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                 >> 3U)) + (1U & (vlSelfRef.LD_uop
                                                  [2U][5U] 
                                                  >> 4U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffff3fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                 >> 5U)) + (1U & (vlSelfRef.LD_uop
                                                  [2U][5U] 
                                                  >> 6U))) 
                         << 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffcffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                  >> 7U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][5U] 
                                                   >> 8U))) 
                          << 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfff3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0000U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                  >> 9U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][5U] 
                                                   >> 0xaU))) 
                          << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffcfffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300000U & (((1U & (vlSelfRef.LD_uop
                                   [2U][5U] >> 0xbU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [2U][5U] >> 0xcU))) 
                           << 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xff3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00000U & (((1U & (vlSelfRef.LD_uop
                                   [2U][5U] >> 0xdU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [2U][5U] >> 0xeU))) 
                           << 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfcffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000000U & (((1U & (vlSelfRef.LD_uop
                                    [2U][5U] >> 0xfU)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [2U][5U] >> 0x10U))) 
                            << 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xf3ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000000U & (((1U & (vlSelfRef.LD_uop
                                    [2U][5U] >> 0x11U)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [2U][5U] >> 0x12U))) 
                            << 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xcfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000000U & (((1U & (vlSelfRef.LD_uop
                                     [2U][5U] >> 0x13U)) 
                              + (1U & (vlSelfRef.LD_uop
                                       [2U][5U] >> 0x14U))) 
                             << 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (((1U & (vlSelfRef.LD_uop[2U][5U] >> 0x15U)) 
               + (1U & (vlSelfRef.LD_uop[2U][5U] >> 0x16U))) 
              << 0x1eU));
    vlSelfRef.frontendEn = (VL_GTES_III(32, 0xfffffffcU, 
                                        VL_EXTENDS_II(32,7, 
                                                      (0x7fU 
                                                       & ((IData)(vlSymsp->TOP__Top__soc__core__rn.__PVT__counterSqN) 
                                                          - 
                                                          ((IData)(0x3fU) 
                                                           + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__baseIndex)))))) 
                            & ((~ vlSelfRef.branch[0U]) 
                               & (~ (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__flushing))));
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[3U][0U] 
        = vlSelfRef.DE_uop[3U][0U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[3U][1U] 
        = vlSelfRef.DE_uop[3U][1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[3U][2U] 
        = vlSelfRef.DE_uop[3U][2U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[2U][0U] 
        = vlSelfRef.DE_uop[2U][0U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[2U][1U] 
        = vlSelfRef.DE_uop[2U][1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[2U][2U] 
        = vlSelfRef.DE_uop[2U][2U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[1U][0U] 
        = vlSelfRef.DE_uop[1U][0U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[1U][1U] 
        = vlSelfRef.DE_uop[1U][1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[1U][2U] 
        = vlSelfRef.DE_uop[1U][2U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[0U][0U] 
        = vlSelfRef.DE_uop[0U][0U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[0U][1U] 
        = vlSelfRef.DE_uop[0U][1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_uop[0U][2U] 
        = vlSelfRef.DE_uop[0U][2U];
    __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx = 0U;
    __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex;
    __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[0U][0U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[0U][1U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[0U][2U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[0U][3U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[0U][4U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[1U][0U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[1U][1U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[1U][2U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[1U][3U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[1U][4U] = 0U;
    vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
        = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
    if ((((vlSelfRef.RN_uop[0U][0U] >> 6U) & (~ (vlSelfRef.RN_uop
                                                 [0U][0U] 
                                                 >> 0x14U))) 
         & (((3U == (0xfU & (vlSelfRef.RN_uop[0U][0U] 
                             >> 9U))) & (6U <= (0x3fU 
                                                & (vlSelfRef.RN_uop
                                                   [0U][1U] 
                                                   >> 3U)))) 
            | ((0xaU == (0xfU & (vlSelfRef.RN_uop[0U][0U] 
                                 >> 9U))) & (0x37U 
                                             == (0x3fU 
                                                 & (vlSelfRef.RN_uop
                                                    [0U][1U] 
                                                    >> 3U))))))) {
        if ((((~ (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit)) 
              & (8U != (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx))) 
             & (~ vlSelfRef.branch[0U]))) {
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx)));
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][0U] 
                = vlSelfRef.RN_uop[0U][0U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][1U] 
                = vlSelfRef.RN_uop[0U][1U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][2U] 
                = vlSelfRef.RN_uop[0U][2U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][3U] 
                = vlSelfRef.RN_uop[0U][3U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][4U] 
                = vlSelfRef.RN_uop[0U][4U];
            vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
                = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
            vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 
                = (1U & (((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)) 
                         >> 1U));
            vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 
                = (1U & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)));
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit 
                = vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0;
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx 
                = vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0;
        } else {
            vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
                = (1U | (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
        = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
    if ((((vlSelfRef.RN_uop[1U][0U] >> 6U) & (~ (vlSelfRef.RN_uop
                                                 [1U][0U] 
                                                 >> 0x14U))) 
         & (((3U == (0xfU & (vlSelfRef.RN_uop[1U][0U] 
                             >> 9U))) & (6U <= (0x3fU 
                                                & (vlSelfRef.RN_uop
                                                   [1U][1U] 
                                                   >> 3U)))) 
            | ((0xaU == (0xfU & (vlSelfRef.RN_uop[1U][0U] 
                                 >> 9U))) & (0x37U 
                                             == (0x3fU 
                                                 & (vlSelfRef.RN_uop
                                                    [1U][1U] 
                                                    >> 3U))))))) {
        if ((((~ (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit)) 
              & (8U != (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx))) 
             & (~ vlSelfRef.branch[0U]))) {
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx)));
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][0U] 
                = vlSelfRef.RN_uop[1U][0U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][1U] 
                = vlSelfRef.RN_uop[1U][1U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][2U] 
                = vlSelfRef.RN_uop[1U][2U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][3U] 
                = vlSelfRef.RN_uop[1U][3U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][4U] 
                = vlSelfRef.RN_uop[1U][4U];
            vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
                = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
            vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 
                = (1U & (((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)) 
                         >> 1U));
            vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 
                = (1U & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)));
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit 
                = vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0;
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx 
                = vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0;
        } else {
            vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
                = (2U | (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
        = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
    if ((((vlSelfRef.RN_uop[2U][0U] >> 6U) & (~ (vlSelfRef.RN_uop
                                                 [2U][0U] 
                                                 >> 0x14U))) 
         & (((3U == (0xfU & (vlSelfRef.RN_uop[2U][0U] 
                             >> 9U))) & (6U <= (0x3fU 
                                                & (vlSelfRef.RN_uop
                                                   [2U][1U] 
                                                   >> 3U)))) 
            | ((0xaU == (0xfU & (vlSelfRef.RN_uop[2U][0U] 
                                 >> 9U))) & (0x37U 
                                             == (0x3fU 
                                                 & (vlSelfRef.RN_uop
                                                    [2U][1U] 
                                                    >> 3U))))))) {
        if ((((~ (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit)) 
              & (8U != (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx))) 
             & (~ vlSelfRef.branch[0U]))) {
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx)));
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][0U] 
                = vlSelfRef.RN_uop[2U][0U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][1U] 
                = vlSelfRef.RN_uop[2U][1U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][2U] 
                = vlSelfRef.RN_uop[2U][2U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][3U] 
                = vlSelfRef.RN_uop[2U][3U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][4U] 
                = vlSelfRef.RN_uop[2U][4U];
            vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
                = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
            vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 
                = (1U & (((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)) 
                         >> 1U));
            vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 
                = (1U & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)));
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit 
                = vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0;
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx 
                = vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0;
        } else {
            vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
                = (4U | (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
        = (7U & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
    if ((((vlSelfRef.RN_uop[3U][0U] >> 6U) & (~ (vlSelfRef.RN_uop
                                                 [3U][0U] 
                                                 >> 0x14U))) 
         & (((3U == (0xfU & (vlSelfRef.RN_uop[3U][0U] 
                             >> 9U))) & (6U <= (0x3fU 
                                                & (vlSelfRef.RN_uop
                                                   [3U][1U] 
                                                   >> 3U)))) 
            | ((0xaU == (0xfU & (vlSelfRef.RN_uop[3U][0U] 
                                 >> 9U))) & (0x37U 
                                             == (0x3fU 
                                                 & (vlSelfRef.RN_uop
                                                    [3U][1U] 
                                                    >> 3U))))))) {
        if ((((~ (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit)) 
              & (8U != (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx))) 
             & (~ vlSelfRef.branch[0U]))) {
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx)));
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][0U] 
                = vlSelfRef.RN_uop[3U][0U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][1U] 
                = vlSelfRef.RN_uop[3U][1U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][2U] 
                = vlSelfRef.RN_uop[3U][2U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][3U] 
                = vlSelfRef.RN_uop[3U][3U];
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][4U] 
                = vlSelfRef.RN_uop[3U][4U];
            vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
                = (7U & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
            vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 
                = (1U & (((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)) 
                         >> 1U));
            vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 
                = (1U & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)));
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit 
                = vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0;
            __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx 
                = vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0;
        } else {
            vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall 
                = (8U | (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
        }
    }
    __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx = 0U;
    __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex;
    __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[0U][0U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[0U][1U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[0U][2U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[0U][3U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[0U][4U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[1U][0U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[1U][1U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[1U][2U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[1U][3U] = 0U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[1U][4U] = 0U;
    vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
        = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
    if ((((vlSelfRef.RN_uop[0U][0U] >> 7U) & (vlSelfRef.RN_uop
                                              [0U][0U] 
                                              >> 0x14U)) 
         & (((3U == (0xfU & (vlSelfRef.RN_uop[0U][0U] 
                             >> 9U))) & (6U <= (0x3fU 
                                                & (vlSelfRef.RN_uop
                                                   [0U][1U] 
                                                   >> 3U)))) 
            | ((0xaU == (0xfU & (vlSelfRef.RN_uop[0U][0U] 
                                 >> 9U))) & (0x37U 
                                             == (0x3fU 
                                                 & (vlSelfRef.RN_uop
                                                    [0U][1U] 
                                                    >> 3U))))))) {
        if ((((~ (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit)) 
              & (8U != (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx))) 
             & (~ vlSelfRef.branch[0U]))) {
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx)));
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][0U] 
                = vlSelfRef.RN_uop[0U][0U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][1U] 
                = vlSelfRef.RN_uop[0U][1U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][2U] 
                = vlSelfRef.RN_uop[0U][2U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][3U] 
                = vlSelfRef.RN_uop[0U][3U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][4U] 
                = vlSelfRef.RN_uop[0U][4U];
            vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
                = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
            vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 
                = (1U & (((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)) 
                         >> 1U));
            vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 
                = (1U & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)));
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit 
                = vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0;
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx 
                = vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0;
        } else {
            vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
                = (1U | (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
        = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
    if ((((vlSelfRef.RN_uop[1U][0U] >> 7U) & (vlSelfRef.RN_uop
                                              [1U][0U] 
                                              >> 0x14U)) 
         & (((3U == (0xfU & (vlSelfRef.RN_uop[1U][0U] 
                             >> 9U))) & (6U <= (0x3fU 
                                                & (vlSelfRef.RN_uop
                                                   [1U][1U] 
                                                   >> 3U)))) 
            | ((0xaU == (0xfU & (vlSelfRef.RN_uop[1U][0U] 
                                 >> 9U))) & (0x37U 
                                             == (0x3fU 
                                                 & (vlSelfRef.RN_uop
                                                    [1U][1U] 
                                                    >> 3U))))))) {
        if ((((~ (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit)) 
              & (8U != (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx))) 
             & (~ vlSelfRef.branch[0U]))) {
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx)));
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][0U] 
                = vlSelfRef.RN_uop[1U][0U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][1U] 
                = vlSelfRef.RN_uop[1U][1U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][2U] 
                = vlSelfRef.RN_uop[1U][2U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][3U] 
                = vlSelfRef.RN_uop[1U][3U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][4U] 
                = vlSelfRef.RN_uop[1U][4U];
            vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
                = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
            vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 
                = (1U & (((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)) 
                         >> 1U));
            vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 
                = (1U & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)));
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit 
                = vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0;
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx 
                = vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0;
        } else {
            vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
                = (2U | (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
        = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
    if ((((vlSelfRef.RN_uop[2U][0U] >> 7U) & (vlSelfRef.RN_uop
                                              [2U][0U] 
                                              >> 0x14U)) 
         & (((3U == (0xfU & (vlSelfRef.RN_uop[2U][0U] 
                             >> 9U))) & (6U <= (0x3fU 
                                                & (vlSelfRef.RN_uop
                                                   [2U][1U] 
                                                   >> 3U)))) 
            | ((0xaU == (0xfU & (vlSelfRef.RN_uop[2U][0U] 
                                 >> 9U))) & (0x37U 
                                             == (0x3fU 
                                                 & (vlSelfRef.RN_uop
                                                    [2U][1U] 
                                                    >> 3U))))))) {
        if ((((~ (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit)) 
              & (8U != (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx))) 
             & (~ vlSelfRef.branch[0U]))) {
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx)));
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][0U] 
                = vlSelfRef.RN_uop[2U][0U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][1U] 
                = vlSelfRef.RN_uop[2U][1U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][2U] 
                = vlSelfRef.RN_uop[2U][2U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][3U] 
                = vlSelfRef.RN_uop[2U][3U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][4U] 
                = vlSelfRef.RN_uop[2U][4U];
            vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
                = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
            vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 
                = (1U & (((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)) 
                         >> 1U));
            vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 
                = (1U & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)));
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit 
                = vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0;
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx 
                = vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0;
        } else {
            vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
                = (4U | (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
        = (7U & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
    if ((((vlSelfRef.RN_uop[3U][0U] >> 7U) & (vlSelfRef.RN_uop
                                              [3U][0U] 
                                              >> 0x14U)) 
         & (((3U == (0xfU & (vlSelfRef.RN_uop[3U][0U] 
                             >> 9U))) & (6U <= (0x3fU 
                                                & (vlSelfRef.RN_uop
                                                   [3U][1U] 
                                                   >> 3U)))) 
            | ((0xaU == (0xfU & (vlSelfRef.RN_uop[3U][0U] 
                                 >> 9U))) & (0x37U 
                                             == (0x3fU 
                                                 & (vlSelfRef.RN_uop
                                                    [3U][1U] 
                                                    >> 3U))))))) {
        if ((((~ (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit)) 
              & (8U != (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx))) 
             & (~ vlSelfRef.branch[0U]))) {
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx 
                = (0xfU & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__qIdx)));
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][0U] 
                = vlSelfRef.RN_uop[3U][0U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][1U] 
                = vlSelfRef.RN_uop[3U][1U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][2U] 
                = vlSelfRef.RN_uop[3U][2U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][3U] 
                = vlSelfRef.RN_uop[3U][3U];
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx][4U] 
                = vlSelfRef.RN_uop[3U][4U];
            vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
                = (7U & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
            vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 
                = (1U & (((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)) 
                         >> 1U));
            vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 
                = (1U & ((IData)(1U) + (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx)));
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__limit 
                = vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0;
            __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk7__DOT__idx 
                = vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0;
        } else {
            vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall 
                = (8U | (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
        }
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((vlSelfRef.RN_uop[0U][0U] >> 4U) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu 
                                    = (0xfU & (vlSelfRef.RN_uop
                                               [0U][0U] 
                                               >> 9U));
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv 
                                    = (0U != (0x408U 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu))));
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout 
                                    = vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv;
                            }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout))) 
                       & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                              [0U][0U] 
                                              >> 9U))) 
                              & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                [0U][1U] 
                                                >> 3U))))) 
                          | (~ (vlSelfRef.RN_uop[0U][0U] 
                                >> 0xdU)))) & ((~ (
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [0U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [0U][1U] 
                                                          >> 3U))))) 
                                               | (~ 
                                                  (vlSelfRef.RN_uop
                                                   [0U][0U] 
                                                   >> 0x14U)))) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [0U][0U] 
                                          >> 9U))) 
                        | (~ (vlSelfRef.RN_uop[0U][0U] 
                              >> 0x14U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((vlSelfRef.RN_uop[1U][0U] >> 4U) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu 
                                    = (0xfU & (vlSelfRef.RN_uop
                                               [1U][0U] 
                                               >> 9U));
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv 
                                    = (0U != (0x408U 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu))));
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout 
                                    = vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv;
                            }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout))) 
                       & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                              [1U][0U] 
                                              >> 9U))) 
                              & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                [1U][1U] 
                                                >> 3U))))) 
                          | (~ (vlSelfRef.RN_uop[1U][0U] 
                                >> 0xdU)))) & ((~ (
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [1U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [1U][1U] 
                                                          >> 3U))))) 
                                               | (~ 
                                                  (vlSelfRef.RN_uop
                                                   [1U][0U] 
                                                   >> 0x14U)))) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [1U][0U] 
                                          >> 9U))) 
                        | (~ (vlSelfRef.RN_uop[1U][0U] 
                              >> 0x14U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((vlSelfRef.RN_uop[2U][0U] >> 4U) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu 
                                    = (0xfU & (vlSelfRef.RN_uop
                                               [2U][0U] 
                                               >> 9U));
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv 
                                    = (0U != (0x408U 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu))));
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout 
                                    = vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv;
                            }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout))) 
                       & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                              [2U][0U] 
                                              >> 9U))) 
                              & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                [2U][1U] 
                                                >> 3U))))) 
                          | (~ (vlSelfRef.RN_uop[2U][0U] 
                                >> 0xdU)))) & ((~ (
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [2U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [2U][1U] 
                                                          >> 3U))))) 
                                               | (~ 
                                                  (vlSelfRef.RN_uop
                                                   [2U][0U] 
                                                   >> 0x14U)))) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [2U][0U] 
                                          >> 9U))) 
                        | (~ (vlSelfRef.RN_uop[2U][0U] 
                              >> 0x14U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((vlSelfRef.RN_uop[3U][0U] >> 4U) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu 
                                    = (0xfU & (vlSelfRef.RN_uop
                                               [3U][0U] 
                                               >> 9U));
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv 
                                    = (0U != (0x408U 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu))));
                                vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout 
                                    = vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv;
                            }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout))) 
                       & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                              [3U][0U] 
                                              >> 9U))) 
                              & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                [3U][1U] 
                                                >> 3U))))) 
                          | (~ (vlSelfRef.RN_uop[3U][0U] 
                                >> 0xdU)))) & ((~ (
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [3U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [3U][1U] 
                                                          >> 3U))))) 
                                               | (~ 
                                                  (vlSelfRef.RN_uop
                                                   [3U][0U] 
                                                   >> 0x14U)))) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [3U][0U] 
                                          >> 9U))) 
                        | (~ (vlSelfRef.RN_uop[3U][0U] 
                              >> 0x14U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((vlSelfRef.RN_uop[0U][0U] >> 5U) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu 
                                    = (0xfU & (vlSelfRef.RN_uop
                                               [0U][0U] 
                                               >> 9U));
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv 
                                    = (0U != (0x408U 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu))));
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout 
                                    = vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv;
                            }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout))) 
                       & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                              [0U][0U] 
                                              >> 9U))) 
                              & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                [0U][1U] 
                                                >> 3U))))) 
                          | (vlSelfRef.RN_uop[0U][0U] 
                             >> 0xdU))) & ((~ ((3U 
                                                == 
                                                (0xfU 
                                                 & (vlSelfRef.RN_uop
                                                    [0U][0U] 
                                                    >> 9U))) 
                                               & (6U 
                                                  <= 
                                                  (0x3fU 
                                                   & (vlSelfRef.RN_uop
                                                      [0U][1U] 
                                                      >> 3U))))) 
                                           | (vlSelfRef.RN_uop
                                              [0U][0U] 
                                              >> 0x14U))) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [0U][0U] 
                                          >> 9U))) 
                        | (vlSelfRef.RN_uop[0U][0U] 
                           >> 0x14U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((vlSelfRef.RN_uop[1U][0U] >> 5U) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu 
                                    = (0xfU & (vlSelfRef.RN_uop
                                               [1U][0U] 
                                               >> 9U));
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv 
                                    = (0U != (0x408U 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu))));
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout 
                                    = vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv;
                            }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout))) 
                       & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                              [1U][0U] 
                                              >> 9U))) 
                              & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                [1U][1U] 
                                                >> 3U))))) 
                          | (vlSelfRef.RN_uop[1U][0U] 
                             >> 0xdU))) & ((~ ((3U 
                                                == 
                                                (0xfU 
                                                 & (vlSelfRef.RN_uop
                                                    [1U][0U] 
                                                    >> 9U))) 
                                               & (6U 
                                                  <= 
                                                  (0x3fU 
                                                   & (vlSelfRef.RN_uop
                                                      [1U][1U] 
                                                      >> 3U))))) 
                                           | (vlSelfRef.RN_uop
                                              [1U][0U] 
                                              >> 0x14U))) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [1U][0U] 
                                          >> 9U))) 
                        | (vlSelfRef.RN_uop[1U][0U] 
                           >> 0x14U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((vlSelfRef.RN_uop[2U][0U] >> 5U) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu 
                                    = (0xfU & (vlSelfRef.RN_uop
                                               [2U][0U] 
                                               >> 9U));
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv 
                                    = (0U != (0x408U 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu))));
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout 
                                    = vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv;
                            }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout))) 
                       & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                              [2U][0U] 
                                              >> 9U))) 
                              & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                [2U][1U] 
                                                >> 3U))))) 
                          | (vlSelfRef.RN_uop[2U][0U] 
                             >> 0xdU))) & ((~ ((3U 
                                                == 
                                                (0xfU 
                                                 & (vlSelfRef.RN_uop
                                                    [2U][0U] 
                                                    >> 9U))) 
                                               & (6U 
                                                  <= 
                                                  (0x3fU 
                                                   & (vlSelfRef.RN_uop
                                                      [2U][1U] 
                                                      >> 3U))))) 
                                           | (vlSelfRef.RN_uop
                                              [2U][0U] 
                                              >> 0x14U))) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [2U][0U] 
                                          >> 9U))) 
                        | (vlSelfRef.RN_uop[2U][0U] 
                           >> 0x14U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((vlSelfRef.RN_uop[3U][0U] >> 5U) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu 
                                    = (0xfU & (vlSelfRef.RN_uop
                                               [3U][0U] 
                                               >> 9U));
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv 
                                    = (0U != (0x408U 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu))));
                                vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout 
                                    = vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv;
                            }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout))) 
                       & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                              [3U][0U] 
                                              >> 9U))) 
                              & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                [3U][1U] 
                                                >> 3U))))) 
                          | (vlSelfRef.RN_uop[3U][0U] 
                             >> 0xdU))) & ((~ ((3U 
                                                == 
                                                (0xfU 
                                                 & (vlSelfRef.RN_uop
                                                    [3U][0U] 
                                                    >> 9U))) 
                                               & (6U 
                                                  <= 
                                                  (0x3fU 
                                                   & (vlSelfRef.RN_uop
                                                      [3U][1U] 
                                                      >> 3U))))) 
                                           | (vlSelfRef.RN_uop
                                              [3U][0U] 
                                              >> 0x14U))) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [3U][0U] 
                                          >> 9U))) 
                        | (vlSelfRef.RN_uop[3U][0U] 
                           >> 0x14U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[0U][0U] 
                           >> 1U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [0U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv 
                                            = (0U != 
                                               (0xc23U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [0U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [0U][1U] 
                                                  >> 3U))))) 
                            | (~ (vlSelfRef.RN_uop[0U][0U] 
                                  >> 0xdU)))) & ((~ 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [0U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [0U][1U] 
                                                          >> 3U))))) 
                                                 | (~ 
                                                    (vlSelfRef.RN_uop
                                                     [0U][0U] 
                                                     >> 0x14U)))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [0U][0U] 
                                            >> 9U))) 
                          | (~ (vlSelfRef.RN_uop[0U][0U] 
                                >> 0x14U)))) & (0U 
                                                == 
                                                vlSelfRef.__PVT__RN_uopOrdering
                                                [0U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [0U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [0U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[1U][0U] 
                           >> 1U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [1U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv 
                                            = (0U != 
                                               (0xc23U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [1U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [1U][1U] 
                                                  >> 3U))))) 
                            | (~ (vlSelfRef.RN_uop[1U][0U] 
                                  >> 0xdU)))) & ((~ 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [1U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [1U][1U] 
                                                          >> 3U))))) 
                                                 | (~ 
                                                    (vlSelfRef.RN_uop
                                                     [1U][0U] 
                                                     >> 0x14U)))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [1U][0U] 
                                            >> 9U))) 
                          | (~ (vlSelfRef.RN_uop[1U][0U] 
                                >> 0x14U)))) & (0U 
                                                == 
                                                vlSelfRef.__PVT__RN_uopOrdering
                                                [1U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [1U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [1U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[2U][0U] 
                           >> 1U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [2U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv 
                                            = (0U != 
                                               (0xc23U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [2U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [2U][1U] 
                                                  >> 3U))))) 
                            | (~ (vlSelfRef.RN_uop[2U][0U] 
                                  >> 0xdU)))) & ((~ 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [2U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [2U][1U] 
                                                          >> 3U))))) 
                                                 | (~ 
                                                    (vlSelfRef.RN_uop
                                                     [2U][0U] 
                                                     >> 0x14U)))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [2U][0U] 
                                            >> 9U))) 
                          | (~ (vlSelfRef.RN_uop[2U][0U] 
                                >> 0x14U)))) & (0U 
                                                == 
                                                vlSelfRef.__PVT__RN_uopOrdering
                                                [2U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [2U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [2U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[3U][0U] 
                           >> 1U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [3U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv 
                                            = (0U != 
                                               (0xc23U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [3U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [3U][1U] 
                                                  >> 3U))))) 
                            | (~ (vlSelfRef.RN_uop[3U][0U] 
                                  >> 0xdU)))) & ((~ 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [3U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [3U][1U] 
                                                          >> 3U))))) 
                                                 | (~ 
                                                    (vlSelfRef.RN_uop
                                                     [3U][0U] 
                                                     >> 0x14U)))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [3U][0U] 
                                            >> 9U))) 
                          | (~ (vlSelfRef.RN_uop[3U][0U] 
                                >> 0x14U)))) & (0U 
                                                == 
                                                vlSelfRef.__PVT__RN_uopOrdering
                                                [3U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [3U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [3U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[0U][0U] 
                           >> 2U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [0U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv 
                                            = (0U != 
                                               (0x413U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [0U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [0U][1U] 
                                                  >> 3U))))) 
                            | (vlSelfRef.RN_uop[0U][0U] 
                               >> 0xdU))) & ((~ ((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelfRef.RN_uop
                                                      [0U][0U] 
                                                      >> 9U))) 
                                                 & (6U 
                                                    <= 
                                                    (0x3fU 
                                                     & (vlSelfRef.RN_uop
                                                        [0U][1U] 
                                                        >> 3U))))) 
                                             | (vlSelfRef.RN_uop
                                                [0U][0U] 
                                                >> 0x14U))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [0U][0U] 
                                            >> 9U))) 
                          | (vlSelfRef.RN_uop[0U][0U] 
                             >> 0x14U))) & (1U == vlSelfRef.__PVT__RN_uopOrdering
                                            [0U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [0U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [0U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[1U][0U] 
                           >> 2U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [1U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv 
                                            = (0U != 
                                               (0x413U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [1U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [1U][1U] 
                                                  >> 3U))))) 
                            | (vlSelfRef.RN_uop[1U][0U] 
                               >> 0xdU))) & ((~ ((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelfRef.RN_uop
                                                      [1U][0U] 
                                                      >> 9U))) 
                                                 & (6U 
                                                    <= 
                                                    (0x3fU 
                                                     & (vlSelfRef.RN_uop
                                                        [1U][1U] 
                                                        >> 3U))))) 
                                             | (vlSelfRef.RN_uop
                                                [1U][0U] 
                                                >> 0x14U))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [1U][0U] 
                                            >> 9U))) 
                          | (vlSelfRef.RN_uop[1U][0U] 
                             >> 0x14U))) & (1U == vlSelfRef.__PVT__RN_uopOrdering
                                            [1U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [1U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [1U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[2U][0U] 
                           >> 2U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [2U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv 
                                            = (0U != 
                                               (0x413U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [2U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [2U][1U] 
                                                  >> 3U))))) 
                            | (vlSelfRef.RN_uop[2U][0U] 
                               >> 0xdU))) & ((~ ((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelfRef.RN_uop
                                                      [2U][0U] 
                                                      >> 9U))) 
                                                 & (6U 
                                                    <= 
                                                    (0x3fU 
                                                     & (vlSelfRef.RN_uop
                                                        [2U][1U] 
                                                        >> 3U))))) 
                                             | (vlSelfRef.RN_uop
                                                [2U][0U] 
                                                >> 0x14U))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [2U][0U] 
                                            >> 9U))) 
                          | (vlSelfRef.RN_uop[2U][0U] 
                             >> 0x14U))) & (1U == vlSelfRef.__PVT__RN_uopOrdering
                                            [2U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [2U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [2U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[3U][0U] 
                           >> 2U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [3U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv 
                                            = (0U != 
                                               (0x413U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [3U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [3U][1U] 
                                                  >> 3U))))) 
                            | (vlSelfRef.RN_uop[3U][0U] 
                               >> 0xdU))) & ((~ ((3U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelfRef.RN_uop
                                                      [3U][0U] 
                                                      >> 9U))) 
                                                 & (6U 
                                                    <= 
                                                    (0x3fU 
                                                     & (vlSelfRef.RN_uop
                                                        [3U][1U] 
                                                        >> 3U))))) 
                                             | (vlSelfRef.RN_uop
                                                [3U][0U] 
                                                >> 0x14U))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [3U][0U] 
                                            >> 9U))) 
                          | (vlSelfRef.RN_uop[3U][0U] 
                             >> 0x14U))) & (1U == vlSelfRef.__PVT__RN_uopOrdering
                                            [3U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [3U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [3U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[0U][0U] 
                           >> 3U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [0U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv 
                                            = (0U != 
                                               (0x15U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [0U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [0U][1U] 
                                                  >> 3U))))) 
                            | (~ (vlSelfRef.RN_uop[0U][0U] 
                                  >> 0xdU)))) & ((~ 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [0U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [0U][1U] 
                                                          >> 3U))))) 
                                                 | (~ 
                                                    (vlSelfRef.RN_uop
                                                     [0U][0U] 
                                                     >> 0x14U)))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [0U][0U] 
                                            >> 9U))) 
                          | (~ (vlSelfRef.RN_uop[0U][0U] 
                                >> 0x14U)))) & (2U 
                                                == 
                                                vlSelfRef.__PVT__RN_uopOrdering
                                                [0U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [0U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [0U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[1U][0U] 
                           >> 3U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [1U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv 
                                            = (0U != 
                                               (0x15U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [1U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [1U][1U] 
                                                  >> 3U))))) 
                            | (~ (vlSelfRef.RN_uop[1U][0U] 
                                  >> 0xdU)))) & ((~ 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [1U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [1U][1U] 
                                                          >> 3U))))) 
                                                 | (~ 
                                                    (vlSelfRef.RN_uop
                                                     [1U][0U] 
                                                     >> 0x14U)))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [1U][0U] 
                                            >> 9U))) 
                          | (~ (vlSelfRef.RN_uop[1U][0U] 
                                >> 0x14U)))) & (2U 
                                                == 
                                                vlSelfRef.__PVT__RN_uopOrdering
                                                [1U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [1U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [1U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[2U][0U] 
                           >> 3U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [2U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv 
                                            = (0U != 
                                               (0x15U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [2U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [2U][1U] 
                                                  >> 3U))))) 
                            | (~ (vlSelfRef.RN_uop[2U][0U] 
                                  >> 0xdU)))) & ((~ 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [2U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [2U][1U] 
                                                          >> 3U))))) 
                                                 | (~ 
                                                    (vlSelfRef.RN_uop
                                                     [2U][0U] 
                                                     >> 0x14U)))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [2U][0U] 
                                            >> 9U))) 
                          | (~ (vlSelfRef.RN_uop[2U][0U] 
                                >> 0x14U)))) & (2U 
                                                == 
                                                vlSelfRef.__PVT__RN_uopOrdering
                                                [2U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [2U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [2U][1U] 
                                              >> 3U))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c, 
                    (((((((vlSelfRef.RN_uop[3U][0U] 
                           >> 3U) & ([&]() {
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu 
                                            = (0xfU 
                                               & (vlSelfRef.RN_uop
                                                  [3U][0U] 
                                                  >> 9U));
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv 
                                            = (0U != 
                                               (0x15U 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu))));
                                        vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout 
                                            = vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv;
                                    }(), (IData)(vlSelfRef.__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout))) 
                         & ((~ ((3U == (0xfU & (vlSelfRef.RN_uop
                                                [3U][0U] 
                                                >> 9U))) 
                                & (6U > (0x3fU & (vlSelfRef.RN_uop
                                                  [3U][1U] 
                                                  >> 3U))))) 
                            | (~ (vlSelfRef.RN_uop[3U][0U] 
                                  >> 0xdU)))) & ((~ 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelfRef.RN_uop
                                                        [3U][0U] 
                                                        >> 9U))) 
                                                   & (6U 
                                                      <= 
                                                      (0x3fU 
                                                       & (vlSelfRef.RN_uop
                                                          [3U][1U] 
                                                          >> 3U))))) 
                                                 | (~ 
                                                    (vlSelfRef.RN_uop
                                                     [3U][0U] 
                                                     >> 0x14U)))) 
                       & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                            [3U][0U] 
                                            >> 9U))) 
                          | (~ (vlSelfRef.RN_uop[3U][0U] 
                                >> 0x14U)))) & (2U 
                                                == 
                                                vlSelfRef.__PVT__RN_uopOrdering
                                                [3U])) 
                     & ((0xaU != (0xfU & (vlSelfRef.RN_uop
                                          [3U][0U] 
                                          >> 9U))) 
                        | (0x37U != (0x3fU & (vlSelfRef.RN_uop
                                              [3U][1U] 
                                              >> 3U))))));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [0U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffffff81ULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 1U));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [0U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffffffffffffeULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | (IData)((IData)(ld__DOT____Vlvbound_hd7824600__0)));
    ld__DOT____Vlvbound_h4106c72c__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [0U][1U] 
                                                 >> 0x11U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffc0fffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h4106c72c__0)) 
                                                  << 0x24U));
    ld__DOT____Vlvbound_hf441be8f__0 = (1U & (vlSelfRef.IS_uop
                                              [0U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 0x17U))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffff7ffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hf441be8f__0)) 
                                                  << 0x23U));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [1U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffffc0ffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 8U));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [1U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffffff7fULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hd7824600__0)) 
                                                  << 7U));
    ld__DOT____Vlvbound_h4106c72c__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [1U][1U] 
                                                 >> 0x11U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfe07ffffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h4106c72c__0)) 
                                                  << 0x2bU));
    ld__DOT____Vlvbound_hf441be8f__0 = (1U & (vlSelfRef.IS_uop
                                              [1U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 0x17U))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffbffffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hf441be8f__0)) 
                                                  << 0x2aU));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [2U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffe07fffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 0xfU));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [2U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffffbfffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hd7824600__0)) 
                                                  << 0xeU));
    ld__DOT____Vlvbound_h4106c72c__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [2U][1U] 
                                                 >> 0x11U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0x3ffffffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h4106c72c__0)) 
                                                  << 0x32U));
    ld__DOT____Vlvbound_hf441be8f__0 = (1U & (vlSelfRef.IS_uop
                                              [2U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 0x17U))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfdffffffffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hf441be8f__0)) 
                                                  << 0x31U));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [3U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffffff03fffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 0x16U));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [3U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [3U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffffdfffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hd7824600__0)) 
                                                  << 0x15U));
    ld__DOT____Vlvbound_h3256ea86__0 = (0x3fU & (vlSelfRef.IS_uop
                                                 [4U][1U] 
                                                 >> 0x19U));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xfffff81fffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_h3256ea86__0)) 
                                                  << 0x1dU));
    ld__DOT____Vlvbound_hd7824600__0 = (1U & (vlSelfRef.IS_uop
                                              [4U][0U] 
                                              & (~ 
                                                 (vlSelfRef.IS_uop
                                                  [4U][1U] 
                                                  >> 0x1fU))));
    vlSelfRef.__Vcellout__ld__OUT_rfReadReq = ((0xffffffefffffffULL 
                                                & vlSelfRef.__Vcellout__ld__OUT_rfReadReq) 
                                               | ((QData)((IData)(ld__DOT____Vlvbound_hd7824600__0)) 
                                                  << 0x1cU));
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
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffffff8U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((4U & (vlSelfRef.LD_uop[0U][5U] >> 0x12U)) 
              | ((2U & (vlSelfRef.LD_uop[0U][5U] >> 0x14U)) 
                 | (1U & (vlSelfRef.LD_uop[0U][5U] 
                          >> 0x16U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20U & (vlSelfRef.LD_uop[0U][5U] >> 0xcU)) 
              | ((0x10U & (vlSelfRef.LD_uop[0U][5U] 
                           >> 0xeU)) | (8U & (vlSelfRef.LD_uop
                                              [0U][5U] 
                                              >> 0x10U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x100U & (vlSelfRef.LD_uop[0U][5U] >> 6U)) 
              | ((0x80U & (vlSelfRef.LD_uop[0U][5U] 
                           >> 8U)) | (0x40U & (vlSelfRef.LD_uop
                                               [0U][5U] 
                                               >> 0xaU)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x800U & vlSelfRef.LD_uop[0U][5U]) | 
              ((0x400U & (vlSelfRef.LD_uop[0U][5U] 
                          >> 2U)) | (0x200U & (vlSelfRef.LD_uop
                                               [0U][5U] 
                                               >> 4U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x4000U & (vlSelfRef.LD_uop[0U][5U] 
                          << 6U)) | ((0x2000U & (vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 << 4U)) 
                                     | (0x1000U & (
                                                   vlSelfRef.LD_uop
                                                   [0U][5U] 
                                                   << 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20000U & (vlSelfRef.LD_uop[0U][5U] 
                           << 0xcU)) | ((0x10000U & 
                                         (vlSelfRef.LD_uop
                                          [0U][5U] 
                                          << 0xaU)) 
                                        | (0x8000U 
                                           & (vlSelfRef.LD_uop
                                              [0U][5U] 
                                              << 8U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x100000U & (vlSelfRef.LD_uop[0U][5U] 
                            << 0x12U)) | ((0x80000U 
                                           & (vlSelfRef.LD_uop
                                              [0U][5U] 
                                              << 0x10U)) 
                                          | (0x40000U 
                                             & (vlSelfRef.LD_uop
                                                [0U][5U] 
                                                << 0xeU)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xff1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x800000U & (vlSelfRef.LD_uop[0U][4U] 
                            >> 8U)) | ((0x400000U & 
                                        (vlSelfRef.LD_uop
                                         [0U][5U] << 0x16U)) 
                                       | (0x200000U 
                                          & (vlSelfRef.LD_uop
                                             [0U][5U] 
                                             << 0x14U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xf8ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x4000000U & (vlSelfRef.LD_uop[0U][4U] 
                             >> 2U)) | ((0x2000000U 
                                         & (vlSelfRef.LD_uop
                                            [0U][4U] 
                                            >> 4U)) 
                                        | (0x1000000U 
                                           & (vlSelfRef.LD_uop
                                              [0U][4U] 
                                              >> 6U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xc7ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20000000U & (vlSelfRef.LD_uop[0U][4U] 
                              << 4U)) | ((0x10000000U 
                                          & (vlSelfRef.LD_uop
                                             [0U][4U] 
                                             << 2U)) 
                                         | (0x8000000U 
                                            & vlSelfRef.LD_uop
                                            [0U][4U]))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x80000000U & (vlSelfRef.LD_uop[0U][4U] 
                              << 8U)) | (0x40000000U 
                                         & (vlSelfRef.LD_uop
                                            [0U][4U] 
                                            << 6U))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffffff8U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((4U & (vlSelfRef.LD_uop[1U][5U] >> 0x12U)) 
              | ((2U & (vlSelfRef.LD_uop[1U][5U] >> 0x14U)) 
                 | (1U & (vlSelfRef.LD_uop[1U][5U] 
                          >> 0x16U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20U & (vlSelfRef.LD_uop[1U][5U] >> 0xcU)) 
              | ((0x10U & (vlSelfRef.LD_uop[1U][5U] 
                           >> 0xeU)) | (8U & (vlSelfRef.LD_uop
                                              [1U][5U] 
                                              >> 0x10U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x100U & (vlSelfRef.LD_uop[1U][5U] >> 6U)) 
              | ((0x80U & (vlSelfRef.LD_uop[1U][5U] 
                           >> 8U)) | (0x40U & (vlSelfRef.LD_uop
                                               [1U][5U] 
                                               >> 0xaU)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x800U & vlSelfRef.LD_uop[1U][5U]) | 
              ((0x400U & (vlSelfRef.LD_uop[1U][5U] 
                          >> 2U)) | (0x200U & (vlSelfRef.LD_uop
                                               [1U][5U] 
                                               >> 4U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x4000U & (vlSelfRef.LD_uop[1U][5U] 
                          << 6U)) | ((0x2000U & (vlSelfRef.LD_uop
                                                 [1U][5U] 
                                                 << 4U)) 
                                     | (0x1000U & (
                                                   vlSelfRef.LD_uop
                                                   [1U][5U] 
                                                   << 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20000U & (vlSelfRef.LD_uop[1U][5U] 
                           << 0xcU)) | ((0x10000U & 
                                         (vlSelfRef.LD_uop
                                          [1U][5U] 
                                          << 0xaU)) 
                                        | (0x8000U 
                                           & (vlSelfRef.LD_uop
                                              [1U][5U] 
                                              << 8U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x100000U & (vlSelfRef.LD_uop[1U][5U] 
                            << 0x12U)) | ((0x80000U 
                                           & (vlSelfRef.LD_uop
                                              [1U][5U] 
                                              << 0x10U)) 
                                          | (0x40000U 
                                             & (vlSelfRef.LD_uop
                                                [1U][5U] 
                                                << 0xeU)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xff1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x800000U & (vlSelfRef.LD_uop[1U][4U] 
                            >> 8U)) | ((0x400000U & 
                                        (vlSelfRef.LD_uop
                                         [1U][5U] << 0x16U)) 
                                       | (0x200000U 
                                          & (vlSelfRef.LD_uop
                                             [1U][5U] 
                                             << 0x14U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xf8ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x4000000U & (vlSelfRef.LD_uop[1U][4U] 
                             >> 2U)) | ((0x2000000U 
                                         & (vlSelfRef.LD_uop
                                            [1U][4U] 
                                            >> 4U)) 
                                        | (0x1000000U 
                                           & (vlSelfRef.LD_uop
                                              [1U][4U] 
                                              >> 6U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xc7ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20000000U & (vlSelfRef.LD_uop[1U][4U] 
                              << 4U)) | ((0x10000000U 
                                          & (vlSelfRef.LD_uop
                                             [1U][4U] 
                                             << 2U)) 
                                         | (0x8000000U 
                                            & vlSelfRef.LD_uop
                                            [1U][4U]))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x80000000U & (vlSelfRef.LD_uop[1U][4U] 
                              << 8U)) | (0x40000000U 
                                         & (vlSelfRef.LD_uop
                                            [1U][4U] 
                                            << 6U))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffffff8U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((4U & (vlSelfRef.LD_uop[2U][5U] >> 0x12U)) 
              | ((2U & (vlSelfRef.LD_uop[2U][5U] >> 0x14U)) 
                 | (1U & (vlSelfRef.LD_uop[2U][5U] 
                          >> 0x16U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20U & (vlSelfRef.LD_uop[2U][5U] >> 0xcU)) 
              | ((0x10U & (vlSelfRef.LD_uop[2U][5U] 
                           >> 0xeU)) | (8U & (vlSelfRef.LD_uop
                                              [2U][5U] 
                                              >> 0x10U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x100U & (vlSelfRef.LD_uop[2U][5U] >> 6U)) 
              | ((0x80U & (vlSelfRef.LD_uop[2U][5U] 
                           >> 8U)) | (0x40U & (vlSelfRef.LD_uop
                                               [2U][5U] 
                                               >> 0xaU)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x800U & vlSelfRef.LD_uop[2U][5U]) | 
              ((0x400U & (vlSelfRef.LD_uop[2U][5U] 
                          >> 2U)) | (0x200U & (vlSelfRef.LD_uop
                                               [2U][5U] 
                                               >> 4U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x4000U & (vlSelfRef.LD_uop[2U][5U] 
                          << 6U)) | ((0x2000U & (vlSelfRef.LD_uop
                                                 [2U][5U] 
                                                 << 4U)) 
                                     | (0x1000U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][5U] 
                                                   << 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20000U & (vlSelfRef.LD_uop[2U][5U] 
                           << 0xcU)) | ((0x10000U & 
                                         (vlSelfRef.LD_uop
                                          [2U][5U] 
                                          << 0xaU)) 
                                        | (0x8000U 
                                           & (vlSelfRef.LD_uop
                                              [2U][5U] 
                                              << 8U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x100000U & (vlSelfRef.LD_uop[2U][5U] 
                            << 0x12U)) | ((0x80000U 
                                           & (vlSelfRef.LD_uop
                                              [2U][5U] 
                                              << 0x10U)) 
                                          | (0x40000U 
                                             & (vlSelfRef.LD_uop
                                                [2U][5U] 
                                                << 0xeU)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xff1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x800000U & (vlSelfRef.LD_uop[2U][4U] 
                            >> 8U)) | ((0x400000U & 
                                        (vlSelfRef.LD_uop
                                         [2U][5U] << 0x16U)) 
                                       | (0x200000U 
                                          & (vlSelfRef.LD_uop
                                             [2U][5U] 
                                             << 0x14U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xf8ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x4000000U & (vlSelfRef.LD_uop[2U][4U] 
                             >> 2U)) | ((0x2000000U 
                                         & (vlSelfRef.LD_uop
                                            [2U][4U] 
                                            >> 4U)) 
                                        | (0x1000000U 
                                           & (vlSelfRef.LD_uop
                                              [2U][4U] 
                                              >> 6U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xc7ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20000000U & (vlSelfRef.LD_uop[2U][4U] 
                              << 4U)) | ((0x10000000U 
                                          & (vlSelfRef.LD_uop
                                             [2U][4U] 
                                             << 2U)) 
                                         | (0x8000000U 
                                            & vlSelfRef.LD_uop
                                            [2U][4U]))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x80000000U & (vlSelfRef.LD_uop[2U][4U] 
                              << 8U)) | (0x40000000U 
                                         & (vlSelfRef.LD_uop
                                            [2U][4U] 
                                            << 6U))));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[0U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [0U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [0U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[0U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [0U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[0U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[1U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [1U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [1U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[1U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [1U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[1U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[2U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [2U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [2U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[2U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [2U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[2U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[3U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [3U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [3U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[3U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [3U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[3U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[4U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [4U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [4U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[4U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [4U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[4U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[5U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [5U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [5U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[5U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [5U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[5U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[6U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [6U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [6U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[6U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [6U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[6U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[7U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [7U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [7U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[7U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [7U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[7U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[0U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [0U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [0U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[0U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [0U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[0U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[1U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [1U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [1U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[1U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [1U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[1U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[2U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [2U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [2U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[2U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [2U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[2U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[3U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [3U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [3U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[3U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [3U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[3U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[4U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [4U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [4U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[4U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [4U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[4U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[5U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [5U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [5U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[5U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [5U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[5U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[6U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [6U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [6U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[6U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [6U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[6U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[7U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [7U] >> 0x10U));
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [7U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[7U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [7U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[7U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active 
        = ((0xfU & (vlSelfRef.branch[0U] >> 7U)) >= 
           (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & ((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                         >> 7U))));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xfffeU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                 & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 1U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 1U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xfffdU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 1U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 2U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 2U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xfffbU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 2U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 3U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 3U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xfff7U 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 3U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 4U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 4U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xffefU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 4U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 5U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 5U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xffdfU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 5U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 6U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 6U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xffbfU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 6U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 7U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 7U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xff7fU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 7U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 8U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 8U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xfeffU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 8U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 9U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 9U));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xfdffU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 9U));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xaU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 0xaU));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xfbffU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 0xaU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xbU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 0xbU));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xf7ffU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 0xbU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xcU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 0xcU));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xefffU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 0xcU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xdU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 0xdU));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xdfffU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 0xdU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xeU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 0xeU));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0xbfffU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 0xeU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xfU));
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSelfRef.branch[0U] 
                                          >> 7U))) 
                 >> 0xfU));
    if (((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMaskBr = ((0x7fffU 
                                              & (IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr)) 
                                             | ((((IData)(__PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active) 
                                                  & (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_enable)) 
                                                 | (IData)(lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes)) 
                                                << 0xfU));
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_pcRead[1U] 
        = vlSelfRef.__PVT__PC_readReq[1U];
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_pcRead[0U] 
        = vlSelfRef.__PVT__PC_readReq[0U];
    vlSelfRef.__PVT__pageWalker__DOT__pwLdRes = 0ULL;
    if ((((IData)(vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                  [0U]) & (IData)((vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                                   [0U] >> 1U))) & 
         (0x40U == (0x7fU & (IData)((vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                                     [0U] >> 2U)))))) {
        vlSelfRef.__PVT__pageWalker__DOT__pwLdRes = 
            vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
            [0U];
    }
    if ((((IData)(vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                  [1U]) & (IData)((vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                                   [1U] >> 1U))) & 
         (0x40U == (0x7fU & (IData)((vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
                                     [1U] >> 2U)))))) {
        vlSelfRef.__PVT__pageWalker__DOT__pwLdRes = 
            vlSelfRef.__Vcellinp__pageWalker__IN_ldResUOp
            [1U];
    }
    vlSelfRef.__PVT__branchProvs[3U][0U] = __PVT__trapHandler__DOT__OUT_branch_c[0U];
    vlSelfRef.__PVT__branchProvs[3U][1U] = __PVT__trapHandler__DOT__OUT_branch_c[1U];
    vlSelfRef.__PVT__branchProvs[3U][2U] = __PVT__trapHandler__DOT__OUT_branch_c[2U];
    vlSelfRef.__PVT__branchProvs[2U][0U] = vlSelfRef.__Vcellout__lb__OUT_branch[0U];
    vlSelfRef.__PVT__branchProvs[2U][1U] = vlSelfRef.__Vcellout__lb__OUT_branch[1U];
    vlSelfRef.__PVT__branchProvs[2U][2U] = vlSelfRef.__Vcellout__lb__OUT_branch[2U];
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
        = (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
           + (((- (IData)((1U & (vlSelfRef.LD_uop[0U][1U] 
                                 >> 0x1aU)))) << 0xdU) 
              | (0x1fffU & (vlSelfRef.LD_uop[0U][1U] 
                            >> 0xeU))));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
        = (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
           + (((- (IData)((1U & (vlSelfRef.LD_uop[1U][1U] 
                                 >> 0x1aU)))) << 0xdU) 
              | (0x1fffU & (vlSelfRef.LD_uop[1U][1U] 
                            >> 0xeU))));
    vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp = 
        ((2U & (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp)) 
         | (((vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] 
              & (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                 [0U][0U] >> 1U)) & (0x10000000U <= 
                                     ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                       [0U][2U] << 0x1cU) 
                                      | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                         [0U][1U] >> 4U)))) 
            & (0x11000000U > ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                               [0U][2U] << 0x1cU) | 
                              (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                               [0U][1U] >> 4U)))));
    vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp = 
        ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp)) 
         | (0xfffffffeU & ((((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                              [1U][0U] << 1U) & vlSelfRef.__PVT__lsu__DOT__ldOps_0
                             [1U][0U]) & ((0x10000000U 
                                           <= ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                [1U][2U] 
                                                << 0x1cU) 
                                               | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                  [1U][1U] 
                                                  >> 4U))) 
                                          << 1U)) & 
                           ((0x11000000U > ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                             [1U][2U] 
                                             << 0x1cU) 
                                            | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                               [1U][1U] 
                                               >> 4U))) 
                            << 1U))));
    vlSelfRef.__PVT__CC_SQ_uopLd[0U][0U] = vlSelfRef.__PVT__lsu__DOT__ldOps_0
        [0U][0U];
    vlSelfRef.__PVT__CC_SQ_uopLd[0U][1U] = vlSelfRef.__PVT__lsu__DOT__ldOps_0
        [0U][1U];
    vlSelfRef.__PVT__CC_SQ_uopLd[0U][2U] = vlSelfRef.__PVT__lsu__DOT__ldOps_0
        [0U][2U];
    vlSelfRef.__PVT__CC_SQ_uopLd[0U][3U] = vlSelfRef.__PVT__lsu__DOT__ldOps_0
        [0U][3U];
    vlSelfRef.__PVT__CC_SQ_uopLd[1U][0U] = vlSelfRef.__PVT__lsu__DOT__ldOps_0
        [1U][0U];
    vlSelfRef.__PVT__CC_SQ_uopLd[1U][1U] = vlSelfRef.__PVT__lsu__DOT__ldOps_0
        [1U][1U];
    vlSelfRef.__PVT__CC_SQ_uopLd[1U][2U] = vlSelfRef.__PVT__lsu__DOT__ldOps_0
        [1U][2U];
    vlSelfRef.__PVT__CC_SQ_uopLd[1U][3U] = vlSelfRef.__PVT__lsu__DOT__ldOps_0
        [1U][3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffff8U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (7U & ((3U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
                    + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                             >> 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                               >> 4U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 6U))) 
                       << 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 8U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0xaU))) 
                        << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 0xcU)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0xeU))) 
                        << 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x7000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                 >> 0x10U)) + (3U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                  >> 0x14U)) + (3U 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x18U)) + (3U 
                                                 & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0x1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x1cU)) + (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0x1eU)) 
                           << 0x15U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffff8U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (7U & ((3U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
                    + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                             >> 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                               >> 4U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 6U))) 
                       << 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 8U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0xaU))) 
                        << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 0xcU)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0xeU))) 
                        << 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x7000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                 >> 0x10U)) + (3U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                  >> 0x14U)) + (3U 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x18U)) + (3U 
                                                 & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0x1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x1cU)) + (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0x1eU)) 
                           << 0x15U)));
    if (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThan) {
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__1 
            = ((vlSelfRef.LD_uop[2U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__1 
            = ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U));
    } else {
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__1 
            = ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__1 
            = ((vlSelfRef.LD_uop[2U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U));
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU) {
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__1 
            = ((vlSelfRef.LD_uop[2U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__1 
            = ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U));
    } else {
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__1 
            = ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__1 
            = ((vlSelfRef.LD_uop[2U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U));
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan) {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 
            = ((vlSelfRef.LD_uop[0U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U));
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 
            = ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U));
    } else {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 
            = ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U));
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 
            = ((vlSelfRef.LD_uop[0U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = 0U;
    if ((1U == (0xfU & (vlSelfRef.LD_uop[0U][0U] >> 2U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelfRef.LD_uop[0U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken 
                            = (1U & ((0x200U & vlSelfRef.LD_uop
                                      [0U][1U]) ? (
                                                   (0x100U 
                                                    & vlSelfRef.LD_uop
                                                    [0U][1U])
                                                    ? 
                                                   (~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU))
                                                    : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU))
                                      : ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [0U][1U])
                                          ? (~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))
                                          : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))));
                    } else if ((0x200U & vlSelfRef.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken 
                            = ((0x100U & vlSelfRef.LD_uop
                                [0U][1U]) ? (((vlSelfRef.LD_uop
                                               [0U][5U] 
                                               << 9U) 
                                              | (vlSelfRef.LD_uop
                                                 [0U][4U] 
                                                 >> 0x17U)) 
                                             != ((vlSelfRef.LD_uop
                                                  [0U][4U] 
                                                  << 9U) 
                                                 | (vlSelfRef.LD_uop
                                                    [0U][3U] 
                                                    >> 0x17U)))
                                : (((vlSelfRef.LD_uop
                                     [0U][5U] << 9U) 
                                    | (vlSelfRef.LD_uop
                                       [0U][4U] >> 0x17U)) 
                                   == ((vlSelfRef.LD_uop
                                        [0U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [0U][3U] 
                                          >> 0x17U))));
                    } else if ((0x100U & vlSelfRef.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU) {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 
            = ((vlSelfRef.LD_uop[0U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U));
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 
            = ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U));
    } else {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 
            = ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U));
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 
            = ((vlSelfRef.LD_uop[0U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U));
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan) {
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 
            = ((vlSelfRef.LD_uop[1U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 
            = ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U));
    } else {
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 
            = ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 
            = ((vlSelfRef.LD_uop[1U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = 0U;
    if ((1U == (0xfU & (vlSelfRef.LD_uop[1U][0U] >> 2U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelfRef.LD_uop[1U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken 
                            = (1U & ((0x200U & vlSelfRef.LD_uop
                                      [1U][1U]) ? (
                                                   (0x100U 
                                                    & vlSelfRef.LD_uop
                                                    [1U][1U])
                                                    ? 
                                                   (~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU))
                                                    : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU))
                                      : ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [1U][1U])
                                          ? (~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))
                                          : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))));
                    } else if ((0x200U & vlSelfRef.LD_uop
                                [1U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken 
                            = ((0x100U & vlSelfRef.LD_uop
                                [1U][1U]) ? (((vlSelfRef.LD_uop
                                               [1U][5U] 
                                               << 9U) 
                                              | (vlSelfRef.LD_uop
                                                 [1U][4U] 
                                                 >> 0x17U)) 
                                             != ((vlSelfRef.LD_uop
                                                  [1U][4U] 
                                                  << 9U) 
                                                 | (vlSelfRef.LD_uop
                                                    [1U][3U] 
                                                    >> 0x17U)))
                                : (((vlSelfRef.LD_uop
                                     [1U][5U] << 9U) 
                                    | (vlSelfRef.LD_uop
                                       [1U][4U] >> 0x17U)) 
                                   == ((vlSelfRef.LD_uop
                                        [1U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [1U][3U] 
                                          >> 0x17U))));
                    } else if ((0x100U & vlSelfRef.LD_uop
                                [1U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU) {
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 
            = ((vlSelfRef.LD_uop[1U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 
            = ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U));
    } else {
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 
            = ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 
            = ((vlSelfRef.LD_uop[1U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffff8U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (7U & ((3U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
                    + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                             >> 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                               >> 4U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 6U))) 
                       << 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 8U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0xaU))) 
                        << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 0xcU)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0xeU))) 
                        << 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x7000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                 >> 0x10U)) + (3U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                  >> 0x14U)) + (3U 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x18U)) + (3U 
                                                 & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0x1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x1cU)) + (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0x1eU)) 
                           << 0x15U)));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red 
        = (1U & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer 
        = ((0xeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer)) 
           | (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red 
        = (1U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
                 | ((IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer 
        = ((0xdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer)) 
           | ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
              << 1U));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red 
        = (1U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
                 | ((IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer 
        = ((0xbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer)) 
           | ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
              << 2U));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red 
        = ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
           | ((IData)(vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall) 
              >> 3U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer 
        = ((7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer)) 
           | ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
              << 3U));
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red 
        = (1U & (IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer 
        = ((0xeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer)) 
           | (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red));
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red 
        = (1U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
                 | ((IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer 
        = ((0xdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer)) 
           | ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
              << 1U));
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red 
        = (1U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
                 | ((IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer 
        = ((0xbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer)) 
           | ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
              << 2U));
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red 
        = ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
           | ((IData)(vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall) 
              >> 3U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer 
        = ((7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer)) 
           | ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red) 
              << 3U));
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[0U] 
        = __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[1U] 
        = __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[2U] 
        = __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[3U] 
        = __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[0U] 
        = __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[1U] 
        = __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[2U] 
        = __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[3U] 
        = __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[0U] 
        = __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[1U] 
        = __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[2U] 
        = __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[3U] 
        = __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[0U] 
        = __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[1U] 
        = __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[2U] 
        = __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[3U] 
        = __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[0U] 
        = __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 1U))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[1U] 
        = __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 2U))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[2U] 
        = __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum 
        = (7U & ((IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum) 
                 + (1U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c) 
                          >> 3U))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[3U] 
        = __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    vlSelfRef.__Vcellinp__rfMux__IN_read[0U] = (IData)(vlSelfRef.__Vcellout__ld__OUT_rfReadReq);
    vlSelfRef.__Vcellinp__rfMux__IN_read[1U] = (((IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq) 
                                                 << 0x18U) 
                                                | (IData)(
                                                          (vlSelfRef.__Vcellout__ld__OUT_rfReadReq 
                                                           >> 0x20U)));
    vlSelfRef.__Vcellinp__rfMux__IN_read[2U] = ((IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq) 
                                                >> 8U);
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
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
        = ((0U == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                            >> 8U))) ? vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev
            : ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
        = ((0U == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                            >> 8U))) ? vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev
            : ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
        = ((0U == (0x3fU & (vlSelfRef.LD_uop[2U][1U] 
                            >> 8U))) ? vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev
            : ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U)));
    vlSelfRef.__PVT__pageWalker__DOT__nextLookup = 
        (((IData)((vlSelfRef.__PVT__pageWalker__DOT__pwLdRes 
                   >> 0x13U)) << 0xcU) | (0xffcU & 
                                          (vlSelfRef.__PVT__pageWalker__DOT__pageWalkAddr 
                                           >> 0xaU)));
    __PVT__pageWalker__DOT__unnamedblk2__DOT__pte = (IData)(
                                                            (vlSelfRef.__PVT__pageWalker__DOT__pwLdRes 
                                                             >> 9U));
    vlSelfRef.__PVT__pageWalker__DOT__isSuperPage_c 
        = vlSelfRef.__PVT__pageWalker__DOT__pageWalkIter;
    vlSelfRef.__PVT__pageWalker__DOT__pageFault_c = 0U;
    vlSelfRef.__PVT__pageWalker__DOT__ppn_c = (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                                               >> 0xaU);
    vlSelfRef.__PVT__pageWalker__DOT__rwx_c = 0U;
    vlSelfRef.__PVT__pageWalker__DOT__dagu_c = 0U;
    if ((IData)((0x41U != (0x41U & __PVT__pageWalker__DOT__unnamedblk2__DOT__pte)))) {
        vlSelfRef.__PVT__pageWalker__DOT__pageFault_c = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__pageWalker__DOT__isSuperPage_c) 
         & (0U != (0x3ffU & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                             >> 0xaU))))) {
        vlSelfRef.__PVT__pageWalker__DOT__pageFault_c = 1U;
    }
    if ((((0U == (7U & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                        >> 1U))) || (2U == (7U & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                                                  >> 1U)))) 
         || (6U == (7U & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                          >> 1U))))) {
        vlSelfRef.__PVT__pageWalker__DOT__pageFault_c = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__pageWalker__DOT__pageFault_c)))) {
        vlSelfRef.__PVT__pageWalker__DOT__rwx_c = (
                                                   (4U 
                                                    & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                                                       << 1U)) 
                                                   | (((IData)(
                                                               (0x84U 
                                                                == 
                                                                (0x84U 
                                                                 & __PVT__pageWalker__DOT__unnamedblk2__DOT__pte))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                                                            >> 3U))));
        vlSelfRef.__PVT__pageWalker__DOT__dagu_c = 
            (0xfU & (__PVT__pageWalker__DOT__unnamedblk2__DOT__pte 
                     >> 4U));
    }
    vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                          & (IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.ohEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid) 
                                                    | (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                           >> 1U) & (IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.ohEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid = ((IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid) 
                                                 | ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                                                    >> 1U));
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__re = 1U;
    if ((1U & ((vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][0U] 
                & (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                   [0U][0U] >> 1U)) & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp))))) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__re = 0U;
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr = 0U;
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr 
            = ((vlSelfRef.__PVT__lsu__DOT__ldOps_0[0U][2U] 
                << 0x1cU) | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                             [0U][1U] >> 4U));
    } else {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr = 0U;
    }
    if ((1U & ((vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][0U] 
                & (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                   [1U][0U] >> 1U)) & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                                          >> 1U))))) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__re = 0U;
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__raddr 
            = ((vlSelfRef.__PVT__lsu__DOT__ldOps_0[1U][2U] 
                << 0x1cU) | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                             [1U][1U] >> 4U));
    }
    lsu__DOT__ohEnc__DOT____Vlvbound_hd3d84657__1 = 
        (1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
               >> 1U));
    vlSelfRef.__PVT__lsu__DOT__blsuLdIdx = lsu__DOT__ohEnc__DOT____Vlvbound_hd3d84657__1;
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
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopLd[1U][0U] 
        = vlSelfRef.__PVT__CC_SQ_uopLd[1U][0U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopLd[1U][1U] 
        = vlSelfRef.__PVT__CC_SQ_uopLd[1U][1U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopLd[1U][2U] 
        = vlSelfRef.__PVT__CC_SQ_uopLd[1U][2U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopLd[1U][3U] 
        = vlSelfRef.__PVT__CC_SQ_uopLd[1U][3U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopLd[0U][0U] 
        = vlSelfRef.__PVT__CC_SQ_uopLd[0U][0U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopLd[0U][1U] 
        = vlSelfRef.__PVT__CC_SQ_uopLd[0U][1U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopLd[0U][2U] 
        = vlSelfRef.__PVT__CC_SQ_uopLd[0U][2U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopLd[0U][3U] 
        = vlSelfRef.__PVT__CC_SQ_uopLd[0U][3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfff0U & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xfU & ((7U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
                      + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 3U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xff0fU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf0U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 6U)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 9U))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xf0ffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf00U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                >> 0xcU)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                   >> 0xfU))) 
                        << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf000U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                 >> 0x12U)) + (7U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 0x15U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfff0U & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xfU & ((7U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
                      + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 3U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xff0fU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf0U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 6U)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 9U))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xf0ffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf00U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                >> 0xcU)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                   >> 0xfU))) 
                        << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf000U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                 >> 0x12U)) + (7U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 0x15U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC = 0U;
    if ((0U == (0xfU & (vlSelfRef.LD_uop[0U][0U] >> 2U)))) {
        if ((0x2000U & vlSelfRef.LD_uop[0U][1U])) {
            if ((0x1000U & vlSelfRef.LD_uop[0U][1U])) {
                if ((0x800U & vlSelfRef.LD_uop[0U][1U])) {
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                        = ((0x400U & vlSelfRef.LD_uop
                            [0U][1U]) ? ((0x200U & 
                                          vlSelfRef.LD_uop
                                          [0U][1U])
                                          ? ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [0U][1U])
                                              ? intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0
                                              : intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0)
                                          : ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [0U][1U])
                                              ? intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0
                                              : intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0))
                            : ((0x200U & vlSelfRef.LD_uop
                                [0U][1U]) ? ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [0U][1U])
                                              ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0
                                              : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0)
                                : ((0x100U & vlSelfRef.LD_uop
                                    [0U][1U]) ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0
                                    : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0)));
                }
            }
        } else if ((0x1000U & vlSelfRef.LD_uop[0U][1U])) {
            if ((0x800U & vlSelfRef.LD_uop[0U][1U])) {
                if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [0U][1U] >> 8U)))) {
                            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                = (0xffffU & ((vlSelfRef.LD_uop
                                               [0U][5U] 
                                               << 9U) 
                                              | (vlSelfRef.LD_uop
                                                 [0U][4U] 
                                                 >> 0x17U)));
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x400U & vlSelfRef.LD_uop[0U][1U])
                        ? ((0x200U & vlSelfRef.LD_uop
                            [0U][1U]) ? ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [0U][1U])
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.LD_uop
                                                             [0U][5U] 
                                                             >> 6U)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & ((vlSelfRef.LD_uop
                                                    [0U][5U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [0U][4U] 
                                                      >> 0x17U))))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.LD_uop
                                                             [0U][4U] 
                                                             >> 0x1eU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U))))
                            : ((0x100U & vlSelfRef.LD_uop
                                [0U][1U]) ? intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0
                                : intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0))
                        : ((0x200U & vlSelfRef.LD_uop
                            [0U][1U]) ? ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [0U][1U])
                                          ? intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0
                                          : intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0)
                            : ((0x100U & vlSelfRef.LD_uop
                                [0U][1U]) ? ((~ ((vlSelfRef.LD_uop
                                                  [0U][4U] 
                                                  << 9U) 
                                                 | (vlSelfRef.LD_uop
                                                    [0U][3U] 
                                                    >> 0x17U))) 
                                             | ((vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U)))
                                : ((~ ((vlSelfRef.LD_uop
                                        [0U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [0U][3U] 
                                          >> 0x17U))) 
                                   & ((vlSelfRef.LD_uop
                                       [0U][5U] << 9U) 
                                      | (vlSelfRef.LD_uop
                                         [0U][4U] >> 0x17U))))));
            }
        } else if ((0x800U & vlSelfRef.LD_uop[0U][1U])) {
            if ((0x400U & vlSelfRef.LD_uop[0U][1U])) {
                vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x200U & vlSelfRef.LD_uop[0U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? ((~ ((vlSelfRef.LD_uop
                                              [0U][4U] 
                                              << 9U) 
                                             | (vlSelfRef.LD_uop
                                                [0U][3U] 
                                                >> 0x17U))) 
                                         ^ ((vlSelfRef.LD_uop
                                             [0U][5U] 
                                             << 9U) 
                                            | (vlSelfRef.LD_uop
                                               [0U][4U] 
                                               >> 0x17U)))
                            : (((vlSelfRef.LD_uop[0U][4U] 
                                 << 9U) | (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x17U)) 
                               + VL_SHIFTL_III(32,32,32, 
                                               ((vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U)), 3U)))
                        : ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? (((vlSelfRef.LD_uop
                                           [0U][4U] 
                                           << 9U) | 
                                          (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x17U)) 
                                         + VL_SHIFTL_III(32,32,32, 
                                                         ((vlSelfRef.LD_uop
                                                           [0U][5U] 
                                                           << 9U) 
                                                          | (vlSelfRef.LD_uop
                                                             [0U][4U] 
                                                             >> 0x17U)), 2U))
                            : (((vlSelfRef.LD_uop[0U][4U] 
                                 << 9U) | (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x17U)) 
                               + VL_SHIFTL_III(32,32,32, 
                                               ((vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U)), 1U))));
            } else if ((0x200U & vlSelfRef.LD_uop[0U][1U])) {
                if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                              >> 8U)))) {
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                        = ((vlSelfRef.LD_uop[0U][4U] 
                            << 9U) | (vlSelfRef.LD_uop
                                      [0U][3U] >> 0x17U));
                }
            } else {
                vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x100U & vlSelfRef.LD_uop[0U][1U])
                        ? VL_SHIFTRS_III(32,32,5, (
                                                   (vlSelfRef.LD_uop
                                                    [0U][5U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [0U][4U] 
                                                      >> 0x17U)), 
                                         (0x1fU & (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U)))
                        : (((vlSelfRef.LD_uop[0U][5U] 
                             << 9U) | (vlSelfRef.LD_uop
                                       [0U][4U] >> 0x17U)) 
                           - ((vlSelfRef.LD_uop[0U][4U] 
                               << 9U) | (vlSelfRef.LD_uop
                                         [0U][3U] >> 0x17U))));
            }
        } else {
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                = ((0x400U & vlSelfRef.LD_uop[0U][1U])
                    ? ((0x200U & vlSelfRef.LD_uop[0U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU)
                            : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))
                        : ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0
                            : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0))
                    : ((0x200U & vlSelfRef.LD_uop[0U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0
                            : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0)
                        : ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0
                            : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0)));
        }
    } else if ((1U == (0xfU & (vlSelfRef.LD_uop[0U][0U] 
                               >> 2U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelfRef.LD_uop[0U][1U])) {
                    if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelfRef.LD_uop
                             [0U][1U])) {
                            if ((1U & (~ (vlSelfRef.LD_uop
                                          [0U][1U] 
                                          >> 8U)))) {
                                vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                    = ((IData)(2U) 
                                       + ((vlSelfRef.LD_uop
                                           [0U][3U] 
                                           << 9U) | 
                                          (vlSelfRef.LD_uop
                                           [0U][2U] 
                                           >> 0x17U)));
                            }
                        } else {
                            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                = ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [0U][2U] 
                                                     >> 0x17U)));
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.LD_uop
                                     [0U][1U] >> 0xaU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                                  >> 9U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                            = ((0x100U & vlSelfRef.LD_uop
                                [0U][1U]) ? ((IData)(2U) 
                                             + ((vlSelfRef.LD_uop
                                                 [0U][3U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [0U][2U] 
                                                   >> 0x17U)))
                                : (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
                                   + ((vlSelfRef.LD_uop
                                       [0U][2U] << 0x12U) 
                                      | (vlSelfRef.LD_uop
                                         [0U][1U] >> 0xeU))));
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (((vlSelfRef.LD_uop[0U][0U] & (1U == (0xfU 
                                                 & (vlSelfRef.LD_uop
                                                    [0U][0U] 
                                                    >> 2U)))) 
             & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (((vlSelfRef.LD_uop
                                                                           [0U][1U] 
                                                                           << 6U) 
                                                                          | (vlSelfRef.LD_uop
                                                                             [0U][0U] 
                                                                             >> 0x1aU)) 
                                                                         - 
                                                                         ((vlSelfRef.branch[0U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.branch[0U] 
                                                                             >> 0x15U))))))))) {
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xf000007fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0xffffff80U & ((0xfe00000U & 
                                      ((vlSelfRef.LD_uop
                                        [0U][1U] << 0x1bU) 
                                       | (0x7e00000U 
                                          & (vlSelfRef.LD_uop
                                             [0U][0U] 
                                             >> 5U)))) 
                                     | (0x1fff80U & 
                                        (vlSelfRef.LD_uop
                                         [0U][0U] << 1U)))));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xffffff80U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0x3eU & (vlSelfRef.LD_uop[0U][0U] 
                               >> 0x14U)));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                = (0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                = ((0x380U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                   | (0xeU & (vlSelfRef.LD_uop[0U][2U] 
                              >> 0x13U)));
            if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch) {
                if ((((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) 
                      != (1U & (vlSelfRef.LD_uop[0U][0U] 
                                >> 0x14U))) & (1U != 
                                               (0x3fU 
                                                & (vlSelfRef.LD_uop
                                                   [0U][1U] 
                                                   >> 8U))))) {
                    if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
                                  << 0xcU));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
                                  >> 0x14U));
                    }
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [0U][2U] 
                                                     >> 0x17U)))) 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [0U][2U] 
                                                     >> 0x17U)))) 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                          ? 1U : 2U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0x8fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? 4U : 3U) << 0x1cU));
                }
            } else if ((((8U == (0x3fU & (vlSelfRef.LD_uop
                                          [0U][1U] 
                                          >> 8U))) 
                         | (9U == (0x3fU & (vlSelfRef.LD_uop
                                            [0U][1U] 
                                            >> 8U)))) 
                        | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                             [0U][1U] 
                                             >> 8U))))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect)) 
                           | (~ (vlSelfRef.LD_uop[0U][0U] 
                                 >> 0x14U))))) {
                    if (((9U == (0x3fU & (vlSelfRef.LD_uop
                                          [0U][1U] 
                                          >> 8U))) 
                         | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                              [0U][1U] 
                                              >> 8U))))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & ((vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  << 0x15U) 
                                                 | (0x1ff000U 
                                                    & (vlSelfRef.LD_uop
                                                       [0U][2U] 
                                                       >> 0xbU)))));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[2U] 
                            = (0xfffU & (vlSelfRef.LD_uop
                                         [0U][3U] >> 0xbU));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (0xe00U & (vlSelfRef.LD_uop
                                            [0U][2U] 
                                            >> 8U)));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xffffff87U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (0xfffffff8U & ((0x70U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      ((vlSelfRef.LD_uop
                                                        [0U][2U] 
                                                        << 0x12U) 
                                                       | (vlSelfRef.LD_uop
                                                          [0U][2U] 
                                                          >> 0xeU))) 
                                                     << 4U)) 
                                                 | (((7U 
                                                      & (vlSelfRef.LD_uop
                                                         [0U][2U] 
                                                         >> 0x18U)) 
                                                     > 
                                                     (7U 
                                                      & (vlSelfRef.LD_uop
                                                         [0U][2U] 
                                                         >> 0xeU))) 
                                                    << 3U))));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                                  << 0xcU));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                                  >> 0x14U));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffffe7fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (((9U == (0x3fU & 
                                           (vlSelfRef.LD_uop
                                            [0U][1U] 
                                            >> 8U)))
                                    ? 1U : 0U) << 7U));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = (1U | ((0xfffffff8U & 
                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                                     | (4U & (vlSelfRef.LD_uop
                                              [0U][0U] 
                                              << 1U))));
                    }
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((8U == (0x3fU 
                                                 & (vlSelfRef.LD_uop
                                                    [0U][1U] 
                                                    >> 8U)))
                                          ? 3U : 4U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    if ((8U == (0x3fU & (vlSelfRef.LD_uop
                                         [0U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x7fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (1U | (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]));
                    }
                    if ((9U == (0x3fU & (vlSelfRef.LD_uop
                                         [0U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]);
                    }
                }
            }
        }
        if (((vlSelfRef.LD_uop[1U][0U] & (1U == (0xfU 
                                                 & (vlSelfRef.LD_uop
                                                    [1U][0U] 
                                                    >> 2U)))) 
             & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (((vlSelfRef.LD_uop
                                                                           [1U][1U] 
                                                                           << 6U) 
                                                                          | (vlSelfRef.LD_uop
                                                                             [1U][0U] 
                                                                             >> 0x1aU)) 
                                                                         - 
                                                                         ((vlSelfRef.branch[0U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.branch[0U] 
                                                                             >> 0x15U))))))))) {
            if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch) {
                if ((((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) 
                      != (1U & (vlSelfRef.LD_uop[1U][0U] 
                                >> 0x14U))) & (1U != 
                                               (0x3fU 
                                                & (vlSelfRef.LD_uop
                                                   [1U][1U] 
                                                   >> 8U))))) {
                    if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
                                  << 0xcU));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
                                  >> 0x14U));
                    }
                }
            } else if ((((8U == (0x3fU & (vlSelfRef.LD_uop
                                          [1U][1U] 
                                          >> 8U))) 
                         | (9U == (0x3fU & (vlSelfRef.LD_uop
                                            [1U][1U] 
                                            >> 8U)))) 
                        | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                             [1U][1U] 
                                             >> 8U))))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect)) 
                           | (~ (vlSelfRef.LD_uop[1U][0U] 
                                 >> 0x14U))))) {
                    if (((9U == (0x3fU & (vlSelfRef.LD_uop
                                          [1U][1U] 
                                          >> 8U))) 
                         | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                              [1U][1U] 
                                              >> 8U))))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & ((vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  << 0x15U) 
                                                 | (0x1ff000U 
                                                    & (vlSelfRef.LD_uop
                                                       [1U][2U] 
                                                       >> 0xbU)))));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[2U] 
                            = (0xfffU & (vlSelfRef.LD_uop
                                         [1U][3U] >> 0xbU));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (0xe00U & (vlSelfRef.LD_uop
                                            [1U][2U] 
                                            >> 8U)));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xffffff87U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (0xfffffff8U & ((0x70U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      ((vlSelfRef.LD_uop
                                                        [1U][2U] 
                                                        << 0x12U) 
                                                       | (vlSelfRef.LD_uop
                                                          [1U][2U] 
                                                          >> 0xeU))) 
                                                     << 4U)) 
                                                 | (((7U 
                                                      & (vlSelfRef.LD_uop
                                                         [1U][2U] 
                                                         >> 0x18U)) 
                                                     > 
                                                     (7U 
                                                      & (vlSelfRef.LD_uop
                                                         [1U][2U] 
                                                         >> 0xeU))) 
                                                    << 3U))));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                                  << 0xcU));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                                  >> 0x14U));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffffe7fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (((9U == (0x3fU & 
                                           (vlSelfRef.LD_uop
                                            [1U][1U] 
                                            >> 8U)))
                                    ? 1U : 0U) << 7U));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = (1U | ((0xfffffff8U & 
                                      vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                                     | (4U & (vlSelfRef.LD_uop
                                              [1U][0U] 
                                              << 1U))));
                    }
                }
            }
        }
    }
}
