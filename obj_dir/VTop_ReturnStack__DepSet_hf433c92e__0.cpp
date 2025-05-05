// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ReturnStack.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__0(VTop_ReturnStack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lastInvalComFetchID = vlSelfRef.__PVT__lastInvalComFetchID;
    vlSelfRef.__Vdly__lastValid = vlSelfRef.__PVT__lastValid;
    vlSelfRef.__Vdly__recoveryInProgress = vlSelfRef.__PVT__recoveryInProgress;
    vlSelfRef.__Vdly__postRecSave = vlSelfRef.__PVT__postRecSave;
    vlSelfRef.__Vdly__qindexEnd_r = vlSelfRef.__PVT__qindexEnd_r;
    vlSelfRef.__VdlySet__rstack__v0 = 0U;
    vlSelfRef.__VdlySet__rstack__v1 = 0U;
    vlSelfRef.__VdlySet__rstack__v32 = 0U;
    vlSelfRef.__VdlySet__rstack__v34 = 0U;
    vlSelfRef.__VdlySet__rrqueue__v1 = 0U;
    vlSelfRef.__VdlySet__rrqueue__v5 = 0U;
    vlSelfRef.__VdlySet__rrqueue__v9 = 0U;
    vlSelfRef.__Vdly__qindex_r = vlSelfRef.__PVT__qindex_r;
    vlSelfRef.__PVT__forwardRindex = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__qindex_r = 0U;
        vlSelfRef.__Vdly__qindexEnd_r = 0U;
        vlSelfRef.__Vdly__recoveryInProgress = 0U;
        vlSelfRef.__Vdly__lastInvalComFetchID = 0U;
        vlSelfRef.__Vdly__lastValid = 0U;
        vlSelfRef.__Vdly__postRecSave = 0ULL;
        vlSelfRef.__PVT__rindexReg = 0U;
        vlSelfRef.__VdlySet__rstack__v0 = 1U;
        vlSelfRef.__PVT__recoveryID = 0U;
        vlSelfRef.__PVT__recoveryBase = 0U;
        vlSelfRef.__PVT__recoveryOffs = 0U;
        vlSelfRef.__PVT__recoveryOverwOwn = 0U;
        vlSelfRef.__VdlySet__rstack__v1 = 1U;
    } else {
        vlSelfRef.__Vdly__lastValid = vlSymsp->TOP__Top__soc__core__ifetch.ifetchEn;
        if ((1U & (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr))) {
            vlSelfRef.__PVT__unnamedblk4__DOT__doPostRecSave 
                = (IData)(((vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                            >> 0x30U) & vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_retUpdate));
            vlSelfRef.__PVT__unnamedblk4__DOT__startRecovery 
                = (1U & ((~ (IData)(vlSelfRef.__PVT__queueEmpty)) 
                         | (IData)(vlSelfRef.__PVT__unnamedblk4__DOT__doPostRecSave)));
            vlSelfRef.__PVT__forwardRindex = 1U;
            vlSelfRef.__Vdly__recoveryInProgress = vlSelfRef.__PVT__unnamedblk4__DOT__startRecovery;
            vlSelfRef.__PVT__recoveryID = (0x1fU & (IData)(
                                                           (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                            >> 2U)));
            vlSelfRef.__PVT__recoveryBase = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_curFetchID;
            vlSelfRef.__PVT__recoveryOffs = (7U & (IData)(
                                                          (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                           >> 0x2bU)));
            vlSelfRef.__PVT__recoveryOverwOwn = (IData)(
                                                        ((vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                          >> 0x30U) 
                                                         & (~ vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_retUpdate)));
            vlSelfRef.__Vdly__lastValid = 0U;
            vlSelfRef.__Vdly__postRecSave = 0ULL;
            if (vlSelfRef.__PVT__unnamedblk4__DOT__doPostRecSave) {
                vlSelfRef.__Vdly__postRecSave = (1ULL 
                                                 | vlSelfRef.__Vdly__postRecSave);
                vlSelfRef.__Vdly__postRecSave = ((0x1fffffffc001ULL 
                                                  & vlSelfRef.__Vdly__postRecSave) 
                                                 | ((QData)((IData)(
                                                                    ((0x1f00U 
                                                                      & (((IData)(1U) 
                                                                          + (IData)(
                                                                                (vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_retUpdate 
                                                                                >> 1U))) 
                                                                         << 8U)) 
                                                                     | ((0xf8U 
                                                                         & ((IData)(
                                                                                (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                                                >> 2U)) 
                                                                            << 3U)) 
                                                                        | (7U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                                                >> 0x2bU))))))) 
                                                    << 1U));
                vlSelfRef.__Vdly__postRecSave = ((0x3fffULL 
                                                  & vlSelfRef.__Vdly__postRecSave) 
                                                 | ((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(
                                                                                (vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_retUpdate 
                                                                                >> 6U)))))) 
                                                    << 0xeU));
            }
        } else {
            if (vlSelfRef.__PVT__recoveryInProgress) {
                if (vlSelfRef.__PVT__recoveryContinue_c) {
                    vlSelfRef.__Vdly__qindex_r = (0xfU 
                                                  & ((IData)(vlSelfRef.__PVT__qindex_r) 
                                                     - (IData)(1U)));
                    vlSelfRef.__VdlyVal__rstack__v32 
                        = (0x7fffffffU & (IData)((vlSelfRef.__PVT__rrqueue
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelfRef.__PVT__qindex) 
                                                      - (IData)(1U)))] 
                                                  >> 0xdU)));
                    vlSelfRef.__VdlyDim0__rstack__v32 
                        = (0x1fU & (IData)((vlSelfRef.__PVT__rrqueue
                                            [(7U & 
                                              ((IData)(vlSelfRef.__PVT__qindex) 
                                               - (IData)(1U)))] 
                                            >> 8U)));
                    vlSelfRef.__VdlySet__rstack__v32 = 1U;
                    vlSelfRef.__VdlyDim0__rrqueue__v0 
                        = (7U & ((IData)(vlSelfRef.__PVT__qindex) 
                                 - (IData)(1U)));
                } else {
                    vlSelfRef.__Vdly__recoveryInProgress = 0U;
                    if ((1U & (IData)(vlSelfRef.__PVT__postRecSave))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__queueFull)))) {
                            vlSelfRef.__Vdly__qindex_r 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__qindex_r)));
                            vlSelfRef.__VdlyVal__rrqueue__v1 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__postRecSave 
                                                    >> 4U)));
                            vlSelfRef.__VdlyDim0__rrqueue__v1 
                                = vlSelfRef.__PVT__qindex;
                            vlSelfRef.__VdlySet__rrqueue__v1 = 1U;
                            vlSelfRef.__VdlyVal__rrqueue__v2 
                                = (7U & (IData)((vlSelfRef.__PVT__postRecSave 
                                                 >> 1U)));
                            vlSelfRef.__VdlyDim0__rrqueue__v2 
                                = vlSelfRef.__PVT__qindex;
                            vlSelfRef.__VdlyVal__rrqueue__v3 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__postRecSave 
                                                    >> 9U)));
                            vlSelfRef.__VdlyDim0__rrqueue__v3 
                                = vlSelfRef.__PVT__qindex;
                            vlSelfRef.__VdlyVal__rrqueue__v4 
                                = vlSelfRef.rstack[
                                (0x1fU & (IData)((vlSelfRef.__PVT__postRecSave 
                                                  >> 9U)))];
                            vlSelfRef.__VdlyDim0__rrqueue__v4 
                                = vlSelfRef.__PVT__qindex;
                            vlSelfRef.__VdlyVal__rstack__v33 
                                = (0x7fffffffU & (IData)(
                                                         (vlSelfRef.__PVT__postRecSave 
                                                          >> 0xeU)));
                            vlSelfRef.__VdlyDim0__rstack__v33 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__postRecSave 
                                                    >> 9U)));
                        }
                        vlSelfRef.__Vdly__postRecSave = 0ULL;
                    }
                }
            } else if (vlSelfRef.__PVT__lastValid) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY((vlSelfRef.__PVT__recoveryInProgress))) {
                        VL_WRITEF_NX("[%0t] %%Error: ReturnStack.sv:218: Assertion failed in %NTop.soc.core.ifetch.bp.retStack: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/ReturnStack.sv", 218, "");
                    }
                }
                if ((1U & (~ (IData)((0x31ULL == (0x31ULL 
                                                  & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr)))))) {
                    if ((IData)((0x11ULL == (0x31ULL 
                                             & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__queueFull)))) {
                            vlSelfRef.__Vdly__qindex_r 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__qindex_r)));
                            vlSelfRef.__VdlyVal__rrqueue__v5 
                                = vlSymsp->TOP__Top__soc__core__ifetch.BPF_writeAddr;
                            vlSelfRef.__VdlyDim0__rrqueue__v5 
                                = vlSelfRef.__PVT__qindex;
                            vlSelfRef.__VdlySet__rrqueue__v5 = 1U;
                            vlSelfRef.__VdlyVal__rrqueue__v6 
                                = (7U & (IData)((vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr 
                                                 >> 7U)));
                            vlSelfRef.__VdlyDim0__rrqueue__v6 
                                = vlSelfRef.__PVT__qindex;
                            vlSelfRef.__VdlyVal__rrqueue__v7 
                                = vlSelfRef.__PVT__rindex;
                            vlSelfRef.__VdlyDim0__rrqueue__v7 
                                = vlSelfRef.__PVT__qindex;
                            vlSelfRef.__VdlyVal__rrqueue__v8 
                                = vlSelfRef.rstack[vlSelfRef.__PVT__rindex];
                            vlSelfRef.__VdlyDim0__rrqueue__v8 
                                = vlSelfRef.__PVT__qindex;
                        }
                        vlSelfRef.__VdlyVal__rstack__v34 
                            = vlSelfRef.__PVT__addrToPush;
                        vlSelfRef.__VdlyDim0__rstack__v34 
                            = vlSelfRef.__PVT__rindex;
                        vlSelfRef.__VdlySet__rstack__v34 = 1U;
                    }
                }
            }
            vlSelfRef.__PVT__rindexReg = vlSelfRef.__PVT__rindex;
        }
        if (((IData)(vlSelfRef.__PVT__lastInvalComFetchID) 
             != (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_curFetchID))) {
            if (((~ (IData)(vlSelfRef.__PVT__queueEmpty)) 
                 & ((0x1fU & ((IData)(vlSelfRef.__PVT__rrqueue
                                      [vlSelfRef.__PVT__qindexEnd]) 
                              - (IData)(vlSelfRef.__PVT__lastInvalComFetchID))) 
                    < (0x1fU & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_curFetchID) 
                                - (IData)(vlSelfRef.__PVT__lastInvalComFetchID)))))) {
                vlSelfRef.__Vdly__qindexEnd_r = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__qindexEnd_r)));
                vlSelfRef.__Vdly__lastInvalComFetchID 
                    = (0x1fU & (IData)(vlSelfRef.__PVT__rrqueue
                                       [vlSelfRef.__PVT__qindexEnd]));
                vlSelfRef.__VdlyDim0__rrqueue__v9 = vlSelfRef.__PVT__qindexEnd;
                vlSelfRef.__VdlySet__rrqueue__v9 = 1U;
            } else {
                vlSelfRef.__Vdly__lastInvalComFetchID 
                    = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_curFetchID;
            }
        }
    }
}

VL_INLINE_OPT void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__1(VTop_ReturnStack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__Top__soc__core__ifetch.ifetchEn) {
        vlSelfRef.__PVT__OUT_predBr = ((0x3ffULL & vlSelfRef.__PVT__OUT_predBr) 
                                       | ((QData)((IData)(
                                                          ((1U 
                                                            & (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr))
                                                            ? 0U
                                                            : 
                                                           ((IData)(
                                                                    (0x11ULL 
                                                                     == 
                                                                     (0x31ULL 
                                                                      & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr)))
                                                             ? vlSelfRef.__PVT__addrToPush
                                                             : 
                                                            vlSelfRef.rstack
                                                            [vlSelfRef.__PVT__rindex])))) 
                                          << 0xaU));
        vlSelfRef.__PVT__OUT_predBr = (0x35ULL | (0x1fffffffc00ULL 
                                                  & vlSelfRef.__PVT__OUT_predBr));
        vlSelfRef.__PVT__OUT_curRetAddr = ((1U & (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr))
                                            ? 0U : 
                                           ((IData)(
                                                    (0x11ULL 
                                                     == 
                                                     (0x31ULL 
                                                      & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr)))
                                             ? vlSelfRef.__PVT__addrToPush
                                             : vlSelfRef.rstack
                                            [vlSelfRef.__PVT__rindex]));
    }
}

VL_INLINE_OPT void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__2(VTop_ReturnStack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lastValid = vlSelfRef.__Vdly__lastValid;
    vlSelfRef.__PVT__recoveryInProgress = vlSelfRef.__Vdly__recoveryInProgress;
    vlSelfRef.__PVT__postRecSave = vlSelfRef.__Vdly__postRecSave;
    vlSelfRef.__PVT__qindexEnd_r = vlSelfRef.__Vdly__qindexEnd_r;
    vlSelfRef.__PVT__qindex_r = vlSelfRef.__Vdly__qindex_r;
    if (vlSymsp->TOP__Top__soc__core__ifetch.ifetchEn) {
        vlSelfRef.__PVT__OUT_curIdx = vlSelfRef.__PVT__rindex;
    }
    vlSelfRef.__PVT__queueEmpty = ((IData)(vlSelfRef.__PVT__qindexEnd_r) 
                                   == (IData)(vlSelfRef.__PVT__qindex_r));
}

VL_INLINE_OPT void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__3(VTop_ReturnStack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __PVT__unnamedblk2__DOT__queueRel;
    __PVT__unnamedblk2__DOT__queueRel = 0;
    CData/*4:0*/ __PVT__unnamedblk2__DOT__recRel;
    __PVT__unnamedblk2__DOT__recRel = 0;
    // Body
    vlSelfRef.__PVT__qindex = (7U & (IData)(vlSelfRef.__PVT__qindex_r));
    vlSelfRef.__PVT__qindexEnd = (7U & (IData)(vlSelfRef.__PVT__qindexEnd_r));
    vlSelfRef.__PVT__queueFull = ((IData)(vlSelfRef.__PVT__qindex_r) 
                                  == (0xfU & ((IData)(8U) 
                                              + (IData)(vlSelfRef.__PVT__qindexEnd_r))));
    vlSelfRef.__PVT__addrToPush = (0x7fffffffU & ((IData)(1U) 
                                                  + 
                                                  ((0x7ffffff8U 
                                                    & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__pcRegNoInc) 
                                                   | (7U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr 
                                                                 >> 7U))))));
    if (vlSelfRef.__VdlySet__rstack__v0) {
        vlSelfRef.rstack[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rstack__v1) {
        vlSelfRef.rstack[1U] = 0U;
        vlSelfRef.rstack[2U] = 0U;
        vlSelfRef.rstack[3U] = 0U;
        vlSelfRef.rstack[4U] = 0U;
        vlSelfRef.rstack[5U] = 0U;
        vlSelfRef.rstack[6U] = 0U;
        vlSelfRef.rstack[7U] = 0U;
        vlSelfRef.rstack[8U] = 0U;
        vlSelfRef.rstack[9U] = 0U;
        vlSelfRef.rstack[0xaU] = 0U;
        vlSelfRef.rstack[0xbU] = 0U;
        vlSelfRef.rstack[0xcU] = 0U;
        vlSelfRef.rstack[0xdU] = 0U;
        vlSelfRef.rstack[0xeU] = 0U;
        vlSelfRef.rstack[0xfU] = 0U;
        vlSelfRef.rstack[0x10U] = 0U;
        vlSelfRef.rstack[0x11U] = 0U;
        vlSelfRef.rstack[0x12U] = 0U;
        vlSelfRef.rstack[0x13U] = 0U;
        vlSelfRef.rstack[0x14U] = 0U;
        vlSelfRef.rstack[0x15U] = 0U;
        vlSelfRef.rstack[0x16U] = 0U;
        vlSelfRef.rstack[0x17U] = 0U;
        vlSelfRef.rstack[0x18U] = 0U;
        vlSelfRef.rstack[0x19U] = 0U;
        vlSelfRef.rstack[0x1aU] = 0U;
        vlSelfRef.rstack[0x1bU] = 0U;
        vlSelfRef.rstack[0x1cU] = 0U;
        vlSelfRef.rstack[0x1dU] = 0U;
        vlSelfRef.rstack[0x1eU] = 0U;
        vlSelfRef.rstack[0x1fU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rstack__v32) {
        vlSelfRef.rstack[vlSelfRef.__VdlyDim0__rstack__v32] 
            = vlSelfRef.__VdlyVal__rstack__v32;
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v0] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__rstack__v34) {
        vlSelfRef.rstack[vlSelfRef.__VdlyDim0__rstack__v34] 
            = vlSelfRef.__VdlyVal__rstack__v34;
    }
    if (vlSelfRef.__VdlySet__rrqueue__v1) {
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v1] 
            = ((0xfffffffffe0ULL & vlSelfRef.__PVT__rrqueue
                [vlSelfRef.__VdlyDim0__rrqueue__v1]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__rrqueue__v1)));
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v2] 
            = ((0xfffffffff1fULL & vlSelfRef.__PVT__rrqueue
                [vlSelfRef.__VdlyDim0__rrqueue__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__rrqueue__v2)) 
                  << 5U));
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v3] 
            = ((0xfffffffe0ffULL & vlSelfRef.__PVT__rrqueue
                [vlSelfRef.__VdlyDim0__rrqueue__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__rrqueue__v3)) 
                  << 8U));
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v4] 
            = ((0x1fffULL & vlSelfRef.__PVT__rrqueue
                [vlSelfRef.__VdlyDim0__rrqueue__v4]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__rrqueue__v4)) 
                  << 0xdU));
        vlSelfRef.rstack[vlSelfRef.__VdlyDim0__rstack__v33] 
            = vlSelfRef.__VdlyVal__rstack__v33;
    }
    if (vlSelfRef.__VdlySet__rrqueue__v5) {
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v5] 
            = ((0xfffffffffe0ULL & vlSelfRef.__PVT__rrqueue
                [vlSelfRef.__VdlyDim0__rrqueue__v5]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__rrqueue__v5)));
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v6] 
            = ((0xfffffffff1fULL & vlSelfRef.__PVT__rrqueue
                [vlSelfRef.__VdlyDim0__rrqueue__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__rrqueue__v6)) 
                  << 5U));
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v7] 
            = ((0xfffffffe0ffULL & vlSelfRef.__PVT__rrqueue
                [vlSelfRef.__VdlyDim0__rrqueue__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__rrqueue__v7)) 
                  << 8U));
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v8] 
            = ((0x1fffULL & vlSelfRef.__PVT__rrqueue
                [vlSelfRef.__VdlyDim0__rrqueue__v8]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__rrqueue__v8)) 
                  << 0xdU));
    }
    if (vlSelfRef.__VdlySet__rrqueue__v9) {
        vlSelfRef.__PVT__rrqueue[vlSelfRef.__VdlyDim0__rrqueue__v9] = 0ULL;
    }
    __PVT__unnamedblk2__DOT__queueRel = (0x1fU & ((IData)(
                                                          vlSelfRef.__PVT__rrqueue
                                                          [
                                                          (7U 
                                                           & ((IData)(vlSelfRef.__PVT__qindex_r) 
                                                              - (IData)(1U)))]) 
                                                  - (IData)(vlSelfRef.__PVT__recoveryBase)));
    __PVT__unnamedblk2__DOT__recRel = (0x1fU & ((IData)(vlSelfRef.__PVT__recoveryID) 
                                                - (IData)(vlSelfRef.__PVT__recoveryBase)));
    vlSelfRef.__PVT__recoveryContinue_c = ((~ (IData)(vlSelfRef.__PVT__queueEmpty)) 
                                           & (((IData)(__PVT__unnamedblk2__DOT__queueRel) 
                                               > (IData)(__PVT__unnamedblk2__DOT__recRel)) 
                                              | (((IData)(__PVT__unnamedblk2__DOT__queueRel) 
                                                  == (IData)(__PVT__unnamedblk2__DOT__recRel)) 
                                                 & ((IData)(vlSelfRef.__PVT__recoveryOverwOwn)
                                                     ? 
                                                    ((7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rrqueue
                                                                 [
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.__PVT__qindex_r) 
                                                                     - (IData)(1U)))] 
                                                                 >> 5U))) 
                                                     >= (IData)(vlSelfRef.__PVT__recoveryOffs))
                                                     : 
                                                    ((7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__rrqueue
                                                                 [
                                                                 (7U 
                                                                  & ((IData)(vlSelfRef.__PVT__qindex_r) 
                                                                     - (IData)(1U)))] 
                                                                 >> 5U))) 
                                                     > (IData)(vlSelfRef.__PVT__recoveryOffs))))));
}

VL_INLINE_OPT void VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__4(VTop_ReturnStack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_ReturnStack___nba_sequent__TOP__Top__soc__core__ifetch__bp__retStack__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lastInvalComFetchID = vlSelfRef.__Vdly__lastInvalComFetchID;
    vlSelfRef.__PVT__rindex = vlSelfRef.__PVT__rindexReg;
    if (vlSelfRef.__PVT__forwardRindex) {
        vlSelfRef.__PVT__rindex = vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__recRIdx;
    } else if (((IData)((0x11ULL == (0x31ULL & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr))) 
                & (IData)(vlSelfRef.__PVT__lastValid))) {
        vlSelfRef.__PVT__rindex = (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__rindex)));
    } else if (((IData)((0x31ULL == (0x31ULL & vlSymsp->TOP__Top__soc__core__ifetch__bp.__PVT__OUT_predBr))) 
                & (IData)(vlSelfRef.__PVT__lastValid))) {
        vlSelfRef.__PVT__rindex = (0x1fU & ((IData)(vlSelfRef.__PVT__rindex) 
                                            - (IData)(1U)));
    }
}
