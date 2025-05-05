// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_BranchPredictor__N3.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_BranchPredictor__N3___ico_sequent__TOP__Top__soc__core__ifetch__bp__0(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___ico_sequent__TOP__Top__soc__core__ifetch__bp__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__OUT_pcFileRead = 0U;
    vlSelfRef.__PVT__bpFileRAddr = 0U;
    vlSelfRef.__PVT__bpFileRE = 0U;
    if ((1U & (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr))) {
        if ((0U != (3U & (IData)((vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                  >> 0x2eU))))) {
            vlSelfRef.__PVT__OUT_pcFileRead = (1U | 
                                               (0x3eU 
                                                & ((IData)(
                                                           (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                            >> 2U)) 
                                                   << 1U)));
        }
        vlSelfRef.__PVT__bpFileRAddr = (0x1fU & (IData)(
                                                        (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                         >> 2U)));
        vlSelfRef.__PVT__bpFileRE = 1U;
    } else if ((1U & (IData)(vlSelfRef.__PVT__bpUpdate))) {
        vlSelfRef.__PVT__OUT_pcFileRead = (1U | (0x3eU 
                                                 & ((IData)(vlSelfRef.__PVT__bpUpdate) 
                                                    >> 1U)));
        vlSelfRef.__PVT__bpFileRAddr = (0x1fU & ((IData)(vlSelfRef.__PVT__bpUpdate) 
                                                 >> 2U));
        vlSelfRef.__PVT__bpFileRE = 1U;
    }
    vlSelfRef.__PVT__updFIFO_deq = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr)))) {
        if ((1U & (IData)(vlSelfRef.__PVT__bpUpdate))) {
            vlSelfRef.__PVT__updFIFO_deq = 1U;
        }
    }
    vlSelfRef.__PVT__updFIFO__DOT__outputReady = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__updFIFO__DOT__outValidReg)) 
                                                     | (IData)(vlSelfRef.__PVT__updFIFO_deq)));
    vlSelfRef.__PVT__updFIFO__DOT__doExtract = ((~ (IData)(vlSelfRef.__PVT__updFIFO__DOT__empty)) 
                                                & (IData)(vlSelfRef.__PVT__updFIFO__DOT__outputReady));
    vlSelfRef.__PVT__updFIFO__DOT__doInsert = (1U & 
                                               ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_bpUpdate) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__updFIFO__DOT__fullCond) 
                                                     & (IData)(vlSelfRef.__PVT__updFIFO__DOT__equal))) 
                                                   | (IData)(vlSelfRef.__PVT__updFIFO__DOT__doExtract))));
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__0(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__updFIFO__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__updFIFO__DOT__indexIn = vlSelfRef.__PVT__updFIFO__DOT__indexIn;
    vlSelfRef.__Vdly__updFIFO__DOT__indexOut = vlSelfRef.__PVT__updFIFO__DOT__indexOut;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__updFIFO__DOT__indexIn = 0U;
        vlSelfRef.__Vdly__updFIFO__DOT__indexOut = 0U;
        vlSelfRef.__PVT__updFIFO__DOT__outDataReg = 0U;
    } else {
        if ((1U & (~ (((IData)(vlSelfRef.__PVT__updFIFO__DOT__empty) 
                       & (IData)(vlSelfRef.__PVT__updFIFO__DOT__doInsert)) 
                      & (IData)(vlSelfRef.__PVT__updFIFO__DOT__outputReady))))) {
            if (vlSelfRef.__PVT__updFIFO__DOT__doInsert) {
                vlSelfRef.__VdlyVal__updFIFO__DOT__mem__v0 
                    = (0x1ffU & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_bpUpdate) 
                                 >> 1U));
                vlSelfRef.__VdlyDim0__updFIFO__DOT__mem__v0 
                    = vlSelfRef.__PVT__updFIFO__DOT__indexIn;
                vlSelfRef.__VdlySet__updFIFO__DOT__mem__v0 = 1U;
                vlSelfRef.__Vdly__updFIFO__DOT__indexIn 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__updFIFO__DOT__indexIn)));
            }
        }
        if (vlSelfRef.__PVT__updFIFO__DOT__outputReady) {
            vlSelfRef.__PVT__updFIFO__DOT__outDataReg = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__updFIFO__DOT__empty) 
              & (IData)(vlSelfRef.__PVT__updFIFO__DOT__doInsert)) 
             & (IData)(vlSelfRef.__PVT__updFIFO__DOT__outputReady))) {
            vlSelfRef.__PVT__updFIFO__DOT__outDataReg 
                = (0x1ffU & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_bpUpdate) 
                             >> 1U));
        } else if (vlSelfRef.__PVT__updFIFO__DOT__doExtract) {
            vlSelfRef.__Vdly__updFIFO__DOT__indexOut 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__updFIFO__DOT__indexOut)));
            vlSelfRef.__PVT__updFIFO__DOT__outDataReg 
                = vlSelfRef.__PVT__updFIFO__DOT__mem
                [vlSelfRef.__PVT__updFIFO__DOT__indexOut];
        }
    }
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__1(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrCnt 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrCnt;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx;
    vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v2 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v4 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v2 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v4 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v2 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v4 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v2 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v4 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v0 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v1 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v2 = 0U;
    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v4 = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrCnt = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit = 0U;
    } else {
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__bpUpdateActive))) {
                if ((1U == (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                    >> 0xcU)))) {
                    if (vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeUseful) {
                        if (((IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect) 
                             & (3U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
                                [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [0U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v0 
                                = (3U & ((IData)(1U) 
                                         + vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [0U]]));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v0 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [0U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v0 = 1U;
                        } else if (((~ (IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect)) 
                                    & (0U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
                                       [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                       [0U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v1 
                                = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [0U]] - (IData)(1U)));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v1 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [0U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v1 = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc))) {
                    if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                         [0U]])) {
                        vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                            [0U];
                        vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                            [0U];
                        vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v0 = 1U;
                    }
                } else if (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__allocFailed) 
                            & (1U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                             >> 0xcU))))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY(((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
                                          [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                          [0U]])))) {
                            VL_WRITEF_NX("[%0t] %%Error: TageTable.sv:103: Assertion failed in %NTop.soc.core.ifetch.bp.tagePredictor.genblk1[1].tage: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/TageTable.sv", 103, "");
                        }
                    }
                    vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v2 
                        = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
                                 [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                 [0U]] - (IData)(1U)));
                    vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v2 
                        = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                        [0U];
                    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v2 = 1U;
                }
            }
        } else {
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v1 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v1 = 1U;
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__resetIdx)));
        }
        if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrCnt)) {
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v4 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v4 = 1U;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v5 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v6 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v7 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v8 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v9 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v10 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v11 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v12 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v13 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v14 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v15 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v16 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v17 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v18 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v19 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v20 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v21 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v22 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v23 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v24 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v25 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v26 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v27 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v28 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v29 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v30 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v31 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v32 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v33 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v34 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v35 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v36 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v37 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v38 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v39 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v40 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v41 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v42 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v43 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v44 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v45 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v46 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v47 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v48 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v49 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v50 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v51 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v52 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v53 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v54 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v55 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v56 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v57 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v58 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v59 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v60 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v61 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v62 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v63 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v64 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v65 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v66 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v67 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v68 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v69 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v70 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v71 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v72 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v73 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v74 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v75 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v76 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v77 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v78 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v79 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v80 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v81 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v82 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v83 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v84 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v85 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v86 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v87 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v88 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v89 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v90 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v91 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v92 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v93 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v94 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v95 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v96 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v97 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v98 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v99 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v100 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v101 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v102 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v103 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v104 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v105 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v106 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v107 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v108 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v109 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v110 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v111 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v112 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v113 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v114 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v115 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v116 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v117 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v118 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v119 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v120 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v121 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v122 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v123 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v124 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v125 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v126 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v127 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v128 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v129 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v130 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v131 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v132 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v133 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v134 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v135 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v136 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v137 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v138 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v139 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v140 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v141 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v142 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v143 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v144 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v145 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v146 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v147 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v148 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v149 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v150 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v151 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v152 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v153 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v154 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v155 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v156 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v157 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v158 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v159 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v160 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v161 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v162 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v163 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v164 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v165 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v166 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v167 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v168 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v169 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v170 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v171 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v172 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v173 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v174 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v175 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v176 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v177 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v178 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v179 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v180 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v181 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v182 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v183 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v184 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v185 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v186 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v187 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v188 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v189 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v190 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v191 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v192 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v193 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v194 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v195 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v196 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v197 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v198 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v199 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v200 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v201 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v202 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v203 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v204 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v205 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v206 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v207 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v208 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v209 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v210 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v211 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v212 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v213 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v214 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v215 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v216 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v217 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v218 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v219 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v220 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v221 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v222 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v223 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v224 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v225 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v226 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v227 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v228 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v229 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v230 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v231 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v232 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v233 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v234 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v235 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v236 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v237 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v238 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v239 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v240 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v241 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v242 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v243 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v244 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v245 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v246 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v247 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v248 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v249 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v250 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v251 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v252 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v253 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v254 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v255 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v256 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v257 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v258 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v259 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit 
                = (1U & (~ (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrBit)));
        }
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrCnt 
            = (0xfffffU & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__decrCnt 
                           - (IData)(1U)));
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrCnt = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit = 0U;
    } else {
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__bpUpdateActive))) {
                if ((2U == (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                    >> 0xcU)))) {
                    if (vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeUseful) {
                        if (((IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect) 
                             & (3U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
                                [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [1U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v0 
                                = (3U & ((IData)(1U) 
                                         + vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [1U]]));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v0 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [1U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v0 = 1U;
                        } else if (((~ (IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect)) 
                                    & (0U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
                                       [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                       [1U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v1 
                                = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [1U]] - (IData)(1U)));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v1 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [1U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v1 = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc))) {
                    if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                         [1U]])) {
                        vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                            [1U];
                        vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                            [1U];
                        vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v0 = 1U;
                    }
                } else if (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__allocFailed) 
                            & (2U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                             >> 0xcU))))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY(((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
                                          [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                          [1U]])))) {
                            VL_WRITEF_NX("[%0t] %%Error: TageTable.sv:103: Assertion failed in %NTop.soc.core.ifetch.bp.tagePredictor.genblk1[2].tage: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/TageTable.sv", 103, "");
                        }
                    }
                    vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v2 
                        = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
                                 [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                 [1U]] - (IData)(1U)));
                    vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v2 
                        = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                        [1U];
                    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v2 = 1U;
                }
            }
        } else {
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v1 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v1 = 1U;
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__resetIdx)));
        }
        if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrCnt)) {
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v4 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v4 = 1U;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v5 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v6 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v7 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v8 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v9 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v10 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v11 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v12 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v13 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v14 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v15 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v16 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v17 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v18 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v19 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v20 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v21 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v22 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v23 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v24 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v25 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v26 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v27 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v28 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v29 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v30 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v31 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v32 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v33 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v34 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v35 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v36 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v37 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v38 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v39 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v40 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v41 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v42 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v43 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v44 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v45 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v46 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v47 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v48 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v49 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v50 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v51 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v52 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v53 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v54 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v55 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v56 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v57 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v58 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v59 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v60 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v61 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v62 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v63 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v64 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v65 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v66 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v67 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v68 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v69 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v70 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v71 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v72 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v73 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v74 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v75 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v76 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v77 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v78 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v79 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v80 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v81 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v82 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v83 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v84 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v85 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v86 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v87 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v88 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v89 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v90 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v91 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v92 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v93 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v94 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v95 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v96 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v97 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v98 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v99 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v100 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v101 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v102 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v103 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v104 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v105 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v106 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v107 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v108 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v109 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v110 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v111 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v112 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v113 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v114 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v115 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v116 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v117 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v118 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v119 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v120 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v121 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v122 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v123 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v124 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v125 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v126 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v127 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v128 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v129 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v130 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v131 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v132 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v133 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v134 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v135 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v136 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v137 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v138 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v139 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v140 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v141 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v142 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v143 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v144 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v145 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v146 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v147 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v148 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v149 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v150 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v151 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v152 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v153 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v154 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v155 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v156 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v157 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v158 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v159 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v160 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v161 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v162 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v163 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v164 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v165 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v166 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v167 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v168 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v169 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v170 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v171 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v172 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v173 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v174 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v175 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v176 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v177 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v178 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v179 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v180 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v181 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v182 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v183 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v184 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v185 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v186 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v187 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v188 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v189 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v190 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v191 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v192 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v193 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v194 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v195 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v196 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v197 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v198 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v199 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v200 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v201 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v202 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v203 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v204 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v205 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v206 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v207 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v208 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v209 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v210 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v211 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v212 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v213 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v214 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v215 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v216 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v217 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v218 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v219 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v220 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v221 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v222 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v223 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v224 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v225 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v226 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v227 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v228 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v229 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v230 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v231 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v232 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v233 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v234 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v235 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v236 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v237 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v238 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v239 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v240 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v241 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v242 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v243 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v244 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v245 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v246 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v247 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v248 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v249 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v250 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v251 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v252 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v253 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v254 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v255 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v256 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v257 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v258 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v259 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit 
                = (1U & (~ (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrBit)));
        }
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrCnt 
            = (0xfffffU & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__decrCnt 
                           - (IData)(1U)));
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrCnt = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit = 0U;
    } else {
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__bpUpdateActive))) {
                if ((3U == (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                    >> 0xcU)))) {
                    if (vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeUseful) {
                        if (((IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect) 
                             & (3U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
                                [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [2U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v0 
                                = (3U & ((IData)(1U) 
                                         + vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [2U]]));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v0 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [2U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v0 = 1U;
                        } else if (((~ (IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect)) 
                                    & (0U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
                                       [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                       [2U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v1 
                                = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [2U]] - (IData)(1U)));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v1 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [2U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v1 = 1U;
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc))) {
                    if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                         [2U]])) {
                        vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                            [2U];
                        vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                            [2U];
                        vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v0 = 1U;
                    }
                } else if (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__allocFailed) 
                            & (3U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                             >> 0xcU))))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY(((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
                                          [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                          [2U]])))) {
                            VL_WRITEF_NX("[%0t] %%Error: TageTable.sv:103: Assertion failed in %NTop.soc.core.ifetch.bp.tagePredictor.genblk1[3].tage: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/TageTable.sv", 103, "");
                        }
                    }
                    vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v2 
                        = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
                                 [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                 [2U]] - (IData)(1U)));
                    vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v2 
                        = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                        [2U];
                    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v2 = 1U;
                }
            }
        } else {
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v1 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag__v1 = 1U;
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__resetIdx)));
        }
        if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrCnt)) {
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v4 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v4 = 1U;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v5 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v6 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v7 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v8 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v9 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v10 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v11 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v12 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v13 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v14 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v15 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v16 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v17 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v18 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v19 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v20 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v21 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v22 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v23 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v24 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v25 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v26 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v27 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v28 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v29 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v30 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v31 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v32 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v33 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v34 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v35 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v36 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v37 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v38 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v39 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v40 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v41 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v42 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v43 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v44 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v45 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v46 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v47 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v48 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v49 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v50 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v51 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v52 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v53 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v54 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v55 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v56 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v57 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v58 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v59 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v60 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v61 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v62 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v63 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v64 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v65 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v66 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v67 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v68 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v69 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v70 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v71 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v72 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v73 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v74 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v75 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v76 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v77 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v78 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v79 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v80 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v81 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v82 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v83 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v84 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v85 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v86 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v87 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v88 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v89 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v90 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v91 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v92 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v93 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v94 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v95 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v96 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v97 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v98 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v99 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v100 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v101 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v102 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v103 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v104 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v105 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v106 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v107 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v108 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v109 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v110 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v111 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v112 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v113 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v114 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v115 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v116 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v117 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v118 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v119 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v120 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v121 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v122 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v123 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v124 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v125 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v126 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v127 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v128 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v129 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v130 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v131 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v132 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v133 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v134 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v135 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v136 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v137 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v138 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v139 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v140 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v141 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v142 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v143 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v144 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v145 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v146 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v147 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v148 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v149 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v150 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v151 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v152 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v153 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v154 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v155 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v156 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v157 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v158 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v159 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v160 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v161 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v162 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v163 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v164 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v165 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v166 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v167 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v168 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v169 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v170 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v171 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v172 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v173 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v174 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v175 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v176 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v177 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v178 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v179 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v180 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v181 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v182 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v183 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v184 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v185 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v186 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v187 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v188 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v189 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v190 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v191 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v192 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v193 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v194 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v195 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v196 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v197 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v198 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v199 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v200 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v201 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v202 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v203 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v204 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v205 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v206 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v207 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v208 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v209 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v210 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v211 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v212 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v213 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v214 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v215 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v216 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v217 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v218 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v219 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v220 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v221 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v222 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v223 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v224 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v225 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v226 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v227 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v228 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v229 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v230 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v231 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v232 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v233 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v234 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v235 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v236 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v237 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v238 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v239 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v240 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v241 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v242 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v243 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v244 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v245 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v246 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v247 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v248 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v249 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v250 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v251 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v252 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v253 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v254 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v255 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v256 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v257 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v258 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful__v259 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit 
                = (1U & (~ (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrBit)));
        }
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrCnt 
            = (0xfffffU & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__decrCnt 
                           - (IData)(1U)));
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrCnt = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit = 0U;
    } else {
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__bpUpdateActive))) {
                if ((4U == (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                    >> 0xcU)))) {
                    if (vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeUseful) {
                        if (((IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect) 
                             & (3U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
                                [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [3U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v0 
                                = (3U & ((IData)(1U) 
                                         + vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [3U]]));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v0 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [3U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v0 = 1U;
                        } else if (((~ (IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect)) 
                                    & (0U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
                                       [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                       [3U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v1 
                                = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [3U]] - (IData)(1U)));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v1 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [3U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v1 = 1U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc))) {
                    if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                         [3U]])) {
                        vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                            [3U];
                        vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                            [3U];
                        vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v0 = 1U;
                    }
                } else if (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__allocFailed) 
                            & (4U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                             >> 0xcU))))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY(((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
                                          [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                          [3U]])))) {
                            VL_WRITEF_NX("[%0t] %%Error: TageTable.sv:103: Assertion failed in %NTop.soc.core.ifetch.bp.tagePredictor.genblk1[4].tage: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/TageTable.sv", 103, "");
                        }
                    }
                    vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v2 
                        = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
                                 [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                 [3U]] - (IData)(1U)));
                    vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v2 
                        = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                        [3U];
                    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v2 = 1U;
                }
            }
        } else {
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v1 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag__v1 = 1U;
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__resetIdx)));
        }
        if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrCnt)) {
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v4 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v4 = 1U;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v5 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v6 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v7 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v8 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v9 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v10 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v11 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v12 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v13 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v14 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v15 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v16 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v17 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v18 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v19 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v20 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v21 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v22 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v23 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v24 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v25 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v26 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v27 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v28 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v29 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v30 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v31 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v32 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v33 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v34 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v35 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v36 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v37 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v38 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v39 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v40 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v41 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v42 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v43 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v44 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v45 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v46 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v47 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v48 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v49 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v50 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v51 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v52 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v53 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v54 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v55 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v56 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v57 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v58 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v59 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v60 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v61 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v62 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v63 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v64 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v65 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v66 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v67 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v68 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v69 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v70 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v71 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v72 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v73 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v74 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v75 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v76 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v77 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v78 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v79 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v80 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v81 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v82 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v83 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v84 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v85 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v86 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v87 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v88 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v89 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v90 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v91 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v92 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v93 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v94 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v95 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v96 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v97 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v98 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v99 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v100 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v101 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v102 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v103 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v104 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v105 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v106 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v107 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v108 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v109 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v110 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v111 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v112 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v113 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v114 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v115 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v116 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v117 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v118 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v119 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v120 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v121 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v122 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v123 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v124 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v125 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v126 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v127 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v128 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v129 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v130 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v131 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v132 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v133 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v134 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v135 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v136 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v137 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v138 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v139 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v140 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v141 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v142 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v143 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v144 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v145 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v146 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v147 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v148 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v149 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v150 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v151 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v152 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v153 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v154 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v155 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v156 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v157 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v158 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v159 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v160 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v161 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v162 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v163 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v164 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v165 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v166 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v167 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v168 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v169 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v170 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v171 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v172 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v173 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v174 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v175 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v176 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v177 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v178 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v179 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v180 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v181 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v182 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v183 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v184 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v185 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v186 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v187 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v188 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v189 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v190 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v191 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v192 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v193 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v194 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v195 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v196 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v197 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v198 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v199 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v200 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v201 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v202 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v203 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v204 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v205 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v206 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v207 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v208 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v209 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v210 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v211 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v212 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v213 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v214 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v215 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v216 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v217 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v218 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v219 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v220 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v221 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v222 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v223 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v224 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v225 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v226 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v227 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v228 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v229 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v230 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v231 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v232 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v233 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v234 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v235 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v236 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v237 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v238 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v239 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v240 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v241 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v242 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v243 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v244 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v245 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v246 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v247 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v248 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v249 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v250 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v251 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v252 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v253 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v254 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v255 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v256 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v257 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v258 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful__v259 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit 
                = (1U & (~ (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrBit)));
        }
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrCnt 
            = (0xfffffU & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__decrCnt 
                           - (IData)(1U)));
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrCnt = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx = 0U;
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit = 0U;
    } else {
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__bpUpdateActive))) {
                if ((5U == (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                    >> 0xcU)))) {
                    if (vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeUseful) {
                        if (((IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect) 
                             & (3U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
                                [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [4U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v0 
                                = (3U & ((IData)(1U) 
                                         + vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [4U]]));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v0 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [4U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v0 = 1U;
                        } else if (((~ (IData)(vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect)) 
                                    & (0U != vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
                                       [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                       [4U]]))) {
                            vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v1 
                                = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
                                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                         [4U]] - (IData)(1U)));
                            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v1 
                                = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                [4U];
                            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v1 = 1U;
                        }
                    }
                } else if ((0x20U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc))) {
                    if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
                         [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                         [4U]])) {
                        vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                            [4U];
                        vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v0 
                            = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                            [4U];
                        vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v0 = 1U;
                    }
                } else if (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__allocFailed) 
                            & (5U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                             >> 0xcU))))) {
                    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                        if (VL_UNLIKELY(((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
                                          [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                          [4U]])))) {
                            VL_WRITEF_NX("[%0t] %%Error: TageTable.sv:103: Assertion failed in %NTop.soc.core.ifetch.bp.tagePredictor.genblk1[5].tage: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/TageTable.sv", 103, "");
                        }
                    }
                    vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v2 
                        = (3U & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
                                 [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                 [4U]] - (IData)(1U)));
                    vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v2 
                        = vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                        [4U];
                    vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v2 = 1U;
                }
            }
        } else {
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v1 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v1 = 1U;
            vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx));
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__resetIdx)));
        }
        if ((0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrCnt)) {
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v4 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v4 = 1U;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v5 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v6 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v7 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v8 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v9 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v10 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v11 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v12 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v13 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v14 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v15 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v16 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v17 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v18 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v19 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v20 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v21 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v22 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v23 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v24 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v25 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v26 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v27 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v28 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v29 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v30 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v31 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v32 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v33 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v34 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v35 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v36 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v37 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v38 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v39 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v40 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v41 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v42 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v43 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v44 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v45 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v46 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v47 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v48 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v49 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v50 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v51 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v52 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v53 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v54 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v55 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v56 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v57 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v58 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v59 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v60 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v61 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v62 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v63 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v64 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v65 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v66 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v67 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v68 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v69 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v70 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v71 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v72 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v73 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v74 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v75 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v76 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v77 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v78 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v79 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v80 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v81 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v82 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v83 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v84 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v85 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v86 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v87 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v88 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v89 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v90 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v91 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v92 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v93 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v94 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v95 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v96 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v97 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v98 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v99 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v100 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v101 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v102 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v103 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v104 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v105 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v106 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v107 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v108 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v109 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v110 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v111 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v112 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v113 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v114 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v115 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v116 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v117 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v118 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v119 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v120 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v121 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v122 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v123 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v124 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v125 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v126 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v127 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v128 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v129 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v130 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v131 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v132 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v133 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v134 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v135 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v136 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v137 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v138 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v139 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v140 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v141 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v142 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v143 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v144 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v145 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v146 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v147 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v148 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v149 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v150 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v151 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v152 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v153 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v154 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v155 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v156 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v157 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v158 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v159 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v160 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v161 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v162 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v163 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v164 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v165 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v166 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v167 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v168 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v169 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v170 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v171 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v172 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v173 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v174 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v175 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v176 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v177 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v178 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v179 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v180 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v181 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v182 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v183 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v184 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v185 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v186 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v187 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v188 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v189 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v190 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v191 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v192 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v193 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v194 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v195 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v196 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v197 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v198 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v199 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v200 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v201 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v202 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v203 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v204 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v205 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v206 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v207 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v208 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v209 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v210 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v211 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v212 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v213 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v214 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v215 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v216 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v217 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v218 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v219 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v220 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v221 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v222 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v223 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v224 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v225 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v226 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v227 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v228 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v229 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v230 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v231 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v232 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v233 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v234 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v235 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v236 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v237 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v238 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v239 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v240 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v241 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v242 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v243 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v244 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v245 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v246 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v247 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v248 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v249 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v250 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v251 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v252 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v253 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v254 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v255 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v256 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v257 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v258 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v259 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit;
            vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit 
                = (1U & (~ (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrBit)));
        }
        vlSelfRef.__Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrCnt 
            = (0xfffffU & (vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__decrCnt 
                           - (IData)(1U)));
    }
}

extern const VlUnpacked<CData/*7:0*/, 512> VTop__ConstPool__TABLE_h6ba93f17_0;

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__2(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__tagePredictor__DOT__predictions;
    __PVT__tagePredictor__DOT__predictions = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                     << 1U) | (IData)(vlSymsp->TOP.rst));
    vlSelfRef.__PVT__tagePredictor__DOT__random = VTop__ConstPool__TABLE_h6ba93f17_0
        [__Vtableidx1];
    if (vlSymsp->TOP__Top__soc__core__ifetch.ifetchEn) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tagRegB 
            = vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tagRegB 
            = vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tagRegB 
            = vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tagRegB 
            = vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tagRegB 
            = vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U];
        vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_readTaken 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]];
        vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_readTaken 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]];
        vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_readTaken 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]];
        vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_readTaken 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]];
        vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_readTaken 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]];
        vlSelfRef.__PVT__btb__DOT__fetched[0U] = ((0x7fffffffU 
                                                   & vlSelfRef.__PVT__btb__DOT__fetched[0U]) 
                                                  | ((IData)(
                                                             ((vlSelfRef.__PVT__btb__DOT__entries
                                                               [
                                                               (0xfffU 
                                                                & vlSelfRef.__PVT__OUT_pc)] 
                                                               << 1U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__btb__DOT__multiple
                                                                                [
                                                                                (0xfffU 
                                                                                & vlSelfRef.__PVT__OUT_pc)])))) 
                                                     << 0x1fU));
        vlSelfRef.__PVT__btb__DOT__fetched[1U] = (((IData)(
                                                           ((vlSelfRef.__PVT__btb__DOT__entries
                                                             [
                                                             (0xfffU 
                                                              & vlSelfRef.__PVT__OUT_pc)] 
                                                             << 1U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.__PVT__btb__DOT__multiple
                                                                              [
                                                                              (0xfffU 
                                                                               & vlSelfRef.__PVT__OUT_pc)])))) 
                                                   >> 1U) 
                                                  | ((IData)(
                                                             (((vlSelfRef.__PVT__btb__DOT__entries
                                                                [
                                                                (0xfffU 
                                                                 & vlSelfRef.__PVT__OUT_pc)] 
                                                                << 1U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__btb__DOT__multiple
                                                                                [
                                                                                (0xfffU 
                                                                                & vlSelfRef.__PVT__OUT_pc)]))) 
                                                              >> 0x20U)) 
                                                     << 0x1fU));
        vlSelfRef.__PVT__btb__DOT__fetched[2U] = (0x3fffffU 
                                                  & ((IData)(
                                                             (((vlSelfRef.__PVT__btb__DOT__entries
                                                                [
                                                                (0xfffU 
                                                                 & vlSelfRef.__PVT__OUT_pc)] 
                                                                << 1U) 
                                                               | (QData)((IData)(
                                                                                vlSelfRef.__PVT__btb__DOT__multiple
                                                                                [
                                                                                (0xfffU 
                                                                                & vlSelfRef.__PVT__OUT_pc)]))) 
                                                              >> 0x20U)) 
                                                     >> 1U));
        vlSelfRef.__PVT__btb__DOT__fetched[0U] = ((0x80000000U 
                                                   & vlSelfRef.__PVT__btb__DOT__fetched[0U]) 
                                                  | vlSelfRef.__PVT__OUT_pc);
        vlSelfRef.tagePredictor__DOT____Vcellout__basePredictor__OUT_taken 
            = vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__pred
            [(0xfffU & vlSelfRef.__PVT__OUT_pc)];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tagRegA 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tagRegA 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tagRegA 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tag
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tagRegA 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tag
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]];
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tagRegA 
            = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag
            [vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]];
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__ignorePred = 1U;
        vlSelfRef.__PVT__pcRegNoInc = 0U;
        vlSelfRef.__PVT__pcReg = 0x40000000U;
        vlSelfRef.__PVT__history = 0ULL;
    } else {
        if (vlSymsp->TOP__Top__soc__core__ifetch.ifetchEn) {
            vlSelfRef.__PVT__ignorePred = 0U;
            vlSelfRef.__PVT__pcRegNoInc = vlSelfRef.__PVT__OUT_pc;
            vlSelfRef.__PVT__pcReg = (0x7ffffff8U & 
                                      (((IData)(1U) 
                                        + (vlSelfRef.__PVT__OUT_pc 
                                           >> 3U)) 
                                       << 3U));
            vlSelfRef.__PVT__history = vlSelfRef.__PVT__lookupHistory;
        } else if ((1U & (IData)(vlSelfRef.__PVT__recovery))) {
            vlSelfRef.__PVT__history = vlSelfRef.__PVT__recHistory;
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__recovery) 
                              >> 0xeU)))) {
                vlSelfRef.__PVT__pcReg = vlSelfRef.__PVT__recoveredPC;
            }
        }
        if ((1U & (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr))) {
            vlSelfRef.__PVT__ignorePred = 1U;
            vlSelfRef.__PVT__pcReg = ((0U == (3U & (IData)(
                                                           (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                            >> 0x2eU))))
                                       ? (0x7fffffffU 
                                          & (IData)(
                                                    (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                     >> 7U)))
                                       : 0U);
        }
    }
    vlSelfRef.__PVT__BTB_br = 0ULL;
    if ((((vlSelfRef.__PVT__btb__DOT__fetched[2U] >> 0x12U) 
          & ((0xffffU & (vlSelfRef.__PVT__btb__DOT__fetched[1U] 
                         >> 3U)) == (0xffffU & (vlSelfRef.__PVT__btb__DOT__fetched[0U] 
                                                >> 0xcU)))) 
         & ((7U & vlSelfRef.__PVT__btb__DOT__fetched[1U]) 
            >= (7U & vlSelfRef.__PVT__btb__DOT__fetched[0U])))) {
        vlSelfRef.__PVT__BTB_br = (1ULL | vlSelfRef.__PVT__BTB_br);
        vlSelfRef.__PVT__BTB_br = ((0x1fffffffff7ULL 
                                    & vlSelfRef.__PVT__BTB_br) 
                                   | ((QData)((IData)(
                                                      (vlSelfRef.__PVT__btb__DOT__fetched[0U] 
                                                       >> 0x1fU))) 
                                      << 3U));
        vlSelfRef.__PVT__BTB_br = ((0x3ffULL & vlSelfRef.__PVT__BTB_br) 
                                   | ((QData)((IData)(
                                                      (0x7fffffffU 
                                                       & ((vlSelfRef.__PVT__btb__DOT__fetched[2U] 
                                                           << 0xdU) 
                                                          | (vlSelfRef.__PVT__btb__DOT__fetched[1U] 
                                                             >> 0x13U))))) 
                                      << 0xaU));
        vlSelfRef.__PVT__BTB_br = ((0x1fffffffc0fULL 
                                    & vlSelfRef.__PVT__BTB_br) 
                                   | ((QData)((IData)(
                                                      ((0x38U 
                                                        & (vlSelfRef.__PVT__btb__DOT__fetched[1U] 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & (vlSelfRef.__PVT__btb__DOT__fetched[2U] 
                                                              >> 0x11U)) 
                                                          | (3U 
                                                             & (vlSelfRef.__PVT__btb__DOT__fetched[2U] 
                                                                >> 0x14U)))))) 
                                      << 4U));
        vlSelfRef.__PVT__BTB_br = ((0x1fffffffffbULL 
                                    & vlSelfRef.__PVT__BTB_br) 
                                   | ((QData)((IData)(
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.__PVT__btb__DOT__fetched[2U] 
                                                            >> 0x14U))) 
                                                       | (0U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__btb__DOT__fetched[2U] 
                                                              >> 0x14U)))))) 
                                      << 2U));
        vlSelfRef.__PVT__BTB_br = (0x1fffffffffdULL 
                                   & vlSelfRef.__PVT__BTB_br);
    }
    __PVT__tagePredictor__DOT__predictions = ((((IData)(vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_readTaken) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_readTaken) 
                                                   << 4U) 
                                                  | ((IData)(vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_readTaken) 
                                                     << 3U))) 
                                              | (((IData)(vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_readTaken) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_readTaken) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tagePredictor__DOT____Vcellout__basePredictor__OUT_taken))));
    vlSelfRef.__PVT__tagePredictor__DOT__valid = (1U 
                                                  | (((((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tagRegA) 
                                                        == (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tagRegB)) 
                                                       << 5U) 
                                                      | ((((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tagRegA) 
                                                           == (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__tagRegB)) 
                                                          << 4U) 
                                                         | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tagRegA) 
                                                             == (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__tagRegB)) 
                                                            << 3U))) 
                                                     | ((((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tagRegA) 
                                                          == (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tagRegB)) 
                                                         << 2U) 
                                                        | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tagRegA) 
                                                            == (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tagRegB)) 
                                                           << 1U))));
    vlSelfRef.__PVT__recovery = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (IData)(vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr))) {
            vlSelfRef.__PVT__recovery = (1U | (IData)(vlSelfRef.__PVT__recovery));
            vlSelfRef.__PVT__recovery = ((1U & (IData)(vlSelfRef.__PVT__recovery)) 
                                         | ((0xc000U 
                                             & ((IData)(
                                                        (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                         >> 0x2eU)) 
                                                << 0xeU)) 
                                            | ((0x3e00U 
                                                & ((IData)(
                                                           (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                            >> 2U)) 
                                                   << 9U)) 
                                               | (0x1feU 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__Top__soc__core__ifetch.__PVT__BP_mispr 
                                                              >> 0x26U)) 
                                                     << 1U)))));
        }
    }
    vlSelfRef.__PVT__TAGE_altPred = (1U & (IData)(__PVT__tagePredictor__DOT__predictions));
    vlSelfRef.__PVT__TAGE_taken = (1U & (IData)(__PVT__tagePredictor__DOT__predictions));
    if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_altPred = vlSelfRef.__PVT__TAGE_taken;
        vlSelfRef.__PVT__TAGE_taken = (1U & (IData)(__PVT__tagePredictor__DOT__predictions));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_altPred = vlSelfRef.__PVT__TAGE_taken;
        vlSelfRef.__PVT__TAGE_taken = (1U & ((IData)(__PVT__tagePredictor__DOT__predictions) 
                                             >> 1U));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_altPred = vlSelfRef.__PVT__TAGE_taken;
        vlSelfRef.__PVT__TAGE_taken = (1U & ((IData)(__PVT__tagePredictor__DOT__predictions) 
                                             >> 2U));
    }
    if ((8U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_altPred = vlSelfRef.__PVT__TAGE_taken;
        vlSelfRef.__PVT__TAGE_taken = (1U & ((IData)(__PVT__tagePredictor__DOT__predictions) 
                                             >> 3U));
    }
    if ((0x10U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_altPred = vlSelfRef.__PVT__TAGE_taken;
        vlSelfRef.__PVT__TAGE_taken = (1U & ((IData)(__PVT__tagePredictor__DOT__predictions) 
                                             >> 4U));
    }
    if ((0x20U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_altPred = vlSelfRef.__PVT__TAGE_taken;
        vlSelfRef.__PVT__TAGE_taken = (1U & ((IData)(__PVT__tagePredictor__DOT__predictions) 
                                             >> 5U));
    }
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__3(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__recoveredPC = ((0x7ffffff8U & 
                                     ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[3U] 
                                       << 0x16U) | 
                                      (0x3ffff8U & 
                                       (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                        >> 0xaU)))) 
                                    | (7U & ((IData)(vlSelfRef.__PVT__recovery) 
                                             >> 6U)));
    if ((0x8000U & (IData)(vlSelfRef.__PVT__recovery))) {
        if ((0x4000U & (IData)(vlSelfRef.__PVT__recovery))) {
            vlSelfRef.__PVT__recoveredPC = (0x7fffffffU 
                                            & (vlSelfRef.__PVT__recoveredPC 
                                               - (IData)(1U)));
        }
    } else if ((0x4000U & (IData)(vlSelfRef.__PVT__recovery))) {
        vlSelfRef.__PVT__recoveredPC = (0x7fffffffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.__PVT__recoveredPC));
    }
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__4(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r = 0;
    SData/*8:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0;
    CData/*1:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0;
    SData/*10:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r = 0;
    SData/*8:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0;
    CData/*1:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0;
    SData/*10:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r = 0;
    SData/*8:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0;
    CData/*1:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0;
    SData/*10:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r = 0;
    SData/*8:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0;
    CData/*1:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0;
    SData/*10:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r = 0;
    SData/*8:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0;
    CData/*1:0*/ __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v3 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v3 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v3 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v3 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v0 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v1 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0;
    CData/*0:0*/ __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v2 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*0:0*/ __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0;
    CData/*7:0*/ __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v3;
    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v3 = 0;
    // Body
    __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r;
    __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 0U;
    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 0U;
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v1] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v1;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v2] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v2;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v4) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v4))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v5))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v6))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v7))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v8))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v9))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v10))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v11))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v12))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v13))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v14))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v15))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v16))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v17))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v18))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v19))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x10U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v20))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x10U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x11U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v21))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x11U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x12U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v22))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x12U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x13U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v23))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x13U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x14U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v24))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x14U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x15U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v25))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x15U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x16U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v26))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x16U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x17U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v27))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x17U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x18U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v28))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x18U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x19U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v29))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x19U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x1aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v30))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x1aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x1bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v31))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x1bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x1cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v32))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x1cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x1dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v33))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x1dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x1eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v34))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x1eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x1fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v35))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x1fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x20U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v36))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x20U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x21U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v37))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x21U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x22U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v38))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x22U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x23U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v39))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x23U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x24U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v40))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x24U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x25U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v41))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x25U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x26U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v42))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x26U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x27U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v43))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x27U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x28U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v44))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x28U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x29U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v45))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x29U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x2aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v46))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x2aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x2bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v47))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x2bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x2cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v48))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x2cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x2dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v49))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x2dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x2eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v50))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x2eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x2fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v51))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x2fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x30U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v52))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x30U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x31U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v53))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x31U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x32U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v54))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x32U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x33U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v55))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x33U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x34U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v56))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x34U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x35U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v57))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x35U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x36U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v58))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x36U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x37U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v59))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x37U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x38U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v60))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x38U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x39U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v61))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x39U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x3aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v62))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x3aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x3bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v63))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x3bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x3cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v64))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x3cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x3dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v65))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x3dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x3eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v66))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x3eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x3fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v67))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x3fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x40U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v68))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x40U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x41U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v69))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x41U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x42U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v70))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x42U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x43U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v71))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x43U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x44U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v72))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x44U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x45U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v73))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x45U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x46U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v74))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x46U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x47U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v75))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x47U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x48U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v76))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x48U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x49U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v77))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x49U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x4aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v78))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x4aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x4bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v79))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x4bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x4cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v80))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x4cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x4dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v81))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x4dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x4eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v82))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x4eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x4fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v83))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x4fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x50U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v84))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x50U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x51U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v85))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x51U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x52U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v86))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x52U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x53U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v87))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x53U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x54U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v88))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x54U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x55U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v89))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x55U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x56U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v90))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x56U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x57U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v91))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x57U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x58U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v92))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x58U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x59U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v93))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x59U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x5aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v94))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x5aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x5bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v95))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x5bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x5cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v96))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x5cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x5dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v97))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x5dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x5eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v98))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x5eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x5fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v99))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x5fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x60U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v100))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x60U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x61U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v101))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x61U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x62U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v102))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x62U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x63U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v103))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x63U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x64U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v104))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x64U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x65U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v105))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x65U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x66U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v106))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x66U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x67U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v107))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x67U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x68U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v108))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x68U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x69U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v109))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x69U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x6aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v110))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x6aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x6bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v111))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x6bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x6cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v112))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x6cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x6dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v113))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x6dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x6eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v114))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x6eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x6fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v115))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x6fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x70U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v116))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x70U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x71U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v117))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x71U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x72U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v118))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x72U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x73U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v119))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x73U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x74U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v120))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x74U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x75U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v121))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x75U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x76U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v122))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x76U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x77U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v123))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x77U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x78U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v124))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x78U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x79U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v125))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x79U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x7aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v126))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x7aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x7bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v127))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x7bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x7cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v128))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x7cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x7dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v129))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x7dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x7eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v130))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x7eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x7fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v131))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x7fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x80U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v132))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x80U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x81U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v133))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x81U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x82U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v134))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x82U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x83U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v135))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x83U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x84U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v136))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x84U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x85U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v137))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x85U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x86U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v138))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x86U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x87U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v139))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x87U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x88U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v140))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x88U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x89U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v141))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x89U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x8aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v142))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x8aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x8bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v143))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x8bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x8cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v144))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x8cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x8dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v145))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x8dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x8eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v146))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x8eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x8fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v147))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x8fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x90U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v148))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x90U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x91U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v149))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x91U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x92U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v150))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x92U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x93U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v151))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x93U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x94U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v152))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x94U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x95U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v153))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x95U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x96U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v154))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x96U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x97U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v155))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x97U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x98U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v156))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x98U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x99U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v157))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x99U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x9aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v158))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x9aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x9bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v159))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x9bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x9cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v160))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x9cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x9dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v161))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x9dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x9eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v162))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x9eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0x9fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v163))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0x9fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v164))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v165))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v166))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v167))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v168))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v169))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v170))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v171))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v172))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xa9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v173))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xa9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xaaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v174))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xaaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xabU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v175))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xabU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xacU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v176))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xacU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xadU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v177))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xadU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xaeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v178))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xaeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xafU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v179))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xafU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v180))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v181))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v182))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v183))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v184))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v185))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v186))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v187))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v188))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xb9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v189))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xb9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xbaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v190))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xbaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xbbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v191))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xbbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xbcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v192))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xbcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xbdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v193))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xbdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xbeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v194))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xbeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xbfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v195))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xbfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v196))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v197))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v198))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v199))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v200))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v201))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v202))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v203))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v204))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xc9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v205))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xc9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xcaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v206))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xcaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xcbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v207))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xcbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xccU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v208))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xccU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xcdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v209))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xcdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xceU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v210))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xceU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xcfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v211))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xcfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v212))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v213))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v214))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v215))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v216))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v217))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v218))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v219))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v220))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xd9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v221))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xd9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xdaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v222))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xdaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xdbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v223))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xdbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xdcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v224))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xdcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xddU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v225))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xddU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xdeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v226))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xdeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xdfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v227))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xdfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v228))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v229))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v230))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v231))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v232))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v233))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v234))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v235))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v236))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xe9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v237))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xe9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xeaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v238))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xeaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xebU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v239))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xebU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xecU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v240))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xecU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xedU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v241))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xedU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xeeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v242))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xeeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xefU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v243))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xefU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v244))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v245))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v246))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v247))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v248))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v249))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v250))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v251))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v252))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xf9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v253))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xf9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xfaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v254))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xfaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xfbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v255))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xfbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xfcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v256))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xfcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xfdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v257))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xfdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xfeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v258))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xfeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[0xffU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v259))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
               [0xffU]);
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v1] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v1;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v2] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v2;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v4) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v4))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v5))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v6))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v7))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v8))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v9))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v10))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v11))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v12))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v13))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v14))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v15))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v16))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v17))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v18))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v19))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x10U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v20))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x10U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x11U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v21))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x11U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x12U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v22))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x12U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x13U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v23))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x13U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x14U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v24))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x14U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x15U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v25))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x15U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x16U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v26))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x16U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x17U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v27))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x17U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x18U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v28))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x18U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x19U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v29))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x19U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x1aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v30))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x1aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x1bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v31))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x1bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x1cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v32))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x1cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x1dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v33))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x1dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x1eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v34))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x1eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x1fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v35))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x1fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x20U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v36))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x20U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x21U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v37))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x21U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x22U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v38))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x22U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x23U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v39))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x23U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x24U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v40))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x24U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x25U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v41))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x25U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x26U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v42))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x26U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x27U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v43))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x27U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x28U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v44))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x28U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x29U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v45))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x29U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x2aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v46))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x2aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x2bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v47))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x2bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x2cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v48))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x2cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x2dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v49))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x2dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x2eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v50))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x2eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x2fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v51))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x2fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x30U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v52))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x30U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x31U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v53))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x31U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x32U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v54))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x32U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x33U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v55))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x33U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x34U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v56))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x34U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x35U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v57))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x35U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x36U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v58))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x36U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x37U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v59))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x37U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x38U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v60))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x38U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x39U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v61))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x39U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x3aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v62))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x3aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x3bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v63))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x3bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x3cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v64))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x3cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x3dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v65))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x3dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x3eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v66))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x3eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x3fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v67))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x3fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x40U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v68))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x40U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x41U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v69))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x41U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x42U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v70))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x42U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x43U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v71))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x43U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x44U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v72))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x44U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x45U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v73))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x45U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x46U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v74))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x46U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x47U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v75))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x47U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x48U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v76))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x48U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x49U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v77))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x49U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x4aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v78))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x4aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x4bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v79))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x4bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x4cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v80))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x4cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x4dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v81))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x4dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x4eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v82))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x4eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x4fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v83))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x4fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x50U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v84))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x50U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x51U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v85))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x51U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x52U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v86))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x52U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x53U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v87))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x53U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x54U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v88))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x54U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x55U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v89))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x55U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x56U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v90))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x56U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x57U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v91))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x57U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x58U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v92))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x58U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x59U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v93))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x59U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x5aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v94))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x5aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x5bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v95))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x5bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x5cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v96))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x5cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x5dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v97))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x5dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x5eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v98))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x5eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x5fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v99))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x5fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x60U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v100))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x60U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x61U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v101))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x61U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x62U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v102))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x62U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x63U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v103))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x63U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x64U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v104))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x64U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x65U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v105))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x65U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x66U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v106))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x66U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x67U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v107))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x67U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x68U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v108))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x68U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x69U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v109))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x69U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x6aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v110))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x6aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x6bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v111))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x6bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x6cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v112))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x6cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x6dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v113))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x6dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x6eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v114))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x6eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x6fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v115))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x6fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x70U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v116))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x70U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x71U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v117))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x71U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x72U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v118))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x72U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x73U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v119))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x73U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x74U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v120))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x74U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x75U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v121))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x75U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x76U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v122))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x76U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x77U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v123))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x77U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x78U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v124))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x78U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x79U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v125))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x79U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x7aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v126))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x7aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x7bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v127))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x7bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x7cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v128))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x7cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x7dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v129))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x7dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x7eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v130))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x7eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x7fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v131))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x7fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x80U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v132))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x80U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x81U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v133))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x81U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x82U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v134))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x82U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x83U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v135))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x83U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x84U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v136))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x84U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x85U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v137))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x85U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x86U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v138))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x86U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x87U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v139))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x87U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x88U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v140))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x88U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x89U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v141))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x89U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x8aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v142))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x8aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x8bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v143))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x8bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x8cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v144))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x8cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x8dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v145))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x8dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x8eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v146))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x8eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x8fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v147))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x8fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x90U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v148))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x90U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x91U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v149))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x91U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x92U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v150))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x92U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x93U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v151))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x93U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x94U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v152))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x94U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x95U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v153))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x95U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x96U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v154))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x96U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x97U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v155))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x97U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x98U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v156))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x98U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x99U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v157))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x99U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x9aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v158))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x9aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x9bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v159))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x9bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x9cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v160))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x9cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x9dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v161))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x9dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x9eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v162))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x9eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0x9fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v163))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0x9fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v164))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v165))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v166))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v167))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v168))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v169))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v170))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v171))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v172))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xa9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v173))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xa9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xaaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v174))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xaaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xabU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v175))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xabU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xacU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v176))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xacU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xadU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v177))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xadU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xaeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v178))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xaeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xafU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v179))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xafU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v180))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v181))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v182))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v183))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v184))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v185))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v186))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v187))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v188))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xb9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v189))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xb9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xbaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v190))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xbaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xbbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v191))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xbbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xbcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v192))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xbcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xbdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v193))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xbdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xbeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v194))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xbeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xbfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v195))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xbfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v196))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v197))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v198))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v199))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v200))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v201))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v202))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v203))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v204))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xc9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v205))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xc9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xcaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v206))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xcaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xcbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v207))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xcbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xccU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v208))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xccU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xcdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v209))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xcdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xceU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v210))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xceU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xcfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v211))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xcfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v212))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v213))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v214))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v215))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v216))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v217))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v218))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v219))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v220))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xd9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v221))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xd9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xdaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v222))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xdaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xdbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v223))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xdbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xdcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v224))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xdcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xddU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v225))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xddU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xdeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v226))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xdeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xdfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v227))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xdfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v228))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v229))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v230))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v231))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v232))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v233))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v234))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v235))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v236))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xe9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v237))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xe9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xeaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v238))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xeaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xebU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v239))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xebU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xecU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v240))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xecU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xedU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v241))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xedU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xeeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v242))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xeeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xefU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v243))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xefU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v244))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v245))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v246))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v247))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v248))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v249))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v250))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v251))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v252))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xf9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v253))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xf9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xfaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v254))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xfaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xfbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v255))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xfbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xfcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v256))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xfcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xfdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v257))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xfdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xfeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v258))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xfeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[0xffU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v259))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
               [0xffU]);
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v1] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v1;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v2] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v2;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v4) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v4))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v5))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v6))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v7))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v8))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v9))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v10))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v11))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v12))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v13))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v14))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v15))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v16))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v17))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v18))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v19))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x10U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v20))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x10U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x11U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v21))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x11U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x12U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v22))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x12U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x13U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v23))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x13U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x14U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v24))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x14U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x15U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v25))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x15U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x16U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v26))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x16U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x17U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v27))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x17U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x18U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v28))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x18U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x19U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v29))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x19U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x1aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v30))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x1aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x1bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v31))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x1bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x1cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v32))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x1cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x1dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v33))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x1dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x1eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v34))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x1eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x1fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v35))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x1fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x20U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v36))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x20U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x21U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v37))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x21U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x22U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v38))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x22U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x23U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v39))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x23U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x24U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v40))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x24U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x25U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v41))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x25U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x26U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v42))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x26U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x27U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v43))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x27U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x28U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v44))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x28U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x29U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v45))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x29U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x2aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v46))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x2aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x2bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v47))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x2bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x2cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v48))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x2cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x2dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v49))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x2dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x2eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v50))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x2eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x2fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v51))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x2fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x30U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v52))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x30U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x31U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v53))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x31U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x32U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v54))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x32U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x33U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v55))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x33U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x34U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v56))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x34U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x35U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v57))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x35U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x36U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v58))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x36U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x37U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v59))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x37U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x38U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v60))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x38U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x39U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v61))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x39U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x3aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v62))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x3aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x3bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v63))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x3bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x3cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v64))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x3cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x3dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v65))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x3dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x3eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v66))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x3eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x3fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v67))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x3fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x40U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v68))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x40U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x41U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v69))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x41U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x42U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v70))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x42U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x43U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v71))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x43U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x44U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v72))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x44U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x45U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v73))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x45U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x46U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v74))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x46U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x47U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v75))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x47U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x48U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v76))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x48U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x49U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v77))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x49U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x4aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v78))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x4aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x4bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v79))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x4bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x4cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v80))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x4cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x4dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v81))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x4dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x4eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v82))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x4eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x4fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v83))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x4fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x50U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v84))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x50U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x51U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v85))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x51U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x52U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v86))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x52U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x53U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v87))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x53U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x54U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v88))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x54U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x55U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v89))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x55U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x56U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v90))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x56U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x57U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v91))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x57U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x58U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v92))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x58U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x59U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v93))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x59U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x5aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v94))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x5aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x5bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v95))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x5bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x5cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v96))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x5cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x5dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v97))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x5dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x5eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v98))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x5eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x5fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v99))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x5fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x60U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v100))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x60U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x61U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v101))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x61U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x62U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v102))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x62U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x63U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v103))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x63U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x64U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v104))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x64U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x65U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v105))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x65U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x66U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v106))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x66U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x67U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v107))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x67U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x68U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v108))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x68U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x69U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v109))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x69U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x6aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v110))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x6aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x6bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v111))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x6bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x6cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v112))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x6cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x6dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v113))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x6dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x6eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v114))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x6eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x6fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v115))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x6fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x70U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v116))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x70U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x71U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v117))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x71U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x72U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v118))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x72U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x73U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v119))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x73U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x74U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v120))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x74U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x75U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v121))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x75U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x76U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v122))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x76U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x77U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v123))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x77U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x78U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v124))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x78U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x79U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v125))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x79U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x7aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v126))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x7aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x7bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v127))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x7bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x7cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v128))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x7cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x7dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v129))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x7dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x7eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v130))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x7eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x7fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v131))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x7fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x80U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v132))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x80U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x81U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v133))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x81U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x82U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v134))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x82U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x83U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v135))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x83U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x84U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v136))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x84U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x85U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v137))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x85U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x86U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v138))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x86U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x87U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v139))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x87U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x88U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v140))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x88U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x89U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v141))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x89U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x8aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v142))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x8aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x8bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v143))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x8bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x8cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v144))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x8cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x8dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v145))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x8dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x8eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v146))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x8eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x8fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v147))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x8fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x90U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v148))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x90U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x91U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v149))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x91U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x92U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v150))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x92U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x93U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v151))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x93U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x94U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v152))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x94U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x95U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v153))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x95U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x96U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v154))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x96U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x97U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v155))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x97U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x98U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v156))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x98U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x99U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v157))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x99U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x9aU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v158))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x9aU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x9bU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v159))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x9bU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x9cU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v160))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x9cU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x9dU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v161))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x9dU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x9eU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v162))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x9eU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0x9fU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v163))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0x9fU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v164))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v165))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v166))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v167))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v168))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v169))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v170))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v171))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v172))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xa9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v173))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xa9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xaaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v174))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xaaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xabU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v175))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xabU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xacU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v176))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xacU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xadU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v177))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xadU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xaeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v178))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xaeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xafU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v179))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xafU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v180))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v181))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v182))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v183))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v184))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v185))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v186))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v187))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v188))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xb9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v189))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xb9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xbaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v190))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xbaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xbbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v191))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xbbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xbcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v192))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xbcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xbdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v193))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xbdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xbeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v194))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xbeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xbfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v195))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xbfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v196))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v197))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v198))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v199))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v200))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v201))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v202))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v203))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v204))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xc9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v205))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xc9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xcaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v206))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xcaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xcbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v207))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xcbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xccU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v208))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xccU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xcdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v209))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xcdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xceU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v210))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xceU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xcfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v211))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xcfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v212))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v213))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v214))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v215))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v216))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v217))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v218))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v219))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v220))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xd9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v221))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xd9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xdaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v222))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xdaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xdbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v223))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xdbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xdcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v224))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xdcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xddU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v225))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xddU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xdeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v226))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xdeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xdfU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v227))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xdfU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v228))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v229))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v230))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v231))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v232))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v233))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v234))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v235))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v236))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xe9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v237))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xe9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xeaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v238))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xeaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xebU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v239))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xebU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xecU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v240))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xecU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xedU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v241))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xedU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xeeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v242))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xeeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xefU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v243))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xefU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf0U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v244))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf0U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf1U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v245))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf1U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf2U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v246))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf2U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf3U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v247))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf3U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf4U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v248))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf4U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf5U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v249))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf5U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf6U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v250))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf6U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf7U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v251))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf7U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf8U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v252))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf8U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xf9U] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v253))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xf9U]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xfaU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v254))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xfaU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xfbU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v255))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xfbU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xfcU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v256))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xfcU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xfdU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v257))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xfdU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xfeU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v258))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xfeU]);
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[0xffU] 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.__VdlyLsb__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v259))) 
               & vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
               [0xffU]);
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__tag__v1] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful__v3] = 0U;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__tag__v1] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful__v3] = 0U;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v0] 
            = vlSelfRef.__VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v0;
    }
    if (vlSelfRef.__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__tag__v1] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful[vlSelfRef.__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful__v3] = 0U;
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx = 0U;
        __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg = 0U;
    } else {
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_c))) {
                __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
                    = ((vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred
                        [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                   >> 3U))] << 1U) 
                       | vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist
                       [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                  >> 3U))]);
            }
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                if (((3U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                        >> 2U))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                                 >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if (((0U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                           >> 2U)))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (1U & (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                  - (IData)(1U)) >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                 - (IData)(1U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                 >> 2U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (1U & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 2U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
            }
            __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_c;
        } else {
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 1U;
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx)));
        }
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_c))) {
                __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
                    = ((vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred
                        [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                   >> 3U))] << 1U) 
                       | vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist
                       [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                  >> 3U))]);
            }
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                if (((3U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                        >> 2U))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                                 >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if (((0U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                           >> 2U)))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (1U & (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                  - (IData)(1U)) >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                 - (IData)(1U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                 >> 2U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (1U & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 2U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
            }
            __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_c;
        } else {
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 1U;
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx)));
        }
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_c))) {
                __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
                    = ((vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred
                        [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                   >> 3U))] << 1U) 
                       | vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist
                       [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                  >> 3U))]);
            }
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                if (((3U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                        >> 2U))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                                 >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if (((0U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                           >> 2U)))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (1U & (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                  - (IData)(1U)) >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                 - (IData)(1U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                 >> 2U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (1U & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 2U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
            }
            __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_c;
        } else {
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 1U;
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx)));
        }
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_c))) {
                __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
                    = ((vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred
                        [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                   >> 3U))] << 1U) 
                       | vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist
                       [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                  >> 3U))]);
            }
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                if (((3U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                        >> 2U))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                                 >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if (((0U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                           >> 2U)))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (1U & (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                  - (IData)(1U)) >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                 - (IData)(1U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                 >> 2U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (1U & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 2U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
            }
            __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_c;
        } else {
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 1U;
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx)));
        }
        if ((0x100U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx))) {
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_c))) {
                __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
                    = ((vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred
                        [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                   >> 3U))] << 1U) 
                       | vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist
                       [(0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_c) 
                                  >> 3U))]);
            }
            if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                if (((3U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                        >> 2U))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (1U & (((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                                 >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v0 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if (((0U != (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg)) 
                     & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                           >> 2U)))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (1U & (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                  - (IData)(1U)) >> 1U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg) 
                                 - (IData)(1U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v1 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
                if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r))) {
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (1U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                 >> 2U));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                    __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2 = 1U;
                    __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (1U & (~ ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 2U)));
                    __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v2 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r) 
                                    >> 3U));
                }
            }
            __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r 
                = vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_c;
        } else {
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3 = 1U;
            __VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v3 
                = (0xffU & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx));
            __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx)));
        }
    }
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_r;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v0;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v1;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v2;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__pred__v3] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__hist__v3] = 0U;
    }
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_r;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v0;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v1;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v2;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__pred__v3] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__hist__v3] = 0U;
    }
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_r;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v0;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v1;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v2;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__pred__v3] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__hist__v3] = 0U;
    }
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_r;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v0;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v1;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v2;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__pred__v3] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__hist__v3] = 0U;
    }
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__resetIdx;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_r;
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg 
        = __Vdly__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__writeTempReg;
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v0;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v0] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v0;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v1;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v1] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v1;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v2;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v2] 
            = __VdlyVal__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v2;
    }
    if (__VdlySet__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3) {
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__pred__v3] = 0U;
        vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist[__VdlyDim0__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__hist__v3] = 0U;
    }
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__5(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__updFIFO__DOT__indexIn = vlSelfRef.__Vdly__updFIFO__DOT__indexIn;
    if (vlSelfRef.__VdlySet__updFIFO__DOT__mem__v0) {
        vlSelfRef.__PVT__updFIFO__DOT__mem[vlSelfRef.__VdlyDim0__updFIFO__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__updFIFO__DOT__mem__v0;
    }
    vlSelfRef.__PVT__updFIFO__DOT__indexOut = vlSelfRef.__Vdly__updFIFO__DOT__indexOut;
    vlSelfRef.__PVT__TAGE_tageID = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_tageID = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_tageID = 1U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_tageID = 2U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_tageID = 3U;
    }
    if ((0x10U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_tageID = 4U;
    }
    if ((0x20U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__valid))) {
        vlSelfRef.__PVT__TAGE_tageID = 5U;
    }
    vlSelfRef.__PVT__OUT_predBr = 0ULL;
    vlSelfRef.__PVT__OUT_predBr = ((0x7fULL & vlSelfRef.__PVT__OUT_predBr) 
                                   | (0x380ULL | ((QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curRetAddr)) 
                                                  << 0xaU)));
    vlSelfRef.__PVT__OUT_pc = vlSelfRef.__PVT__pcReg;
    vlSelfRef.__PVT__OUT_lastOffs = 7U;
    if (vlSelfRef.__PVT__ignorePred) {
        if (((IData)(vlSelfRef.__PVT__recovery) & (0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__recovery) 
                                                       >> 0xeU))))) {
            vlSelfRef.__PVT__OUT_pc = vlSelfRef.__PVT__recoveredPC;
        }
    } else if (((IData)(vlSelfRef.__PVT__BTB_br) & 
                (3U != (3U & (IData)((vlSelfRef.__PVT__BTB_br 
                                      >> 4U)))))) {
        vlSelfRef.__PVT__OUT_predBr = vlSelfRef.__PVT__BTB_br;
        vlSelfRef.__PVT__OUT_predBr = ((0x1fffffffffbULL 
                                        & vlSelfRef.__PVT__OUT_predBr) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((IData)(
                                                                      (vlSelfRef.__PVT__OUT_predBr 
                                                                       >> 2U)) 
                                                              | (IData)(vlSelfRef.__PVT__TAGE_taken))))) 
                                          << 2U));
        vlSelfRef.__PVT__OUT_predBr = ((0x1fffffffff7ULL 
                                        & vlSelfRef.__PVT__OUT_predBr) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((~ (IData)(
                                                                         (vlSelfRef.__PVT__OUT_predBr 
                                                                          >> 2U))) 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__BTB_br 
                                                                         >> 3U)))))) 
                                          << 3U));
        if ((1U & (IData)((vlSelfRef.__PVT__OUT_predBr 
                           >> 2U)))) {
            vlSelfRef.__PVT__OUT_pc = (0x7fffffffU 
                                       & (IData)((vlSelfRef.__PVT__OUT_predBr 
                                                  >> 0xaU)));
            vlSelfRef.__PVT__OUT_lastOffs = (7U & (IData)(
                                                          (vlSelfRef.__PVT__OUT_predBr 
                                                           >> 7U)));
        }
        if (((IData)((vlSelfRef.__PVT__OUT_predBr >> 3U)) 
             & (7U != (7U & (IData)((vlSelfRef.__PVT__OUT_predBr 
                                     >> 7U)))))) {
            vlSelfRef.__PVT__OUT_lastOffs = (7U & (IData)(
                                                          (vlSelfRef.__PVT__OUT_predBr 
                                                           >> 7U)));
            vlSelfRef.__PVT__OUT_pc = ((0x7ffffff8U 
                                        & vlSelfRef.__PVT__pcRegNoInc) 
                                       | (7U & ((IData)(1U) 
                                                + (IData)(
                                                          (vlSelfRef.__PVT__OUT_predBr 
                                                           >> 7U)))));
        }
    } else if (((IData)((0x31ULL == (0x31ULL & vlSelfRef.__PVT__BTB_br))) 
                & (IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_predBr))) {
        vlSelfRef.__PVT__OUT_predBr = vlSelfRef.__PVT__BTB_br;
        vlSelfRef.__PVT__OUT_predBr = (4ULL | (0x1fffffffff3ULL 
                                               & vlSelfRef.__PVT__OUT_predBr));
        vlSelfRef.__PVT__OUT_predBr = ((0x3ffULL & vlSelfRef.__PVT__OUT_predBr) 
                                       | ((QData)((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curRetAddr)) 
                                          << 0xaU));
        vlSelfRef.__PVT__OUT_pc = (0x7fffffffU & (IData)(
                                                         (vlSelfRef.__PVT__OUT_predBr 
                                                          >> 0xaU)));
        vlSelfRef.__PVT__OUT_lastOffs = (7U & (IData)(
                                                      (vlSelfRef.__PVT__OUT_predBr 
                                                       >> 7U)));
    } else {
        vlSelfRef.__PVT__OUT_predBr = (1ULL | vlSelfRef.__PVT__OUT_predBr);
        vlSelfRef.__PVT__OUT_predBr = (0x20ULL | (0x1ffffffffcfULL 
                                                  & vlSelfRef.__PVT__OUT_predBr));
        vlSelfRef.__PVT__OUT_predBr = ((0x1fffffffff9ULL 
                                        & vlSelfRef.__PVT__OUT_predBr) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           | ((IData)(vlSelfRef.__PVT__TAGE_taken) 
                                                              << 1U)))) 
                                          << 1U));
    }
    vlSelfRef.__PVT__recHistory = (((QData)((IData)(
                                                    vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U])) 
                                    << 0x35U) | (((QData)((IData)(
                                                                  vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[1U])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U])) 
                                                    >> 0xbU)));
    if ((vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
         & ((7U & ((IData)(vlSelfRef.__PVT__recovery) 
                   >> 6U)) > (7U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                                    >> 1U))))) {
        vlSelfRef.__PVT__recHistory = ((vlSelfRef.__PVT__recHistory 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                                                                     >> 4U)))));
    }
    if (((3U == (7U & ((IData)(vlSelfRef.__PVT__recovery) 
                       >> 1U))) | (4U == (7U & ((IData)(vlSelfRef.__PVT__recovery) 
                                                >> 1U))))) {
        vlSelfRef.__PVT__recHistory = ((vlSelfRef.__PVT__recHistory 
                                        << 1U) | (QData)((IData)(
                                                                 (4U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSelfRef.__PVT__recovery) 
                                                                      >> 1U))))));
    }
    if (((2U == (7U & ((IData)(vlSelfRef.__PVT__recovery) 
                       >> 1U))) | (1U == (7U & ((IData)(vlSelfRef.__PVT__recovery) 
                                                >> 1U))))) {
        vlSelfRef.__PVT__recHistory = ((vlSelfRef.__PVT__recHistory 
                                        << 1U) | (QData)((IData)(
                                                                 (2U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSelfRef.__PVT__recovery) 
                                                                      >> 1U))))));
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__updFIFO__DOT__fullCond = 0U;
        vlSelfRef.__PVT__updFIFO__DOT__outValidReg = 0U;
        vlSelfRef.__PVT__bpUpdateActive = 0U;
    } else {
        if ((1U & (~ (((IData)(vlSelfRef.__PVT__updFIFO__DOT__empty) 
                       & (IData)(vlSelfRef.__PVT__updFIFO__DOT__doInsert)) 
                      & (IData)(vlSelfRef.__PVT__updFIFO__DOT__outputReady))))) {
            if (((IData)(vlSelfRef.__PVT__updFIFO__DOT__doInsert) 
                 != (IData)(vlSelfRef.__PVT__updFIFO__DOT__doExtract))) {
                vlSelfRef.__PVT__updFIFO__DOT__fullCond 
                    = vlSelfRef.__PVT__updFIFO__DOT__doInsert;
            }
        }
        if (vlSelfRef.__PVT__updFIFO_deq) {
            vlSelfRef.__PVT__updFIFO__DOT__outValidReg = 0U;
            vlSelfRef.__PVT__bpUpdateActive = vlSelfRef.__PVT__bpUpdate;
        } else {
            vlSelfRef.__PVT__bpUpdateActive = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__updFIFO__DOT__empty) 
              & (IData)(vlSelfRef.__PVT__updFIFO__DOT__doInsert)) 
             & (IData)(vlSelfRef.__PVT__updFIFO__DOT__outputReady))) {
            vlSelfRef.__PVT__updFIFO__DOT__outValidReg = 1U;
        } else if (vlSelfRef.__PVT__updFIFO__DOT__doExtract) {
            vlSelfRef.__PVT__updFIFO__DOT__outValidReg = 1U;
        }
    }
    vlSelfRef.__PVT__updFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__updFIFO__DOT__indexIn) 
                                            == (IData)(vlSelfRef.__PVT__updFIFO__DOT__indexOut));
    vlSelfRef.__PVT__lookupHistory = vlSelfRef.__PVT__history;
    if ((1U & (IData)(vlSelfRef.__PVT__recovery))) {
        vlSelfRef.__PVT__lookupHistory = vlSelfRef.__PVT__recHistory;
    } else if ((IData)((0x21ULL == (0x33ULL & vlSelfRef.__PVT__OUT_predBr)))) {
        vlSelfRef.__PVT__lookupHistory = ((vlSelfRef.__PVT__lookupHistory 
                                           << 1U) | (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__OUT_predBr 
                                                                                >> 2U))))));
    }
    vlSelfRef.__PVT__updFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__updFIFO__DOT__fullCond)) 
                                            & (IData)(vlSelfRef.__PVT__updFIFO__DOT__equal));
    vlSelfRef.__PVT__bpUpdate = (((IData)(vlSelfRef.__PVT__updFIFO__DOT__outDataReg) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__updFIFO__DOT__outValidReg));
    vlSelfRef.__PVT__updHistory = (((QData)((IData)(
                                                    vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U])) 
                                    << 0x35U) | (((QData)((IData)(
                                                                  vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[1U])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U])) 
                                                    >> 0xbU)));
    if (((vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
          & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
             >> 5U)) & ((7U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                               >> 7U)) > (7U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                                                >> 1U))))) {
        vlSelfRef.__PVT__updHistory = ((vlSelfRef.__PVT__updHistory 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                                                                     >> 4U)))));
    }
}

VL_INLINE_OPT void VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__6(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___nba_sequent__TOP__Top__soc__core__ifetch__bp__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = 0;
    CData/*0:0*/ tagePredictor__DOT____Vlvbound_h123c8af4__0;
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = 0;
    // Body
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[0U] = 0U;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [0U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [0U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0xeU) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [0U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[3U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [0U] 
                                                      ^ (IData)(vlSelfRef.__PVT__updHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[0U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [0U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [0U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[0U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [0U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[0U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [0U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[0U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] = 0U;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [1U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [1U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0xeU) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [1U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[3U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [1U] 
                                                      ^ (IData)(vlSelfRef.__PVT__updHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [1U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [1U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [1U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [1U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [1U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [1U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [1U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[1U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] = 0U;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [2U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [2U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0xeU) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [2U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[3U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [2U] 
                                                      ^ (IData)(vlSelfRef.__PVT__updHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [2U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [2U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[2U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] = 0U;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [3U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [3U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0xeU) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [3U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[3U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [3U] 
                                                      ^ (IData)(vlSelfRef.__PVT__updHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x10U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x11U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x13U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x14U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x15U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x16U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x17U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x18U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x19U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] = 0U;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                        << 0xeU) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ 
                                                      ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[3U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                          >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ (IData)(vlSelfRef.__PVT__updHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x10U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x11U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x13U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x14U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x15U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x16U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x17U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x18U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x19U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x1fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x20U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x21U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x22U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x23U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x24U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x25U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x26U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x27U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x28U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x29U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x2aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x2bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x2cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x2dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x2eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x2fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x30U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x31U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x32U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x33U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x34U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x35U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x36U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x37U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x38U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x39U))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x3aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x3bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x3cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x3dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x3eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__updHistory 
                                                                 >> 0x3fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h123c8af4__0) 
                     << 7U));
    vlSelfRef.__PVT__bpBackup[0U] = ((0xfffff81fU & 
                                      vlSelfRef.__PVT__bpBackup[0U]) 
                                     | (0xffffffe0U 
                                        & (((IData)(vlSymsp->TOP__Top__soc__core__ifetch__bp__retStack.__PVT__OUT_curIdx) 
                                            << 6U) 
                                           | ((2U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__OUT_predBr 
                                                           >> 4U)))) 
                                              << 5U))));
    vlSelfRef.__PVT__bpBackup[0U] = ((0x7ffU & vlSelfRef.__PVT__bpBackup[0U]) 
                                     | ((IData)(vlSelfRef.__PVT__history) 
                                        << 0xbU));
    vlSelfRef.__PVT__bpBackup[1U] = (((IData)(vlSelfRef.__PVT__history) 
                                      >> 0x15U) | ((IData)(
                                                           (vlSelfRef.__PVT__history 
                                                            >> 0x20U)) 
                                                   << 0xbU));
    vlSelfRef.__PVT__bpBackup[2U] = ((0xf800U & vlSelfRef.__PVT__bpBackup[2U]) 
                                     | (0xffffU & ((IData)(
                                                           (vlSelfRef.__PVT__history 
                                                            >> 0x20U)) 
                                                   >> 0x15U)));
    vlSelfRef.__PVT__bpBackup[0U] = ((0xffffffe0U & 
                                      vlSelfRef.__PVT__bpBackup[0U]) 
                                     | ((0x10U & ((IData)(
                                                          (vlSelfRef.__PVT__OUT_predBr 
                                                           >> 2U)) 
                                                  << 4U)) 
                                        | ((0xeU & 
                                            ((IData)(
                                                     (vlSelfRef.__PVT__OUT_predBr 
                                                      >> 7U)) 
                                             << 1U)) 
                                           | (1U & (IData)(vlSelfRef.__PVT__OUT_predBr)))));
    vlSelfRef.__PVT__bpBackup[2U] = ((0x7ffU & vlSelfRef.__PVT__bpBackup[2U]) 
                                     | (0xf800U & (
                                                   ((IData)(vlSelfRef.__PVT__TAGE_tageID) 
                                                    << 0xcU) 
                                                   | ((IData)(vlSelfRef.__PVT__TAGE_altPred) 
                                                      << 0xbU))));
    vlSelfRef.__PVT__OUT_fetchLimit = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__bpUpdate))) {
        vlSelfRef.__PVT__OUT_fetchLimit = (1U | (0x3eU 
                                                 & ((IData)(vlSelfRef.__PVT__bpUpdate) 
                                                    >> 1U)));
    } else if ((1U & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_bpUpdate))) {
        vlSelfRef.__PVT__OUT_fetchLimit = (1U | (0x3eU 
                                                 & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_bpUpdate) 
                                                    >> 1U)));
    }
}
