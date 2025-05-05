// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetchPipeline.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__12(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___nba_sequent__TOP__Top__soc__core__ifetch__ifp__12\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__BH_endOffsetValid;
    __PVT__BH_endOffsetValid = 0;
    CData/*2:0*/ __PVT__BH_endOffset;
    __PVT__BH_endOffset = 0;
    CData/*0:0*/ __PVT__BH_newPredTaken;
    __PVT__BH_newPredTaken = 0;
    CData/*2:0*/ __PVT__BH_newPredPos;
    __PVT__BH_newPredPos = 0;
    VlWide<7>/*204:0*/ __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst;
    VL_ZERO_W(205, __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst);
    VlWide<7>/*204:0*/ __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp;
    VL_ZERO_W(205, __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp);
    CData/*0:0*/ __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0;
    CData/*4:0*/ __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0;
    CData/*0:0*/ instrAligner__DOT____Vlvbound_hced28d0f__0;
    instrAligner__DOT____Vlvbound_hced28d0f__0 = 0;
    VlWide<7>/*223:0*/ __Vtemp_3;
    VlWide<7>/*223:0*/ __Vtemp_8;
    VlWide<7>/*223:0*/ __Vtemp_14;
    VlWide<7>/*223:0*/ __Vtemp_19;
    VlWide<7>/*223:0*/ __Vtemp_25;
    VlWide<7>/*223:0*/ __Vtemp_30;
    VlWide<7>/*223:0*/ __Vtemp_36;
    VlWide<7>/*223:0*/ __Vtemp_41;
    // Body
    vlSelfRef.__PVT__OUT_retUpdate = 0ULL;
    __PVT__BH_endOffsetValid = 0U;
    __PVT__BH_endOffset = 0U;
    __PVT__BH_newPredPos = 0U;
    __PVT__BH_newPredTaken = 0U;
    vlSelfRef.__PVT__BH_decBranch = 0ULL;
    if ((1U & vlSelfRef.__PVT__packet[0U])) {
        vlSelfRef.__PVT__OUT_retUpdate = vlSelfRef.__PVT__branchHandler__DOT__retUpd_c;
        __PVT__BH_endOffsetValid = vlSelfRef.__PVT__branchHandler__DOT__endOffsValid;
        __PVT__BH_endOffset = vlSelfRef.__PVT__branchHandler__DOT__endOffs;
        __PVT__BH_newPredPos = vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c;
        __PVT__BH_newPredTaken = vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c;
        vlSelfRef.__PVT__BH_decBranch = vlSelfRef.__PVT__branchHandler__DOT__decBranch_c;
    }
    vlSelfRef.__PVT__instrAligner__DOT__outputReady 
        = (1U & ((~ vlSelfRef.__PVT__OUT_instrs[0U][0U]) 
                 | (IData)(vlSymsp->TOP__Top__soc__core.__Vcellinp__idec__en)));
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][0U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][1U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][2U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][3U] = 0U;
    if (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
        [0U]) {
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c 
            = ((0x17U >= vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                [0U]) && (1U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                >> vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                [0U])));
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c 
            = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                        [0U] + (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c)));
        __Vtemp_3[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(1U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            (((IData)(0x10U) + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0xddU) 
                                                      * 
                                                      VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_3[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(2U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(1U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_3[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(3U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(2U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_3[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(4U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(3U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_3[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(5U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(4U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_3[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(6U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(5U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_3[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(7U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(6U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] 
                = __Vtemp_3[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] 
                = __Vtemp_3[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] 
                = __Vtemp_3[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] 
                = __Vtemp_3[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                = __Vtemp_3[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                = __Vtemp_3[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] 
                = (0x1fffU & __Vtemp_3[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
        }
        __Vtemp_8[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(1U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U], 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            (((IData)(0x10U) + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 3U)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0xddU) 
                                                      * 
                                                      VL_SHIFTR_III(32,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [0U], 3U)))))));
        __Vtemp_8[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(2U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U], 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(1U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U)))))));
        __Vtemp_8[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(3U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U], 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(2U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U)))))));
        __Vtemp_8[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(4U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U], 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(3U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U)))))));
        __Vtemp_8[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(5U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U], 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(4U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U)))))));
        __Vtemp_8[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(6U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U], 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(5U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U)))))));
        __Vtemp_8[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(7U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U], 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(6U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U], 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] 
                = __Vtemp_8[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] 
                = __Vtemp_8[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] 
                = __Vtemp_8[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] 
                = __Vtemp_8[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] 
                = __Vtemp_8[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                = __Vtemp_8[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                = (0x1fffU & __Vtemp_8[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
        }
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][0U] 
            = (1U | ((0xfffffc00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                      [0U][0U]) | (((__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                     & ((7U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                               >> 1U)) 
                                        == (7U & (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c)))) 
                                    << 9U) | ((0x1f0U 
                                               & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     >> 8U)) 
                                                 | (2U 
                                                    & ((~ 
                                                        ((0x17U 
                                                          >= 
                                                          vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                          [0U]) 
                                                         && (1U 
                                                             & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                >> 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U])))) 
                                                       << 1U)))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][0U] 
            = ((0x3ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][0U]) | (0xfffffc00U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                            << 9U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][1U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][1U]) | (0x3ffU & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                       >> 0x17U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][1U] 
            = ((0xfffc01ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][1U]) | (0xfffffe00U & ((0x38000U 
                                             & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                [0U] 
                                                << 0xfU)) 
                                            | ((0x7000U 
                                                & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                   >> 6U)) 
                                               | (0xe00U 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     << 8U))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][1U] 
            = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][1U]) | (0xfffc0000U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                            << 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][2U] 
            = ((0xffffc000U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][2U]) | (0x3fffU & ((0x3fffeU & 
                                         (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                                          << 1U)) | 
                                        (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                         >> 0x1fU))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][2U] 
            = ((0xc0003fffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                        [0U], 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [0U], 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 4U)))))
                               : 0U) << 0xeU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][2U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                         [0U]), 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U]), 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U]), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U]), 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [0U]), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U]), 4U)))))
                               : 0U) << 0x1eU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][3U] 
            = (0x3fffU & (((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                              ((IData)(1U) 
                                                               + 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U]), 4U)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [0U]), 4U)))
                                            ? 0U : 
                                           (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U]), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [0U]), 4U))))) 
                                          | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U]), 4U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U]), 4U)))))
                            : 0U) >> 2U));
    }
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][0U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][1U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][2U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][3U] = 0U;
    if (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
        [1U]) {
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c 
            = ((0x17U >= vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                [1U]) && (1U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                >> vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                [1U])));
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c 
            = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                        [1U] + (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c)));
        __Vtemp_14[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_14[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_14[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_14[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_14[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_14[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_14[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] 
                = __Vtemp_14[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] 
                = __Vtemp_14[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] 
                = __Vtemp_14[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] 
                = __Vtemp_14[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                = __Vtemp_14[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                = __Vtemp_14[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] 
                = (0x1fffU & __Vtemp_14[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
        }
        __Vtemp_19[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [1U], 3U)))))));
        __Vtemp_19[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_19[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_19[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_19[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_19[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_19[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] 
                = __Vtemp_19[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] 
                = __Vtemp_19[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] 
                = __Vtemp_19[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] 
                = __Vtemp_19[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] 
                = __Vtemp_19[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                = __Vtemp_19[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                = (0x1fffU & __Vtemp_19[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
        }
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][0U] 
            = (1U | ((0xfffffc00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                      [1U][0U]) | (((__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                     & ((7U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                               >> 1U)) 
                                        == (7U & (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c)))) 
                                    << 9U) | ((0x1f0U 
                                               & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     >> 8U)) 
                                                 | (2U 
                                                    & ((~ 
                                                        ((0x17U 
                                                          >= 
                                                          vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                          [1U]) 
                                                         && (1U 
                                                             & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                >> 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U])))) 
                                                       << 1U)))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][0U] 
            = ((0x3ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][0U]) | (0xfffffc00U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                            << 9U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][1U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][1U]) | (0x3ffU & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                       >> 0x17U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][1U] 
            = ((0xfffc01ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][1U]) | (0xfffffe00U & ((0x38000U 
                                             & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                [1U] 
                                                << 0xfU)) 
                                            | ((0x7000U 
                                                & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                   >> 6U)) 
                                               | (0xe00U 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     << 8U))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][1U] 
            = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][1U]) | (0xfffc0000U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                            << 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][2U] 
            = ((0xffffc000U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][2U]) | (0x3fffU & ((0x3fffeU & 
                                         (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                                          << 1U)) | 
                                        (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                         >> 0x1fU))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][2U] 
            = ((0xc0003fffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                        [1U], 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [1U], 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [1U], 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [1U], 4U)))))
                               : 0U) << 0xeU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][2U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                         [1U]), 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [1U]), 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [1U]), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [1U]), 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [1U]), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U]), 4U)))))
                               : 0U) << 0x1eU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][3U] 
            = (0x3fffU & (((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                              ((IData)(1U) 
                                                               + 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [1U]), 4U)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [1U]), 4U)))
                                            ? 0U : 
                                           (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U]), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [1U]), 4U))))) 
                                          | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U]), 4U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U]), 4U)))))
                            : 0U) >> 2U));
    }
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][0U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][1U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][2U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][3U] = 0U;
    if (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
        [2U]) {
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c 
            = ((0x17U >= vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                [2U]) && (1U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                >> vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                [2U])));
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c 
            = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                        [2U] + (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c)));
        __Vtemp_25[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_25[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_25[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_25[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_25[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_25[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_25[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] 
                = __Vtemp_25[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] 
                = __Vtemp_25[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] 
                = __Vtemp_25[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] 
                = __Vtemp_25[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                = __Vtemp_25[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                = __Vtemp_25[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] 
                = (0x1fffU & __Vtemp_25[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
        }
        __Vtemp_30[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [2U], 3U)))))));
        __Vtemp_30[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_30[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_30[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_30[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_30[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_30[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] 
                = __Vtemp_30[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] 
                = __Vtemp_30[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] 
                = __Vtemp_30[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] 
                = __Vtemp_30[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] 
                = __Vtemp_30[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                = __Vtemp_30[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                = (0x1fffU & __Vtemp_30[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
        }
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][0U] 
            = (1U | ((0xfffffc00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                      [2U][0U]) | (((__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                     & ((7U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                               >> 1U)) 
                                        == (7U & (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c)))) 
                                    << 9U) | ((0x1f0U 
                                               & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     >> 8U)) 
                                                 | (2U 
                                                    & ((~ 
                                                        ((0x17U 
                                                          >= 
                                                          vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                          [2U]) 
                                                         && (1U 
                                                             & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                >> 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U])))) 
                                                       << 1U)))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][0U] 
            = ((0x3ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][0U]) | (0xfffffc00U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                            << 9U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][1U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][1U]) | (0x3ffU & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                       >> 0x17U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][1U] 
            = ((0xfffc01ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][1U]) | (0xfffffe00U & ((0x38000U 
                                             & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                [2U] 
                                                << 0xfU)) 
                                            | ((0x7000U 
                                                & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                   >> 6U)) 
                                               | (0xe00U 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     << 8U))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][1U] 
            = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][1U]) | (0xfffc0000U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                            << 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][2U] 
            = ((0xffffc000U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][2U]) | (0x3fffU & ((0x3fffeU & 
                                         (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                                          << 1U)) | 
                                        (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                         >> 0x1fU))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][2U] 
            = ((0xc0003fffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                        [2U], 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [2U], 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [2U], 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [2U], 4U)))))
                               : 0U) << 0xeU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][2U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                         [2U]), 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [2U]), 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [2U]), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [2U]), 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [2U]), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U]), 4U)))))
                               : 0U) << 0x1eU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][3U] 
            = (0x3fffU & (((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                              ((IData)(1U) 
                                                               + 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [2U]), 4U)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [2U]), 4U)))
                                            ? 0U : 
                                           (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U]), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [2U]), 4U))))) 
                                          | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U]), 4U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U]), 4U)))))
                            : 0U) >> 2U));
    }
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][0U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][1U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][2U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][3U] = 0U;
    if (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
        [3U]) {
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c 
            = ((0x17U >= vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                [3U]) && (1U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                >> vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                [3U])));
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c 
            = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                        [3U] + (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c)));
        __Vtemp_36[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_36[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_36[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_36[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_36[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_36[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_36[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] 
                = __Vtemp_36[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] 
                = __Vtemp_36[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] 
                = __Vtemp_36[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] 
                = __Vtemp_36[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                = __Vtemp_36[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                = __Vtemp_36[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] 
                = (0x1fffU & __Vtemp_36[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
        }
        __Vtemp_41[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [3U], 3U)))))));
        __Vtemp_41[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_41[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_41[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_41[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_41[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_41[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] 
                = __Vtemp_41[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] 
                = __Vtemp_41[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] 
                = __Vtemp_41[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] 
                = __Vtemp_41[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] 
                = __Vtemp_41[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                = __Vtemp_41[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                = (0x1fffU & __Vtemp_41[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
        }
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][0U] 
            = (1U | ((0xfffffc00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                      [3U][0U]) | (((__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                     & ((7U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                               >> 1U)) 
                                        == (7U & (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c)))) 
                                    << 9U) | ((0x1f0U 
                                               & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     >> 8U)) 
                                                 | (2U 
                                                    & ((~ 
                                                        ((0x17U 
                                                          >= 
                                                          vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                          [3U]) 
                                                         && (1U 
                                                             & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                >> 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U])))) 
                                                       << 1U)))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][0U] 
            = ((0x3ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][0U]) | (0xfffffc00U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                            << 9U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][1U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][1U]) | (0x3ffU & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                       >> 0x17U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][1U] 
            = ((0xfffc01ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][1U]) | (0xfffffe00U & ((0x38000U 
                                             & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                [3U] 
                                                << 0xfU)) 
                                            | ((0x7000U 
                                                & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                   >> 6U)) 
                                               | (0xe00U 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     << 8U))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][1U] 
            = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][1U]) | (0xfffc0000U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                            << 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][2U] 
            = ((0xffffc000U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][2U]) | (0x3fffU & ((0x3fffeU & 
                                         (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                                          << 1U)) | 
                                        (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                         >> 0x1fU))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][2U] 
            = ((0xc0003fffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                        [3U], 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [3U], 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [3U], 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [3U], 4U)))))
                               : 0U) << 0xeU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][2U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                         [3U]), 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [3U]), 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [3U]), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [3U]), 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U]), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U]), 4U)))))
                               : 0U) << 0x1eU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][3U] 
            = (0x3fffU & (((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                              ((IData)(1U) 
                                                               + 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [3U]), 4U)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [3U]), 4U)))
                                            ? 0U : 
                                           (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U]), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [3U]), 4U))))) 
                                          | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U]), 4U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U]), 4U)))))
                            : 0U) >> 2U));
    }
    vlSelfRef.packetRePred[0U] = vlSelfRef.__PVT__packet[0U];
    vlSelfRef.packetRePred[1U] = vlSelfRef.__PVT__packet[1U];
    vlSelfRef.packetRePred[2U] = vlSelfRef.__PVT__packet[2U];
    vlSelfRef.packetRePred[3U] = vlSelfRef.__PVT__packet[3U];
    vlSelfRef.packetRePred[4U] = vlSelfRef.__PVT__packet[4U];
    vlSelfRef.packetRePred[5U] = vlSelfRef.__PVT__packet[5U];
    vlSelfRef.packetRePred[6U] = vlSelfRef.__PVT__packet[6U];
    if ((0U == (3U & (vlSelfRef.packetRePred[5U] >> 0xaU)))) {
        if (__PVT__BH_endOffsetValid) {
            if ((0U == (IData)(__PVT__BH_endOffset))) {
                vlSelfRef.packetRePred[0U] = 0U;
                vlSelfRef.packetRePred[1U] = 0U;
                vlSelfRef.packetRePred[2U] = 0U;
                vlSelfRef.packetRePred[3U] = 0U;
                vlSelfRef.packetRePred[4U] = 0U;
                vlSelfRef.packetRePred[5U] = 0U;
                vlSelfRef.packetRePred[6U] = 0U;
                vlSelfRef.packetRePred[0U] = (0xfffffffeU 
                                              & vlSelfRef.packetRePred[0U]);
            } else {
                vlSelfRef.packetRePred[5U] = ((0xffffff8fU 
                                               & vlSelfRef.packetRePred[5U]) 
                                              | (0x70U 
                                                 & (((IData)(__PVT__BH_endOffset) 
                                                     - (IData)(1U)) 
                                                    << 4U)));
            }
            if (((7U & (vlSelfRef.packetRePred[5U] 
                        >> 7U)) > (7U & (vlSelfRef.packetRePred[5U] 
                                         >> 4U)))) {
                vlSelfRef.packetRePred[0U] = 0U;
                vlSelfRef.packetRePred[1U] = 0U;
                vlSelfRef.packetRePred[2U] = 0U;
                vlSelfRef.packetRePred[3U] = 0U;
                vlSelfRef.packetRePred[4U] = 0U;
                vlSelfRef.packetRePred[5U] = 0U;
                vlSelfRef.packetRePred[6U] = 0U;
                vlSelfRef.packetRePred[0U] = (0xfffffffeU 
                                              & vlSelfRef.packetRePred[0U]);
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__BH_decBranch))) {
            vlSelfRef.packetRePred[4U] = ((1U & vlSelfRef.packetRePred[4U]) 
                                          | ((IData)(
                                                     (((QData)((IData)(__PVT__BH_newPredPos)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((IData)(__PVT__BH_newPredTaken) 
                                                                          << 0x1fU) 
                                                                         | (0x7fffffffU 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__BH_decBranch 
                                                                                >> 7U)))))))) 
                                             << 1U));
            vlSelfRef.packetRePred[5U] = ((0xfffffff0U 
                                           & vlSelfRef.packetRePred[5U]) 
                                          | (((IData)(
                                                      (((QData)((IData)(__PVT__BH_newPredPos)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(__PVT__BH_newPredTaken) 
                                                                           << 0x1fU) 
                                                                          | (0x7fffffffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__BH_decBranch 
                                                                                >> 7U)))))))) 
                                              >> 0x1fU) 
                                             | ((IData)(
                                                        ((((QData)((IData)(__PVT__BH_newPredPos)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(__PVT__BH_newPredTaken) 
                                                                              << 0x1fU) 
                                                                             | (0x7fffffffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__BH_decBranch 
                                                                                >> 7U))))))) 
                                                         >> 0x20U)) 
                                                << 1U)));
        }
    }
    vlSelfRef.__PVT__OUT_fetchBranch = vlSelfRef.__PVT__BH_decBranch;
    if (((IData)(vlSelfRef.__PVT__cacheMiss) | (IData)(vlSelfRef.__PVT__tlbMiss))) {
        vlSelfRef.__PVT__OUT_fetchBranch = (0x1000000000000ULL 
                                            | (((QData)((IData)(
                                                                (7U 
                                                                 & (vlSelfRef.fetch1[2U] 
                                                                    >> 0x19U)))) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & ((vlSelfRef.fetch1[3U] 
                                                                        << 7U) 
                                                                       | (vlSelfRef.fetch1[2U] 
                                                                          >> 0x19U))))) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     | (0x7cU 
                                                                        & (vlSelfRef.fetch1[2U] 
                                                                           >> 0x11U))))))));
    }
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffffeU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | (IData)(instrAligner__DOT____Vlvbound_hced28d0f__0));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & ((1U 
                                                            & (~ 
                                                               ((0x17U 
                                                                 >= 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [3U]) 
                                                                && (1U 
                                                                    & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                       >> 
                                                                       vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                       [3U]))))) 
                                                           && (1U 
                                                               > 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffffdU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 1U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (1U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (2U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffffbU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 2U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (2U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (3U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffff7U & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 3U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (3U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (4U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffffefU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 4U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (4U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (5U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffffdfU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 5U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (5U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (6U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffffbfU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 6U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (6U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (7U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffff7fU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 7U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (7U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (8U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffeffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 8U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (8U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (9U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffdffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 9U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (9U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xaU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfffbffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xaU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xaU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xbU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfff7ffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xbU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xbU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xcU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffefffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xcU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xcU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xdU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffdfffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xdU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xdU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xeU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xffbfffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xeU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xeU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0xfU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xff7fffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0xfU));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0xfU 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x10U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfeffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x10U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x10U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x11U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfdffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x11U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x11U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x12U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xfbffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x12U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x12U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x13U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xf7ffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x13U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x13U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x14U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xefffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x14U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x14U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x15U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xdfffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x15U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x15U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x16U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xbfffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x16U));
    instrAligner__DOT____Vlvbound_hced28d0f__0 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__instrAligner__DOT__outputReady)) 
                                                     | (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
                                                        [3U] 
                                                        & (((0x17U 
                                                             >= 
                                                             vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                             [3U]) 
                                                            && (1U 
                                                                & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                   >> 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U])))
                                                            ? 
                                                           (0x16U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])
                                                            : 
                                                           (0x17U 
                                                            > 
                                                            vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                            [3U])))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0x7fffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(instrAligner__DOT____Vlvbound_hced28d0f__0) 
              << 0x17U));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0xff7fffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
                         | ((IData)(vlSelfRef.__PVT__instrAligner__DOT__middleIsSplit32) 
                            << 0xfU))));
    vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
        = ((0x7fffffU & vlSelfRef.__PVT__instrAligner__DOT__unhandled_c) 
           | ((IData)(((vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
                        >> 0x17U) | ((IData)(vlSelfRef.__PVT__instrAligner__DOT__isInstrStart32_c) 
                                     >> 7U))) << 0x17U));
    vlSelfRef.__PVT__IA_ready = ((~ (IData)((0U != 
                                             (0xffU 
                                              & (vlSelfRef.__PVT__instrAligner__DOT__unhandled_c 
                                                 & vlSelfRef.__PVT__instrAligner__DOT__windowStart_c))))) 
                                 & (IData)(vlSelfRef.__PVT__outFIFO__DOT__outValidReg));
    vlSelfRef.__PVT__outFIFO__DOT__outputReady = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__outFIFO__DOT__outValidReg)) 
                                                     | (IData)(vlSelfRef.__PVT__IA_ready)));
    vlSelfRef.__PVT__outFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__outFIFO__DOT__empty)) 
                                                & (IData)(vlSelfRef.__PVT__outFIFO__DOT__outputReady));
    vlSelfRef.__PVT__outFIFO__DOT__doInsert = (1U & 
                                               (vlSelfRef.packetRePred[0U] 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__outFIFO__DOT__fullCond) 
                                                     & (IData)(vlSelfRef.__PVT__outFIFO__DOT__equal))) 
                                                   | (IData)(vlSelfRef.__PVT__outFIFO__DOT__doExtract))));
}
