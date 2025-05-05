// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_BranchPredictor__N3.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_BranchPredictor__N3___stl_sequent__TOP__Top__soc__core__ifetch__bp__0(VTop_BranchPredictor__N3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_BranchPredictor__N3___stl_sequent__TOP__Top__soc__core__ifetch__bp__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__tagePredictor__DOT__predictions;
    __PVT__tagePredictor__DOT__predictions = 0;
    CData/*5:0*/ __PVT__tagePredictor__DOT__avail;
    __PVT__tagePredictor__DOT__avail = 0;
    CData/*5:0*/ __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail;
    __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail = 0;
    CData/*0:0*/ __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp;
    __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail = 0;
    CData/*0:0*/ tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail;
    tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail = 0;
    SData/*8:0*/ tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_haea12882__0 = 0;
    SData/*8:0*/ tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h318462da__0 = 0;
    CData/*7:0*/ tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = 0;
    CData/*7:0*/ tagePredictor__DOT____Vlvbound_h0cdc4edf__1;
    tagePredictor__DOT____Vlvbound_h0cdc4edf__1 = 0;
    CData/*0:0*/ tagePredictor__DOT____Vlvbound_ha9c2078c__0;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = 0;
    CData/*0:0*/ tagePredictor__DOT____Vlvbound_h123c8af4__0;
    tagePredictor__DOT____Vlvbound_h123c8af4__0 = 0;
    CData/*0:0*/ tagePredictor__DOT____Vlvbound_hbd2e4a9d__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = 0;
    CData/*0:0*/ tagePredictor__DOT____Vlvbound_h9d606a70__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = 0;
    // Body
    vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeUseful 
        = ((1U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                  >> 4U)) != (1U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                    >> 0xbU)));
    vlSelfRef.__PVT__tagePredictor__DOT__basePredictor__DOT__write_c 
        = ((0x7ff8U & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                       >> 7U)) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSelfRef.__PVT__bpUpdateActive))));
    vlSelfRef.tagePredictor__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__tage__IN_writeCorrect 
        = ((1U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                  >> 4U)) == (1U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                    >> 1U)));
    vlSelfRef.__PVT__recRIdx = (0x1fU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                                         >> 6U));
    if ((2U == (3U & ((IData)(vlSelfRef.__PVT__recovery) 
                      >> 4U)))) {
        vlSelfRef.__PVT__recRIdx = (0x1fU & ((IData)(vlSelfRef.__PVT__recRIdx) 
                                             - (IData)(1U)));
    } else if ((1U == (3U & ((IData)(vlSelfRef.__PVT__recovery) 
                             >> 4U)))) {
        vlSelfRef.__PVT__recRIdx = (0x1fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__recRIdx)));
    }
    vlSelfRef.__PVT__updFIFO__DOT__equal = ((IData)(vlSelfRef.__PVT__updFIFO__DOT__indexIn) 
                                            == (IData)(vlSelfRef.__PVT__updFIFO__DOT__indexOut));
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
    vlSelfRef.__PVT__bpUpdate = (((IData)(vlSelfRef.__PVT__updFIFO__DOT__outDataReg) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__updFIFO__DOT__outValidReg));
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
    vlSelfRef.__PVT__btUpdate[0U] = 0U;
    vlSelfRef.__PVT__btUpdate[1U] = 0U;
    vlSelfRef.__PVT__btUpdate[2U] = 0U;
    vlSelfRef.__PVT__btUpdate[0U] = (0xfffffffeU & 
                                     vlSelfRef.__PVT__btUpdate[0U]);
    if ((1U & vlSelfRef.__PVT__IN_btUpdates[0U][0U])) {
        vlSelfRef.__PVT__btUpdate[0U] = vlSelfRef.__PVT__IN_btUpdates
            [0U][0U];
        vlSelfRef.__PVT__btUpdate[1U] = vlSelfRef.__PVT__IN_btUpdates
            [0U][1U];
        vlSelfRef.__PVT__btUpdate[2U] = vlSelfRef.__PVT__IN_btUpdates
            [0U][2U];
    }
    if ((1U & vlSelfRef.__PVT__IN_btUpdates[1U][0U])) {
        vlSelfRef.__PVT__btUpdate[0U] = vlSelfRef.__PVT__IN_btUpdates
            [1U][0U];
        vlSelfRef.__PVT__btUpdate[1U] = vlSelfRef.__PVT__IN_btUpdates
            [1U][1U];
        vlSelfRef.__PVT__btUpdate[2U] = vlSelfRef.__PVT__IN_btUpdates
            [1U][2U];
    }
    if ((1U & vlSelfRef.__PVT__IN_btUpdates[2U][0U])) {
        vlSelfRef.__PVT__btUpdate[0U] = vlSelfRef.__PVT__IN_btUpdates
            [2U][0U];
        vlSelfRef.__PVT__btUpdate[1U] = vlSelfRef.__PVT__IN_btUpdates
            [2U][1U];
        vlSelfRef.__PVT__btUpdate[2U] = vlSelfRef.__PVT__IN_btUpdates
            [2U][2U];
    }
    vlSelfRef.__PVT__updFIFO__DOT__empty = ((~ (IData)(vlSelfRef.__PVT__updFIFO__DOT__fullCond)) 
                                            & (IData)(vlSelfRef.__PVT__updFIFO__DOT__equal));
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
        vlSelfRef.__PVT__TAGE_tageID = 5U;
        vlSelfRef.__PVT__TAGE_altPred = vlSelfRef.__PVT__TAGE_taken;
        vlSelfRef.__PVT__TAGE_taken = (1U & ((IData)(__PVT__tagePredictor__DOT__predictions) 
                                             >> 5U));
    }
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [0U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [0U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [0U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [0U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [0U] 
                                                       >> 3U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 3U)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[0U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [1U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [1U] 
                                                       >> 7U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 7U)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[1U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [2U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [2U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 0xfU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[2U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [3U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x180000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x300000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x600000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc00000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x1800000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x3000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x6000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 0x1fU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h318462da__0 = (0x1ffU 
                                                   & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[2U] 
                                                      >> 0xaU));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = tagePredictor__DOT____Vlvbound_h318462da__0;
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__updHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__updHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x180000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x300000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x600000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc00000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x1800000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x3000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x6000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x18000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x30000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x60000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc0000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x18000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x30000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x60000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc0000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000000000ULL 
                                                                    & vlSelfRef.__PVT__updHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_h9d606a70__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__writeTags
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__updHistory 
                                                                >> 0x3fU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__updHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__writeTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__writeTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_h9d606a70__0));
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
    tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [4U]]);
    tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [3U]]);
    tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [2U]]);
    tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [1U]]);
    tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail 
        = (0U == vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__useful
           [vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
           [0U]]);
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
    __PVT__tagePredictor__DOT__avail = ((((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail) 
                                          << 5U) | 
                                         (((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail) 
                                           << 4U) | 
                                          ((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail) 
                                           << 3U))) 
                                        | (((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail) 
                                            << 2U) 
                                           | ((IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail) 
                                              << 1U)));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [0U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [0U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [0U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [0U] 
                                                       >> 3U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 3U)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[0U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [1U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [1U] 
                                                       >> 7U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 7U)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[1U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [2U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [2U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 0xfU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[2U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [3U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x180000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x300000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x600000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc00000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x1800000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x3000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x6000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [3U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 0x1fU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[3U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_haea12882__0 = (0x1ffU 
                                                   & vlSelfRef.__PVT__OUT_pc);
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = tagePredictor__DOT____Vlvbound_haea12882__0;
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(vlSelfRef.__PVT__lookupHistory) 
                                                       ^ (IData)(
                                                                 (vlSelfRef.__PVT__lookupHistory 
                                                                  >> 1U)))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (6ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_4(
                                                                  (0xcULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x18ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x30ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0x60ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_8(
                                                                  (0xc0ULL 
                                                                   & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x180ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x300ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x600ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc00ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x1800ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x3000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0x6000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_16(
                                                                   (0xc000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x180000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x300000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x600000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc00000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x1800000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x3000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x6000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x18000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x30000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0x60000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc0000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x18000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x30000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x60000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc0000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x18000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x30000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x60000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc0000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U]));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x180000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 1U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fdU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x300000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 2U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1fbU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x600000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 3U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1f7U & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc00000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 4U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1efU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x1800000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 5U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1dfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x3000000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 6U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1bfU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0x6000000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 7U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x17fU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (VL_REDXOR_64(
                                                                   (0xc000000000000000ULL 
                                                                    & vlSelfRef.__PVT__lookupHistory)) 
                                                      ^ 
                                                      (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                       [4U] 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0xffU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0) 
                     << 8U));
    tagePredictor__DOT____Vlvbound_hbd2e4a9d__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predTags
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(
                                                               (vlSelfRef.__PVT__lookupHistory 
                                                                >> 0x3fU)) 
                                                       ^ (IData)(vlSelfRef.__PVT__lookupHistory))));
    vlSelfRef.__PVT__tagePredictor__DOT__predTags[4U] 
        = ((0x1feU & vlSelfRef.__PVT__tagePredictor__DOT__predTags
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_hbd2e4a9d__0));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [0U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [0U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [0U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [0U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [0U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [0U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [0U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[0U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [0U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [1U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [1U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [1U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [1U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [1U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[1U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [1U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [2U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [2U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[2U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [2U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x10U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x11U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x13U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x14U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x15U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x16U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x17U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [3U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x18U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x19U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [3U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[3U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [3U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] = 0U;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ vlSelfRef.__PVT__OUT_pc));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 8U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_h49835e5f__1 = (0xffU 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ 
                                                      (vlSelfRef.__PVT__OUT_pc 
                                                       >> 0x10U)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = tagePredictor__DOT____Vlvbound_h49835e5f__1;
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(vlSelfRef.__PVT__lookupHistory)));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 1U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 2U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 3U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 4U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 5U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 6U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 7U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 8U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 9U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xaU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xbU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xcU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xdU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xeU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0xfU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x10U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x11U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x12U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x13U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x14U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x15U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x16U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x17U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x18U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x19U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x1fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x20U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x21U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x22U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x23U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x24U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x25U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x26U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x27U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x28U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x29U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x2fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x30U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x31U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x32U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x33U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x34U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x35U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x36U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x37U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & (vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                      [4U] 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x38U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfeU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | (IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 1U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x39U))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfdU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 1U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 2U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3aU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xfbU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 2U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 3U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3bU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xf7U & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 3U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 4U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3cU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xefU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 4U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 5U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3dU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xdfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 5U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 6U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3eU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0xbfU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 6U));
    tagePredictor__DOT____Vlvbound_ha9c2078c__0 = (1U 
                                                   & ((vlSelfRef.__PVT__tagePredictor__DOT__predHashes
                                                       [4U] 
                                                       >> 7U) 
                                                      ^ (IData)(
                                                                (vlSelfRef.__PVT__lookupHistory 
                                                                 >> 0x3fU))));
    vlSelfRef.__PVT__tagePredictor__DOT__predHashes[4U] 
        = ((0x7fU & vlSelfRef.__PVT__tagePredictor__DOT__predHashes
            [4U]) | ((IData)(tagePredictor__DOT____Vlvbound_ha9c2078c__0) 
                     << 7U));
    __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail = 0U;
    __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 0U;
    vlSelfRef.__PVT__tagePredictor__DOT__doAlloc = 0U;
    vlSelfRef.__PVT__tagePredictor__DOT__allocFailed = 0U;
    if (((1U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                >> 1U)) != (1U & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[0U] 
                                  >> 4U)))) {
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 1U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 2U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 3U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 4U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                     | ((IData)(__PVT__tagePredictor__DOT__avail) 
                        >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3eU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | (IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 1U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 2U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3dU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 1U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 1U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 3U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3dU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 1U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 1U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 4U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3dU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 1U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 1U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3dU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 1U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 2U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 3U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3bU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 2U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 2U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 4U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3bU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 2U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 2U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x3bU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 2U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 3U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 4U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x37U & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 3U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 3U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x37U & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 3U));
        vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0 
            = (1U & (((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                      >> 4U) | ((IData)(__PVT__tagePredictor__DOT__avail) 
                                >> 5U)));
        __PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail 
            = ((0x2fU & (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail)) 
               | ((IData)(vlSelfRef.tagePredictor__DOT____Vlvbound_h292350c7__0) 
                  << 4U));
        if (((((1U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 1U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 1U)) | (0U != (3U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                                            >> 2U)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (2U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        if (((((2U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 2U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 2U)) | (0U != (3U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                                            >> 4U)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (4U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        if (((((3U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 3U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 3U)) | (0U != (3U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                                            >> 6U)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (8U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        if (((((4U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 4U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 4U)) | (0U != (3U & (IData)(vlSelfRef.__PVT__tagePredictor__DOT__random)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (0x10U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        if (((((5U > (0xfU & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                              >> 0xcU))) & ((IData)(__PVT__tagePredictor__DOT__avail) 
                                            >> 5U)) 
              & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp))) 
             & ((~ ((IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__followingAllocAvail) 
                    >> 5U)) | (0U != (3U & ((IData)(vlSelfRef.__PVT__tagePredictor__DOT__random) 
                                            >> 2U)))))) {
            __PVT__tagePredictor__DOT__unnamedblk5__DOT__temp = 1U;
            vlSelfRef.__PVT__tagePredictor__DOT__doAlloc 
                = (0x20U | (IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc));
        }
        vlSelfRef.__PVT__tagePredictor__DOT__allocFailed 
            = (1U & (~ (IData)(__PVT__tagePredictor__DOT__unnamedblk5__DOT__temp)));
    }
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__1__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [0U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((1U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 1U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__1__KET____DOT__tage__OUT_allocAvail)))))));
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__2__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [1U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((2U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((2U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 2U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__2__KET____DOT__tage__OUT_allocAvail)))))));
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__3__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [2U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((3U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 3U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__3__KET____DOT__tage__OUT_allocAvail)))))));
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__4__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [3U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((4U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((4U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 4U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__4__KET____DOT__tage__OUT_allocAvail)))))));
    vlSelfRef.__PVT__tagePredictor__DOT__genblk1__BRA__5__KET____DOT__tage__DOT__counters__DOT__write_c 
        = ((vlSelfRef.__PVT__tagePredictor__DOT__writeHashes
            [4U] << 3U) | ((4U & ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                  << 1U)) | (((5U != 
                                               (0xfU 
                                                & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                   >> 0xcU))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.__PVT__bpUpdateActive) 
                                                & ((5U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP__Top__soc__core__ifetch__bp__bpFile.__PVT__OUT_rdata[2U] 
                                                        >> 0xcU))) 
                                                   | (((IData)(vlSelfRef.__PVT__tagePredictor__DOT__doAlloc) 
                                                       >> 5U) 
                                                      & (IData)(tagePredictor__DOT____Vcellout__genblk1__BRA__5__KET____DOT__tage__OUT_allocAvail)))))));
}
