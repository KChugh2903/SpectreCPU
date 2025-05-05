// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ROB.h"

VL_INLINE_OPT void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__4(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_lastLoadSqN = vlSelfRef.__Vdly__OUT_lastLoadSqN;
}

VL_INLINE_OPT void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__5(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__baseIndex = vlSelfRef.__Vdly__baseIndex;
}

VL_INLINE_OPT void VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__7(VTop_ROB* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_ROB___nba_sequent__TOP__Top__soc__core__rob__7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__OUT_comUOp__v0) {
        vlSelfRef.__PVT__OUT_comUOp[0U] = 0U;
        vlSelfRef.__PVT__OUT_comUOp[0U] = (0x7ffffeU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [0U]);
        vlSelfRef.__PVT__OUT_comUOp[1U] = 0U;
        vlSelfRef.__PVT__OUT_comUOp[1U] = (0x7ffffeU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [1U]);
        vlSelfRef.__PVT__OUT_comUOp[2U] = 0U;
        vlSelfRef.__PVT__OUT_comUOp[2U] = (0x7ffffeU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [2U]);
        vlSelfRef.__PVT__OUT_comUOp[3U] = 0U;
        vlSelfRef.__PVT__OUT_comUOp[3U] = (0x7ffffeU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [3U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v8) {
        vlSelfRef.__PVT__OUT_comUOp[0U] = (1U | vlSelfRef.__PVT__OUT_comUOp
                                           [0U]);
        vlSelfRef.__PVT__OUT_comUOp[0U] = (0x7ff80fU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [0U]);
        vlSelfRef.__PVT__OUT_comUOp[0U] = ((0x3ffffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [0U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v10) 
                                            << 0x12U));
        vlSelfRef.__PVT__OUT_comUOp[0U] = ((0x7c07ffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [0U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v11) 
                                            << 0xbU));
        vlSelfRef.__PVT__OUT_comUOp[0U] = (0x7ffffdU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [0U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v13) {
        vlSelfRef.__PVT__OUT_comUOp[1U] = (1U | vlSelfRef.__PVT__OUT_comUOp
                                           [1U]);
        vlSelfRef.__PVT__OUT_comUOp[1U] = (0x7ff80fU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [1U]);
        vlSelfRef.__PVT__OUT_comUOp[1U] = ((0x3ffffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [1U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v15) 
                                            << 0x12U));
        vlSelfRef.__PVT__OUT_comUOp[1U] = ((0x7c07ffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [1U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v16) 
                                            << 0xbU));
        vlSelfRef.__PVT__OUT_comUOp[1U] = (0x7ffffdU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [1U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v18) {
        vlSelfRef.__PVT__OUT_comUOp[2U] = (1U | vlSelfRef.__PVT__OUT_comUOp
                                           [2U]);
        vlSelfRef.__PVT__OUT_comUOp[2U] = (0x7ff80fU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [2U]);
        vlSelfRef.__PVT__OUT_comUOp[2U] = ((0x3ffffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [2U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v20) 
                                            << 0x12U));
        vlSelfRef.__PVT__OUT_comUOp[2U] = ((0x7c07ffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [2U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v21) 
                                            << 0xbU));
        vlSelfRef.__PVT__OUT_comUOp[2U] = (0x7ffffdU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [2U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v23) {
        vlSelfRef.__PVT__OUT_comUOp[3U] = (1U | vlSelfRef.__PVT__OUT_comUOp
                                           [3U]);
        vlSelfRef.__PVT__OUT_comUOp[3U] = (0x7ff80fU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [3U]);
        vlSelfRef.__PVT__OUT_comUOp[3U] = ((0x3ffffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [3U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v25) 
                                            << 0x12U));
        vlSelfRef.__PVT__OUT_comUOp[3U] = ((0x7c07ffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [3U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v26) 
                                            << 0xbU));
        vlSelfRef.__PVT__OUT_comUOp[3U] = (0x7ffffdU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [3U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v28) {
        vlSelfRef.__PVT__OUT_comUOp[0U] = ((0x3ffffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [0U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v28) 
                                            << 0x12U));
        vlSelfRef.__PVT__OUT_comUOp[0U] = ((0x7c07ffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [0U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v29) 
                                            << 0xbU));
        vlSelfRef.__PVT__OUT_comUOp[0U] = ((0x7ff80fU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [0U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v30) 
                                            << 4U));
        vlSelfRef.__PVT__OUT_comUOp[0U] = ((0x7ffff7U 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [0U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v31) 
                                            << 3U));
        vlSelfRef.__PVT__OUT_comUOp[0U] = ((0x7ffffdU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [0U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v32) 
                                            << 1U));
        vlSelfRef.__PVT__OUT_comUOp[0U] = (1U | vlSelfRef.__PVT__OUT_comUOp
                                           [0U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v34) {
        vlSelfRef.__PVT__OUT_comUOp[0U] = (0x3ffffU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [0U]);
        vlSelfRef.__PVT__OUT_comUOp[0U] = (0x20000U 
                                           | (0x7c07ffU 
                                              & vlSelfRef.__PVT__OUT_comUOp
                                              [0U]));
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v36) {
        vlSelfRef.__PVT__OUT_comUOp[1U] = ((0x3ffffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [1U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v36) 
                                            << 0x12U));
        vlSelfRef.__PVT__OUT_comUOp[1U] = ((0x7c07ffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [1U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v37) 
                                            << 0xbU));
        vlSelfRef.__PVT__OUT_comUOp[1U] = ((0x7ff80fU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [1U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v38) 
                                            << 4U));
        vlSelfRef.__PVT__OUT_comUOp[1U] = ((0x7ffff7U 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [1U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v39) 
                                            << 3U));
        vlSelfRef.__PVT__OUT_comUOp[1U] = ((0x7ffffdU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [1U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v40) 
                                            << 1U));
        vlSelfRef.__PVT__OUT_comUOp[1U] = (1U | vlSelfRef.__PVT__OUT_comUOp
                                           [1U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v42) {
        vlSelfRef.__PVT__OUT_comUOp[1U] = (0x3ffffU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [1U]);
        vlSelfRef.__PVT__OUT_comUOp[1U] = (0x20000U 
                                           | (0x7c07ffU 
                                              & vlSelfRef.__PVT__OUT_comUOp
                                              [1U]));
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v44) {
        vlSelfRef.__PVT__OUT_comUOp[2U] = ((0x3ffffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [2U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v44) 
                                            << 0x12U));
        vlSelfRef.__PVT__OUT_comUOp[2U] = ((0x7c07ffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [2U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v45) 
                                            << 0xbU));
        vlSelfRef.__PVT__OUT_comUOp[2U] = ((0x7ff80fU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [2U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v46) 
                                            << 4U));
        vlSelfRef.__PVT__OUT_comUOp[2U] = ((0x7ffff7U 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [2U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v47) 
                                            << 3U));
        vlSelfRef.__PVT__OUT_comUOp[2U] = ((0x7ffffdU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [2U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v48) 
                                            << 1U));
        vlSelfRef.__PVT__OUT_comUOp[2U] = (1U | vlSelfRef.__PVT__OUT_comUOp
                                           [2U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v50) {
        vlSelfRef.__PVT__OUT_comUOp[2U] = (0x3ffffU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [2U]);
        vlSelfRef.__PVT__OUT_comUOp[2U] = (0x20000U 
                                           | (0x7c07ffU 
                                              & vlSelfRef.__PVT__OUT_comUOp
                                              [2U]));
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v52) {
        vlSelfRef.__PVT__OUT_comUOp[3U] = ((0x3ffffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [3U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v52) 
                                            << 0x12U));
        vlSelfRef.__PVT__OUT_comUOp[3U] = ((0x7c07ffU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [3U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v53) 
                                            << 0xbU));
        vlSelfRef.__PVT__OUT_comUOp[3U] = ((0x7ff80fU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [3U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v54) 
                                            << 4U));
        vlSelfRef.__PVT__OUT_comUOp[3U] = ((0x7ffff7U 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [3U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v55) 
                                            << 3U));
        vlSelfRef.__PVT__OUT_comUOp[3U] = ((0x7ffffdU 
                                            & vlSelfRef.__PVT__OUT_comUOp
                                            [3U]) | 
                                           ((IData)(vlSelfRef.__VdlyVal__OUT_comUOp__v56) 
                                            << 1U));
        vlSelfRef.__PVT__OUT_comUOp[3U] = (1U | vlSelfRef.__PVT__OUT_comUOp
                                           [3U]);
    }
    if (vlSelfRef.__VdlySet__OUT_comUOp__v58) {
        vlSelfRef.__PVT__OUT_comUOp[3U] = (0x3ffffU 
                                           & vlSelfRef.__PVT__OUT_comUOp
                                           [3U]);
        vlSelfRef.__PVT__OUT_comUOp[3U] = (0x20000U 
                                           | (0x7c07ffU 
                                              & vlSelfRef.__PVT__OUT_comUOp
                                              [3U]));
    }
    vlSelfRef.__PVT__rnUOpSorted[0U][0U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][1U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][2U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][3U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][4U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[0U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__rnUOpSorted
                                            [0U][0U]);
    if ((vlSelfRef.__PVT__IN_uop[0U][0U] & (0U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[0U][0U] = vlSelfRef.__PVT__IN_uop
            [0U][0U];
        vlSelfRef.__PVT__rnUOpSorted[0U][1U] = vlSelfRef.__PVT__IN_uop
            [0U][1U];
        vlSelfRef.__PVT__rnUOpSorted[0U][2U] = vlSelfRef.__PVT__IN_uop
            [0U][2U];
        vlSelfRef.__PVT__rnUOpSorted[0U][3U] = vlSelfRef.__PVT__IN_uop
            [0U][3U];
        vlSelfRef.__PVT__rnUOpSorted[0U][4U] = vlSelfRef.__PVT__IN_uop
            [0U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[1U][0U] & (0U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[0U][0U] = vlSelfRef.__PVT__IN_uop
            [1U][0U];
        vlSelfRef.__PVT__rnUOpSorted[0U][1U] = vlSelfRef.__PVT__IN_uop
            [1U][1U];
        vlSelfRef.__PVT__rnUOpSorted[0U][2U] = vlSelfRef.__PVT__IN_uop
            [1U][2U];
        vlSelfRef.__PVT__rnUOpSorted[0U][3U] = vlSelfRef.__PVT__IN_uop
            [1U][3U];
        vlSelfRef.__PVT__rnUOpSorted[0U][4U] = vlSelfRef.__PVT__IN_uop
            [1U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[2U][0U] & (0U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[0U][0U] = vlSelfRef.__PVT__IN_uop
            [2U][0U];
        vlSelfRef.__PVT__rnUOpSorted[0U][1U] = vlSelfRef.__PVT__IN_uop
            [2U][1U];
        vlSelfRef.__PVT__rnUOpSorted[0U][2U] = vlSelfRef.__PVT__IN_uop
            [2U][2U];
        vlSelfRef.__PVT__rnUOpSorted[0U][3U] = vlSelfRef.__PVT__IN_uop
            [2U][3U];
        vlSelfRef.__PVT__rnUOpSorted[0U][4U] = vlSelfRef.__PVT__IN_uop
            [2U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[3U][0U] & (0U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[0U][0U] = vlSelfRef.__PVT__IN_uop
            [3U][0U];
        vlSelfRef.__PVT__rnUOpSorted[0U][1U] = vlSelfRef.__PVT__IN_uop
            [3U][1U];
        vlSelfRef.__PVT__rnUOpSorted[0U][2U] = vlSelfRef.__PVT__IN_uop
            [3U][2U];
        vlSelfRef.__PVT__rnUOpSorted[0U][3U] = vlSelfRef.__PVT__IN_uop
            [3U][3U];
        vlSelfRef.__PVT__rnUOpSorted[0U][4U] = vlSelfRef.__PVT__IN_uop
            [3U][4U];
    }
    vlSelfRef.__PVT__rnUOpSorted[1U][0U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][1U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][2U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][3U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][4U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[1U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__rnUOpSorted
                                            [1U][0U]);
    if ((vlSelfRef.__PVT__IN_uop[0U][0U] & (1U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[1U][0U] = vlSelfRef.__PVT__IN_uop
            [0U][0U];
        vlSelfRef.__PVT__rnUOpSorted[1U][1U] = vlSelfRef.__PVT__IN_uop
            [0U][1U];
        vlSelfRef.__PVT__rnUOpSorted[1U][2U] = vlSelfRef.__PVT__IN_uop
            [0U][2U];
        vlSelfRef.__PVT__rnUOpSorted[1U][3U] = vlSelfRef.__PVT__IN_uop
            [0U][3U];
        vlSelfRef.__PVT__rnUOpSorted[1U][4U] = vlSelfRef.__PVT__IN_uop
            [0U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[1U][0U] & (1U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[1U][0U] = vlSelfRef.__PVT__IN_uop
            [1U][0U];
        vlSelfRef.__PVT__rnUOpSorted[1U][1U] = vlSelfRef.__PVT__IN_uop
            [1U][1U];
        vlSelfRef.__PVT__rnUOpSorted[1U][2U] = vlSelfRef.__PVT__IN_uop
            [1U][2U];
        vlSelfRef.__PVT__rnUOpSorted[1U][3U] = vlSelfRef.__PVT__IN_uop
            [1U][3U];
        vlSelfRef.__PVT__rnUOpSorted[1U][4U] = vlSelfRef.__PVT__IN_uop
            [1U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[2U][0U] & (1U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[1U][0U] = vlSelfRef.__PVT__IN_uop
            [2U][0U];
        vlSelfRef.__PVT__rnUOpSorted[1U][1U] = vlSelfRef.__PVT__IN_uop
            [2U][1U];
        vlSelfRef.__PVT__rnUOpSorted[1U][2U] = vlSelfRef.__PVT__IN_uop
            [2U][2U];
        vlSelfRef.__PVT__rnUOpSorted[1U][3U] = vlSelfRef.__PVT__IN_uop
            [2U][3U];
        vlSelfRef.__PVT__rnUOpSorted[1U][4U] = vlSelfRef.__PVT__IN_uop
            [2U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[3U][0U] & (1U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[1U][0U] = vlSelfRef.__PVT__IN_uop
            [3U][0U];
        vlSelfRef.__PVT__rnUOpSorted[1U][1U] = vlSelfRef.__PVT__IN_uop
            [3U][1U];
        vlSelfRef.__PVT__rnUOpSorted[1U][2U] = vlSelfRef.__PVT__IN_uop
            [3U][2U];
        vlSelfRef.__PVT__rnUOpSorted[1U][3U] = vlSelfRef.__PVT__IN_uop
            [3U][3U];
        vlSelfRef.__PVT__rnUOpSorted[1U][4U] = vlSelfRef.__PVT__IN_uop
            [3U][4U];
    }
    vlSelfRef.__PVT__rnUOpSorted[2U][0U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][1U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][2U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][3U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][4U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[2U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__rnUOpSorted
                                            [2U][0U]);
    if ((vlSelfRef.__PVT__IN_uop[0U][0U] & (2U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[2U][0U] = vlSelfRef.__PVT__IN_uop
            [0U][0U];
        vlSelfRef.__PVT__rnUOpSorted[2U][1U] = vlSelfRef.__PVT__IN_uop
            [0U][1U];
        vlSelfRef.__PVT__rnUOpSorted[2U][2U] = vlSelfRef.__PVT__IN_uop
            [0U][2U];
        vlSelfRef.__PVT__rnUOpSorted[2U][3U] = vlSelfRef.__PVT__IN_uop
            [0U][3U];
        vlSelfRef.__PVT__rnUOpSorted[2U][4U] = vlSelfRef.__PVT__IN_uop
            [0U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[1U][0U] & (2U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[2U][0U] = vlSelfRef.__PVT__IN_uop
            [1U][0U];
        vlSelfRef.__PVT__rnUOpSorted[2U][1U] = vlSelfRef.__PVT__IN_uop
            [1U][1U];
        vlSelfRef.__PVT__rnUOpSorted[2U][2U] = vlSelfRef.__PVT__IN_uop
            [1U][2U];
        vlSelfRef.__PVT__rnUOpSorted[2U][3U] = vlSelfRef.__PVT__IN_uop
            [1U][3U];
        vlSelfRef.__PVT__rnUOpSorted[2U][4U] = vlSelfRef.__PVT__IN_uop
            [1U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[2U][0U] & (2U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[2U][0U] = vlSelfRef.__PVT__IN_uop
            [2U][0U];
        vlSelfRef.__PVT__rnUOpSorted[2U][1U] = vlSelfRef.__PVT__IN_uop
            [2U][1U];
        vlSelfRef.__PVT__rnUOpSorted[2U][2U] = vlSelfRef.__PVT__IN_uop
            [2U][2U];
        vlSelfRef.__PVT__rnUOpSorted[2U][3U] = vlSelfRef.__PVT__IN_uop
            [2U][3U];
        vlSelfRef.__PVT__rnUOpSorted[2U][4U] = vlSelfRef.__PVT__IN_uop
            [2U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[3U][0U] & (2U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[2U][0U] = vlSelfRef.__PVT__IN_uop
            [3U][0U];
        vlSelfRef.__PVT__rnUOpSorted[2U][1U] = vlSelfRef.__PVT__IN_uop
            [3U][1U];
        vlSelfRef.__PVT__rnUOpSorted[2U][2U] = vlSelfRef.__PVT__IN_uop
            [3U][2U];
        vlSelfRef.__PVT__rnUOpSorted[2U][3U] = vlSelfRef.__PVT__IN_uop
            [3U][3U];
        vlSelfRef.__PVT__rnUOpSorted[2U][4U] = vlSelfRef.__PVT__IN_uop
            [3U][4U];
    }
    vlSelfRef.__PVT__rnUOpSorted[3U][0U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][1U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][2U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][3U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][4U] = 0U;
    vlSelfRef.__PVT__rnUOpSorted[3U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__rnUOpSorted
                                            [3U][0U]);
    if ((vlSelfRef.__PVT__IN_uop[0U][0U] & (3U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [0U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[3U][0U] = vlSelfRef.__PVT__IN_uop
            [0U][0U];
        vlSelfRef.__PVT__rnUOpSorted[3U][1U] = vlSelfRef.__PVT__IN_uop
            [0U][1U];
        vlSelfRef.__PVT__rnUOpSorted[3U][2U] = vlSelfRef.__PVT__IN_uop
            [0U][2U];
        vlSelfRef.__PVT__rnUOpSorted[3U][3U] = vlSelfRef.__PVT__IN_uop
            [0U][3U];
        vlSelfRef.__PVT__rnUOpSorted[3U][4U] = vlSelfRef.__PVT__IN_uop
            [0U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[1U][0U] & (3U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [1U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[3U][0U] = vlSelfRef.__PVT__IN_uop
            [1U][0U];
        vlSelfRef.__PVT__rnUOpSorted[3U][1U] = vlSelfRef.__PVT__IN_uop
            [1U][1U];
        vlSelfRef.__PVT__rnUOpSorted[3U][2U] = vlSelfRef.__PVT__IN_uop
            [1U][2U];
        vlSelfRef.__PVT__rnUOpSorted[3U][3U] = vlSelfRef.__PVT__IN_uop
            [1U][3U];
        vlSelfRef.__PVT__rnUOpSorted[3U][4U] = vlSelfRef.__PVT__IN_uop
            [1U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[2U][0U] & (3U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [2U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[3U][0U] = vlSelfRef.__PVT__IN_uop
            [2U][0U];
        vlSelfRef.__PVT__rnUOpSorted[3U][1U] = vlSelfRef.__PVT__IN_uop
            [2U][1U];
        vlSelfRef.__PVT__rnUOpSorted[3U][2U] = vlSelfRef.__PVT__IN_uop
            [2U][2U];
        vlSelfRef.__PVT__rnUOpSorted[3U][3U] = vlSelfRef.__PVT__IN_uop
            [2U][3U];
        vlSelfRef.__PVT__rnUOpSorted[3U][4U] = vlSelfRef.__PVT__IN_uop
            [2U][4U];
    }
    if ((vlSelfRef.__PVT__IN_uop[3U][0U] & (3U == (3U 
                                                   & (vlSelfRef.__PVT__IN_uop
                                                      [3U][1U] 
                                                      >> 0x15U))))) {
        vlSelfRef.__PVT__rnUOpSorted[3U][0U] = vlSelfRef.__PVT__IN_uop
            [3U][0U];
        vlSelfRef.__PVT__rnUOpSorted[3U][1U] = vlSelfRef.__PVT__IN_uop
            [3U][1U];
        vlSelfRef.__PVT__rnUOpSorted[3U][2U] = vlSelfRef.__PVT__IN_uop
            [3U][2U];
        vlSelfRef.__PVT__rnUOpSorted[3U][3U] = vlSelfRef.__PVT__IN_uop
            [3U][3U];
        vlSelfRef.__PVT__rnUOpSorted[3U][4U] = vlSelfRef.__PVT__IN_uop
            [3U][4U];
    }
}
