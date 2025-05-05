// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RenameTable__ND5.h"

VL_INLINE_OPT void VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__0(VTop_RenameTable__ND5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_commitPrevTags[0U] = vlSelfRef.comTag
        [vlSelfRef.__PVT__IN_commitIDs[0U]];
    vlSelfRef.__PVT__OUT_commitPrevTags[1U] = vlSelfRef.comTag
        [vlSelfRef.__PVT__IN_commitIDs[1U]];
    vlSelfRef.__PVT__OUT_commitPrevTags[2U] = vlSelfRef.comTag
        [vlSelfRef.__PVT__IN_commitIDs[2U]];
    vlSelfRef.__PVT__OUT_commitPrevTags[3U] = vlSelfRef.comTag
        [vlSelfRef.__PVT__IN_commitIDs[3U]];
}

VL_INLINE_OPT void VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__1(VTop_RenameTable__ND5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_RenameTable__ND5___ico_sequent__TOP__Top__soc__core__rn__rt__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_lookupSpecTag[0U] = vlSelfRef.specTag
        [vlSelfRef.__PVT__IN_lookupIDs[0U]];
    vlSelfRef.__PVT__OUT_lookupAvail[0U] = (1U & ((IData)(
                                                          (vlSelfRef.tagAvail 
                                                           >> 
                                                           (0x3fU 
                                                            & vlSelfRef.__PVT__OUT_lookupSpecTag
                                                            [0U]))) 
                                                  | (vlSelfRef.__PVT__OUT_lookupSpecTag
                                                     [0U] 
                                                     >> 6U)));
    if ((vlSelfRef.__PVT__IN_wbValid[0U] & (vlSelfRef.__PVT__IN_wbTag
                                            [0U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[0U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[1U] & (vlSelfRef.__PVT__IN_wbTag
                                            [1U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[0U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[2U] & (vlSelfRef.__PVT__IN_wbTag
                                            [2U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[0U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[3U] & (vlSelfRef.__PVT__IN_wbTag
                                            [3U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[0U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[4U] & (vlSelfRef.__PVT__IN_wbTag
                                            [4U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[0U] = 1U;
    }
    vlSelfRef.__PVT__OUT_lookupSpecTag[1U] = vlSelfRef.specTag
        [vlSelfRef.__PVT__IN_lookupIDs[1U]];
    vlSelfRef.__PVT__OUT_lookupAvail[1U] = (1U & ((IData)(
                                                          (vlSelfRef.tagAvail 
                                                           >> 
                                                           (0x3fU 
                                                            & vlSelfRef.__PVT__OUT_lookupSpecTag
                                                            [1U]))) 
                                                  | (vlSelfRef.__PVT__OUT_lookupSpecTag
                                                     [1U] 
                                                     >> 6U)));
    if ((vlSelfRef.__PVT__IN_wbValid[0U] & (vlSelfRef.__PVT__IN_wbTag
                                            [0U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[1U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[1U] & (vlSelfRef.__PVT__IN_wbTag
                                            [1U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[1U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[2U] & (vlSelfRef.__PVT__IN_wbTag
                                            [2U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[1U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[3U] & (vlSelfRef.__PVT__IN_wbTag
                                            [3U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[1U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[4U] & (vlSelfRef.__PVT__IN_wbTag
                                            [4U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[1U] = 1U;
    }
    vlSelfRef.__PVT__OUT_lookupSpecTag[2U] = vlSelfRef.specTag
        [vlSelfRef.__PVT__IN_lookupIDs[2U]];
    vlSelfRef.__PVT__OUT_lookupAvail[2U] = (1U & ((IData)(
                                                          (vlSelfRef.tagAvail 
                                                           >> 
                                                           (0x3fU 
                                                            & vlSelfRef.__PVT__OUT_lookupSpecTag
                                                            [2U]))) 
                                                  | (vlSelfRef.__PVT__OUT_lookupSpecTag
                                                     [2U] 
                                                     >> 6U)));
    if ((vlSelfRef.__PVT__IN_wbValid[0U] & (vlSelfRef.__PVT__IN_wbTag
                                            [0U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [2U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[2U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[1U] & (vlSelfRef.__PVT__IN_wbTag
                                            [1U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [2U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[2U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[2U] & (vlSelfRef.__PVT__IN_wbTag
                                            [2U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [2U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[2U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[3U] & (vlSelfRef.__PVT__IN_wbTag
                                            [3U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [2U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[2U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[4U] & (vlSelfRef.__PVT__IN_wbTag
                                            [4U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [2U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[2U] = 1U;
    }
    if (((vlSelfRef.__PVT__IN_issueValid[0U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [0U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [2U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[2U] = vlSelfRef.__PVT__IN_issueAvail
            [0U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[2U] = vlSelfRef.__PVT__IN_issueTags
            [0U];
    }
    vlSelfRef.__PVT__OUT_lookupSpecTag[3U] = vlSelfRef.specTag
        [vlSelfRef.__PVT__IN_lookupIDs[3U]];
    vlSelfRef.__PVT__OUT_lookupAvail[3U] = (1U & ((IData)(
                                                          (vlSelfRef.tagAvail 
                                                           >> 
                                                           (0x3fU 
                                                            & vlSelfRef.__PVT__OUT_lookupSpecTag
                                                            [3U]))) 
                                                  | (vlSelfRef.__PVT__OUT_lookupSpecTag
                                                     [3U] 
                                                     >> 6U)));
    if ((vlSelfRef.__PVT__IN_wbValid[0U] & (vlSelfRef.__PVT__IN_wbTag
                                            [0U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [3U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[3U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[1U] & (vlSelfRef.__PVT__IN_wbTag
                                            [1U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [3U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[3U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[2U] & (vlSelfRef.__PVT__IN_wbTag
                                            [2U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [3U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[3U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[3U] & (vlSelfRef.__PVT__IN_wbTag
                                            [3U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [3U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[3U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[4U] & (vlSelfRef.__PVT__IN_wbTag
                                            [4U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [3U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[3U] = 1U;
    }
    if (((vlSelfRef.__PVT__IN_issueValid[0U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [0U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [3U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[3U] = vlSelfRef.__PVT__IN_issueAvail
            [0U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[3U] = vlSelfRef.__PVT__IN_issueTags
            [0U];
    }
    vlSelfRef.__PVT__OUT_lookupSpecTag[4U] = vlSelfRef.specTag
        [vlSelfRef.__PVT__IN_lookupIDs[4U]];
    vlSelfRef.__PVT__OUT_lookupAvail[4U] = (1U & ((IData)(
                                                          (vlSelfRef.tagAvail 
                                                           >> 
                                                           (0x3fU 
                                                            & vlSelfRef.__PVT__OUT_lookupSpecTag
                                                            [4U]))) 
                                                  | (vlSelfRef.__PVT__OUT_lookupSpecTag
                                                     [4U] 
                                                     >> 6U)));
    if ((vlSelfRef.__PVT__IN_wbValid[0U] & (vlSelfRef.__PVT__IN_wbTag
                                            [0U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [4U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[4U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[1U] & (vlSelfRef.__PVT__IN_wbTag
                                            [1U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [4U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[4U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[2U] & (vlSelfRef.__PVT__IN_wbTag
                                            [2U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [4U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[4U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[3U] & (vlSelfRef.__PVT__IN_wbTag
                                            [3U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [4U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[4U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[4U] & (vlSelfRef.__PVT__IN_wbTag
                                            [4U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [4U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[4U] = 1U;
    }
    if (((vlSelfRef.__PVT__IN_issueValid[0U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [0U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [4U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[4U] = vlSelfRef.__PVT__IN_issueAvail
            [0U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[4U] = vlSelfRef.__PVT__IN_issueTags
            [0U];
    }
    if (((vlSelfRef.__PVT__IN_issueValid[1U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [1U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [4U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[4U] = vlSelfRef.__PVT__IN_issueAvail
            [1U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[4U] = vlSelfRef.__PVT__IN_issueTags
            [1U];
    }
    vlSelfRef.__PVT__OUT_lookupSpecTag[5U] = vlSelfRef.specTag
        [vlSelfRef.__PVT__IN_lookupIDs[5U]];
    vlSelfRef.__PVT__OUT_lookupAvail[5U] = (1U & ((IData)(
                                                          (vlSelfRef.tagAvail 
                                                           >> 
                                                           (0x3fU 
                                                            & vlSelfRef.__PVT__OUT_lookupSpecTag
                                                            [5U]))) 
                                                  | (vlSelfRef.__PVT__OUT_lookupSpecTag
                                                     [5U] 
                                                     >> 6U)));
    if ((vlSelfRef.__PVT__IN_wbValid[0U] & (vlSelfRef.__PVT__IN_wbTag
                                            [0U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [5U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[5U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[1U] & (vlSelfRef.__PVT__IN_wbTag
                                            [1U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [5U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[5U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[2U] & (vlSelfRef.__PVT__IN_wbTag
                                            [2U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [5U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[5U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[3U] & (vlSelfRef.__PVT__IN_wbTag
                                            [3U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [5U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[5U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[4U] & (vlSelfRef.__PVT__IN_wbTag
                                            [4U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [5U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[5U] = 1U;
    }
    if (((vlSelfRef.__PVT__IN_issueValid[0U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [0U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [5U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[5U] = vlSelfRef.__PVT__IN_issueAvail
            [0U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[5U] = vlSelfRef.__PVT__IN_issueTags
            [0U];
    }
    if (((vlSelfRef.__PVT__IN_issueValid[1U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [1U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [5U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[5U] = vlSelfRef.__PVT__IN_issueAvail
            [1U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[5U] = vlSelfRef.__PVT__IN_issueTags
            [1U];
    }
    vlSelfRef.__PVT__OUT_lookupSpecTag[6U] = vlSelfRef.specTag
        [vlSelfRef.__PVT__IN_lookupIDs[6U]];
    vlSelfRef.__PVT__OUT_lookupAvail[6U] = (1U & ((IData)(
                                                          (vlSelfRef.tagAvail 
                                                           >> 
                                                           (0x3fU 
                                                            & vlSelfRef.__PVT__OUT_lookupSpecTag
                                                            [6U]))) 
                                                  | (vlSelfRef.__PVT__OUT_lookupSpecTag
                                                     [6U] 
                                                     >> 6U)));
    if ((vlSelfRef.__PVT__IN_wbValid[0U] & (vlSelfRef.__PVT__IN_wbTag
                                            [0U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [6U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[6U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[1U] & (vlSelfRef.__PVT__IN_wbTag
                                            [1U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [6U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[6U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[2U] & (vlSelfRef.__PVT__IN_wbTag
                                            [2U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [6U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[6U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[3U] & (vlSelfRef.__PVT__IN_wbTag
                                            [3U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [6U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[6U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[4U] & (vlSelfRef.__PVT__IN_wbTag
                                            [4U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [6U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[6U] = 1U;
    }
    if (((vlSelfRef.__PVT__IN_issueValid[0U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [0U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [6U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[6U] = vlSelfRef.__PVT__IN_issueAvail
            [0U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[6U] = vlSelfRef.__PVT__IN_issueTags
            [0U];
    }
    if (((vlSelfRef.__PVT__IN_issueValid[1U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [1U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [6U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[6U] = vlSelfRef.__PVT__IN_issueAvail
            [1U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[6U] = vlSelfRef.__PVT__IN_issueTags
            [1U];
    }
    if (((vlSelfRef.__PVT__IN_issueValid[2U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [2U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [6U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[2U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[6U] = vlSelfRef.__PVT__IN_issueAvail
            [2U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[6U] = vlSelfRef.__PVT__IN_issueTags
            [2U];
    }
    vlSelfRef.__PVT__OUT_lookupSpecTag[7U] = vlSelfRef.specTag
        [vlSelfRef.__PVT__IN_lookupIDs[7U]];
    vlSelfRef.__PVT__OUT_lookupAvail[7U] = (1U & ((IData)(
                                                          (vlSelfRef.tagAvail 
                                                           >> 
                                                           (0x3fU 
                                                            & vlSelfRef.__PVT__OUT_lookupSpecTag
                                                            [7U]))) 
                                                  | (vlSelfRef.__PVT__OUT_lookupSpecTag
                                                     [7U] 
                                                     >> 6U)));
    if ((vlSelfRef.__PVT__IN_wbValid[0U] & (vlSelfRef.__PVT__IN_wbTag
                                            [0U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [7U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[7U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[1U] & (vlSelfRef.__PVT__IN_wbTag
                                            [1U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [7U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[7U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[2U] & (vlSelfRef.__PVT__IN_wbTag
                                            [2U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [7U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[7U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[3U] & (vlSelfRef.__PVT__IN_wbTag
                                            [3U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [7U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[7U] = 1U;
    }
    if ((vlSelfRef.__PVT__IN_wbValid[4U] & (vlSelfRef.__PVT__IN_wbTag
                                            [4U] == 
                                            vlSelfRef.__PVT__OUT_lookupSpecTag
                                            [7U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[7U] = 1U;
    }
    if (((vlSelfRef.__PVT__IN_issueValid[0U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [0U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [7U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[0U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[7U] = vlSelfRef.__PVT__IN_issueAvail
            [0U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[7U] = vlSelfRef.__PVT__IN_issueTags
            [0U];
    }
    if (((vlSelfRef.__PVT__IN_issueValid[1U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [1U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [7U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[1U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[7U] = vlSelfRef.__PVT__IN_issueAvail
            [1U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[7U] = vlSelfRef.__PVT__IN_issueTags
            [1U];
    }
    if (((vlSelfRef.__PVT__IN_issueValid[2U] & (vlSelfRef.__PVT__IN_issueIDs
                                                [2U] 
                                                == 
                                                vlSelfRef.__PVT__IN_lookupIDs
                                                [7U])) 
         & (0U != vlSelfRef.__PVT__IN_issueIDs[2U]))) {
        vlSelfRef.__PVT__OUT_lookupAvail[7U] = vlSelfRef.__PVT__IN_issueAvail
            [2U];
        vlSelfRef.__PVT__OUT_lookupSpecTag[7U] = vlSelfRef.__PVT__IN_issueTags
            [2U];
    }
}

VL_INLINE_OPT void VTop_RenameTable__ND5___nba_sequent__TOP__Top__soc__core__rn__rt__1(VTop_RenameTable__ND5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_RenameTable__ND5___nba_sequent__TOP__Top__soc__core__rn__rt__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__specTag__v32) {
        vlSelfRef.specTag[1U] = vlSelfRef.__VdlyVal__specTag__v32;
        vlSelfRef.specTag[2U] = vlSelfRef.__VdlyVal__specTag__v33;
        vlSelfRef.specTag[3U] = vlSelfRef.__VdlyVal__specTag__v34;
        vlSelfRef.specTag[4U] = vlSelfRef.__VdlyVal__specTag__v35;
        vlSelfRef.specTag[5U] = vlSelfRef.__VdlyVal__specTag__v36;
        vlSelfRef.specTag[6U] = vlSelfRef.__VdlyVal__specTag__v37;
        vlSelfRef.specTag[7U] = vlSelfRef.__VdlyVal__specTag__v38;
        vlSelfRef.specTag[8U] = vlSelfRef.__VdlyVal__specTag__v39;
        vlSelfRef.specTag[9U] = vlSelfRef.__VdlyVal__specTag__v40;
        vlSelfRef.specTag[0xaU] = vlSelfRef.__VdlyVal__specTag__v41;
        vlSelfRef.specTag[0xbU] = vlSelfRef.__VdlyVal__specTag__v42;
        vlSelfRef.specTag[0xcU] = vlSelfRef.__VdlyVal__specTag__v43;
        vlSelfRef.specTag[0xdU] = vlSelfRef.__VdlyVal__specTag__v44;
        vlSelfRef.specTag[0xeU] = vlSelfRef.__VdlyVal__specTag__v45;
        vlSelfRef.specTag[0xfU] = vlSelfRef.__VdlyVal__specTag__v46;
        vlSelfRef.specTag[0x10U] = vlSelfRef.__VdlyVal__specTag__v47;
        vlSelfRef.specTag[0x11U] = vlSelfRef.__VdlyVal__specTag__v48;
        vlSelfRef.specTag[0x12U] = vlSelfRef.__VdlyVal__specTag__v49;
        vlSelfRef.specTag[0x13U] = vlSelfRef.__VdlyVal__specTag__v50;
        vlSelfRef.specTag[0x14U] = vlSelfRef.__VdlyVal__specTag__v51;
        vlSelfRef.specTag[0x15U] = vlSelfRef.__VdlyVal__specTag__v52;
        vlSelfRef.specTag[0x16U] = vlSelfRef.__VdlyVal__specTag__v53;
        vlSelfRef.specTag[0x17U] = vlSelfRef.__VdlyVal__specTag__v54;
        vlSelfRef.specTag[0x18U] = vlSelfRef.__VdlyVal__specTag__v55;
        vlSelfRef.specTag[0x19U] = vlSelfRef.__VdlyVal__specTag__v56;
        vlSelfRef.specTag[0x1aU] = vlSelfRef.__VdlyVal__specTag__v57;
        vlSelfRef.specTag[0x1bU] = vlSelfRef.__VdlyVal__specTag__v58;
        vlSelfRef.specTag[0x1cU] = vlSelfRef.__VdlyVal__specTag__v59;
        vlSelfRef.specTag[0x1dU] = vlSelfRef.__VdlyVal__specTag__v60;
        vlSelfRef.specTag[0x1eU] = vlSelfRef.__VdlyVal__specTag__v61;
        vlSelfRef.specTag[0x1fU] = vlSelfRef.__VdlyVal__specTag__v62;
    }
    if (vlSelfRef.__VdlySet__specTag__v63) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v63] 
            = vlSelfRef.__VdlyVal__specTag__v63;
    }
    if (vlSelfRef.__VdlySet__specTag__v64) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v64] 
            = vlSelfRef.__VdlyVal__specTag__v64;
    }
    if (vlSelfRef.__VdlySet__specTag__v65) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v65] 
            = vlSelfRef.__VdlyVal__specTag__v65;
    }
    if (vlSelfRef.__VdlySet__specTag__v66) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v66] 
            = vlSelfRef.__VdlyVal__specTag__v66;
    }
    if (vlSelfRef.__VdlySet__specTag__v67) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v67] 
            = vlSelfRef.__VdlyVal__specTag__v67;
    }
    if (vlSelfRef.__VdlySet__specTag__v68) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v68] 
            = vlSelfRef.__VdlyVal__specTag__v68;
    }
    if (vlSelfRef.__VdlySet__specTag__v69) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v69] 
            = vlSelfRef.__VdlyVal__specTag__v69;
    }
    if (vlSelfRef.__VdlySet__specTag__v70) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v70] 
            = vlSelfRef.__VdlyVal__specTag__v70;
    }
    if (vlSelfRef.__VdlySet__specTag__v71) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v71] 
            = vlSelfRef.__VdlyVal__specTag__v71;
    }
    if (vlSelfRef.__VdlySet__specTag__v72) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v72] 
            = vlSelfRef.__VdlyVal__specTag__v72;
    }
    if (vlSelfRef.__VdlySet__specTag__v73) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v73] 
            = vlSelfRef.__VdlyVal__specTag__v73;
    }
    if (vlSelfRef.__VdlySet__specTag__v74) {
        vlSelfRef.specTag[vlSelfRef.__VdlyDim0__specTag__v74] 
            = vlSelfRef.__VdlyVal__specTag__v74;
    }
    if (vlSelfRef.__VdlySet__comTag__v0) {
        vlSelfRef.comTag[0U] = 0x40U;
        vlSelfRef.specTag[0U] = 0x40U;
    }
    if (vlSelfRef.__VdlySet__comTag__v1) {
        vlSelfRef.comTag[1U] = 0x40U;
        vlSelfRef.specTag[1U] = 0x40U;
        vlSelfRef.comTag[2U] = 0x40U;
        vlSelfRef.specTag[2U] = 0x40U;
        vlSelfRef.comTag[3U] = 0x40U;
        vlSelfRef.specTag[3U] = 0x40U;
        vlSelfRef.comTag[4U] = 0x40U;
        vlSelfRef.specTag[4U] = 0x40U;
        vlSelfRef.comTag[5U] = 0x40U;
        vlSelfRef.specTag[5U] = 0x40U;
        vlSelfRef.comTag[6U] = 0x40U;
        vlSelfRef.specTag[6U] = 0x40U;
        vlSelfRef.comTag[7U] = 0x40U;
        vlSelfRef.specTag[7U] = 0x40U;
        vlSelfRef.comTag[8U] = 0x40U;
        vlSelfRef.specTag[8U] = 0x40U;
        vlSelfRef.comTag[9U] = 0x40U;
        vlSelfRef.specTag[9U] = 0x40U;
        vlSelfRef.comTag[0xaU] = 0x40U;
        vlSelfRef.specTag[0xaU] = 0x40U;
        vlSelfRef.comTag[0xbU] = 0x40U;
        vlSelfRef.specTag[0xbU] = 0x40U;
        vlSelfRef.comTag[0xcU] = 0x40U;
        vlSelfRef.specTag[0xcU] = 0x40U;
        vlSelfRef.comTag[0xdU] = 0x40U;
        vlSelfRef.specTag[0xdU] = 0x40U;
        vlSelfRef.comTag[0xeU] = 0x40U;
        vlSelfRef.specTag[0xeU] = 0x40U;
        vlSelfRef.comTag[0xfU] = 0x40U;
        vlSelfRef.specTag[0xfU] = 0x40U;
        vlSelfRef.comTag[0x10U] = 0x40U;
        vlSelfRef.specTag[0x10U] = 0x40U;
        vlSelfRef.comTag[0x11U] = 0x40U;
        vlSelfRef.specTag[0x11U] = 0x40U;
        vlSelfRef.comTag[0x12U] = 0x40U;
        vlSelfRef.specTag[0x12U] = 0x40U;
        vlSelfRef.comTag[0x13U] = 0x40U;
        vlSelfRef.specTag[0x13U] = 0x40U;
        vlSelfRef.comTag[0x14U] = 0x40U;
        vlSelfRef.specTag[0x14U] = 0x40U;
        vlSelfRef.comTag[0x15U] = 0x40U;
        vlSelfRef.specTag[0x15U] = 0x40U;
        vlSelfRef.comTag[0x16U] = 0x40U;
        vlSelfRef.specTag[0x16U] = 0x40U;
        vlSelfRef.comTag[0x17U] = 0x40U;
        vlSelfRef.specTag[0x17U] = 0x40U;
        vlSelfRef.comTag[0x18U] = 0x40U;
        vlSelfRef.specTag[0x18U] = 0x40U;
        vlSelfRef.comTag[0x19U] = 0x40U;
        vlSelfRef.specTag[0x19U] = 0x40U;
        vlSelfRef.comTag[0x1aU] = 0x40U;
        vlSelfRef.specTag[0x1aU] = 0x40U;
        vlSelfRef.comTag[0x1bU] = 0x40U;
        vlSelfRef.specTag[0x1bU] = 0x40U;
        vlSelfRef.comTag[0x1cU] = 0x40U;
        vlSelfRef.specTag[0x1cU] = 0x40U;
        vlSelfRef.comTag[0x1dU] = 0x40U;
        vlSelfRef.specTag[0x1dU] = 0x40U;
        vlSelfRef.comTag[0x1eU] = 0x40U;
        vlSelfRef.specTag[0x1eU] = 0x40U;
        vlSelfRef.comTag[0x1fU] = 0x40U;
        vlSelfRef.specTag[0x1fU] = 0x40U;
    }
    if (vlSelfRef.__VdlySet__comTag__v32) {
        vlSelfRef.comTag[vlSelfRef.__VdlyDim0__comTag__v32] 
            = vlSelfRef.__VdlyVal__comTag__v32;
    }
    if (vlSelfRef.__VdlySet__comTag__v33) {
        vlSelfRef.comTag[vlSelfRef.__VdlyDim0__comTag__v33] 
            = vlSelfRef.__VdlyVal__comTag__v33;
    }
    if (vlSelfRef.__VdlySet__comTag__v34) {
        vlSelfRef.comTag[vlSelfRef.__VdlyDim0__comTag__v34] 
            = vlSelfRef.__VdlyVal__comTag__v34;
    }
    if (vlSelfRef.__VdlySet__comTag__v35) {
        vlSelfRef.comTag[vlSelfRef.__VdlyDim0__comTag__v35] 
            = vlSelfRef.__VdlyVal__comTag__v35;
    }
}
