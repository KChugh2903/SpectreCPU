// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__0(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___stl_sequent__TOP__Top__soc__core__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = 0;
    IData/*31:0*/ rfMux__DOT____Vlvbound_hae76876e__0;
    rfMux__DOT____Vlvbound_hae76876e__0 = 0;
    CData/*5:0*/ ld__DOT____Vlvbound_h3256ea86__0;
    ld__DOT____Vlvbound_h3256ea86__0 = 0;
    CData/*0:0*/ ld__DOT____Vlvbound_hd7824600__0;
    ld__DOT____Vlvbound_hd7824600__0 = 0;
    CData/*5:0*/ ld__DOT____Vlvbound_h4106c72c__0;
    ld__DOT____Vlvbound_h4106c72c__0 = 0;
    CData/*0:0*/ ld__DOT____Vlvbound_hf441be8f__0;
    ld__DOT____Vlvbound_hf441be8f__0 = 0;
    CData/*5:0*/ stDataLd__DOT____Vlvbound_h0bf8c5ab__0;
    stDataLd__DOT____Vlvbound_h0bf8c5ab__0 = 0;
    CData/*0:0*/ stDataLd__DOT____Vlvbound_h989db67a__0;
    stDataLd__DOT____Vlvbound_h989db67a__0 = 0;
    CData/*0:0*/ lb__DOT____Vcellinp__invalMaskBrGen__IN_enable;
    lb__DOT____Vcellinp__invalMaskBrGen__IN_enable = 0;
    CData/*0:0*/ lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes;
    lb__DOT____Vcellinp__invalMaskBrGen__IN_allOnes = 0;
    CData/*3:0*/ __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx;
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx = 0;
    CData/*0:0*/ lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable;
    lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable = 0;
    CData/*3:0*/ __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx;
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx = 0;
    CData/*0:0*/ lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable;
    lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable = 0;
    SData/*15:0*/ __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates;
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__issueCandidates = 0;
    CData/*3:0*/ __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx;
    __PVT__lb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk14__DOT__unnamedblk15__DOT__idx = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active;
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active;
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__lb__DOT__invalMaskBrGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
    CData/*0:0*/ __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active;
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
    CData/*0:0*/ __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active;
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
    CData/*0:0*/ __PVT__sqb__DOT__mmioOpInEv;
    __PVT__sqb__DOT__mmioOpInEv = 0;
    CData/*0:0*/ __PVT__sqb__DOT__mgmtOpInEv;
    __PVT__sqb__DOT__mgmtOpInEv = 0;
    VlWide<6>/*179:0*/ sqb__DOT____Vlvbound_h80e7cd4d__0;
    VL_ZERO_W(180, sqb__DOT____Vlvbound_h80e7cd4d__0);
    CData/*0:0*/ __PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx;
    __PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx = 0;
    CData/*5:0*/ __PVT__dataPrefetch__DOT__patternDetector__DOT__stride;
    __PVT__dataPrefetch__DOT__patternDetector__DOT__stride = 0;
    CData/*0:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill;
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 0;
    IData/*25:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff;
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff = 0;
    IData/*25:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod;
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk11__DOT__diff;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk11__DOT__diff = 0;
    CData/*2:0*/ __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__unnamedblk11__DOT__diff;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__unnamedblk11__DOT__diff = 0;
    CData/*2:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__unnamedblk11__DOT__diff;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__unnamedblk11__DOT__diff = 0;
    CData/*2:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__unnamedblk11__DOT__diff;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__unnamedblk11__DOT__diff = 0;
    CData/*0:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deferProp__DOT__unnamedblk1__DOT__red = 0;
    CData/*2:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__unnamedblk11__DOT__diff;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__unnamedblk11__DOT__diff = 0;
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
    IData/*19:0*/ intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 = 0;
    QData/*40:0*/ intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 = 0;
    IData/*19:0*/ intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 = 0;
    QData/*40:0*/ intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 = 0;
    IData/*19:0*/ intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 = 0;
    QData/*40:0*/ intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__0__Vfuncout;
    __Vfunc_stDataLd__DOT__ShiftData__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__0__raw;
    __Vfunc_stDataLd__DOT__ShiftData__0__raw = 0;
    CData/*1:0*/ __Vfunc_stDataLd__DOT__ShiftData__0__offs;
    __Vfunc_stDataLd__DOT__ShiftData__0__offs = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__0__shifted;
    __Vfunc_stDataLd__DOT__ShiftData__0__shifted = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__2__Vfuncout;
    __Vfunc_stDataLd__DOT__ShiftData__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__2__raw;
    __Vfunc_stDataLd__DOT__ShiftData__2__raw = 0;
    CData/*1:0*/ __Vfunc_stDataLd__DOT__ShiftData__2__offs;
    __Vfunc_stDataLd__DOT__ShiftData__2__offs = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__2__shifted;
    __Vfunc_stDataLd__DOT__ShiftData__2__shifted = 0;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    // Body
    vlSelfRef.ROB_perfcInfo = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_perfcInfo;
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
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 0U;
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 0U;
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 0U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 2U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = 3U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 0U;
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 0U;
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 0U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 2U;
    }
    if ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U]))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = 3U;
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__q 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U];
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
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__miss 
        = ((vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outDataReg 
            << 1U) | (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outValidReg));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 0U;
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U] & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                           | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 1U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 2U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 0U;
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U] & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                           | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 0U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 1U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 2U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 2U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 3U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = 3U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 0U;
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U] & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                           | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 1U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 2U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 0U;
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U] & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                           | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 0U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 1U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 2U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 2U;
    }
    if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U] & (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                            >> 3U) | (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = 3U;
    }
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr_c 
        = (0x3ffffffU & (VL_SHIFTL_III(26,26,32, (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                                                  [
                                                  (3U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter) 
                                                       >> 1U)))] 
                                                  >> 3U), 1U) 
                         - (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__baseMiss 
                            >> 3U)));
    vlSelfRef.__PVT__PW_reqs[0U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_pw;
    vlSelfRef.__PVT__PW_reqs[1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_pw;
    vlSelfRef.__PVT__PW_reqs[2U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_pw;
    vlSelfRef.__PVT__TVS_tvalProvs[0U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tvalProv;
    vlSelfRef.__PVT__TVS_tvalProvs[1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tvalProv;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[0U] = 0U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[0U] 
        = ((1U & (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                          [0U] >> 0x1eU))) ? ((1U & (IData)(
                                                            (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                             [0U] 
                                                             >> 0x1dU)))
                                               ? 2U
                                               : 1U)
            : ((1U & (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                              [0U] >> 0x1dU))) ? 0x3fU
                : 0x3eU));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[1U] = 0U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[1U] 
        = ((1U & (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                          [1U] >> 0x1eU))) ? ((1U & (IData)(
                                                            (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                             [1U] 
                                                             >> 0x1dU)))
                                               ? 2U
                                               : 1U)
            : ((1U & (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                              [1U] >> 0x1dU))) ? 0x3fU
                : 0x3eU));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[2U] = 0U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[2U] 
        = ((1U & (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                          [2U] >> 0x1eU))) ? ((1U & (IData)(
                                                            (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                             [2U] 
                                                             >> 0x1dU)))
                                               ? 2U
                                               : 1U)
            : ((1U & (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                              [2U] >> 0x1dU))) ? 0x3fU
                : 0x3eU));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[3U] = 0U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[3U] 
        = ((1U & (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                          [3U] >> 0x1eU))) ? ((1U & (IData)(
                                                            (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                             [3U] 
                                                             >> 0x1dU)))
                                               ? 2U
                                               : 1U)
            : ((1U & (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                              [3U] >> 0x1dU))) ? 0x3fU
                : 0x3eU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active 
        = ((0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex)) 
           > (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xfffeU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 1U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 1U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xfffdU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 1U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 2U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 2U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xfffbU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 2U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 3U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 3U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xfff7U 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 3U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 4U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 4U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xffefU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 4U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 5U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 5U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xffdfU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 5U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 6U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 6U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xffbfU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 6U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 7U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 7U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xff7fU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 7U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 8U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 8U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xfeffU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 8U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 9U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 9U));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xfdffU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 9U));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xaU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xaU));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xfbffU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 0xaU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xbU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xbU));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xf7ffU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 0xbU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xcU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xcU));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xefffU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 0xcU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xdU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xdU));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xdfffU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 0xdU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xeU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xeU));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0xbfffU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 0xeU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))) 
                 >> 0xfU));
    __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xfU));
    if (((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__lb__DOT__invalMask = ((0x7fffU 
                                            & (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)) 
                                           | ((IData)(__PVT__lb__DOT__invalMaskGen__DOT__unnamedblk1__DOT__active) 
                                              << 0xfU));
    __PVT__dataPrefetch__DOT__patternDetector__DOT__stride 
        = (0x3fU & ((vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr 
                     - (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__baseMiss 
                        >> 3U)) >> 1U));
    vlSelfRef.__PVT__stCommitLimit[0U] = vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_comLimit;
    vlSelfRef.__PVT__stCommitLimit[1U] = vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_comLimit;
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
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missAck 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter)) 
                 | (3U == (3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter) 
                                 >> 1U)))));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__equal 
        = ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn) 
           == (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut));
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
    vlSelfRef.ROB_trapUOp = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_trapUOp;
    vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0 
        = ((0xfffffff0U & ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[1U] 
                            << 0x1dU) | (0x1ffffff0U 
                                         & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[0U] 
                                            >> 3U)))) 
           | ((IData)(vlSelfRef.__PVT__trapHandler__DOT__fetchOffs) 
              << 1U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx 
        = (0xfU & (((vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[0U] 
                     << 0x15U) | (vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[0U] 
                                  >> 0xbU)) + (IData)(
                                                      (0x600U 
                                                       == 
                                                       (0x600U 
                                                        & vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U])))));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx 
        = (0xfU & (((vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[0U] 
                     << 0x15U) | (vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[0U] 
                                  >> 0xbU)) + (IData)(
                                                      (0x600U 
                                                       == 
                                                       (0x600U 
                                                        & vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U])))));
    lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable 
        = VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, (0x7fU 
                                                  & (((vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[0U] 
                                                       << 0x15U) 
                                                      | (vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[0U] 
                                                         >> 0xbU)) 
                                                     - 
                                                     ((IData)(0x10U) 
                                                      + (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))))));
    lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable 
        = VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, (0x7fU 
                                                  & (((vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[0U] 
                                                       << 0x15U) 
                                                      | (vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[0U] 
                                                         >> 0xbU)) 
                                                     - 
                                                     ((IData)(0x10U) 
                                                      + (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))))));
    vlSelfRef.__PVT__SDL_amoData[0U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_amoData;
    vlSelfRef.__PVT__SDL_amoData[1U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_amoData;
    vlSelfRef.__PVT__SDL_amoData[2U] = vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_amoData;
    vlSelfRef.__PVT__BP_btUpdates[0U][0U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_btUpdate[0U];
    vlSelfRef.__PVT__BP_btUpdates[0U][1U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_btUpdate[1U];
    vlSelfRef.__PVT__BP_btUpdates[0U][2U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_btUpdate[2U];
    vlSelfRef.__PVT__BP_btUpdates[1U][0U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_btUpdate[0U];
    vlSelfRef.__PVT__BP_btUpdates[1U][1U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_btUpdate[1U];
    vlSelfRef.__PVT__BP_btUpdates[1U][2U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_btUpdate[2U];
    vlSelfRef.__PVT__lsu__DOT__BLSU_stStall = (0U != (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state));
    vlSelfRef.__PVT__lsu__DOT__BLSU_ldStall = (1U & 
                                               ((0U 
                                                 != (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state)) 
                                                | (vlSelfRef.__PVT__SQB_uop[0U] 
                                                   & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_stStall)))));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c 
        = ((0xeU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c)) 
           | (1U & ((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                               [0U])) | (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                [0U] 
                                                                >> 1U)))))))));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c 
        = ((0xdU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c)) 
           | (2U & (((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                [1U])) | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                 [1U] 
                                                                 >> 1U))))))) 
                    << 1U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c 
        = ((0xbU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c)) 
           | (4U & (((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                [2U])) | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                 [2U] 
                                                                 >> 1U))))))) 
                    << 2U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c 
        = ((7U & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c)) 
           | (8U & (((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                [3U])) | (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                 [3U] 
                                                                 >> 1U))))))) 
                    << 3U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c 
        = ((0xeU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c)) 
           | ((0x3ffffffU & (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                             [0U] >> 3U)) == vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c 
        = ((0xdU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c)) 
           | (((0x3ffffffU & (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                              [1U] >> 3U)) == vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr) 
              << 1U));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c 
        = ((0xbU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c)) 
           | (((0x3ffffffU & (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                              [2U] >> 3U)) == vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr) 
              << 2U));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c 
        = ((7U & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c)) 
           | (((0x3ffffffU & (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                              [3U] >> 3U)) == vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr) 
              << 3U));
    vlSelfRef.__Vcellout__lsu__OUT_resultUOp[1U] = vlSelfRef.lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_resultUOp;
    vlSelfRef.__Vcellout__lsu__OUT_resultUOp[0U] = vlSelfRef.lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_resultUOp;
    vlSelfRef.__PVT__AGU_uop[0U][0U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[0U];
    vlSelfRef.__PVT__AGU_uop[0U][1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U];
    vlSelfRef.__PVT__AGU_uop[0U][2U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[2U];
    vlSelfRef.__PVT__AGU_uop[1U][0U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[0U];
    vlSelfRef.__PVT__AGU_uop[1U][1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U];
    vlSelfRef.__PVT__AGU_uop[1U][2U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[2U];
    vlSelfRef.lsu__DOT____VdfgExtracted_ha53847fe__0 
        = (IData)((0x81U == (0x81U & vlSelfRef.__PVT__SQB_uop[0U])));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c 
        = ((0xeU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c)) 
           | ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                      [0U]) & (2U != (3U & (IData)(
                                                   (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                    [0U] 
                                                    >> 0x1fU))))));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c 
        = ((0xdU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c)) 
           | (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                       [1U]) & (2U != (3U & (IData)(
                                                    (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                     [1U] 
                                                     >> 0x1fU))))) 
              << 1U));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c 
        = ((0xbU & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c)) 
           | (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                       [2U]) & (2U != (3U & (IData)(
                                                    (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                     [2U] 
                                                     >> 0x1fU))))) 
              << 2U));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c 
        = ((7U & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c)) 
           | (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                       [3U]) & (2U != (3U & (IData)(
                                                    (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                     [3U] 
                                                     >> 0x1fU))))) 
              << 3U));
    vlSelfRef.comUOps[3U] = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_comUOp
        [3U];
    vlSelfRef.comUOps[2U] = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_comUOp
        [2U];
    vlSelfRef.comUOps[1U] = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_comUOp
        [1U];
    vlSelfRef.comUOps[0U] = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_comUOp
        [0U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | (((0U < (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex)) 
               & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                [0U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail
                               [0U])))) & VL_GTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,7, 
                                                                    (0x7fU 
                                                                     & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                                        [0U] 
                                                                        - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((1U < (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                 [1U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail
                                [1U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                                         [1U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 1U));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((2U < (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                 [2U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail
                                [2U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                                         [2U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 2U));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((3U < (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                 [3U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail
                                [3U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                                         [3U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 3U));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((4U < (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                 [4U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail
                                [4U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                                         [4U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 4U));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((5U < (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                 [5U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail
                                [5U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                                         [5U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 5U));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((6U < (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                 [6U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail
                                [6U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                                         [6U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 6U));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((7U < (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                 [7U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail
                                [7U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                                         [7U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 7U));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | (((0U < (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex)) 
               & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                [0U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail
                               [0U])))) & VL_GTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,7, 
                                                                    (0x7fU 
                                                                     & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                                        [0U] 
                                                                        - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((1U < (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                 [1U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail
                                [1U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                                         [1U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 1U));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((2U < (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                 [2U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail
                                [2U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                                         [2U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 2U));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((3U < (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                 [3U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail
                                [3U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                                         [3U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 3U));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((4U < (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                 [4U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail
                                [4U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                                         [4U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 4U));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((5U < (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                 [5U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail
                                [5U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                                         [5U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 5U));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((6U < (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                 [6U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail
                                [6U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                                         [6U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 6U));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)) 
           | ((((7U < (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex)) 
                & (3U == (3U & ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                 [7U] >> 0xeU) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail
                                [7U])))) & VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                                         [7U] 
                                                                         - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN)))))) 
              << 7U));
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
    vlSelfRef.ROB_curSqN = vlSymsp->TOP__Top__soc__core__rob.__PVT__baseIndex;
    vlSelfRef.mispredFlush = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_mispredFlush;
    __PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk11__DOT__diff 
        = (0xfU & ((IData)(8U) - (IData)(vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex)));
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c 
        = ((2U > (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            ? (3U & (IData)(__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            : 2U);
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__unnamedblk11__DOT__diff 
        = (0xfU & ((IData)(8U) - (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c 
        = ((2U > (IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            ? (3U & (IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            : 2U);
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__unnamedblk11__DOT__diff 
        = (0xfU & ((IData)(8U) - (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c 
        = ((2U > (IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            ? (3U & (IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            : 2U);
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__unnamedblk11__DOT__diff 
        = (0xfU & ((IData)(8U) - (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c 
        = ((2U > (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            ? (3U & (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            : 2U);
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__unnamedblk11__DOT__diff 
        = (0xfU & ((IData)(8U) - (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c 
        = ((2U > (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            ? (3U & (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__unnamedblk11__DOT__diff))
            : 2U);
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
    vlSelfRef.__PVT__RN_uopOrdering[3U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uopOrdering
        [3U];
    vlSelfRef.__PVT__RN_uopOrdering[2U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uopOrdering
        [2U];
    vlSelfRef.__PVT__RN_uopOrdering[1U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uopOrdering
        [1U];
    vlSelfRef.__PVT__RN_uopOrdering[0U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uopOrdering
        [0U];
    vlSelfRef.flagUOps[5U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_uop;
    vlSelfRef.flagUOps[6U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_uop;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[0U] 
        = (IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[1U] 
        = ((0xfff00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[1U]) 
           | (IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                      >> 0x20U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[6U] 
        = ((0xffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[6U]) 
           | ((IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop) 
              << 0x10U));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[7U] 
        = (((IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop) 
            >> 0x10U) | ((IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[8U] 
        = ((0xfffffff0U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[8U]) 
           | ((IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop 
                       >> 0x20U)) >> 0x10U));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[0U] 
        = (IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[1U] 
        = ((0xfff00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[1U]) 
           | (IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                      >> 0x20U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[6U] 
        = ((0xffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[6U]) 
           | ((IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop) 
              << 0x10U));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[7U] 
        = (((IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop) 
            >> 0x10U) | ((IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[8U] 
        = ((0xfffffff0U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[8U]) 
           | ((IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop 
                       >> 0x20U)) >> 0x10U));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0U] 
        = (IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[1U] 
        = ((0xfff00000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[1U]) 
           | (IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                      >> 0x20U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[8U] 
        = ((0xfU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[8U]) 
           | ((IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop) 
              << 4U));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[9U] 
        = ((0xff000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[9U]) 
           | (((IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop) 
               >> 0x1cU) | ((IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop 
                                     >> 0x20U)) << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x11U] 
        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x11U]) 
           | ((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_uop) 
              << 0x1cU));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x12U] 
        = (((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_uop) 
            >> 4U) | ((IData)((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_uop 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x13U] 
        = ((0xffff0000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x13U]) 
           | ((IData)((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_uop 
                       >> 0x20U)) >> 4U));
    vlSelfRef.__PVT__stLookupUOp[0U] = vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_uop;
    vlSelfRef.__PVT__stLookupUOp[1U] = vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_uop;
    vlSelfRef.IS_uop[0U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[0U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[0U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[0U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.IS_uop[1U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[1U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[1U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[1U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.IS_uop[2U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[2U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[2U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[2U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.IS_uop[3U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[3U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[3U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[3U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.IS_uop[4U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[4U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[4U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[4U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[3U];
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
    vlSelfRef.__PVT__PW_LD_uop[0U] = vlSelfRef.__Vcellout__pageWalker__OUT_ldUOp;
    vlSelfRef.__PVT__lsu__DOT__idxs_c = ((2U & (((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__lsu__DOT__genblk1__DOT__startIdx)) 
                                                << 1U)) 
                                         | (IData)(vlSelfRef.__PVT__lsu__DOT__genblk1__DOT__startIdx));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0[0U] 
        = (3U & ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                        [0U][0U])) + (1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                            [1U][0U]))));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0[1U] 
        = (3U & ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                        [2U][0U])) + (1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                            [3U][0U]))));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free 
        = (7U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0
                 [0U] + vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0
                 [1U]));
    if ((0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free 
            = (7U & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free) 
                     - (1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U])));
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0[0U] 
        = (3U & ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                        [0U][0U])) + (1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                            [1U][0U]))));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0[1U] 
        = (3U & ((1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                        [2U][0U])) + (1U & (~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                            [3U][0U]))));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free 
        = (7U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0
                 [0U] + vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0
                 [1U]));
    if ((0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free 
            = (7U & ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free) 
                     - (1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U])));
    }
    vlSelfRef.RN_uop[3U][0U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [3U][0U];
    vlSelfRef.RN_uop[3U][1U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [3U][1U];
    vlSelfRef.RN_uop[3U][2U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [3U][2U];
    vlSelfRef.RN_uop[3U][3U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [3U][3U];
    vlSelfRef.RN_uop[3U][4U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [3U][4U];
    vlSelfRef.RN_uop[2U][0U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [2U][0U];
    vlSelfRef.RN_uop[2U][1U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [2U][1U];
    vlSelfRef.RN_uop[2U][2U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [2U][2U];
    vlSelfRef.RN_uop[2U][3U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [2U][3U];
    vlSelfRef.RN_uop[2U][4U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [2U][4U];
    vlSelfRef.RN_uop[1U][0U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [1U][0U];
    vlSelfRef.RN_uop[1U][1U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [1U][1U];
    vlSelfRef.RN_uop[1U][2U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [1U][2U];
    vlSelfRef.RN_uop[1U][3U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [1U][3U];
    vlSelfRef.RN_uop[1U][4U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [1U][4U];
    vlSelfRef.RN_uop[0U][0U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [0U][0U];
    vlSelfRef.RN_uop[0U][1U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [0U][1U];
    vlSelfRef.RN_uop[0U][2U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [0U][2U];
    vlSelfRef.RN_uop[0U][3U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [0U][3U];
    vlSelfRef.RN_uop[0U][4U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uop
        [0U][4U];
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffffffeU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__lb__DOT__entries
                                                               [0U] 
                                                               >> 1U))));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffeffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x10000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0U] 
                                                                >> 1U)) 
                                                       << 0x10U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffffffdU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (2U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [1U] 
                                                                >> 1U)) 
                                                       << 1U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffdffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x20000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [1U] 
                                                                >> 1U)) 
                                                       << 0x11U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffffffbU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (4U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [2U] 
                                                                >> 1U)) 
                                                       << 2U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffbffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x40000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [2U] 
                                                                >> 1U)) 
                                                       << 0x12U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffffff7U 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (8U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [3U] 
                                                                >> 1U)) 
                                                       << 3U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfff7ffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x80000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [3U] 
                                                                >> 1U)) 
                                                       << 0x13U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffffffefU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x10U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [4U] 
                                                                >> 1U)) 
                                                       << 4U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffefffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x100000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [4U] 
                                                                >> 1U)) 
                                                       << 0x14U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffffffdfU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x20U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [5U] 
                                                                >> 1U)) 
                                                       << 5U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffdfffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x200000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [5U] 
                                                                >> 1U)) 
                                                       << 0x15U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffffffbfU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x40U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [6U] 
                                                                >> 1U)) 
                                                       << 6U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffbfffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x400000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [6U] 
                                                                >> 1U)) 
                                                       << 0x16U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffffff7fU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x80U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [7U] 
                                                                >> 1U)) 
                                                       << 7U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xff7fffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x800000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [7U] 
                                                                >> 1U)) 
                                                       << 0x17U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffffeffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x100U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [8U] 
                                                                >> 1U)) 
                                                       << 8U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfeffffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x1000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [8U] 
                                                                >> 1U)) 
                                                       << 0x18U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffffdffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x200U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [9U] 
                                                                >> 1U)) 
                                                       << 9U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfdffffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x2000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [9U] 
                                                                >> 1U)) 
                                                       << 0x19U)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffffbffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x400U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xaU] 
                                                                >> 1U)) 
                                                       << 0xaU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfbffffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x4000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xaU] 
                                                                >> 1U)) 
                                                       << 0x1aU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xfffff7ffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x800U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xbU] 
                                                                >> 1U)) 
                                                       << 0xbU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xf7ffffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x8000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xbU] 
                                                                >> 1U)) 
                                                       << 0x1bU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffffefffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x1000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xcU] 
                                                                >> 1U)) 
                                                       << 0xcU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xefffffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x10000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xcU] 
                                                                >> 1U)) 
                                                       << 0x1cU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffffdfffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x2000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xdU] 
                                                                >> 1U)) 
                                                       << 0xdU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xdfffffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x20000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xdU] 
                                                                >> 1U)) 
                                                       << 0x1dU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffffbfffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x4000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xeU] 
                                                                >> 1U)) 
                                                       << 0xeU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xbfffffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x40000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xeU] 
                                                                >> 1U)) 
                                                       << 0x1eU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0xffff7fffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | (0x8000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__entries
                                                                [0xfU] 
                                                                >> 1U)) 
                                                       << 0xfU)));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = ((0x7fffffffU 
                                                  & vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid) 
                                                 | ((IData)(
                                                            (vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xfU] 
                                                             >> 1U)) 
                                                    << 0x1fU));
    vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid = (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                                                 & ((IData)(0xffffU) 
                                                    << 
                                                    (0xfU 
                                                     & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN))));
    vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[3U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[0U] = (0xfffffffeU 
                                                 & vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[0U]);
    if ((5U == (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))) {
        vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[0U] = 
            vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[0U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[1U] = 
            vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[1U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[2U] = 
            vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[2U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[3U] = 
            vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[3U];
    }
    vlSelfRef.__PVT__SQ_fwd[1U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_fwd
        [1U];
    vlSelfRef.__PVT__SQ_fwd[0U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_fwd
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady 
        = ((0xeU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady)) 
           | (1U & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                    [0U][0U] & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                [0U][0U] >> 0x11U))));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady 
        = ((0xdU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady)) 
           | (2U & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                     [1U][0U] << 1U) & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                        [1U][0U] >> 0x10U))));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady 
        = ((0xbU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady)) 
           | (4U & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                     [2U][0U] << 2U) & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                        [2U][0U] >> 0xfU))));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady 
        = ((7U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady)) 
           | (8U & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                     [3U][0U] << 3U) & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                        [3U][0U] >> 0xeU))));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady 
        = ((0xeU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady)) 
           | (1U & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                    [0U][0U] & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                [0U][0U] >> 0x11U))));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady 
        = ((0xdU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady)) 
           | (2U & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                     [1U][0U] << 1U) & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                        [1U][0U] >> 0x10U))));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady 
        = ((0xbU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady)) 
           | (4U & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                     [2U][0U] << 2U) & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                        [2U][0U] >> 0xfU))));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady 
        = ((7U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady)) 
           | (8U & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                     [3U][0U] << 3U) & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                        [3U][0U] >> 0xeU))));
    vlSelfRef.__PVT__OUT_memc[0U][0U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_memc[0U];
    vlSelfRef.__PVT__OUT_memc[0U][1U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_memc[1U];
    vlSelfRef.__PVT__OUT_memc[0U][2U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_memc[2U];
    vlSelfRef.__PVT__OUT_memc[0U][3U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_memc[3U];
    vlSelfRef.__PVT__OUT_memc[0U][4U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_memc[4U];
    vlSelfRef.__PVT__OUT_memc[0U][5U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_memc[5U];
    vlSelfRef.__PVT__OUT_memc[0U][6U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_memc[6U];
    vlSelfRef.__PVT__OUT_memc[0U][7U] = vlSymsp->TOP__Top__soc__core__ifetch__ifp.__PVT__OUT_memc[7U];
    vlSelfRef.__PVT__OUT_memc[1U][0U] = vlSelfRef.__PVT__LSU_MC_if[0U];
    vlSelfRef.__PVT__OUT_memc[1U][1U] = vlSelfRef.__PVT__LSU_MC_if[1U];
    vlSelfRef.__PVT__OUT_memc[1U][2U] = vlSelfRef.__PVT__LSU_MC_if[2U];
    vlSelfRef.__PVT__OUT_memc[1U][3U] = vlSelfRef.__PVT__LSU_MC_if[3U];
    vlSelfRef.__PVT__OUT_memc[1U][4U] = vlSelfRef.__PVT__LSU_MC_if[4U];
    vlSelfRef.__PVT__OUT_memc[1U][5U] = vlSelfRef.__PVT__LSU_MC_if[5U];
    vlSelfRef.__PVT__OUT_memc[1U][6U] = vlSelfRef.__PVT__LSU_MC_if[6U];
    vlSelfRef.__PVT__OUT_memc[1U][7U] = vlSelfRef.__PVT__LSU_MC_if[7U];
    vlSelfRef.__PVT__OUT_memc[2U][0U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U];
    vlSelfRef.__PVT__OUT_memc[2U][1U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U];
    vlSelfRef.__PVT__OUT_memc[2U][2U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U];
    vlSelfRef.__PVT__OUT_memc[2U][3U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U];
    vlSelfRef.__PVT__OUT_memc[2U][4U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[4U];
    vlSelfRef.__PVT__OUT_memc[2U][5U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[5U];
    vlSelfRef.__PVT__OUT_memc[2U][6U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[6U];
    vlSelfRef.__PVT__OUT_memc[2U][7U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[7U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree 
        = ((0xeU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree)) 
           | (1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                    [0U][0U])));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree 
        = ((0xdU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree)) 
           | (2U & ((~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                     [1U][0U]) << 1U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree 
        = ((0xbU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree)) 
           | (4U & ((~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                     [2U][0U]) << 2U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree 
        = ((7U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree)) 
           | (8U & ((~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                     [3U][0U]) << 3U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree 
        = ((0xeU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree)) 
           | (1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                    [0U][0U])));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree 
        = ((0xdU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree)) 
           | (2U & ((~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                     [1U][0U]) << 1U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree 
        = ((0xbU & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree)) 
           | (4U & ((~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                     [2U][0U]) << 2U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree 
        = ((7U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree)) 
           | (8U & ((~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                     [3U][0U]) << 3U)));
    rfMux__DOT____Vlvbound_h8d481bf9__0 = vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[0U];
    vlSelfRef.__Vcellout__rfMux__OUT_readData[0U] = rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[1U];
    vlSelfRef.__Vcellout__rfMux__OUT_readData[1U] = rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[2U];
    vlSelfRef.__Vcellout__rfMux__OUT_readData[2U] = rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[3U];
    vlSelfRef.__Vcellout__rfMux__OUT_readData[3U] = rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[4U];
    vlSelfRef.__Vcellout__rfMux__OUT_readData[4U] = rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[5U];
    vlSelfRef.__Vcellout__rfMux__OUT_readData[5U] = rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[6U];
    vlSelfRef.__Vcellout__rfMux__OUT_readData[6U] = rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[7U];
    vlSelfRef.__Vcellout__rfMux__OUT_readData[7U] = rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_hae76876e__0 = (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                              [0U], 5U)))
                                             ? 0U : 
                                            (vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                                  [0U], 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                                  [0U], 5U))))) 
                                           | (vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[
                                              (7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                              [0U], 5U) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                                  [0U], 5U))));
    vlSelfRef.__Vcellout__rfMux__OUT_readData[8U] = rfMux__DOT____Vlvbound_hae76876e__0;
    rfMux__DOT____Vlvbound_hae76876e__0 = (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                              [1U], 5U)))
                                             ? 0U : 
                                            (vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                                  [1U], 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                                  [1U], 5U))))) 
                                           | (vlSymsp->TOP__Top__soc__core__rf.__PVT__OUT_rdata[
                                              (7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                              [1U], 5U) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r
                                                                  [1U], 5U))));
    vlSelfRef.__Vcellout__rfMux__OUT_readData[9U] = rfMux__DOT____Vlvbound_hae76876e__0;
    vlSelfRef.__PVT__tvalSelect__DOT__earliest = 0ULL;
    vlSelfRef.__PVT__tvalSelect__DOT__earliest = (0xfffffffffeULL 
                                                  & vlSelfRef.__PVT__tvalSelect__DOT__earliest);
    if ((1U & ((IData)(vlSelfRef.__PVT__TVS_tvalProvs
                       [0U]) & ((~ (IData)(vlSelfRef.__PVT__tvalSelect__DOT__earliest)) 
                                | VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((IData)(
                                                                       (vlSelfRef.__PVT__tvalSelect__DOT__earliest 
                                                                        >> 1U)) 
                                                               - (IData)(
                                                                         (vlSelfRef.__PVT__TVS_tvalProvs
                                                                          [0U] 
                                                                          >> 1U)))))))))) {
        vlSelfRef.__PVT__tvalSelect__DOT__earliest 
            = vlSelfRef.__PVT__TVS_tvalProvs[0U];
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__TVS_tvalProvs
                       [1U]) & ((~ (IData)(vlSelfRef.__PVT__tvalSelect__DOT__earliest)) 
                                | VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & ((IData)(
                                                                       (vlSelfRef.__PVT__tvalSelect__DOT__earliest 
                                                                        >> 1U)) 
                                                               - (IData)(
                                                                         (vlSelfRef.__PVT__TVS_tvalProvs
                                                                          [1U] 
                                                                          >> 1U)))))))))) {
        vlSelfRef.__PVT__tvalSelect__DOT__earliest 
            = vlSelfRef.__PVT__TVS_tvalProvs[1U];
    }
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEncValid = 1U;
    if ((1U != (IData)(__PVT__dataPrefetch__DOT__patternDetector__DOT__stride))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEncValid = 0U;
    }
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEnc 
        = ((1U == (IData)(__PVT__dataPrefetch__DOT__patternDetector__DOT__stride))
            ? 2U : 0U);
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_stComLimit[1U] 
        = vlSelfRef.__PVT__stCommitLimit[1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_stComLimit[0U] 
        = vlSelfRef.__PVT__stCommitLimit[0U];
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
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outValidReg)) 
                 | (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missAck)));
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
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active 
        = ((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx) 
           >= (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex)));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & ((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfffeU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | ((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
              & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 1U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 1U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfffdU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 1U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 2U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 2U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfffbU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 2U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 3U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 3U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfff7U & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 3U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 4U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 4U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xffefU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 4U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 5U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 5U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xffdfU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 5U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 6U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 6U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xffbfU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 6U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 7U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 7U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xff7fU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 7U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 8U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 8U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfeffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 8U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 9U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 9U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfdffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 9U));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xaU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 0xaU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfbffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xaU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xbU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 0xbU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xf7ffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xbU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xcU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 0xcU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xefffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xcU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xdU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 0xdU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xdfffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xdU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xeU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 0xeU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xbfffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xeU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xfU));
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx)) 
                 >> 0xfU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0x7fffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xfU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active 
        = ((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx) 
           >= (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex)));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & ((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfffeU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | ((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
              & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 1U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 1U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfffdU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 1U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 2U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 2U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfffbU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 2U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 3U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 3U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfff7U & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 3U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 4U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 4U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xffefU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 4U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 5U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 5U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xffdfU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 5U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 6U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 6U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xffbfU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 6U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 7U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 7U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xff7fU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 7U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 8U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 8U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfeffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 8U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 9U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 9U));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfdffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 9U));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xaU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 0xaU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xfbffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xaU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xbU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 0xbU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xf7ffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xbU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xcU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 0xcU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xefffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xcU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xdU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 0xdU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xdfffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xdU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xeU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 0xeU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0xbfffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xeU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.__PVT__lb__DOT__lastBaseIndex))) 
                 >> 0xfU));
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx)) 
                 >> 0xfU));
    if (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range 
        = ((0x7fffU & (IData)(vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range)) 
           | (((IData)(__PVT__lb__DOT__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__DOT__unnamedblk1__DOT__active) 
               & (IData)(lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable)) 
              << 0xfU));
    vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp[1U] 
        = vlSelfRef.__PVT__SDL_amoData[1U];
    vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp[0U] 
        = vlSelfRef.__PVT__SDL_amoData[0U];
    vlSelfRef.__Vcellinp__ifetch__IN_btUpdates[1U][0U] 
        = vlSelfRef.__PVT__BP_btUpdates[1U][0U];
    vlSelfRef.__Vcellinp__ifetch__IN_btUpdates[1U][1U] 
        = vlSelfRef.__PVT__BP_btUpdates[1U][1U];
    vlSelfRef.__Vcellinp__ifetch__IN_btUpdates[1U][2U] 
        = vlSelfRef.__PVT__BP_btUpdates[1U][2U];
    vlSelfRef.__Vcellinp__ifetch__IN_btUpdates[0U][0U] 
        = vlSelfRef.__PVT__BP_btUpdates[0U][0U];
    vlSelfRef.__Vcellinp__ifetch__IN_btUpdates[0U][1U] 
        = vlSelfRef.__PVT__BP_btUpdates[0U][1U];
    vlSelfRef.__Vcellinp__ifetch__IN_btUpdates[0U][2U] 
        = vlSelfRef.__PVT__BP_btUpdates[0U][2U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c)));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c) 
                    >> 1U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c) 
                    >> 2U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c) 
                    >> 3U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c)));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c) 
                    >> 1U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c) 
                    >> 2U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c) 
                    >> 3U)));
    vlSelfRef.resultUOps[4U] = vlSelfRef.__Vcellout__lsu__OUT_resultUOp
        [1U];
    vlSelfRef.resultUOps[3U] = vlSelfRef.__Vcellout__lsu__OUT_resultUOp
        [0U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopSt[1U][0U] 
        = vlSelfRef.__PVT__AGU_uop[1U][0U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopSt[1U][1U] 
        = vlSelfRef.__PVT__AGU_uop[1U][1U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopSt[1U][2U] 
        = vlSelfRef.__PVT__AGU_uop[1U][2U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopSt[0U][0U] 
        = vlSelfRef.__PVT__AGU_uop[0U][0U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopSt[0U][1U] 
        = vlSelfRef.__PVT__AGU_uop[0U][1U];
    vlSymsp->TOP__Top__soc__core__sq.__PVT__IN_uopSt[0U][2U] 
        = vlSelfRef.__PVT__AGU_uop[0U][2U];
    vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess[0U] 
        = ((0x1ffffff8U & ((vlSelfRef.__PVT__AGU_uop
                            [0U][2U] << 0xbU) | (0x7f8U 
                                                 & (vlSelfRef.__PVT__AGU_uop
                                                    [0U][1U] 
                                                    >> 0x15U)))) 
           | (1U & vlSelfRef.__PVT__AGU_uop[0U][0U]));
    vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess[1U] 
        = ((0x1ffffff8U & ((vlSelfRef.__PVT__AGU_uop
                            [1U][2U] << 0xbU) | (0x7f8U 
                                                 & (vlSelfRef.__PVT__AGU_uop
                                                    [1U][1U] 
                                                    >> 0x15U)))) 
           | (1U & vlSelfRef.__PVT__AGU_uop[1U][0U]));
    vlSelfRef.__PVT__lb__DOT__storeHasRsv[0U] = (((
                                                   (vlSelfRef.__PVT__AGU_uop
                                                    [0U][1U] 
                                                    >> 0xaU) 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][1U] 
                                                      >> 8U)) 
                                                  & (IData)(vlSelfRef.__PVT__lb__DOT__comRsv)) 
                                                 & ((0x3fffffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__comRsv 
                                                                >> 1U))) 
                                                    == 
                                                    (0x3fffffffU 
                                                     & ((vlSelfRef.__PVT__AGU_uop
                                                         [0U][2U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.__PVT__AGU_uop
                                                           [0U][1U] 
                                                           >> 0x14U)))));
    vlSelfRef.__PVT__lb__DOT__storeHasRsv[1U] = (((
                                                   (vlSelfRef.__PVT__AGU_uop
                                                    [1U][1U] 
                                                    >> 0xaU) 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][1U] 
                                                      >> 8U)) 
                                                  & (IData)(vlSelfRef.__PVT__lb__DOT__comRsv)) 
                                                 & ((0x3fffffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__lb__DOT__comRsv 
                                                                >> 1U))) 
                                                    == 
                                                    (0x3fffffffU 
                                                     & ((vlSelfRef.__PVT__AGU_uop
                                                         [1U][2U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.__PVT__AGU_uop
                                                           [1U][1U] 
                                                           >> 0x14U)))));
    vlSelfRef.__PVT__lb__DOT__wAddrToMatch[0U] = 0U;
    if ((1U & (vlSelfRef.__PVT__AGU_uop[0U][0U] & (
                                                   vlSelfRef.__PVT__AGU_uop
                                                   [0U][1U] 
                                                   >> 0xaU)))) {
        vlSelfRef.__PVT__lb__DOT__wAddrToMatch[0U] 
            = ((vlSelfRef.__PVT__AGU_uop[0U][2U] << 0xeU) 
               | (vlSelfRef.__PVT__AGU_uop[0U][1U] 
                  >> 0x12U));
    }
    vlSelfRef.__PVT__lb__DOT__wAddrToMatch[1U] = 0U;
    if ((1U & (vlSelfRef.__PVT__AGU_uop[1U][0U] & (
                                                   vlSelfRef.__PVT__AGU_uop
                                                   [1U][1U] 
                                                   >> 0xaU)))) {
        vlSelfRef.__PVT__lb__DOT__wAddrToMatch[1U] 
            = ((vlSelfRef.__PVT__AGU_uop[1U][2U] << 0xeU) 
               | (vlSelfRef.__PVT__AGU_uop[1U][1U] 
                  >> 0x12U));
    }
    vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = 0U;
    vlSelfRef.__PVT__LB_aguUOpLd[0U][1U] = 0U;
    vlSelfRef.__PVT__LB_aguUOpLd[0U][2U] = 0U;
    vlSelfRef.__PVT__LB_aguUOpLd[0U][3U] = 0U;
    vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__LB_aguUOpLd
                                            [0U][0U]);
    vlSelfRef.__PVT__lb__DOT__nonSpeculative[0U] = 
        (vlSelfRef.__PVT__AGU_uop[0U][0U] & (0x80000000U 
                                             > ((vlSelfRef.__PVT__AGU_uop
                                                 [0U][2U] 
                                                 << 0xeU) 
                                                | (vlSelfRef.__PVT__AGU_uop
                                                   [0U][1U] 
                                                   >> 0x12U))));
    vlSelfRef.__PVT__lb__DOT__delayLoad[0U] = (1U & 
                                               (vlSelfRef.__PVT__lb__DOT__nonSpeculative
                                                [0U] 
                                                | (vlSelfRef.__PVT__AGU_uop
                                                   [0U][1U] 
                                                   >> 7U)));
    if ((((((((vlSelfRef.__PVT__AGU_uop[0U][0U] & (
                                                   vlSelfRef.__PVT__AGU_uop
                                                   [0U][1U] 
                                                   >> 9U)) 
              & VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                  (0x7fU 
                                                   & (((vlSelfRef.__PVT__AGU_uop
                                                        [1U][0U] 
                                                        << 0x15U) 
                                                       | (vlSelfRef.__PVT__AGU_uop
                                                          [1U][0U] 
                                                          >> 0xbU)) 
                                                      - 
                                                      ((vlSelfRef.__PVT__AGU_uop
                                                        [0U][0U] 
                                                        << 0x15U) 
                                                       | (vlSelfRef.__PVT__AGU_uop
                                                          [0U][0U] 
                                                          >> 0xbU))))))) 
             & vlSelfRef.__PVT__AGU_uop[1U][0U]) & 
            (vlSelfRef.__PVT__AGU_uop[1U][1U] >> 0xaU)) 
           & ((~ (vlSelfRef.__PVT__AGU_uop[1U][0U] 
                  >> 2U)) | ((0x7fU & (vlSelfRef.__PVT__AGU_uop
                                       [1U][0U] >> 0xbU)) 
                             != (0x7fU & (vlSelfRef.__PVT__AGU_uop
                                          [0U][0U] 
                                          >> 0xbU))))) 
          & ((0x3fffffffU & ((vlSelfRef.__PVT__AGU_uop
                              [0U][2U] << 0xcU) | (
                                                   vlSelfRef.__PVT__AGU_uop
                                                   [0U][1U] 
                                                   >> 0x14U))) 
             == (0x3fffffffU & ((vlSelfRef.__PVT__AGU_uop
                                 [1U][2U] << 0xcU) 
                                | (vlSelfRef.__PVT__AGU_uop
                                   [1U][1U] >> 0x14U))))) 
         & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                           [1U][1U] >> 0xbU))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__AGU_uop
                                                       [1U][1U] 
                                                       >> 0xbU))) 
                                                  & ((1U 
                                                      < 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__AGU_uop
                                                          [0U][1U] 
                                                          >> 0xbU))) 
                                                     | ((1U 
                                                         & (vlSelfRef.__PVT__AGU_uop
                                                            [0U][1U] 
                                                            >> 0x13U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelfRef.__PVT__AGU_uop
                                                            [1U][1U] 
                                                            >> 0x13U)))))) 
            | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                             [1U][1U] >> 0xbU))) & 
               ((0U < (3U & (vlSelfRef.__PVT__AGU_uop
                             [0U][1U] >> 0xbU))) | 
                ((3U & (vlSelfRef.__PVT__AGU_uop[0U][1U] 
                        >> 0x12U)) == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__delayLoad[0U] = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__lb__DOT__delayLoad
               [0U]))) {
        vlSelfRef.__PVT__LB_aguUOpLd[0U][2U] = (0x1fU 
                                                & vlSelfRef.__PVT__LB_aguUOpLd
                                                [0U][2U]);
        vlSelfRef.__PVT__LB_aguUOpLd[0U][3U] = 0U;
        vlSelfRef.__PVT__LB_aguUOpLd[0U][2U] = (0xffffffefU 
                                                & vlSelfRef.__PVT__LB_aguUOpLd
                                                [0U][2U]);
        vlSelfRef.__PVT__LB_aguUOpLd[0U][1U] = ((0xfU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][1U]) 
                                                | (0xfffffff0U 
                                                   & ((vlSelfRef.__PVT__AGU_uop
                                                       [0U][2U] 
                                                       << 0x12U) 
                                                      | (0x3fff0U 
                                                         & (vlSelfRef.__PVT__AGU_uop
                                                            [0U][1U] 
                                                            >> 0xeU)))));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][2U] = ((0xfffffff0U 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][2U]) 
                                                | (0xfU 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][2U] 
                                                      >> 0xeU)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][1U] = ((0xfffffff7U 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][1U]) 
                                                | (8U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][1U] 
                                                      >> 0xaU)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][1U] = ((0xfffffff9U 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][1U]) 
                                                | (6U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][1U] 
                                                      >> 0xaU)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = ((0xfc07ffffU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][0U]) 
                                                | (0x3f80000U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][0U] 
                                                      << 8U)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = ((0x3ffffffU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][0U]) 
                                                | (0xfc000000U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][0U] 
                                                      << 8U)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][1U] = ((0xfffffffeU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][1U]) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][0U] 
                                                      >> 0x18U)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = ((0xfff80fffU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][0U]) 
                                                | (0x7f000U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][1U] 
                                                      << 0xcU)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = ((0xfffff01fU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][0U]) 
                                                | (0xfe0U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][0U] 
                                                      >> 0x14U)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = ((0xffffffefU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][0U]) 
                                                | (0x10U 
                                                   & ((vlSelfRef.__PVT__AGU_uop
                                                       [0U][1U] 
                                                       >> 5U) 
                                                      & (vlSelfRef.__PVT__AGU_uop
                                                         [0U][1U] 
                                                         >> 6U))));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = ((0xfffffff7U 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][0U]) 
                                                | (8U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [0U][0U] 
                                                      << 1U)));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = (0xfffffffbU 
                                                & vlSelfRef.__PVT__LB_aguUOpLd
                                                [0U][0U]);
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = ((0xfffffffdU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][0U]) 
                                                | ((0x80000000U 
                                                    > 
                                                    ((vlSelfRef.__PVT__AGU_uop
                                                      [0U][2U] 
                                                      << 0xeU) 
                                                     | (vlSelfRef.__PVT__AGU_uop
                                                        [0U][1U] 
                                                        >> 0x12U))) 
                                                   << 1U));
        vlSelfRef.__PVT__LB_aguUOpLd[0U][0U] = ((0xfffffffeU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [0U][0U]) 
                                                | (1U 
                                                   & vlSelfRef.__PVT__AGU_uop
                                                   [0U][0U]));
    }
    vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = 0U;
    vlSelfRef.__PVT__LB_aguUOpLd[1U][1U] = 0U;
    vlSelfRef.__PVT__LB_aguUOpLd[1U][2U] = 0U;
    vlSelfRef.__PVT__LB_aguUOpLd[1U][3U] = 0U;
    vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = (0xfffffffeU 
                                            & vlSelfRef.__PVT__LB_aguUOpLd
                                            [1U][0U]);
    vlSelfRef.__PVT__lb__DOT__nonSpeculative[1U] = 
        (vlSelfRef.__PVT__AGU_uop[1U][0U] & (0x80000000U 
                                             > ((vlSelfRef.__PVT__AGU_uop
                                                 [1U][2U] 
                                                 << 0xeU) 
                                                | (vlSelfRef.__PVT__AGU_uop
                                                   [1U][1U] 
                                                   >> 0x12U))));
    vlSelfRef.__PVT__lb__DOT__delayLoad[1U] = (1U & 
                                               (vlSelfRef.__PVT__lb__DOT__nonSpeculative
                                                [1U] 
                                                | (vlSelfRef.__PVT__AGU_uop
                                                   [1U][1U] 
                                                   >> 7U)));
    if ((((((((vlSelfRef.__PVT__AGU_uop[1U][0U] & (
                                                   vlSelfRef.__PVT__AGU_uop
                                                   [1U][1U] 
                                                   >> 9U)) 
              & VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                  (0x7fU 
                                                   & (((vlSelfRef.__PVT__AGU_uop
                                                        [0U][0U] 
                                                        << 0x15U) 
                                                       | (vlSelfRef.__PVT__AGU_uop
                                                          [0U][0U] 
                                                          >> 0xbU)) 
                                                      - 
                                                      ((vlSelfRef.__PVT__AGU_uop
                                                        [1U][0U] 
                                                        << 0x15U) 
                                                       | (vlSelfRef.__PVT__AGU_uop
                                                          [1U][0U] 
                                                          >> 0xbU))))))) 
             & vlSelfRef.__PVT__AGU_uop[0U][0U]) & 
            (vlSelfRef.__PVT__AGU_uop[0U][1U] >> 0xaU)) 
           & ((~ (vlSelfRef.__PVT__AGU_uop[0U][0U] 
                  >> 2U)) | ((0x7fU & (vlSelfRef.__PVT__AGU_uop
                                       [0U][0U] >> 0xbU)) 
                             != (0x7fU & (vlSelfRef.__PVT__AGU_uop
                                          [1U][0U] 
                                          >> 0xbU))))) 
          & ((0x3fffffffU & ((vlSelfRef.__PVT__AGU_uop
                              [1U][2U] << 0xcU) | (
                                                   vlSelfRef.__PVT__AGU_uop
                                                   [1U][1U] 
                                                   >> 0x14U))) 
             == (0x3fffffffU & ((vlSelfRef.__PVT__AGU_uop
                                 [0U][2U] << 0xcU) 
                                | (vlSelfRef.__PVT__AGU_uop
                                   [0U][1U] >> 0x14U))))) 
         & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                           [0U][1U] >> 0xbU))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__PVT__AGU_uop
                                                       [0U][1U] 
                                                       >> 0xbU))) 
                                                  & ((1U 
                                                      < 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__AGU_uop
                                                          [1U][1U] 
                                                          >> 0xbU))) 
                                                     | ((1U 
                                                         & (vlSelfRef.__PVT__AGU_uop
                                                            [1U][1U] 
                                                            >> 0x13U)) 
                                                        == 
                                                        (1U 
                                                         & (vlSelfRef.__PVT__AGU_uop
                                                            [0U][1U] 
                                                            >> 0x13U)))))) 
            | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                             [0U][1U] >> 0xbU))) & 
               ((0U < (3U & (vlSelfRef.__PVT__AGU_uop
                             [1U][1U] >> 0xbU))) | 
                ((3U & (vlSelfRef.__PVT__AGU_uop[1U][1U] 
                        >> 0x12U)) == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [0U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__delayLoad[1U] = 1U;
    }
    if ((1U & (~ vlSelfRef.__PVT__lb__DOT__delayLoad
               [1U]))) {
        vlSelfRef.__PVT__LB_aguUOpLd[1U][2U] = (0x1fU 
                                                & vlSelfRef.__PVT__LB_aguUOpLd
                                                [1U][2U]);
        vlSelfRef.__PVT__LB_aguUOpLd[1U][3U] = 0U;
        vlSelfRef.__PVT__LB_aguUOpLd[1U][2U] = (0xffffffefU 
                                                & vlSelfRef.__PVT__LB_aguUOpLd
                                                [1U][2U]);
        vlSelfRef.__PVT__LB_aguUOpLd[1U][1U] = ((0xfU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][1U]) 
                                                | (0xfffffff0U 
                                                   & ((vlSelfRef.__PVT__AGU_uop
                                                       [1U][2U] 
                                                       << 0x12U) 
                                                      | (0x3fff0U 
                                                         & (vlSelfRef.__PVT__AGU_uop
                                                            [1U][1U] 
                                                            >> 0xeU)))));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][2U] = ((0xfffffff0U 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][2U]) 
                                                | (0xfU 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][2U] 
                                                      >> 0xeU)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][1U] = ((0xfffffff7U 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][1U]) 
                                                | (8U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][1U] 
                                                      >> 0xaU)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][1U] = ((0xfffffff9U 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][1U]) 
                                                | (6U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][1U] 
                                                      >> 0xaU)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = ((0xfc07ffffU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][0U]) 
                                                | (0x3f80000U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][0U] 
                                                      << 8U)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = ((0x3ffffffU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][0U]) 
                                                | (0xfc000000U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][0U] 
                                                      << 8U)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][1U] = ((0xfffffffeU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][1U]) 
                                                | (1U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][0U] 
                                                      >> 0x18U)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = ((0xfff80fffU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][0U]) 
                                                | (0x7f000U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][1U] 
                                                      << 0xcU)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = ((0xfffff01fU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][0U]) 
                                                | (0xfe0U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][0U] 
                                                      >> 0x14U)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = ((0xffffffefU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][0U]) 
                                                | (0x10U 
                                                   & ((vlSelfRef.__PVT__AGU_uop
                                                       [1U][1U] 
                                                       >> 5U) 
                                                      & (vlSelfRef.__PVT__AGU_uop
                                                         [1U][1U] 
                                                         >> 6U))));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = ((0xfffffff7U 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][0U]) 
                                                | (8U 
                                                   & (vlSelfRef.__PVT__AGU_uop
                                                      [1U][0U] 
                                                      << 1U)));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = (0xfffffffbU 
                                                & vlSelfRef.__PVT__LB_aguUOpLd
                                                [1U][0U]);
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = ((0xfffffffdU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][0U]) 
                                                | ((0x80000000U 
                                                    > 
                                                    ((vlSelfRef.__PVT__AGU_uop
                                                      [1U][2U] 
                                                      << 0xeU) 
                                                     | (vlSelfRef.__PVT__AGU_uop
                                                        [1U][1U] 
                                                        >> 0x12U))) 
                                                   << 1U));
        vlSelfRef.__PVT__LB_aguUOpLd[1U][0U] = ((0xfffffffeU 
                                                 & vlSelfRef.__PVT__LB_aguUOpLd
                                                 [1U][0U]) 
                                                | (1U 
                                                   & vlSelfRef.__PVT__AGU_uop
                                                   [1U][0U]));
    }
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__we = 1U;
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr = 0U;
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata = 0U;
    vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask = 0U;
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[3U][0U])) {
        if ((0x20U & vlSelfRef.__PVT__sqb__DOT__evicted
             [3U][0U])) {
            __PVT__sqb__DOT__mgmtOpInEv = 1U;
        }
    }
    if (vlSelfRef.lsu__DOT____VdfgExtracted_ha53847fe__0) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__we = 0U;
    }
    if ((1U & vlSelfRef.__PVT__sqb__DOT__evicted[3U][0U])) {
        if ((0x80000000U > (0xfffffffcU & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                            [3U][1U] 
                                            << 0xcU) 
                                           | (0xffcU 
                                              & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                 [3U][0U] 
                                                 >> 0x14U)))))) {
            __PVT__sqb__DOT__mmioOpInEv = 1U;
        }
    }
    if (vlSelfRef.lsu__DOT____VdfgExtracted_ha53847fe__0) {
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__waddr 
            = ((vlSelfRef.__PVT__SQB_uop[5U] << 8U) 
               | (vlSelfRef.__PVT__SQB_uop[4U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wdata 
            = ((vlSelfRef.__PVT__SQB_uop[1U] << 8U) 
               | (vlSelfRef.__PVT__SQB_uop[0U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_mmio.__PVT__wmask 
            = (0xfU & (vlSelfRef.__PVT__SQB_uop[0U] 
                       >> 8U));
        vlSelfRef.__PVT__lsu__DOT__isCacheBypassStUOp 
            = ((0x10000000U <= ((vlSelfRef.__PVT__SQB_uop[5U] 
                                 << 8U) | (vlSelfRef.__PVT__SQB_uop[4U] 
                                           >> 0x18U))) 
               & (0x11000000U > ((vlSelfRef.__PVT__SQB_uop[5U] 
                                  << 8U) | (vlSelfRef.__PVT__SQB_uop[4U] 
                                            >> 0x18U))));
    } else {
        vlSelfRef.__PVT__lsu__DOT__isCacheBypassStUOp = 0U;
    }
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c)));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c) 
                    >> 1U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c) 
                    >> 2U)));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c) 
                    >> 3U)));
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[3U] 
        = vlSelfRef.comUOps[3U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[2U] 
        = vlSelfRef.comUOps[2U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[1U] 
        = vlSelfRef.comUOps[1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_comUOp[0U] 
        = vlSelfRef.comUOps[0U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c) 
                    >> 7U)));
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
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp = 0ULL;
    if ((1U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[0U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[0U]))));
    }
    if ((0x100000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[1U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[3U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[2U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[1U])) 
                                                      >> 0x14U))));
    }
    if ((0x10000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[6U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[8U])) 
                                      << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[7U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[6U])) 
                                                      >> 0x10U))));
    }
    if ((0x100U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[0x10U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[0x11U])) 
                                      << 0x18U) | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[0x10U])) 
                                                   >> 8U)));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp = 0ULL;
    if ((1U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[0U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[0U]))));
    }
    if ((0x100U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[3U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[4U])) 
                                      << 0x18U) | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[3U])) 
                                                   >> 8U)));
    }
    if ((0x10000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[6U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[8U])) 
                                      << 0x30U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[7U])) 
                                                    << 0x10U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[6U])) 
                                                      >> 0x10U))));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp = 0ULL;
    if ((1U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0U]))));
    }
    if ((0x100000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[1U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[3U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[2U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[1U])) 
                                                      >> 0x14U))));
    }
    if ((0x10U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[8U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[9U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[8U])) 
                                                   >> 4U)));
    }
    if ((0x100U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x10U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x11U])) 
                                      << 0x18U) | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x10U])) 
                                                   >> 8U)));
    }
    if ((0x10000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x11U])) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
            = (0xfffffffffffffULL & (((QData)((IData)(
                                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x13U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x12U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0x11U])) 
                                                      >> 0x1cU))));
    }
    stDataLd__DOT____Vlvbound_h0bf8c5ab__0 = (0x3fU 
                                              & (vlSelfRef.__PVT__stLookupUOp
                                                 [0U] 
                                                 >> 8U));
    vlSelfRef.__Vcellout__stDataLd__OUT_readReq = (
                                                   (0x3f81U 
                                                    & (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                                                   | ((IData)(stDataLd__DOT____Vlvbound_h0bf8c5ab__0) 
                                                      << 1U));
    stDataLd__DOT____Vlvbound_h989db67a__0 = (1U & 
                                              (vlSelfRef.__PVT__stLookupUOp
                                               [0U] 
                                               & (~ 
                                                  (vlSelfRef.__PVT__stLookupUOp
                                                   [0U] 
                                                   >> 0xeU))));
    vlSelfRef.__Vcellout__stDataLd__OUT_readReq = (
                                                   (0x3ffeU 
                                                    & (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                                                   | (IData)(stDataLd__DOT____Vlvbound_h989db67a__0));
    stDataLd__DOT____Vlvbound_h0bf8c5ab__0 = (0x3fU 
                                              & (vlSelfRef.__PVT__stLookupUOp
                                                 [1U] 
                                                 >> 8U));
    vlSelfRef.__Vcellout__stDataLd__OUT_readReq = (
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                                                   | ((IData)(stDataLd__DOT____Vlvbound_h0bf8c5ab__0) 
                                                      << 8U));
    stDataLd__DOT____Vlvbound_h989db67a__0 = (1U & 
                                              (vlSelfRef.__PVT__stLookupUOp
                                               [1U] 
                                               & (~ 
                                                  (vlSelfRef.__PVT__stLookupUOp
                                                   [1U] 
                                                   >> 0xeU))));
    vlSelfRef.__Vcellout__stDataLd__OUT_readReq = (
                                                   (0x3f7fU 
                                                    & (IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq)) 
                                                   | ((IData)(stDataLd__DOT____Vlvbound_h989db67a__0) 
                                                      << 7U));
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
    vlSelfRef.stall[3U] = (0U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free));
    vlSelfRef.stall[4U] = (0U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free));
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
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 1U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 2U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 3U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 4U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 5U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 6U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 7U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[8U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 8U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[9U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 9U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xaU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0xaU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xbU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0xbU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xcU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0xcU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xdU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0xdU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xeU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0xeU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xfU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0xfU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x10U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x10U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x11U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x11U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x12U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x12U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x13U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x13U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x14U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x14U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x15U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x15U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x16U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x16U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x17U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x17U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x18U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x18U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x19U] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x19U)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x1aU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x1bU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x1cU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x1dU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x1eU)));
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] = 1U;
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = (1U & (~ (vlSelfRef.__PVT__lb__DOT__hasRsvOrInvalid 
                    >> 0x1fU)));
    vlSelfRef.__PVT__lsu__DOT__stFwd[0U] = vlSelfRef.__PVT__SQB_fwd
        [0U];
    vlSelfRef.__PVT__lsu__DOT__stFwd[0U] = ((0x3fffffffc3ULL 
                                             & vlSelfRef.__PVT__lsu__DOT__stFwd
                                             [0U]) 
                                            | ((QData)((IData)(
                                                               (0xfU 
                                                                & ((IData)(
                                                                           (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                                            [0U] 
                                                                            >> 2U)) 
                                                                   | (IData)(
                                                                             (vlSelfRef.__PVT__SQ_fwd
                                                                              [0U] 
                                                                              >> 2U)))))) 
                                               << 2U));
    vlSelfRef.__PVT__lsu__DOT__stFwd[0U] = ((0x3ffffffffdULL 
                                             & vlSelfRef.__PVT__lsu__DOT__stFwd
                                             [0U]) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                                            [0U] 
                                                                            >> 1U)) 
                                                                   | (IData)(
                                                                             (vlSelfRef.__PVT__SQ_fwd
                                                                              [0U] 
                                                                              >> 1U)))))) 
                                               << 1U));
    if ((1U & (IData)((vlSelfRef.__PVT__SQ_fwd[0U] 
                       >> 2U)))) {
        vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0 
            = (0xffU & (IData)((vlSelfRef.__PVT__SQ_fwd
                                [0U] >> 6U)));
        vlSelfRef.__PVT__lsu__DOT__stFwd[0U] = ((0x3fffffc03fULL 
                                                 & vlSelfRef.__PVT__lsu__DOT__stFwd
                                                 [0U]) 
                                                | ((QData)((IData)(vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0)) 
                                                   << 6U));
    }
    if ((1U & (IData)((vlSelfRef.__PVT__SQ_fwd[0U] 
                       >> 3U)))) {
        vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0 
            = (0xffU & (IData)((vlSelfRef.__PVT__SQ_fwd
                                [0U] >> 0xeU)));
        vlSelfRef.__PVT__lsu__DOT__stFwd[0U] = ((0x3fffc03fffULL 
                                                 & vlSelfRef.__PVT__lsu__DOT__stFwd
                                                 [0U]) 
                                                | ((QData)((IData)(vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0)) 
                                                   << 0xeU));
    }
    if ((1U & (IData)((vlSelfRef.__PVT__SQ_fwd[0U] 
                       >> 4U)))) {
        vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0 
            = (0xffU & (IData)((vlSelfRef.__PVT__SQ_fwd
                                [0U] >> 0x16U)));
        vlSelfRef.__PVT__lsu__DOT__stFwd[0U] = ((0x3fc03fffffULL 
                                                 & vlSelfRef.__PVT__lsu__DOT__stFwd
                                                 [0U]) 
                                                | ((QData)((IData)(vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0)) 
                                                   << 0x16U));
    }
    if ((1U & (IData)((vlSelfRef.__PVT__SQ_fwd[0U] 
                       >> 5U)))) {
        vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0 
            = (0xffU & (IData)((vlSelfRef.__PVT__SQ_fwd
                                [0U] >> 0x1eU)));
        vlSelfRef.__PVT__lsu__DOT__stFwd[0U] = ((0x3fffffffULL 
                                                 & vlSelfRef.__PVT__lsu__DOT__stFwd
                                                 [0U]) 
                                                | ((QData)((IData)(vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0)) 
                                                   << 0x1eU));
    }
    vlSelfRef.__PVT__lsu__DOT__stFwd[1U] = vlSelfRef.__PVT__SQB_fwd
        [1U];
    vlSelfRef.__PVT__lsu__DOT__stFwd[1U] = ((0x3fffffffc3ULL 
                                             & vlSelfRef.__PVT__lsu__DOT__stFwd
                                             [1U]) 
                                            | ((QData)((IData)(
                                                               (0xfU 
                                                                & ((IData)(
                                                                           (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                                            [1U] 
                                                                            >> 2U)) 
                                                                   | (IData)(
                                                                             (vlSelfRef.__PVT__SQ_fwd
                                                                              [1U] 
                                                                              >> 2U)))))) 
                                               << 2U));
    vlSelfRef.__PVT__lsu__DOT__stFwd[1U] = ((0x3ffffffffdULL 
                                             & vlSelfRef.__PVT__lsu__DOT__stFwd
                                             [1U]) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                                            [1U] 
                                                                            >> 1U)) 
                                                                   | (IData)(
                                                                             (vlSelfRef.__PVT__SQ_fwd
                                                                              [1U] 
                                                                              >> 1U)))))) 
                                               << 1U));
    if ((1U & (IData)((vlSelfRef.__PVT__SQ_fwd[1U] 
                       >> 2U)))) {
        vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0 
            = (0xffU & (IData)((vlSelfRef.__PVT__SQ_fwd
                                [1U] >> 6U)));
        vlSelfRef.__PVT__lsu__DOT__stFwd[1U] = ((0x3fffffc03fULL 
                                                 & vlSelfRef.__PVT__lsu__DOT__stFwd
                                                 [1U]) 
                                                | ((QData)((IData)(vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0)) 
                                                   << 6U));
    }
    if ((1U & (IData)((vlSelfRef.__PVT__SQ_fwd[1U] 
                       >> 3U)))) {
        vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0 
            = (0xffU & (IData)((vlSelfRef.__PVT__SQ_fwd
                                [1U] >> 0xeU)));
        vlSelfRef.__PVT__lsu__DOT__stFwd[1U] = ((0x3fffc03fffULL 
                                                 & vlSelfRef.__PVT__lsu__DOT__stFwd
                                                 [1U]) 
                                                | ((QData)((IData)(vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0)) 
                                                   << 0xeU));
    }
    if ((1U & (IData)((vlSelfRef.__PVT__SQ_fwd[1U] 
                       >> 4U)))) {
        vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0 
            = (0xffU & (IData)((vlSelfRef.__PVT__SQ_fwd
                                [1U] >> 0x16U)));
        vlSelfRef.__PVT__lsu__DOT__stFwd[1U] = ((0x3fc03fffffULL 
                                                 & vlSelfRef.__PVT__lsu__DOT__stFwd
                                                 [1U]) 
                                                | ((QData)((IData)(vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0)) 
                                                   << 0x16U));
    }
    if ((1U & (IData)((vlSelfRef.__PVT__SQ_fwd[1U] 
                       >> 5U)))) {
        vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0 
            = (0xffU & (IData)((vlSelfRef.__PVT__SQ_fwd
                                [1U] >> 0x1eU)));
        vlSelfRef.__PVT__lsu__DOT__stFwd[1U] = ((0x3fffffffULL 
                                                 & vlSelfRef.__PVT__lsu__DOT__stFwd
                                                 [1U]) 
                                                | ((QData)((IData)(vlSelfRef.lsu__DOT____Vlvbound_h39f7a0f7__0)) 
                                                   << 0x1eU));
    }
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady) 
                    >> 1U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady) 
                    >> 2U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady) 
                    >> 3U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady) 
                    >> 1U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady) 
                    >> 2U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady) 
                    >> 3U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree) 
                    >> 1U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree) 
                    >> 2U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree) 
                    >> 3U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree) 
                    >> 1U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree) 
                    >> 2U)));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree) 
                    >> 3U)));
    __Vfunc_stDataLd__DOT__ShiftData__0__offs = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__offs;
    __Vfunc_stDataLd__DOT__ShiftData__0__raw = vlSelfRef.__Vcellout__rfMux__OUT_readData[8U];
    __Vfunc_stDataLd__DOT__ShiftData__0__shifted = 0U;
    if ((0U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__0__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__0__shifted 
            = __Vfunc_stDataLd__DOT__ShiftData__0__raw;
    } else if ((1U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__0__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__0__shifted 
            = ((0xffff00ffU & __Vfunc_stDataLd__DOT__ShiftData__0__shifted) 
               | (0xff00U & (__Vfunc_stDataLd__DOT__ShiftData__0__raw 
                             << 8U)));
    } else if ((2U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__0__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__0__shifted 
            = ((0xffffU & __Vfunc_stDataLd__DOT__ShiftData__0__shifted) 
               | (__Vfunc_stDataLd__DOT__ShiftData__0__raw 
                  << 0x10U));
    } else if ((3U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__0__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__0__shifted 
            = ((0xffffffU & __Vfunc_stDataLd__DOT__ShiftData__0__shifted) 
               | (__Vfunc_stDataLd__DOT__ShiftData__0__raw 
                  << 0x18U));
    }
    __Vfunc_stDataLd__DOT__ShiftData__0__Vfuncout = __Vfunc_stDataLd__DOT__ShiftData__0__shifted;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__readDataShifted 
        = __Vfunc_stDataLd__DOT__ShiftData__0__Vfuncout;
    __Vfunc_stDataLd__DOT__ShiftData__2__offs = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__offs;
    __Vfunc_stDataLd__DOT__ShiftData__2__raw = vlSelfRef.__Vcellout__rfMux__OUT_readData[9U];
    __Vfunc_stDataLd__DOT__ShiftData__2__shifted = 0U;
    if ((0U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__2__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__2__shifted 
            = __Vfunc_stDataLd__DOT__ShiftData__2__raw;
    } else if ((1U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__2__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__2__shifted 
            = ((0xffff00ffU & __Vfunc_stDataLd__DOT__ShiftData__2__shifted) 
               | (0xff00U & (__Vfunc_stDataLd__DOT__ShiftData__2__raw 
                             << 8U)));
    } else if ((2U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__2__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__2__shifted 
            = ((0xffffU & __Vfunc_stDataLd__DOT__ShiftData__2__shifted) 
               | (__Vfunc_stDataLd__DOT__ShiftData__2__raw 
                  << 0x10U));
    } else if ((3U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__2__offs))) {
        __Vfunc_stDataLd__DOT__ShiftData__2__shifted 
            = ((0xffffffU & __Vfunc_stDataLd__DOT__ShiftData__2__shifted) 
               | (__Vfunc_stDataLd__DOT__ShiftData__2__raw 
                  << 0x18U));
    }
    __Vfunc_stDataLd__DOT__ShiftData__2__Vfuncout = __Vfunc_stDataLd__DOT__ShiftData__2__shifted;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__readDataShifted 
        = __Vfunc_stDataLd__DOT__ShiftData__2__Vfuncout;
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doExtract 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__fullCond)) 
               & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__equal))) 
           & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outputReady));
    vlSelfRef.__PVT__lb__DOT__isBefore[0U] = vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range;
    vlSelfRef.__PVT__lb__DOT__isBefore[1U] = vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO 
        = ((0xffffffff00ULL & vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO) 
           | (IData)((IData)(((0xfeU & ((IData)((vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                                 [0U] 
                                                 >> 8U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                                             [0U]))))));
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO 
        = ((0xffULL & vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO) 
           | ((QData)((IData)((IData)((vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                       [0U] >> 0xfU)))) 
              << 8U));
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO 
        = ((0xffffffff00ULL & vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO) 
           | (IData)((IData)(((0xfeU & ((IData)((vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                                 [1U] 
                                                 >> 8U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                                             [1U]))))));
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO 
        = ((0xffULL & vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO) 
           | ((QData)((IData)((IData)((vlSelfRef.__Vcellinp__stDataLd__IN_atomicUOp
                                       [1U] >> 0xfU)))) 
              << 8U));
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_btUpdates[1U][0U] 
        = vlSelfRef.__Vcellinp__ifetch__IN_btUpdates
        [1U][0U];
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_btUpdates[1U][1U] 
        = vlSelfRef.__Vcellinp__ifetch__IN_btUpdates
        [1U][1U];
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_btUpdates[1U][2U] 
        = vlSelfRef.__Vcellinp__ifetch__IN_btUpdates
        [1U][2U];
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_btUpdates[0U][0U] 
        = vlSelfRef.__Vcellinp__ifetch__IN_btUpdates
        [0U][0U];
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_btUpdates[0U][1U] 
        = vlSelfRef.__Vcellinp__ifetch__IN_btUpdates
        [0U][1U];
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_btUpdates[0U][2U] 
        = vlSelfRef.__Vcellinp__ifetch__IN_btUpdates
        [0U][2U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 0U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[0U] = 0U;
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff 
        = (0x3ffffffU & ((vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                          [0U] >> 3U) - (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                 [0U] 
                                                 >> 3U))));
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod 
        = (0x3ffffffU & VL_MODDIV_III(32, (0x3ffffffU 
                                           & (vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                              [0U] 
                                              >> 3U)), 
                                      ((1U & VL_REDXOR_32(
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                      [0U] 
                                                                      >> 0x1dU)))))
                                        ? 1U : 2U)));
    if ((((0U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff) 
          & (4U > __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
         & (0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[0U] 
            = (1U | ((((2U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)
                        ? 3U : (3U & __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
                      << 0x1dU) | (0x1ffffff8U & vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                   [0U])));
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    } else if ((0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) {
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    }
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff 
        = (0x3ffffffU & ((vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                          [0U] >> 3U) - (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                 [1U] 
                                                 >> 3U))));
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod 
        = (0x3ffffffU & VL_MODDIV_III(32, (0x3ffffffU 
                                           & (vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                              [0U] 
                                              >> 3U)), 
                                      ((1U & VL_REDXOR_32(
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                      [1U] 
                                                                      >> 0x1dU)))))
                                        ? 1U : 2U)));
    if (((((0U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff) 
           & (4U > __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
          & (0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod)) 
         & (~ (IData)(__PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill)))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[0U] 
            = (3U | ((((2U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)
                        ? 3U : (3U & __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
                      << 0x1dU) | (0x1ffffff8U & vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                   [0U])));
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    } else if ((0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) {
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    }
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff 
        = (0x3ffffffU & ((vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                          [0U] >> 3U) - (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                 [2U] 
                                                 >> 3U))));
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod 
        = (0x3ffffffU & VL_MODDIV_III(32, (0x3ffffffU 
                                           & (vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                              [0U] 
                                              >> 3U)), 
                                      ((1U & VL_REDXOR_32(
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                      [2U] 
                                                                      >> 0x1dU)))))
                                        ? 1U : 2U)));
    if (((((0U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff) 
           & (4U > __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
          & (0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod)) 
         & (~ (IData)(__PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill)))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[0U] 
            = (5U | ((((2U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)
                        ? 3U : (3U & __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
                      << 0x1dU) | (0x1ffffff8U & vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                   [0U])));
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    } else if ((0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) {
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    }
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff 
        = (0x3ffffffU & ((vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                          [0U] >> 3U) - (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                 [3U] 
                                                 >> 3U))));
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod 
        = (0x3ffffffU & VL_MODDIV_III(32, (0x3ffffffU 
                                           & (vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                              [0U] 
                                              >> 3U)), 
                                      ((1U & VL_REDXOR_32(
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                      [3U] 
                                                                      >> 0x1dU)))))
                                        ? 1U : 2U)));
    if (((((0U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff) 
           & (4U > __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
          & (0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod)) 
         & (~ (IData)(__PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill)))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[0U] 
            = (7U | ((((2U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)
                        ? 3U : (3U & __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
                      << 0x1dU) | (0x1ffffff8U & vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                   [0U])));
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    } else if ((0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) {
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    }
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 0U;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[1U] = 0U;
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff 
        = (0x3ffffffU & ((vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                          [1U] >> 3U) - (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                 [0U] 
                                                 >> 3U))));
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod 
        = (0x3ffffffU & VL_MODDIV_III(32, (0x3ffffffU 
                                           & (vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                              [1U] 
                                              >> 3U)), 
                                      ((1U & VL_REDXOR_32(
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                      [0U] 
                                                                      >> 0x1dU)))))
                                        ? 1U : 2U)));
    if ((((0U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff) 
          & (4U > __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
         & (0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[1U] 
            = (1U | ((((2U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)
                        ? 3U : (3U & __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
                      << 0x1dU) | (0x1ffffff8U & vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                   [1U])));
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    } else if ((0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) {
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    }
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff 
        = (0x3ffffffU & ((vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                          [1U] >> 3U) - (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                 [1U] 
                                                 >> 3U))));
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod 
        = (0x3ffffffU & VL_MODDIV_III(32, (0x3ffffffU 
                                           & (vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                              [1U] 
                                              >> 3U)), 
                                      ((1U & VL_REDXOR_32(
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                      [1U] 
                                                                      >> 0x1dU)))))
                                        ? 1U : 2U)));
    if (((((0U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff) 
           & (4U > __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
          & (0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod)) 
         & (~ (IData)(__PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill)))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[1U] 
            = (3U | ((((2U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)
                        ? 3U : (3U & __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
                      << 0x1dU) | (0x1ffffff8U & vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                   [1U])));
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    } else if ((0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) {
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    }
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff 
        = (0x3ffffffU & ((vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                          [1U] >> 3U) - (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                 [2U] 
                                                 >> 3U))));
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod 
        = (0x3ffffffU & VL_MODDIV_III(32, (0x3ffffffU 
                                           & (vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                              [1U] 
                                              >> 3U)), 
                                      ((1U & VL_REDXOR_32(
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                      [2U] 
                                                                      >> 0x1dU)))))
                                        ? 1U : 2U)));
    if (((((0U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff) 
           & (4U > __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
          & (0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod)) 
         & (~ (IData)(__PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill)))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[1U] 
            = (5U | ((((2U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)
                        ? 3U : (3U & __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
                      << 0x1dU) | (0x1ffffff8U & vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                   [1U])));
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    } else if ((0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) {
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    }
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff 
        = (0x3ffffffU & ((vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                          [1U] >> 3U) - (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                 [3U] 
                                                 >> 3U))));
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod 
        = (0x3ffffffU & VL_MODDIV_III(32, (0x3ffffffU 
                                           & (vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                              [1U] 
                                              >> 3U)), 
                                      ((1U & VL_REDXOR_32(
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                                      [3U] 
                                                                      >> 0x1dU)))))
                                        ? 1U : 2U)));
    if (((((0U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff) 
           & (4U > __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
          & (0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod)) 
         & (~ (IData)(__PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill)))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[1U] 
            = (7U | ((((2U < __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)
                        ? 3U : (3U & __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) 
                      << 0x1dU) | (0x1ffffff8U & vlSelfRef.__PVT__dataPrefetch__DOT__prefetchAccess
                                   [1U])));
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    } else if ((0U == __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff)) {
        __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 1U;
    }
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xfffeU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | (((IData)(
                                                            vlSelfRef.__PVT__lb__DOT__entries
                                                            [0U]) 
                                                    & ((0x3ffffffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0U] 
                                                                   >> 0xdU))) 
                                                       == 
                                                       (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                        [0U] 
                                                        >> 6U))) 
                                                   & ((0xfU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__lb__DOT__entries
                                                                  [0U] 
                                                                  >> 9U))) 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                          [0U] 
                                                          >> 2U)))));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xfffdU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [1U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [1U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [1U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 1U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xfffbU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [2U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [2U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [2U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 2U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xfff7U 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [3U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [3U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [3U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 3U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xffefU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [4U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [4U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [4U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 4U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xffdfU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [5U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [5U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [5U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 5U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xffbfU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [6U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [6U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [6U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 6U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xff7fU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [7U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [7U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [7U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 7U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xfeffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [8U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [8U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [8U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 8U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xfdffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [9U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [9U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [9U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 9U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xfbffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xaU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xaU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xaU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 0xaU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xf7ffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xbU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xbU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xbU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 0xbU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xefffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xcU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xcU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xcU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 0xcU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xdfffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xdU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xdU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xdU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 0xdU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0xbfffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xeU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xeU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xeU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 0xeU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] = ((0x7fffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [0U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xfU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xfU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [0U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xfU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [0U] 
                                                           >> 2U)))) 
                                                   << 0xfU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xfffeU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | (((IData)(
                                                            vlSelfRef.__PVT__lb__DOT__entries
                                                            [0U]) 
                                                    & ((0x3ffffffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0U] 
                                                                   >> 0xdU))) 
                                                       == 
                                                       (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                        [1U] 
                                                        >> 6U))) 
                                                   & ((0xfU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__lb__DOT__entries
                                                                  [0U] 
                                                                  >> 9U))) 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                          [1U] 
                                                          >> 2U)))));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xfffdU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [1U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [1U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [1U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 1U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xfffbU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [2U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [2U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [2U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 2U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xfff7U 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [3U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [3U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [3U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 3U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xffefU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [4U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [4U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [4U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 4U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xffdfU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [5U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [5U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [5U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 5U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xffbfU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [6U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [6U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [6U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 6U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xff7fU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [7U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [7U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [7U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 7U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xfeffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [8U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [8U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [8U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 8U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xfdffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [9U]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [9U] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [9U] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 9U));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xfbffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xaU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xaU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xaU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 0xaU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xf7ffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xbU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xbU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xbU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 0xbU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xefffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xcU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xcU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xcU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 0xcU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xdfffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xdU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xdU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xdU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 0xdU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0xbfffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xeU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xeU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xeU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 0xeU));
    vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] = ((0x7fffU 
                                                 & vlSelfRef.__PVT__lb__DOT__wAddrMatch
                                                 [1U]) 
                                                | ((((IData)(
                                                             vlSelfRef.__PVT__lb__DOT__entries
                                                             [0xfU]) 
                                                     & ((0x3ffffffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0xfU] 
                                                                    >> 0xdU))) 
                                                        == 
                                                        (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                         [1U] 
                                                         >> 6U))) 
                                                    & ((0xfU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__lb__DOT__entries
                                                                   [0xfU] 
                                                                   >> 9U))) 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lb__DOT__wAddrToMatch
                                                           [1U] 
                                                           >> 2U)))) 
                                                   << 0xfU));
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
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
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
            __Vtemp_29[0U] = ((vlSelfRef.__PVT__SQ_uops
                               [0U][2U] << 0x1aU) | 
                              (vlSelfRef.__PVT__SQ_uops
                               [0U][1U] >> 6U));
            __Vtemp_29[1U] = 0U;
            __Vtemp_29[2U] = 0U;
            __Vtemp_29[3U] = 0U;
            VL_SHIFTL_WWI(128,128,32, __Vtemp_30, __Vtemp_29, 
                          VL_SHIFTL_III(32,32,32, (3U 
                                                   & (vlSelfRef.__PVT__SQ_uops
                                                      [0U][0U] 
                                                      >> 8U)), 5U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U] 
                = ((0xfffffU & vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[1U]) 
                   | (__Vtemp_30[0U] << 0x14U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[2U] 
                = ((__Vtemp_30[0U] >> 0xcU) | (__Vtemp_30[1U] 
                                               << 0x14U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[3U] 
                = ((__Vtemp_30[1U] >> 0xcU) | (__Vtemp_30[2U] 
                                               << 0x14U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[4U] 
                = ((__Vtemp_30[2U] >> 0xcU) | (__Vtemp_30[3U] 
                                               << 0x14U));
            vlSelfRef.__PVT__sqb__DOT__fusedUOp_c[5U] 
                = (__Vtemp_30[3U] >> 0xcU);
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
    vlSelfRef.__PVT__STORE_busy = (1U & ((~ (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_empty)) 
                                         | (IData)(vlSelfRef.__PVT__SQB_busy)));
    intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 
        = (((QData)((IData)((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
                             >> 0x14U))) << 9U) | (QData)((IData)(
                                                                  ((0x1fcU 
                                                                    & ((IData)(
                                                                               (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
                                                                                >> 0xdU)) 
                                                                       << 2U)) 
                                                                   | (3U 
                                                                      & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp))))));
    vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__wbUOpSplit____pinNumber3 
        = intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 
        = ((0xfe000U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
                                 >> 0xdU)) << 0xdU)) 
           | ((0x1fc0U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
                                   >> 6U)) << 6U)) 
              | ((0x3cU & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
                                    >> 2U)) << 2U)) 
                 | ((2U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp 
                                    >> 1U)) << 1U)) 
                    | (IData)((1ULL == (3ULL & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp)))))));
    vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__wbUOpSplit____pinNumber2 
        = intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 
        = (((QData)((IData)((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
                             >> 0x14U))) << 9U) | (QData)((IData)(
                                                                  ((0x1fcU 
                                                                    & ((IData)(
                                                                               (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
                                                                                >> 0xdU)) 
                                                                       << 2U)) 
                                                                   | (3U 
                                                                      & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp))))));
    vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__wbUOpSplit____pinNumber3 
        = intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 
        = ((0xfe000U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
                                 >> 0xdU)) << 0xdU)) 
           | ((0x1fc0U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
                                   >> 6U)) << 6U)) 
              | ((0x3cU & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
                                    >> 2U)) << 2U)) 
                 | ((2U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp 
                                    >> 1U)) << 1U)) 
                    | (IData)((1ULL == (3ULL & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp)))))));
    vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__wbUOpSplit____pinNumber2 
        = intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 
        = (((QData)((IData)((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
                             >> 0x14U))) << 9U) | (QData)((IData)(
                                                                  ((0x1fcU 
                                                                    & ((IData)(
                                                                               (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
                                                                                >> 0xdU)) 
                                                                       << 2U)) 
                                                                   | (3U 
                                                                      & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp))))));
    vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__wbUOpSplit____pinNumber3 
        = intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 
        = ((0xfe000U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
                                 >> 0xdU)) << 0xdU)) 
           | ((0x1fc0U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
                                   >> 6U)) << 6U)) 
              | ((0x3cU & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
                                    >> 2U)) << 2U)) 
                 | ((2U & ((IData)((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp 
                                    >> 1U)) << 1U)) 
                    | (IData)((1ULL == (3ULL & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp)))))));
    vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__wbUOpSplit____pinNumber2 
        = intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_pcRead[1U] 
        = vlSelfRef.__PVT__PC_readReq[1U];
    vlSymsp->TOP__Top__soc__core__ifetch.__PVT__IN_pcRead[0U] 
        = vlSelfRef.__PVT__PC_readReq[0U];
    vlSelfRef.__Vcellinp__rfMux__IN_read[0U] = (IData)(vlSelfRef.__Vcellout__ld__OUT_rfReadReq);
    vlSelfRef.__Vcellinp__rfMux__IN_read[1U] = (((IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq) 
                                                 << 0x18U) 
                                                | (IData)(
                                                          (vlSelfRef.__Vcellout__ld__OUT_rfReadReq 
                                                           >> 0x20U)));
    vlSelfRef.__Vcellinp__rfMux__IN_read[2U] = ((IData)(vlSelfRef.__Vcellout__stDataLd__OUT_readReq) 
                                                >> 8U);
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
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [9U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [8U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0xbU];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0xaU];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0xdU];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0xcU];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0xfU];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0xeU];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0x11U];
    vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0x10U];
}
