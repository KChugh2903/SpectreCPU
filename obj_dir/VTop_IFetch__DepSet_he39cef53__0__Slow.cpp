// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetch.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_IFetch___stl_sequent__TOP__Top__soc__core__ifetch__0(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___stl_sequent__TOP__Top__soc__core__ifetch__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PCF_writeAddr = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_pcFileAddr;
    vlSelfRef.BPF_writeAddr = vlSymsp->TOP__Top__soc__core__ifetch__ifp.fetchID;
    vlSelfRef.__Vcellinp__ifp__IN_mispr = (1U & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                 | (IData)(vlSymsp->TOP__Top__soc__core.__PVT__decBranch)));
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][0U] 
        = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_btUpdate[0U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][1U] 
        = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_btUpdate[1U];
    vlSelfRef.__Vcellinp__bp__IN_btUpdates[2U][2U] 
        = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_btUpdate[2U];
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

VL_ATTR_COLD void VTop_IFetch___stl_sequent__TOP__Top__soc__core__ifetch__1(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___stl_sequent__TOP__Top__soc__core__ifetch__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.predBr = vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr;
    vlSelfRef.ifetchEn = ((~ (IData)(vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_stall)) 
                          & ((~ (IData)(vlSelfRef.waitForInterrupt)) 
                             & ((~ (((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__recoveryInProgress) 
                                     & ((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__recoveryContinue_c) 
                                        | (IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__postRecSave))) 
                                    | (IData)(vlSelfRef.__PVT__issuedInterrupt))) 
                                & ((~ (IData)(vlSymsp->TOP__Top__soc__core.__PVT__trapHandler__DOT__memoryWait)) 
                                   & (IData)(vlSymsp->TOP.en)))));
}
