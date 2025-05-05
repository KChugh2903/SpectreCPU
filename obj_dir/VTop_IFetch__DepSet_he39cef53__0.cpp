// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetch.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__0(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.BPF_writeAddr = vlSymsp->TOP__Top__soc__core__ifetch__ifp.fetchID;
    vlSelfRef.__Vcellinp__ifp__IN_mispr = (1U & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                 | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch)));
    vlSelfRef.__PVT__sharedReq = ((1U & ((IData)(vlSymsp->TOP__Top__soc__core.ROB_trapUOp) 
                                         & ((~ vlSelfRef.__PVT__IN_pcRead
                                             [0U]) 
                                            | (IData)(
                                                      (0x780000000000ULL 
                                                       != 
                                                       (0xf80000000000ULL 
                                                        & vlSymsp->TOP__Top__soc__core.ROB_trapUOp))))))
                                   ? ((0x3eU & ((IData)(
                                                        (vlSymsp->TOP__Top__soc__core.ROB_trapUOp 
                                                         >> 2U)) 
                                                << 1U)) 
                                      | (1U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_trapUOp)))
                                   : vlSelfRef.__PVT__IN_pcRead
                                  [0U]);
}

VL_INLINE_OPT void VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__1(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifetchEn = ((~ (IData)(vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_stall)) 
                          & ((~ (IData)(vlSelfRef.waitForInterrupt)) 
                             & ((~ (((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__recoveryInProgress) 
                                     & ((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__recoveryContinue_c) 
                                        | (IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__postRecSave))) 
                                    | (IData)(vlSelfRef.__PVT__issuedInterrupt))) 
                                & ((~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__trapHandler__DOT__memoryWait)) 
                                   & (IData)(vlSymsp->TOP.en)))));
}

VL_INLINE_OPT void VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__2(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___ico_sequent__TOP__Top__soc__core__ifetch__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ifetchOp[0U] = 0U;
    vlSelfRef.__PVT__ifetchOp[1U] = 0U;
    vlSelfRef.__PVT__ifetchOp[2U] = 0U;
    vlSelfRef.__PVT__ifetchOp[3U] = 0U;
    if ((1U & (~ (vlSymsp->TOP__Top__soc__core.branch[0U] 
                  | (IData)(vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_fetchBranch))))) {
        if (vlSelfRef.ifetchEn) {
            vlSelfRef.__PVT__ifetchOp[0U] = (1U | vlSelfRef.__PVT__ifetchOp[0U]);
            vlSelfRef.__PVT__ifetchOp[2U] = ((0xffffffU 
                                              & vlSelfRef.__PVT__ifetchOp[2U]) 
                                             | (0xff000000U 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_pc 
                                                   << 0x19U)));
            vlSelfRef.__PVT__ifetchOp[3U] = (0xffffffU 
                                             & (vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_pc 
                                                >> 7U));
            vlSelfRef.__PVT__ifetchOp[2U] = ((0xfff9ffffU 
                                              & vlSelfRef.__PVT__ifetchOp[2U]) 
                                             | (((0x40U 
                                                  & vlSymsp->TOP__Top__soc__core.CSR_trapControl[0U])
                                                  ? 1U
                                                  : 0U) 
                                                << 0x11U));
        }
    }
    vlSelfRef.__PVT__BP_mispr = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_fetchBranch;
    if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
        vlSelfRef.__PVT__BP_mispr = (((QData)((IData)(
                                                      ((0x300U 
                                                        & (vlSymsp->TOP__Top__soc__core.branch[2U] 
                                                           << 3U)) 
                                                       | ((0xe0U 
                                                           & (vlSymsp->TOP__Top__soc__core.branch[2U] 
                                                              << 4U)) 
                                                          | (0x1fU 
                                                             & ((vlSymsp->TOP__Top__soc__core.branch[2U] 
                                                                 << 4U) 
                                                                | (vlSymsp->TOP__Top__soc__core.branch[1U] 
                                                                   >> 0x1cU))))))) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & ((vlSymsp->TOP__Top__soc__core.branch[1U] 
                                                                         << 3U) 
                                                                        | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                           >> 0x1dU))))) 
                                                    << 7U) 
                                                   | (QData)((IData)(
                                                                     ((0x7cU 
                                                                       & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & vlSymsp->TOP__Top__soc__core.branch[0U]))))));
    } else if ((1U & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch))) {
        vlSelfRef.__PVT__BP_mispr = (0x400000000000ULL 
                                     | (((QData)((IData)(
                                                         (7U 
                                                          & ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch) 
                                                             >> 2U)))) 
                                         << 0x2bU) 
                                        | (QData)((IData)(
                                                          ((0x7cU 
                                                            & ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch) 
                                                               >> 3U)) 
                                                           | (1U 
                                                              & (IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch)))))));
    }
}

VL_INLINE_OPT void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__0(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__wfiCount = vlSelfRef.__PVT__wfiCount;
    vlSelfRef.__Vdly__waitForInterrupt = vlSelfRef.waitForInterrupt;
    vlSelfRef.__PVT__OUT_instrs[3U][0U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [3U][0U];
    vlSelfRef.__PVT__OUT_instrs[3U][1U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [3U][1U];
    vlSelfRef.__PVT__OUT_instrs[3U][2U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [3U][2U];
    vlSelfRef.__PVT__OUT_instrs[3U][3U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [3U][3U];
    vlSelfRef.__PVT__OUT_instrs[2U][0U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [2U][0U];
    vlSelfRef.__PVT__OUT_instrs[2U][1U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [2U][1U];
    vlSelfRef.__PVT__OUT_instrs[2U][2U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [2U][2U];
    vlSelfRef.__PVT__OUT_instrs[2U][3U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [2U][3U];
    vlSelfRef.__PVT__OUT_instrs[1U][0U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [1U][0U];
    vlSelfRef.__PVT__OUT_instrs[1U][1U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [1U][1U];
    vlSelfRef.__PVT__OUT_instrs[1U][2U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [1U][2U];
    vlSelfRef.__PVT__OUT_instrs[1U][3U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [1U][3U];
    vlSelfRef.__PVT__OUT_instrs[0U][0U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [0U][0U];
    vlSelfRef.__PVT__OUT_instrs[0U][1U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [0U][1U];
    vlSelfRef.__PVT__OUT_instrs[0U][2U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [0U][2U];
    vlSelfRef.__PVT__OUT_instrs[0U][3U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_instrs
        [0U][3U];
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__waitForInterrupt = 1U;
        vlSelfRef.__Vdly__wfiCount = 0xfffU;
        vlSelfRef.__PVT__issuedInterrupt = 0U;
    } else {
        if (vlSelfRef.waitForInterrupt) {
            vlSelfRef.__PVT__unnamedblk1__DOT__wfiDone 
                = (1U & (((IData)(vlSelfRef.__PVT__wfiCount) 
                          - (IData)(1U)) >> 0xcU));
            vlSelfRef.__PVT__unnamedblk1__DOT__wfiCount_next 
                = (0xfffU & ((IData)(vlSelfRef.__PVT__wfiCount) 
                             - (IData)(1U)));
            vlSelfRef.__Vdly__wfiCount = vlSelfRef.__PVT__unnamedblk1__DOT__wfiCount_next;
            if ((1U & (((vlSymsp->TOP__Top__soc__core.CSR_trapControl[0U] 
                         >> 6U) & (~ (IData)(vlSelfRef.__PVT__resetWait))) 
                       | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__wfiDone)))) {
                vlSelfRef.__Vdly__waitForInterrupt = 0U;
            }
        }
        if ((1U & ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                    | (IData)(vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_fetchBranch)) 
                   | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch)))) {
            if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
                vlSelfRef.__Vdly__waitForInterrupt = 0U;
            } else if ((1U & (((IData)(vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_fetchBranch) 
                               & (IData)((vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_fetchBranch 
                                          >> 1U))) 
                              | ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch) 
                                 & ((IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch) 
                                    >> 1U))))) {
                vlSelfRef.__Vdly__waitForInterrupt = 1U;
                vlSelfRef.__Vdly__wfiCount = 0x3ffU;
            }
            vlSelfRef.__PVT__issuedInterrupt = 0U;
        } else if (vlSelfRef.ifetchEn) {
            if ((0x40U & vlSymsp->TOP__Top__soc__core.CSR_trapControl[0U])) {
                vlSelfRef.__PVT__issuedInterrupt = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__1(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_pcReadData[0U] = (0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[0U]))));
    vlSelfRef.__PVT__OUT_pcReadData[1U] = (0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[1U])) 
                                                 >> 3U)));
}

VL_INLINE_OPT void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__3(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wfiCount = vlSelfRef.__Vdly__wfiCount;
    vlSelfRef.BPF_writeAddr = vlSymsp->TOP__Top__soc__core__ifetch__ifp.fetchID;
    vlSelfRef.predBr = vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr;
    vlSelfRef.__Vcellinp__ifp__IN_mispr = (1U & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                 | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch)));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__resetWait = 1U;
    }
}

VL_INLINE_OPT void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__4(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ifetchEn = ((~ (IData)(vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_stall)) 
                          & ((~ (IData)(vlSelfRef.waitForInterrupt)) 
                             & ((~ (((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__recoveryInProgress) 
                                     & ((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__recoveryContinue_c) 
                                        | (IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__postRecSave))) 
                                    | (IData)(vlSelfRef.__PVT__issuedInterrupt))) 
                                & ((~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__trapHandler__DOT__memoryWait)) 
                                   & (IData)(vlSymsp->TOP.en)))));
    vlSelfRef.__PVT__sharedReq = ((1U & ((IData)(vlSymsp->TOP__Top__soc__core.ROB_trapUOp) 
                                         & ((~ vlSelfRef.__PVT__IN_pcRead
                                             [0U]) 
                                            | (IData)(
                                                      (0x780000000000ULL 
                                                       != 
                                                       (0xf80000000000ULL 
                                                        & vlSymsp->TOP__Top__soc__core.ROB_trapUOp))))))
                                   ? ((0x3eU & ((IData)(
                                                        (vlSymsp->TOP__Top__soc__core.ROB_trapUOp 
                                                         >> 2U)) 
                                                << 1U)) 
                                      | (1U & (IData)(vlSymsp->TOP__Top__soc__core.ROB_trapUOp)))
                                   : vlSelfRef.__PVT__IN_pcRead
                                  [0U]);
}

VL_INLINE_OPT void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__5(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PCF_writeAddr = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_pcFileAddr;
}

VL_INLINE_OPT void VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__7(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___nba_sequent__TOP__Top__soc__core__ifetch__7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[1U][0U] 
        = vlSelfRef.__PVT__IN_btUpdates[1U][0U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[1U][1U] 
        = vlSelfRef.__PVT__IN_btUpdates[1U][1U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[1U][2U] 
        = vlSelfRef.__PVT__IN_btUpdates[1U][2U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[0U][0U] 
        = vlSelfRef.__PVT__IN_btUpdates[0U][0U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[0U][1U] 
        = vlSelfRef.__PVT__IN_btUpdates[0U][1U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[0U][2U] 
        = vlSelfRef.__PVT__IN_btUpdates[0U][2U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][0U] 
        = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_btUpdate[0U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][1U] 
        = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_btUpdate[1U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][2U] 
        = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_btUpdate[2U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[2U][0U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][0U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[2U][1U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][1U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[2U][2U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][2U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[1U][0U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[1U][0U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[1U][1U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[1U][1U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[1U][2U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[1U][2U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[0U][0U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[0U][0U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[0U][1U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[0U][1U];
    vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__IN_btUpdates[0U][2U] 
        = vlSelfRef.__Vcellinp__bp__IN_btUpdates[0U][2U];
}
