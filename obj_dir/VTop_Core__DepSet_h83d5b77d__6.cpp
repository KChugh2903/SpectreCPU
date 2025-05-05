// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__4(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 = 0;
    IData/*19:0*/ intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 = 0;
    CData/*0:0*/ __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__Vfuncout;
    __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__fu;
    __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__fu = 0;
    CData/*0:0*/ __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__rv;
    __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__rv = 0;
    CData/*0:0*/ __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__Vfuncout;
    __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__fu;
    __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__fu = 0;
    CData/*0:0*/ __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__rv;
    __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__rv = 0;
    CData/*0:0*/ __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__Vfuncout;
    __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__fu;
    __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__fu = 0;
    CData/*0:0*/ __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__rv;
    __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__rv = 0;
    CData/*1:0*/ __VdlyVal__cacheLineManager__DOT__readIdx_r__v0;
    __VdlyVal__cacheLineManager__DOT__readIdx_r__v0 = 0;
    CData/*1:0*/ __VdlyVal__cacheLineManager__DOT__readIdx_r__v1;
    __VdlyVal__cacheLineManager__DOT__readIdx_r__v1 = 0;
    CData/*0:0*/ __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v0;
    __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v0 = 0;
    CData/*0:0*/ __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v2;
    __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v2 = 0;
    QData/*32:0*/ __VdlyVal__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4;
    __VdlyVal__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4 = 0;
    CData/*0:0*/ __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4;
    __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4 = 0;
    QData/*32:0*/ __VdlyVal__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5;
    __VdlyVal__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5 = 0;
    CData/*0:0*/ __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5;
    __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5 = 0;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    // Body
    vlSelfRef.__VdlySet__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn;
    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted 
        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted;
    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr 
        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr;
    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted 
        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted;
    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr 
        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr;
    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive 
        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive;
    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive 
        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive;
    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready;
    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v0 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v1 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v4 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v6 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v8 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v10 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v0 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v1 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v4 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v6 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v8 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v10 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12 = 0U;
    vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13 = 0U;
    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U];
    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U] 
        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U];
    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U] 
        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U];
    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U];
    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U] 
        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U];
    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U] 
        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U];
    __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v0 = 0U;
    __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v2 = 0U;
    __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4 = 0U;
    __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v6 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v10 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v19 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v23 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v26 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v29 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v6 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v10 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v19 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v23 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v26 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 = 0U;
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v29 = 0U;
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[2U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[2U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[3U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[3U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[4U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[4U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[5U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[5U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U];
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running;
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn = 0U;
    } else if (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doInsert) {
        vlSelfRef.__VdlyVal__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0 
            = (0xffffffcU & ((vlSelfRef.__PVT__LSU_cacheMiss[1U] 
                              << 0x15U) | (0x1ffffcU 
                                           & (vlSelfRef.__PVT__LSU_cacheMiss[0U] 
                                              >> 0xbU))));
        vlSelfRef.__VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0 
            = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn;
        vlSelfRef.__VdlySet__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0 = 1U;
        vlSelfRef.__Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn)));
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v0 = 1U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U] = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U] = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready = 0U;
        vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v1 = 1U;
    } else {
        if ((1U & (IData)(vlSelfRef.__PVT__PW_res))) {
            if (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                  [0U][0U] & (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready))) 
                 & ((1U & (IData)((vlSelfRef.__PVT__PW_res 
                                   >> 9U))) ? ((0x3ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__PW_res 
                                                           >> 0x2bU))) 
                                               == (0x3ffU 
                                                   & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                      [0U][2U] 
                                                      >> 8U)))
                     : ((0xfffffU & (IData)((vlSelfRef.__PVT__PW_res 
                                             >> 0x21U))) 
                        == (0xfffffU & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                         [0U][2U] << 2U) 
                                        | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                           [0U][1U] 
                                           >> 0x1eU))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (1U | (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
            }
            if (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                  [1U][0U] & (~ ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                                 >> 1U))) & ((1U & (IData)(
                                                           (vlSelfRef.__PVT__PW_res 
                                                            >> 9U)))
                                              ? ((0x3ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x2bU))) 
                                                 == 
                                                 (0x3ffU 
                                                  & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                     [1U][2U] 
                                                     >> 8U)))
                                              : ((0xfffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x21U))) 
                                                 == 
                                                 (0xfffffU 
                                                  & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                      [1U][2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                        [1U][1U] 
                                                        >> 0x1eU))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (2U | (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
            }
            if (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                  [2U][0U] & (~ ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                                 >> 2U))) & ((1U & (IData)(
                                                           (vlSelfRef.__PVT__PW_res 
                                                            >> 9U)))
                                              ? ((0x3ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x2bU))) 
                                                 == 
                                                 (0x3ffU 
                                                  & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                     [2U][2U] 
                                                     >> 8U)))
                                              : ((0xfffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x21U))) 
                                                 == 
                                                 (0xfffffU 
                                                  & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                      [2U][2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                        [2U][1U] 
                                                        >> 0x1eU))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (4U | (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
            }
            if (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                  [3U][0U] & (~ ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready) 
                                 >> 3U))) & ((1U & (IData)(
                                                           (vlSelfRef.__PVT__PW_res 
                                                            >> 9U)))
                                              ? ((0x3ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x2bU))) 
                                                 == 
                                                 (0x3ffU 
                                                  & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                     [3U][2U] 
                                                     >> 8U)))
                                              : ((0xfffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x21U))) 
                                                 == 
                                                 (0xfffffU 
                                                  & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                      [3U][2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                        [3U][1U] 
                                                        >> 0x1eU))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (8U | (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
            }
        }
        if ((1U & vlSelfRef.branch[0U])) {
            if ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                 [0U][0U] & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                   [0U][0U] 
                                                                   << 7U) 
                                                                  | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                     [0U][0U] 
                                                                     >> 0x19U)) 
                                                                 - 
                                                                 ((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (0xeU & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v4 = 1U;
            }
            if ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                 [1U][0U] & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                   [1U][0U] 
                                                                   << 7U) 
                                                                  | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                     [1U][0U] 
                                                                     >> 0x19U)) 
                                                                 - 
                                                                 ((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (0xdU & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v6 = 1U;
            }
            if ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                 [2U][0U] & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                   [2U][0U] 
                                                                   << 7U) 
                                                                  | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                     [2U][0U] 
                                                                     >> 0x19U)) 
                                                                 - 
                                                                 ((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (0xbU & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v8 = 1U;
            }
            if ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                 [3U][0U] & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                   [3U][0U] 
                                                                   << 7U) 
                                                                  | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                     [3U][0U] 
                                                                     >> 0x19U)) 
                                                                 - 
                                                                 ((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (7U & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v10 = 1U;
            }
        }
        if ((((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_enqueue) 
              & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U]) 
             & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                           << 7U) 
                                                                          | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                             >> 0x19U)) 
                                                                         - 
                                                                         ((vlSelfRef.branch[0U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.branch[0U] 
                                                                             >> 0x15U))))))))) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: TLBMissQueue.sv:104: Assertion failed in %NTop.soc.core.aguPortsGen[0].agu.tmq: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/TLBMissQueue.sv", 104, "");
                }
            }
            vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn))) 
                    & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready)) 
                   | (0xfU & ((1U & ((~ (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                         >> 0x1eU)) 
                                     | (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uopReady))) 
                              << (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn))));
            vlSelfRef.__VdlyVal__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12[0U] 
                = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U];
            vlSelfRef.__VdlyVal__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12[1U] 
                = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U];
            vlSelfRef.__VdlyVal__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12[2U] 
                = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U];
            vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12 
                = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn;
            vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_dequeue) 
             | (vlSelfRef.branch[0U] & VL_LTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,7, 
                                                                (0x7fU 
                                                                 & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
                                                                        >> 0x19U)) 
                                                                    - 
                                                                    ((vlSelfRef.branch[0U] 
                                                                      << 0xbU) 
                                                                     | (vlSelfRef.branch[0U] 
                                                                        >> 0x15U))))))))) {
            vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] = 0U;
            vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U] = 0U;
            vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U] = 0U;
            vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
                = (0xfffffffeU & vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U]);
        }
        if ((((~ vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U]) 
              | (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_dequeue)) 
             & (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid))) {
            if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                       [vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut][0U] 
                       & ((~ vlSelfRef.branch[0U]) 
                          | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                              (0x7fU 
                                                               & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                    [vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut][0U] 
                                                                    << 7U) 
                                                                   | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                      [vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut][0U] 
                                                                      >> 0x19U)) 
                                                                  - 
                                                                  ((vlSelfRef.branch[0U] 
                                                                    << 0xbU) 
                                                                   | (vlSelfRef.branch[0U] 
                                                                      >> 0x15U)))))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                    [vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut][0U];
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U] 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                    [vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut][1U];
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U] 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
                    [vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut][2U];
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut))) 
                       & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut;
                vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13 = 1U;
                vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v14 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut;
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v0 = 1U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U] = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U] = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready = 0U;
        vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v1 = 1U;
    } else {
        if ((1U & (IData)(vlSelfRef.__PVT__PW_res))) {
            if (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                  [0U][0U] & (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready))) 
                 & ((1U & (IData)((vlSelfRef.__PVT__PW_res 
                                   >> 9U))) ? ((0x3ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__PW_res 
                                                           >> 0x2bU))) 
                                               == (0x3ffU 
                                                   & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                      [0U][2U] 
                                                      >> 8U)))
                     : ((0xfffffU & (IData)((vlSelfRef.__PVT__PW_res 
                                             >> 0x21U))) 
                        == (0xfffffU & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                         [0U][2U] << 2U) 
                                        | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                           [0U][1U] 
                                           >> 0x1eU))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (1U | (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
            }
            if (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                  [1U][0U] & (~ ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                                 >> 1U))) & ((1U & (IData)(
                                                           (vlSelfRef.__PVT__PW_res 
                                                            >> 9U)))
                                              ? ((0x3ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x2bU))) 
                                                 == 
                                                 (0x3ffU 
                                                  & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                     [1U][2U] 
                                                     >> 8U)))
                                              : ((0xfffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x21U))) 
                                                 == 
                                                 (0xfffffU 
                                                  & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                      [1U][2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                        [1U][1U] 
                                                        >> 0x1eU))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (2U | (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
            }
            if (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                  [2U][0U] & (~ ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                                 >> 2U))) & ((1U & (IData)(
                                                           (vlSelfRef.__PVT__PW_res 
                                                            >> 9U)))
                                              ? ((0x3ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x2bU))) 
                                                 == 
                                                 (0x3ffU 
                                                  & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                     [2U][2U] 
                                                     >> 8U)))
                                              : ((0xfffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x21U))) 
                                                 == 
                                                 (0xfffffU 
                                                  & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                      [2U][2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                        [2U][1U] 
                                                        >> 0x1eU))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (4U | (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
            }
            if (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                  [3U][0U] & (~ ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready) 
                                 >> 3U))) & ((1U & (IData)(
                                                           (vlSelfRef.__PVT__PW_res 
                                                            >> 9U)))
                                              ? ((0x3ffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x2bU))) 
                                                 == 
                                                 (0x3ffU 
                                                  & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                     [3U][2U] 
                                                     >> 8U)))
                                              : ((0xfffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x21U))) 
                                                 == 
                                                 (0xfffffU 
                                                  & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                      [3U][2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                        [3U][1U] 
                                                        >> 0x1eU))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (8U | (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
            }
        }
        if ((1U & vlSelfRef.branch[0U])) {
            if ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                 [0U][0U] & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                   [0U][0U] 
                                                                   << 7U) 
                                                                  | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                     [0U][0U] 
                                                                     >> 0x19U)) 
                                                                 - 
                                                                 ((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (0xeU & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v4 = 1U;
            }
            if ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                 [1U][0U] & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                   [1U][0U] 
                                                                   << 7U) 
                                                                  | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                     [1U][0U] 
                                                                     >> 0x19U)) 
                                                                 - 
                                                                 ((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (0xdU & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v6 = 1U;
            }
            if ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                 [2U][0U] & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                   [2U][0U] 
                                                                   << 7U) 
                                                                  | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                     [2U][0U] 
                                                                     >> 0x19U)) 
                                                                 - 
                                                                 ((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (0xbU & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v8 = 1U;
            }
            if ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                 [3U][0U] & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                   [3U][0U] 
                                                                   << 7U) 
                                                                  | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                     [3U][0U] 
                                                                     >> 0x19U)) 
                                                                 - 
                                                                 ((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = (7U & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v10 = 1U;
            }
        }
        if ((((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_enqueue) 
              & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U]) 
             & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                           << 7U) 
                                                                          | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                             >> 0x19U)) 
                                                                         - 
                                                                         ((vlSelfRef.branch[0U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.branch[0U] 
                                                                             >> 0x15U))))))))) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: TLBMissQueue.sv:104: Assertion failed in %NTop.soc.core.aguPortsGen[1].agu.tmq: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/TLBMissQueue.sv", 104, "");
                }
            }
            vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn))) 
                    & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready)) 
                   | (0xfU & ((1U & ((~ (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                         >> 0x1eU)) 
                                     | (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uopReady))) 
                              << (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn))));
            vlSelfRef.__VdlyVal__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12[0U] 
                = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U];
            vlSelfRef.__VdlyVal__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12[1U] 
                = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U];
            vlSelfRef.__VdlyVal__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12[2U] 
                = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U];
            vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12 
                = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn;
            vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_dequeue) 
             | (vlSelfRef.branch[0U] & VL_LTS_III(32, 0U, 
                                                  VL_EXTENDS_II(32,7, 
                                                                (0x7fU 
                                                                 & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
                                                                        >> 0x19U)) 
                                                                    - 
                                                                    ((vlSelfRef.branch[0U] 
                                                                      << 0xbU) 
                                                                     | (vlSelfRef.branch[0U] 
                                                                        >> 0x15U))))))))) {
            vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] = 0U;
            vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U] = 0U;
            vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U] = 0U;
            vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
                = (0xfffffffeU & vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U]);
        }
        if ((((~ vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U]) 
              | (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_dequeue)) 
             & (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid))) {
            if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                       [vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut][0U] 
                       & ((~ vlSelfRef.branch[0U]) 
                          | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                              (0x7fU 
                                                               & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                    [vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut][0U] 
                                                                    << 7U) 
                                                                   | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                                                                      [vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut][0U] 
                                                                      >> 0x19U)) 
                                                                  - 
                                                                  ((vlSelfRef.branch[0U] 
                                                                    << 0xbU) 
                                                                   | (vlSelfRef.branch[0U] 
                                                                      >> 0x15U)))))))))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                    [vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut][0U];
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U] 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                    [vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut][1U];
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U] 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
                    [vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut][2U];
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut))) 
                       & (IData)(vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready));
                vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut;
                vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13 = 1U;
                vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v14 
                    = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut;
            }
        }
    }
    __VdlyVal__cacheLineManager__DOT__readIdx_r__v0 
        = vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r
        [0U];
    __VdlyVal__cacheLineManager__DOT__readIdx_r__v1 
        = vlSelfRef.cacheLineManager__DOT____Vcellout__penc____pinNumber2
        [0U];
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_uop = 0U;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[0U] = 0U;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U] = 0U;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[2U] = 0U;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_uop = 0U;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[0U] = 0U;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U] = 0U;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[2U] = 0U;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_pw = 0ULL;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_pw = 0ULL;
    vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop = 0ULL;
    vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_amoData = 0ULL;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                   & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,7, 
                                                                           (0x7fU 
                                                                            & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                                << 7U) 
                                                                                | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                                >> 0x19U)) 
                                                                               - 
                                                                               ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U)))))))))) {
            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__doIssue = 1U;
            if ((6U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags))) {
                if (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tlbMiss) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__doIssue = 0U;
                }
            }
            if (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__doIssue) {
                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLoad 
                    = (IData)((0x200U == (0x600U & 
                                          vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U])));
                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isStore 
                    = (IData)((0x400U == (0x600U & 
                                          vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U])));
                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isAtomic 
                    = (IData)((0x600U == (0x600U & 
                                          vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U])));
                if (((0U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags)) 
                     | (5U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags)))) {
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[0U] 
                        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U];
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U] 
                        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U];
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[2U] 
                        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U];
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U] 
                        = ((0xffffff7fU & vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U]) 
                           | (vlSelfRef.__PVT__LSU_AGUStall
                              [0U] << 7U));
                    if ((0x40000000U & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) {
                        vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U] 
                            = ((0x3ffffU & vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U]) 
                               | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr 
                                  << 0x12U));
                        vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[2U] 
                            = (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr 
                               >> 0xeU);
                    }
                }
                if (((((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLoad) 
                       | (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isAtomic)) 
                      & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags))) 
                     | (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isStore))) {
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_uop 
                        = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c;
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_uop 
                        = ((0xfffc1U & vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_uop) 
                           | ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags) 
                              << 2U));
                }
            }
        }
        if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                   & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,7, 
                                                                           (0x7fU 
                                                                            & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                                << 7U) 
                                                                                | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                                >> 0x19U)) 
                                                                               - 
                                                                               ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U)))))))))) {
            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__doIssue = 1U;
            if ((6U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags))) {
                if (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tlbMiss) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__doIssue = 0U;
                }
            }
            if (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__doIssue) {
                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLoad 
                    = (IData)((0x200U == (0x600U & 
                                          vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U])));
                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isStore 
                    = (IData)((0x400U == (0x600U & 
                                          vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U])));
                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isAtomic 
                    = (IData)((0x600U == (0x600U & 
                                          vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U])));
                if (((0U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags)) 
                     | (5U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags)))) {
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[0U] 
                        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U];
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U] 
                        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U];
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[2U] 
                        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U];
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U] 
                        = ((0xffffff7fU & vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U]) 
                           | (vlSelfRef.__PVT__LSU_AGUStall
                              [1U] << 7U));
                    if ((0x40000000U & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) {
                        vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U] 
                            = ((0x3ffffU & vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U]) 
                               | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr 
                                  << 0x12U));
                        vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[2U] 
                            = (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr 
                               >> 0xeU);
                    }
                }
                if (((((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLoad) 
                       | (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isAtomic)) 
                      & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags))) 
                     | (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isStore))) {
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_uop 
                        = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c;
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_uop 
                        = ((0xfffc1U & vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_uop) 
                           | ((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags) 
                              << 2U));
                }
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v0 = 1U;
        vlSelfRef.lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_resultUOp = 0ULL;
        vlSelfRef.lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_resultUOp = 0ULL;
        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted = 0U;
        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr = 0U;
    } else {
        __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v2 = 1U;
        if (((IData)(vlSelfRef.__PVT__prefetch) & (0U 
                                                   != (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c)))) {
            __VdlyVal__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4 
                = vlSelfRef.__PVT__prefetch;
            __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                          [0U]))) {
            __VdlyVal__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5 
                = vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                [0U];
            __VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5 = 1U;
        }
        vlSelfRef.lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_resultUOp 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c;
        vlSelfRef.lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_resultUOp 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c;
        if (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive) {
            if (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted) {
                if ((1U & (IData)(vlSelfRef.__PVT__PW_res))) {
                    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive = 0U;
                    vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted = 0U;
                }
            } else if ((IData)((6ULL == (0xeULL & vlSelfRef.__PVT__PW_res)))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted = 1U;
            } else {
                vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_pw 
                    = (((QData)((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr)) 
                        << 0x17U) | (QData)((IData)(
                                                    (1U 
                                                     | (0x7ffffeU 
                                                        & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                                           >> 6U))))));
            }
        }
        if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                   & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,7, 
                                                                           (0x7fU 
                                                                            & (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                                << 7U) 
                                                                                | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                                >> 0x19U)) 
                                                                               - 
                                                                               ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U)))))))))) {
            if ((6U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags))) {
                if (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tlbMiss) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive)))) {
                        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive = 1U;
                        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted = 0U;
                        vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr 
                            = ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
                                << 0xeU) | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                                            >> 0x12U));
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive) {
            if (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted) {
                if ((1U & (IData)(vlSelfRef.__PVT__PW_res))) {
                    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive = 0U;
                    vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted = 0U;
                }
            } else if ((IData)((0xaULL == (0xeULL & vlSelfRef.__PVT__PW_res)))) {
                vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted = 1U;
            } else {
                vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_pw 
                    = (((QData)((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr)) 
                        << 0x17U) | (QData)((IData)(
                                                    (1U 
                                                     | (0x7ffffeU 
                                                        & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                                           >> 6U))))));
            }
        }
        if ((1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                   & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,7, 
                                                                           (0x7fU 
                                                                            & (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                                << 7U) 
                                                                                | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                                                >> 0x19U)) 
                                                                               - 
                                                                               ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U)))))))))) {
            if ((6U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags))) {
                if (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tlbMiss) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive)))) {
                        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive = 1U;
                        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted = 0U;
                        vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr 
                            = ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
                                << 0xeU) | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                                            >> 0x12U));
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (((vlSelfRef.LD_uop[2U][0U] & ([&]() {
                            __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__fu 
                                = (0xfU & (vlSelfRef.LD_uop
                                           [2U][0U] 
                                           >> 2U));
                            __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__rv 
                                = (0U != (5U & ((IData)(1U) 
                                                << (IData)(__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__fu))));
                            __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__Vfuncout 
                                = __Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__rv;
                        }(), (IData)(__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__74__Vfuncout))) 
             & ((~ vlSelfRef.branch[0U]) | VL_GTES_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & (((vlSelfRef.LD_uop
                                                                           [2U][1U] 
                                                                           << 6U) 
                                                                          | (vlSelfRef.LD_uop
                                                                             [2U][0U] 
                                                                             >> 0x1aU)) 
                                                                         - 
                                                                         ((vlSelfRef.branch[0U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.branch[0U] 
                                                                             >> 0x15U))))))))) {
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = ((0x1fffULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop) 
                   | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
                       << 0x14U) | ((QData)((IData)(
                                                    (0x7fU 
                                                     & (vlSelfRef.LD_uop
                                                        [2U][1U] 
                                                        >> 1U)))) 
                                    << 0xdU)));
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = (0xffffffffffffdULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop);
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = ((0xfffffffffe003ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop) 
                   | ((QData)((IData)(((0x7f0U & ((
                                                   vlSelfRef.LD_uop
                                                   [2U][1U] 
                                                   << 0xaU) 
                                                  | (0x3f0U 
                                                     & (vlSelfRef.LD_uop
                                                        [2U][0U] 
                                                        >> 0x16U)))) 
                                       | (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__flags)))) 
                      << 2U));
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = (1ULL | vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop);
        }
    }
    vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop = 0ULL;
    vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_amoData = 0ULL;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (((vlSelfRef.LD_uop[1U][0U] & ([&]() {
                            __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__fu 
                                = (0xfU & (vlSelfRef.LD_uop
                                           [1U][0U] 
                                           >> 2U));
                            __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__rv 
                                = (0U != (0x403U & 
                                          ((IData)(1U) 
                                           << (IData)(__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__fu))));
                            __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__Vfuncout 
                                = __Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__rv;
                        }(), (IData)(__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__66__Vfuncout))) 
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
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = ((0x1fffULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop) 
                   | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
                       << 0x14U) | ((QData)((IData)(
                                                    (0x7fU 
                                                     & (vlSelfRef.LD_uop
                                                        [1U][1U] 
                                                        >> 1U)))) 
                                    << 0xdU)));
            if ((0x38U <= (0x3fU & (vlSelfRef.LD_uop
                                    [1U][1U] >> 8U)))) {
                vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_amoData 
                    = (1ULL | vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_amoData);
                vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_amoData 
                    = ((1ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_amoData) 
                       | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
                           << 0xfU) | ((QData)((IData)(
                                                       ((0x3f80U 
                                                         & (vlSelfRef.LD_uop
                                                            [1U][0U] 
                                                            >> 6U)) 
                                                        | (0x7fU 
                                                           & ((vlSelfRef.LD_uop
                                                               [1U][1U] 
                                                               << 6U) 
                                                              | (vlSelfRef.LD_uop
                                                                 [1U][0U] 
                                                                 >> 0x1aU)))))) 
                                       << 1U)));
            }
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = (0xffffffffffffdULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop);
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = ((0xfffffffffe003ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop) 
                   | ((QData)((IData)(((0x7f0U & ((
                                                   vlSelfRef.LD_uop
                                                   [1U][1U] 
                                                   << 0xaU) 
                                                  | (0x3f0U 
                                                     & (vlSelfRef.LD_uop
                                                        [1U][0U] 
                                                        >> 0x16U)))) 
                                       | (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__flags)))) 
                      << 2U));
            if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch) {
                vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                    = ((0xfffffffffffc3ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop) 
                       | ((QData)((IData)(((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                            ? 2U : 3U))) 
                          << 2U));
            } else if ((((8U == (0x3fU & (vlSelfRef.LD_uop
                                          [1U][1U] 
                                          >> 8U))) 
                         | (9U == (0x3fU & (vlSelfRef.LD_uop
                                            [1U][1U] 
                                            >> 8U)))) 
                        | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                             [1U][1U] 
                                             >> 8U))))) {
                vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                    = (4ULL | (0xfffffffffffc3ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop));
            }
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = (1ULL | vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop);
        }
    }
    vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop = 0ULL;
    vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_amoData = 0ULL;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (((vlSelfRef.LD_uop[0U][0U] & ([&]() {
                            __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__fu 
                                = (0xfU & (vlSelfRef.LD_uop
                                           [0U][0U] 
                                           >> 2U));
                            __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__rv 
                                = (0U != (0x403U & 
                                          ((IData)(1U) 
                                           << (IData)(__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__fu))));
                            __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__Vfuncout 
                                = __Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__rv;
                        }(), (IData)(__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__58__Vfuncout))) 
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
            vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = ((0x1fffULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop) 
                   | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
                       << 0x14U) | ((QData)((IData)(
                                                    (0x7fU 
                                                     & (vlSelfRef.LD_uop
                                                        [0U][1U] 
                                                        >> 1U)))) 
                                    << 0xdU)));
            if ((0x38U <= (0x3fU & (vlSelfRef.LD_uop
                                    [0U][1U] >> 8U)))) {
                vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_amoData 
                    = (1ULL | vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_amoData);
                vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_amoData 
                    = ((1ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_amoData) 
                       | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
                           << 0xfU) | ((QData)((IData)(
                                                       ((0x3f80U 
                                                         & (vlSelfRef.LD_uop
                                                            [0U][0U] 
                                                            >> 6U)) 
                                                        | (0x7fU 
                                                           & ((vlSelfRef.LD_uop
                                                               [0U][1U] 
                                                               << 6U) 
                                                              | (vlSelfRef.LD_uop
                                                                 [0U][0U] 
                                                                 >> 0x1aU)))))) 
                                       << 1U)));
            }
            vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = (0xffffffffffffdULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop);
            vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = ((0xfffffffffe003ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop) 
                   | ((QData)((IData)(((0x7f0U & ((
                                                   vlSelfRef.LD_uop
                                                   [0U][1U] 
                                                   << 0xaU) 
                                                  | (0x3f0U 
                                                     & (vlSelfRef.LD_uop
                                                        [0U][0U] 
                                                        >> 0x16U)))) 
                                       | (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__flags)))) 
                      << 2U));
            if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch) {
                vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                    = ((0xfffffffffffc3ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop) 
                       | ((QData)((IData)(((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                            ? 2U : 3U))) 
                          << 2U));
            } else if ((((8U == (0x3fU & (vlSelfRef.LD_uop
                                          [0U][1U] 
                                          >> 8U))) 
                         | (9U == (0x3fU & (vlSelfRef.LD_uop
                                            [0U][1U] 
                                            >> 8U)))) 
                        | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                             [0U][1U] 
                                             >> 8U))))) {
                vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                    = (4ULL | (0xfffffffffffc3ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop));
            }
            vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                = (1ULL | vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop);
        }
    }
    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v0 = 1U;
    vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop = 0ULL;
    vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop 
        = (0xffffffffffffeULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop);
    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v0 = 1U;
    vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop = 0ULL;
    vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop 
        = (0xffffffffffffeULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((((4U == (0xfU & (vlSelfRef.LD_uop[1U][0U] 
                              >> 2U))) & vlSelfRef.LD_uop
              [1U][0U]) & ((~ vlSelfRef.branch[0U]) 
                           | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
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
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v6 = 1U;
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v7 
                = (0x7fU & (vlSelfRef.LD_uop[1U][1U] 
                            >> 1U));
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v8 
                = (0x7fU & ((vlSelfRef.LD_uop[1U][1U] 
                             << 6U) | (vlSelfRef.LD_uop
                                       [1U][0U] >> 0x1aU)));
            if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                          >> 0xdU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                              >> 0xcU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                                  >> 0xbU)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [1U][1U] >> 0xaU)))) {
                            if ((0x200U & vlSelfRef.LD_uop
                                 [1U][1U])) {
                                if ((0x100U & vlSelfRef.LD_uop
                                     [1U][1U])) {
                                    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v10 = 1U;
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v11 
                                        = ((vlSelfRef.LD_uop
                                            [1U][5U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [1U][4U] 
                                              >> 0x17U));
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v12 
                                        = ((vlSelfRef.LD_uop
                                            [1U][4U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [1U][3U] 
                                              >> 0x17U));
                                } else {
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 
                                        = (1U & (vlSelfRef.LD_uop
                                                 [1U][5U] 
                                                 >> 0x16U));
                                    vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 = 1U;
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v14 
                                        = ((0x400000U 
                                            & vlSelfRef.LD_uop
                                            [1U][5U])
                                            ? (- ((
                                                   vlSelfRef.LD_uop
                                                   [1U][5U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [1U][4U] 
                                                     >> 0x17U)))
                                            : ((vlSelfRef.LD_uop
                                                [1U][5U] 
                                                << 9U) 
                                               | (vlSelfRef.LD_uop
                                                  [1U][4U] 
                                                  >> 0x17U)));
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v15 
                                        = ((vlSelfRef.LD_uop
                                            [1U][4U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [1U][3U] 
                                              >> 0x17U));
                                }
                            } else if ((0x100U & vlSelfRef.LD_uop
                                        [1U][1U])) {
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 
                                    = (1U & ((vlSelfRef.LD_uop
                                              [1U][5U] 
                                              ^ vlSelfRef.LD_uop
                                              [1U][4U]) 
                                             >> 0x16U));
                                vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 = 1U;
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v17 
                                    = ((0x400000U & 
                                        vlSelfRef.LD_uop
                                        [1U][5U]) ? 
                                       (- ((vlSelfRef.LD_uop
                                            [1U][5U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [1U][4U] 
                                              >> 0x17U)))
                                        : ((vlSelfRef.LD_uop
                                            [1U][5U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [1U][4U] 
                                              >> 0x17U)));
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v18 
                                    = ((0x400000U & 
                                        vlSelfRef.LD_uop
                                        [1U][4U]) ? 
                                       (- ((vlSelfRef.LD_uop
                                            [1U][4U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [1U][3U] 
                                              >> 0x17U)))
                                        : ((vlSelfRef.LD_uop
                                            [1U][4U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [1U][3U] 
                                              >> 0x17U)));
                            } else {
                                vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v19 = 1U;
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v20 
                                    = ((vlSelfRef.LD_uop
                                        [1U][5U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [1U][4U] 
                                          >> 0x17U));
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v21 
                                    = ((vlSelfRef.LD_uop
                                        [1U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [1U][3U] 
                                          >> 0x17U));
                            }
                        }
                    }
                }
            }
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 
                = (0U != (0x3fU & (vlSelfRef.LD_uop
                                   [1U][1U] >> 8U)));
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 = 1U;
        } else {
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v23 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                   [0U][0U] & ((~ vlSelfRef.branch[0U]) 
                               | VL_GTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                 [0U][0U] 
                                                                 << 0x1fU) 
                                                                | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                   [0U][0U] 
                                                                   >> 1U)) 
                                                               - 
                                                               ((vlSelfRef.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 0x15U)))))))))) {
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[0U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U];
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[1U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][1U];
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[2U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U];
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[3U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U];
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[4U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][4U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[0U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[0U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[1U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[1U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[2U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[2U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[3U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[3U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[4U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[4U];
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24 = 1U;
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0 
                = ((((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                     [0U][2U])) << 0x2aU) 
                    | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                        [0U][1U])) 
                        << 0xaU) | ((QData)((IData)(
                                                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                    [0U][0U])) 
                                    >> 0x16U))) + ((QData)((IData)(
                                                                   ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                     [0U][4U] 
                                                                     << 0xaU) 
                                                                    | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                       [0U][3U] 
                                                                       >> 0x16U)))) 
                                                   * (QData)((IData)(
                                                                     (0xffffU 
                                                                      & ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                          [0U][3U] 
                                                                          << 0xaU) 
                                                                         | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                            [0U][2U] 
                                                                            >> 0x16U)))))));
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0;
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 = 1U;
        } else {
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v26 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                   [1U][0U] & ((~ vlSelfRef.branch[0U]) 
                               | VL_GTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                 [1U][0U] 
                                                                 << 0x1fU) 
                                                                | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                   [1U][0U] 
                                                                   >> 1U)) 
                                                               - 
                                                               ((vlSelfRef.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 0x15U)))))))))) {
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[0U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][0U];
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[1U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][1U];
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[2U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][2U];
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[3U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][3U];
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[4U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][4U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[0U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[0U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[1U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[1U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[2U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[2U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[3U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[3U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[4U] 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[4U];
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27 = 1U;
            vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0 
                = ((((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                     [1U][2U])) << 0x2aU) 
                    | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                        [1U][1U])) 
                        << 0xaU) | ((QData)((IData)(
                                                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                    [1U][0U])) 
                                    >> 0x16U))) + VL_SHIFTL_QQI(64,64,32, 
                                                                ((QData)((IData)(
                                                                                ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                                [1U][4U] 
                                                                                << 0xaU) 
                                                                                | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                                [1U][3U] 
                                                                                >> 0x16U)))) 
                                                                 * (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                                [1U][3U] 
                                                                                >> 6U))))), 0x10U));
            vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 
                = vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0;
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 = 1U;
        } else {
            vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v29 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                   [2U][0U] & ((~ vlSelfRef.branch[0U]) 
                               | VL_GTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                 [2U][0U] 
                                                                 << 0x1fU) 
                                                                | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                   [2U][0U] 
                                                                   >> 1U)) 
                                                               - 
                                                               ((vlSelfRef.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 0x15U)))))))))) {
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = (1ULL | vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop);
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = ((0xffffffff01fffULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop) 
                   | ((QData)((IData)((0x7fU & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                [2U][0U] 
                                                >> 0xdU)))) 
                      << 0xdU));
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = ((0xfffffffffe003ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop) 
                   | ((QData)((IData)((0x7f0U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                 [2U][0U] 
                                                 << 3U)))) 
                      << 2U));
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = (0xffffffffffffdULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop);
            vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = ((0xfffffULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop) 
                   | ((QData)((IData)(((0x100000U & 
                                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                        [2U][0U]) ? 
                                       ((0x200000U 
                                         & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                         [2U][0U]) ? 
                                        ((~ ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                              [2U][2U] 
                                              << 0xaU) 
                                             | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                [2U][1U] 
                                                >> 0x16U))) 
                                         + ((0U == 
                                             ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                               [2U][1U] 
                                               << 0xaU) 
                                              | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                 [2U][0U] 
                                                 >> 0x16U)))
                                             ? 1U : 0U))
                                         : ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                             [2U][2U] 
                                             << 0xaU) 
                                            | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                               [2U][1U] 
                                               >> 0x16U)))
                                        : ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                            [2U][1U] 
                                            << 0xaU) 
                                           | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                                              [2U][0U] 
                                              >> 0x16U))))) 
                      << 0x14U));
        }
        if ((((4U == (0xfU & (vlSelfRef.LD_uop[2U][0U] 
                              >> 2U))) & vlSelfRef.LD_uop
              [2U][0U]) & ((~ vlSelfRef.branch[0U]) 
                           | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                               (0x7fU 
                                                                & (((vlSelfRef.LD_uop
                                                                     [2U][1U] 
                                                                     << 6U) 
                                                                    | (vlSelfRef.LD_uop
                                                                       [2U][0U] 
                                                                       >> 0x1aU)) 
                                                                   - 
                                                                   ((vlSelfRef.branch[0U] 
                                                                     << 0xbU) 
                                                                    | (vlSelfRef.branch[0U] 
                                                                       >> 0x15U))))))))) {
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v6 = 1U;
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v7 
                = (0x7fU & (vlSelfRef.LD_uop[2U][1U] 
                            >> 1U));
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v8 
                = (0x7fU & ((vlSelfRef.LD_uop[2U][1U] 
                             << 6U) | (vlSelfRef.LD_uop
                                       [2U][0U] >> 0x1aU)));
            if ((1U & (~ (vlSelfRef.LD_uop[2U][1U] 
                          >> 0xdU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[2U][1U] 
                              >> 0xcU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[2U][1U] 
                                  >> 0xbU)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [2U][1U] >> 0xaU)))) {
                            if ((0x200U & vlSelfRef.LD_uop
                                 [2U][1U])) {
                                if ((0x100U & vlSelfRef.LD_uop
                                     [2U][1U])) {
                                    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v10 = 1U;
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v11 
                                        = ((vlSelfRef.LD_uop
                                            [2U][5U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [2U][4U] 
                                              >> 0x17U));
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v12 
                                        = ((vlSelfRef.LD_uop
                                            [2U][4U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [2U][3U] 
                                              >> 0x17U));
                                } else {
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 
                                        = (1U & (vlSelfRef.LD_uop
                                                 [2U][5U] 
                                                 >> 0x16U));
                                    vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 = 1U;
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v14 
                                        = ((0x400000U 
                                            & vlSelfRef.LD_uop
                                            [2U][5U])
                                            ? (- ((
                                                   vlSelfRef.LD_uop
                                                   [2U][5U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [2U][4U] 
                                                     >> 0x17U)))
                                            : ((vlSelfRef.LD_uop
                                                [2U][5U] 
                                                << 9U) 
                                               | (vlSelfRef.LD_uop
                                                  [2U][4U] 
                                                  >> 0x17U)));
                                    vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v15 
                                        = ((vlSelfRef.LD_uop
                                            [2U][4U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [2U][3U] 
                                              >> 0x17U));
                                }
                            } else if ((0x100U & vlSelfRef.LD_uop
                                        [2U][1U])) {
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 
                                    = (1U & ((vlSelfRef.LD_uop
                                              [2U][5U] 
                                              ^ vlSelfRef.LD_uop
                                              [2U][4U]) 
                                             >> 0x16U));
                                vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 = 1U;
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v17 
                                    = ((0x400000U & 
                                        vlSelfRef.LD_uop
                                        [2U][5U]) ? 
                                       (- ((vlSelfRef.LD_uop
                                            [2U][5U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [2U][4U] 
                                              >> 0x17U)))
                                        : ((vlSelfRef.LD_uop
                                            [2U][5U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [2U][4U] 
                                              >> 0x17U)));
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v18 
                                    = ((0x400000U & 
                                        vlSelfRef.LD_uop
                                        [2U][4U]) ? 
                                       (- ((vlSelfRef.LD_uop
                                            [2U][4U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [2U][3U] 
                                              >> 0x17U)))
                                        : ((vlSelfRef.LD_uop
                                            [2U][4U] 
                                            << 9U) 
                                           | (vlSelfRef.LD_uop
                                              [2U][3U] 
                                              >> 0x17U)));
                            } else {
                                vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v19 = 1U;
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v20 
                                    = ((vlSelfRef.LD_uop
                                        [2U][5U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [2U][4U] 
                                          >> 0x17U));
                                vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v21 
                                    = ((vlSelfRef.LD_uop
                                        [2U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [2U][3U] 
                                          >> 0x17U));
                            }
                        }
                    }
                }
            }
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 
                = (0U != (0x3fU & (vlSelfRef.LD_uop
                                   [2U][1U] >> 8U)));
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 = 1U;
        } else {
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v23 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                   [0U][0U] & ((~ vlSelfRef.branch[0U]) 
                               | VL_GTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                 [0U][0U] 
                                                                 << 0x1fU) 
                                                                | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                   [0U][0U] 
                                                                   >> 1U)) 
                                                               - 
                                                               ((vlSelfRef.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 0x15U)))))))))) {
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[0U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U];
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[1U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][1U];
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[2U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U];
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[3U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U];
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[4U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][4U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[0U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[0U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[1U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[1U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[2U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[2U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[3U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[3U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[4U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[4U];
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24 = 1U;
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0 
                = ((((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                     [0U][2U])) << 0x2aU) 
                    | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                        [0U][1U])) 
                        << 0xaU) | ((QData)((IData)(
                                                    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                    [0U][0U])) 
                                    >> 0x16U))) + ((QData)((IData)(
                                                                   ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                     [0U][4U] 
                                                                     << 0xaU) 
                                                                    | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                       [0U][3U] 
                                                                       >> 0x16U)))) 
                                                   * (QData)((IData)(
                                                                     (0xffffU 
                                                                      & ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                          [0U][3U] 
                                                                          << 0xaU) 
                                                                         | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                            [0U][2U] 
                                                                            >> 0x16U)))))));
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0;
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 = 1U;
        } else {
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v26 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                   [1U][0U] & ((~ vlSelfRef.branch[0U]) 
                               | VL_GTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                 [1U][0U] 
                                                                 << 0x1fU) 
                                                                | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                   [1U][0U] 
                                                                   >> 1U)) 
                                                               - 
                                                               ((vlSelfRef.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 0x15U)))))))))) {
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[0U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][0U];
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[1U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][1U];
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[2U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][2U];
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[3U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][3U];
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[4U] 
                = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][4U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[0U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[0U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[1U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[1U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[2U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[2U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[3U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[3U];
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[4U] 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0[4U];
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27 = 1U;
            vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0 
                = ((((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                     [1U][2U])) << 0x2aU) 
                    | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                        [1U][1U])) 
                        << 0xaU) | ((QData)((IData)(
                                                    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                    [1U][0U])) 
                                    >> 0x16U))) + VL_SHIFTL_QQI(64,64,32, 
                                                                ((QData)((IData)(
                                                                                ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                                [1U][4U] 
                                                                                << 0xaU) 
                                                                                | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                                [1U][3U] 
                                                                                >> 0x16U)))) 
                                                                 * (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                                [1U][3U] 
                                                                                >> 6U))))), 0x10U));
            vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 
                = vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0;
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 = 1U;
        } else {
            vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v29 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                   [2U][0U] & ((~ vlSelfRef.branch[0U]) 
                               | VL_GTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                 [2U][0U] 
                                                                 << 0x1fU) 
                                                                | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                                   [2U][0U] 
                                                                   >> 1U)) 
                                                               - 
                                                               ((vlSelfRef.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 0x15U)))))))))) {
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = (1ULL | vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop);
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = ((0xffffffff01fffULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop) 
                   | ((QData)((IData)((0x7fU & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                [2U][0U] 
                                                >> 0xdU)))) 
                      << 0xdU));
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = ((0xfffffffffe003ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop) 
                   | ((QData)((IData)((0x7f0U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                 [2U][0U] 
                                                 << 3U)))) 
                      << 2U));
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = (0xffffffffffffdULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop);
            vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop 
                = ((0xfffffULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop) 
                   | ((QData)((IData)(((0x100000U & 
                                        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                        [2U][0U]) ? 
                                       ((0x200000U 
                                         & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                         [2U][0U]) ? 
                                        ((~ ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                              [2U][2U] 
                                              << 0xaU) 
                                             | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                [2U][1U] 
                                                >> 0x16U))) 
                                         + ((0U == 
                                             ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                               [2U][1U] 
                                               << 0xaU) 
                                              | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                                 [2U][0U] 
                                                 >> 0x16U)))
                                             ? 1U : 0U))
                                         : ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                             [2U][2U] 
                                             << 0xaU) 
                                            | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                               [2U][1U] 
                                               >> 0x16U)))
                                        : ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                            [2U][1U] 
                                            << 0xaU) 
                                           | (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                                              [2U][0U] 
                                              >> 0x16U))))) 
                      << 0x14U));
        }
    }
    vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running = 0U;
    vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop = 0ULL;
    vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop 
        = (0xffffffffffffeULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop);
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U] = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U] = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[2U] = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[3U] = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[4U] = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[5U] = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U] = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U] = 0U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U] = 0U;
    } else if ((((5U == (0xfU & (vlSelfRef.LD_uop[0U][0U] 
                                 >> 2U))) & vlSelfRef.LD_uop
                 [0U][0U]) & ((~ vlSelfRef.branch[0U]) 
                              | VL_GTES_III(32, 0U, 
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
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running = 1U;
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U] 
            = vlSelfRef.LD_uop[0U][0U];
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U] 
            = vlSelfRef.LD_uop[0U][1U];
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[2U] 
            = vlSelfRef.LD_uop[0U][2U];
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[3U] 
            = vlSelfRef.LD_uop[0U][3U];
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[4U] 
            = vlSelfRef.LD_uop[0U][4U];
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[5U] 
            = vlSelfRef.LD_uop[0U][5U];
        vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt = 0x1fU;
        if ((0U == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                             >> 8U)))) {
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U] 
                = ((0x400000U & vlSelfRef.LD_uop[0U][5U])
                    ? (- ((vlSelfRef.LD_uop[0U][5U] 
                           << 9U) | (vlSelfRef.LD_uop
                                     [0U][4U] >> 0x17U)))
                    : ((vlSelfRef.LD_uop[0U][5U] << 9U) 
                       | (vlSelfRef.LD_uop[0U][4U] 
                          >> 0x17U)));
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U] = 0U;
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U] = 0U;
        } else {
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U] 
                = ((2U == (0x3fU & (vlSelfRef.LD_uop
                                    [0U][1U] >> 8U)))
                    ? ((0x400000U & vlSelfRef.LD_uop
                        [0U][5U]) ? (- ((vlSelfRef.LD_uop
                                         [0U][5U] << 9U) 
                                        | (vlSelfRef.LD_uop
                                           [0U][4U] 
                                           >> 0x17U)))
                        : ((vlSelfRef.LD_uop[0U][5U] 
                            << 9U) | (vlSelfRef.LD_uop
                                      [0U][4U] >> 0x17U)))
                    : ((vlSelfRef.LD_uop[0U][5U] << 9U) 
                       | (vlSelfRef.LD_uop[0U][4U] 
                          >> 0x17U)));
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U] = 0U;
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U] = 0U;
        }
        vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop 
            = (0xffffffffffffeULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop);
    } else if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running) {
        if ((vlSelfRef.branch[0U] & VL_GTS_III(32, 0U, 
                                               VL_EXTENDS_II(32,7, 
                                                             (0x7fU 
                                                              & (((vlSelfRef.branch[0U] 
                                                                   << 0xbU) 
                                                                  | (vlSelfRef.branch[0U] 
                                                                     >> 0x15U)) 
                                                                 - 
                                                                 ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U] 
                                                                   << 6U) 
                                                                  | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U] 
                                                                     >> 0x1aU)))))))) {
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running = 0U;
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U] 
                = (0xfffffffeU & vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U]);
            vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop 
                = (0xffffffffffffeULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop);
        } else if ((0x3fU != (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt))) {
            VL_SHIFTL_WWI(65,65,32, __Vtemp_8, vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r, 1U);
            __Vtemp_9[0U] = (((IData)((((1U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U])
                                         ? (QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d))
                                         : (- (QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d)))) 
                                       << 0x1fU)) << 1U) 
                             | (1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U])));
            __Vtemp_9[1U] = (((IData)((((1U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U])
                                         ? (QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d))
                                         : (- (QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d)))) 
                                       << 0x1fU)) >> 0x1fU) 
                             | ((IData)(((((1U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U])
                                            ? (QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d))
                                            : (- (QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d)))) 
                                          << 0x1fU) 
                                         >> 0x20U)) 
                                << 1U));
            __Vtemp_9[2U] = ((IData)(((((1U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U])
                                         ? (QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d))
                                         : (- (QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d)))) 
                                       << 0x1fU) >> 0x20U)) 
                             >> 0x1fU);
            VL_ADD_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U] 
                = __Vtemp_10[0U];
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U] 
                = __Vtemp_10[1U];
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U] 
                = (1U & __Vtemp_10[2U]);
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt 
                = (0x3fU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt) 
                            - (IData)(1U)));
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running = 1U;
            vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop 
                = (0xffffffffffffeULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop);
        } else {
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__unnamedblk1__DOT__qRestored 
                = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__q 
                    - (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__q)) 
                   - ((1U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U])
                       ? 1U : 0U));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__unnamedblk1__DOT__remainder 
                = ((1U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U])
                    ? (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U] 
                       + vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d)
                    : vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U]);
            vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running = 0U;
            vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop 
                = ((0xffffffff00000ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop) 
                   | (IData)((IData)((1U | (0xfffc0U 
                                            & ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U] 
                                                << 0xcU) 
                                               | (0xfc0U 
                                                  & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U] 
                                                     >> 0x14U))))))));
            vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop 
                = ((0xfffffULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop) 
                   | ((QData)((IData)((((2U == (0x3fU 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U] 
                                                   >> 8U))) 
                                        | (3U == (0x3fU 
                                                  & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U] 
                                                     >> 8U))))
                                        ? ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__invert)
                                            ? (- vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__unnamedblk1__DOT__remainder)
                                            : vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__unnamedblk1__DOT__remainder)
                                        : ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__invert)
                                            ? (- vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__unnamedblk1__DOT__qRestored)
                                            : vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__unnamedblk1__DOT__qRestored)))) 
                      << 0x14U));
        }
    }
    vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r[1U] 
        = __VdlyVal__cacheLineManager__DOT__readIdx_r__v0;
    vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r[0U] 
        = __VdlyVal__cacheLineManager__DOT__readIdx_r__v1;
    if (__VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v0) {
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp[0U] = 0ULL;
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp[1U] = 0ULL;
    }
    if (__VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v2) {
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp[0U] = 0ULL;
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp[1U] = 0ULL;
    }
    if (__VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4) {
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp[0U] 
            = __VdlyVal__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v4;
    }
    if (__VdlySet__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5) {
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp[1U] 
            = __VdlyVal__cacheLineManager__DOT__prefetchExec__DOT__pfOp__v5;
    }
    vlSelfRef.flagUOps[5U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_uop;
    vlSelfRef.flagUOps[6U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_uop;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[0U] 
        = (IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[1U] 
        = ((0xfff00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__resUOps[1U]) 
           | (IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                      >> 0x20U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[0U] 
        = (IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[1U] 
        = ((0xfff00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__resUOps[1U]) 
           | (IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop 
                      >> 0x20U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[0U] 
        = (IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[1U] 
        = ((0xfff00000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[1U]) 
           | (IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop 
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
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[8U] 
        = ((0xfU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[8U]) 
           | ((IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop) 
              << 4U));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[9U] 
        = ((0xff000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__resUOps[9U]) 
           | (((IData)(vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop) 
               >> 0x1cU) | ((IData)((vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop 
                                     >> 0x20U)) << 4U)));
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
    vlSelfRef.flagUOps[1U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__wbUOpSplit____pinNumber2;
    vlSelfRef.flagUOps[2U] = vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__wbUOpSplit____pinNumber2;
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__5(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__5\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0;
    intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_hd7fa09e7__0 = 0;
    // Body
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
    vlSelfRef.flagUOps[0U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__wbUOpSplit____pinNumber2;
}

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_hbd3d39cf_0;

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__6(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vfunc_lb__DOT__GetLoadSqN__6__Vfuncout;
    __Vfunc_lb__DOT__GetLoadSqN__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lb__DOT__GetLoadSqN__6__idx;
    __Vfunc_lb__DOT__GetLoadSqN__6__idx = 0;
    CData/*2:0*/ __Vfunc_lb__DOT__GetLoadSqN__6__hiBits;
    __Vfunc_lb__DOT__GetLoadSqN__6__hiBits = 0;
    CData/*6:0*/ __Vfunc_lb__DOT__GetLoadSqN__6__rv;
    __Vfunc_lb__DOT__GetLoadSqN__6__rv = 0;
    VlWide<4>/*100:0*/ __Vdly__lsu__DOT__bypassLSU__DOT__activeLd;
    VL_ZERO_W(101, __Vdly__lsu__DOT__bypassLSU__DOT__activeLd);
    CData/*2:0*/ __Vdly__lsu__DOT__bypassLSU__DOT__state;
    __Vdly__lsu__DOT__bypassLSU__DOT__state = 0;
    CData/*0:0*/ __VdlyVal__lsu__DOT__selLdSrc_r__v0;
    __VdlyVal__lsu__DOT__selLdSrc_r__v0 = 0;
    CData/*0:0*/ __VdlyVal__lsu__DOT__selLdSrc_r__v1;
    __VdlyVal__lsu__DOT__selLdSrc_r__v1 = 0;
    CData/*0:0*/ __VdlyVal__lsu__DOT__loadWasExtIOBusy__v2;
    __VdlyVal__lsu__DOT__loadWasExtIOBusy__v2 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__loadWasExtIOBusy__v2;
    __VdlySet__lsu__DOT__loadWasExtIOBusy__v2 = 0;
    CData/*0:0*/ __VdlyVal__lsu__DOT__loadWasExtIOBusy__v3;
    __VdlyVal__lsu__DOT__loadWasExtIOBusy__v3 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__loadWasExtIOBusy__v3;
    __VdlySet__lsu__DOT__loadWasExtIOBusy__v3 = 0;
    CData/*0:0*/ __VdlyVal__lsu__DOT__loadCacheAccessFailed__v2;
    __VdlyVal__lsu__DOT__loadCacheAccessFailed__v2 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__loadCacheAccessFailed__v2;
    __VdlySet__lsu__DOT__loadCacheAccessFailed__v2 = 0;
    CData/*0:0*/ __VdlyVal__lsu__DOT__loadCacheAccessFailed__v3;
    __VdlyVal__lsu__DOT__loadCacheAccessFailed__v3 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__loadCacheAccessFailed__v3;
    __VdlySet__lsu__DOT__loadCacheAccessFailed__v3 = 0;
    CData/*0:0*/ __VdlyVal__lsu__DOT__loadCacheAccessFailed__v4;
    __VdlyVal__lsu__DOT__loadCacheAccessFailed__v4 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__loadCacheAccessFailed__v4;
    __VdlySet__lsu__DOT__loadCacheAccessFailed__v4 = 0;
    CData/*0:0*/ __VdlyVal__lsu__DOT__loadCacheAccessFailed__v5;
    __VdlyVal__lsu__DOT__loadCacheAccessFailed__v5 = 0;
    CData/*0:0*/ __VdlySet__lsu__DOT__loadCacheAccessFailed__v5;
    __VdlySet__lsu__DOT__loadCacheAccessFailed__v5 = 0;
    // Body
    __VdlySet__lsu__DOT__loadWasExtIOBusy__v2 = 0U;
    __VdlySet__lsu__DOT__loadWasExtIOBusy__v3 = 0U;
    __VdlySet__lsu__DOT__loadCacheAccessFailed__v2 = 0U;
    __VdlySet__lsu__DOT__loadCacheAccessFailed__v3 = 0U;
    __VdlySet__lsu__DOT__loadCacheAccessFailed__v4 = 0U;
    __VdlySet__lsu__DOT__loadCacheAccessFailed__v5 = 0U;
    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U] 
        = vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[0U];
    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[1U] 
        = vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[1U];
    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[2U] 
        = vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[2U];
    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[3U] 
        = vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[3U];
    __Vdly__lsu__DOT__bypassLSU__DOT__state = vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state;
    vlSelfRef.__VdlySet__lsu__DOT__stOps__v0 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__stOps__v2 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__stOps__v6 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__stOps__v7 = 0U;
    vlSelfRef.__Vdly__lb__DOT__specRsv = vlSelfRef.__PVT__lb__DOT__specRsv;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v4 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v6 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v8 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v10 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v12 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v18 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v26 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v46 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v54 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v1 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v16 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v17 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v18 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v19 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v20 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v21 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v22 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v23 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v24 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v25 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v26 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v27 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v28 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v29 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v30 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v31 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v32 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v33 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v34 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v36 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v37 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v38 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v39 = 0U;
    vlSelfRef.__VdlySet__lb__DOT__entries__v51 = 0U;
    __VdlyVal__lsu__DOT__selLdSrc_r__v0 = vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
        [1U];
    __VdlyVal__lsu__DOT__selLdSrc_r__v1 = vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
        [0U];
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                    [0U][0U] & (((~ vlSelfRef.branch[0U]) 
                                 | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                    [0U][0U] >> 2U)) 
                                | VL_GTES_III(32, 0U, 
                                              VL_EXTENDS_II(32,7, 
                                                            (0x7fU 
                                                             & (((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                                  [0U][0U] 
                                                                  << 0x1bU) 
                                                                 | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                                    [0U][0U] 
                                                                    >> 5U)) 
                                                                - 
                                                                ((vlSelfRef.branch[0U] 
                                                                  << 0xbU) 
                                                                 | (vlSelfRef.branch[0U] 
                                                                    >> 0x15U)))))))) 
                   & ((~ (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp)) 
                      | (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_ldStall))))) {
            __VdlyVal__lsu__DOT__loadWasExtIOBusy__v2 
                = (1U & (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp));
            __VdlySet__lsu__DOT__loadWasExtIOBusy__v2 = 1U;
            __VdlyVal__lsu__DOT__loadCacheAccessFailed__v3 
                = (1U & vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                   [0U]);
            __VdlySet__lsu__DOT__loadCacheAccessFailed__v3 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                    [1U][0U] & (((~ vlSelfRef.branch[0U]) 
                                 | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                    [1U][0U] >> 2U)) 
                                | VL_GTES_III(32, 0U, 
                                              VL_EXTENDS_II(32,7, 
                                                            (0x7fU 
                                                             & (((vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                                  [1U][0U] 
                                                                  << 0x1bU) 
                                                                 | (vlSelfRef.__PVT__lsu__DOT__ldOps_0
                                                                    [1U][0U] 
                                                                    >> 5U)) 
                                                                - 
                                                                ((vlSelfRef.branch[0U] 
                                                                  << 0xbU) 
                                                                 | (vlSelfRef.branch[0U] 
                                                                    >> 0x15U)))))))) 
                   & ((~ ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                          >> 1U)) | (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_ldStall))))) {
            __VdlyVal__lsu__DOT__loadWasExtIOBusy__v3 
                = (1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassLdUOp) 
                         >> 1U));
            __VdlySet__lsu__DOT__loadWasExtIOBusy__v3 = 1U;
            __VdlyVal__lsu__DOT__loadCacheAccessFailed__v5 
                = (1U & vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                   [1U]);
            __VdlySet__lsu__DOT__loadCacheAccessFailed__v5 = 1U;
        }
        if ((1U & vlSelfRef.__PVT__lsu__DOT__uopLd[0U][0U])) {
            __VdlyVal__lsu__DOT__loadCacheAccessFailed__v2 
                = (1U & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy));
            __VdlySet__lsu__DOT__loadCacheAccessFailed__v2 = 1U;
        }
        if ((1U & vlSelfRef.__PVT__lsu__DOT__uopLd[1U][0U])) {
            __VdlyVal__lsu__DOT__loadCacheAccessFailed__v4 
                = (1U & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy) 
                         >> 1U));
            __VdlySet__lsu__DOT__loadCacheAccessFailed__v4 = 1U;
        }
    }
    vlSelfRef.__PVT__lsu__DOT__idxs_r = vlSelfRef.__PVT__lsu__DOT__idxs_c;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__VdlySet__lsu__DOT__stOps__v0 = 1U;
    } else {
        vlSelfRef.__VdlySet__lsu__DOT__stOps__v2 = 1U;
        if ((1U & (vlSelfRef.__PVT__SQB_uop[0U] & (~ (IData)(vlSelfRef.__PVT__CC_storeStall))))) {
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[0U] 
                = vlSelfRef.__PVT__SQB_uop[0U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[1U] 
                = vlSelfRef.__PVT__SQB_uop[1U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[2U] 
                = vlSelfRef.__PVT__SQB_uop[2U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[3U] 
                = vlSelfRef.__PVT__SQB_uop[3U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[4U] 
                = vlSelfRef.__PVT__SQB_uop[4U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[5U] 
                = vlSelfRef.__PVT__SQB_uop[5U];
            vlSelfRef.__VdlySet__lsu__DOT__stOps__v6 = 1U;
        }
        if ((1U & vlSelfRef.__PVT__lsu__DOT__stOps[0U][0U])) {
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[0U] 
                = vlSelfRef.__PVT__lsu__DOT__stOps[0U][0U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[1U] 
                = vlSelfRef.__PVT__lsu__DOT__stOps[0U][1U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[2U] 
                = vlSelfRef.__PVT__lsu__DOT__stOps[0U][2U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[3U] 
                = vlSelfRef.__PVT__lsu__DOT__stOps[0U][3U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[4U] 
                = vlSelfRef.__PVT__lsu__DOT__stOps[0U][4U];
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[5U] 
                = vlSelfRef.__PVT__lsu__DOT__stOps[0U][5U];
            vlSelfRef.__VdlySet__lsu__DOT__stOps__v7 = 1U;
        }
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U] = 0U;
        __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[1U] = 0U;
        __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[2U] = 0U;
        __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[3U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] = 
            VTop__ConstPool__CONST_hbd3d39cf_0[0U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U] = 
            VTop__ConstPool__CONST_hbd3d39cf_0[1U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] = 
            VTop__ConstPool__CONST_hbd3d39cf_0[2U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U] = 
            VTop__ConstPool__CONST_hbd3d39cf_0[3U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[4U] = 
            VTop__ConstPool__CONST_hbd3d39cf_0[4U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[5U] = 
            VTop__ConstPool__CONST_hbd3d39cf_0[5U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[6U] = 
            VTop__ConstPool__CONST_hbd3d39cf_0[6U];
        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[7U] = 
            VTop__ConstPool__CONST_hbd3d39cf_0[7U];
        __Vdly__lsu__DOT__bypassLSU__DOT__state = 0U;
    } else {
        if (vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__invalidateActiveLd) {
            __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U] = 0U;
            __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[1U] = 0U;
            __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[2U] = 0U;
            __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[3U] = 0U;
        }
        if ((4U & (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))) {
                __Vdly__lsu__DOT__bypassLSU__DOT__state = 0U;
                if (((vlSelfRef.__PVT__SQB_uop[0U] 
                      & (IData)(vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopStEn)) 
                     & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_stStall)))) {
                    if ((0x800U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = 3U;
                    }
                    if ((0x400U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = 2U;
                    }
                    __Vdly__lsu__DOT__bypassLSU__DOT__state = 2U;
                    if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = 1U;
                    }
                    if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = 0U;
                    }
                    if ((0x800U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        if ((0x400U & vlSelfRef.__PVT__SQB_uop[0U])) {
                            if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                                if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                                        = (9U | (0xfffffff0U 
                                                 & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                                } else if (VL_UNLIKELY((
                                                        vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                                    VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1),
                                                 -12,
                                                 vlSymsp->name());
                                    VL_STOP_MT("src/BypassLSU.sv", 81, "");
                                }
                            } else if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                                    VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                                 64,
                                                 VL_TIME_UNITED_Q(1),
                                                 -12,
                                                 vlSymsp->name());
                                    VL_STOP_MT("src/BypassLSU.sv", 81, "");
                                }
                            } else {
                                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                                    = (8U | (0xfffffff0U 
                                             & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                            }
                        } else if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                                VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                VL_STOP_MT("src/BypassLSU.sv", 81, "");
                            }
                        } else if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                                VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                VL_STOP_MT("src/BypassLSU.sv", 81, "");
                            }
                        } else {
                            vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                                = (7U | (0xfffffff0U 
                                         & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                        }
                    } else if ((0x400U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                                VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                VL_STOP_MT("src/BypassLSU.sv", 81, "");
                            }
                        } else if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                                VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                VL_STOP_MT("src/BypassLSU.sv", 81, "");
                            }
                        } else {
                            vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                                = (7U | (0xfffffff0U 
                                         & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                        }
                    } else if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                            = ((0xfffffff0U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]) 
                               | ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])
                                   ? 8U : 7U));
                    } else if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                            = (7U | (0xfffffff0U & 
                                     vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                        VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/BypassLSU.sv", 81, "");
                    }
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] 
                        = (0xfffe001fU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U]);
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                        = ((0xfU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]) 
                           | ((IData)(((QData)((IData)(
                                                       ((0xfffffffcU 
                                                         & ((vlSelfRef.__PVT__SQB_uop[5U] 
                                                             << 8U) 
                                                            | (0xfcU 
                                                               & (vlSelfRef.__PVT__SQB_uop[4U] 
                                                                  >> 0x18U)))) 
                                                        | (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow)))) 
                                       << 1U)) << 4U));
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U] 
                        = ((0xffffffe0U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U]) 
                           | (((IData)(((QData)((IData)(
                                                        ((0xfffffffcU 
                                                          & ((vlSelfRef.__PVT__SQB_uop[5U] 
                                                              << 8U) 
                                                             | (0xfcU 
                                                                & (vlSelfRef.__PVT__SQB_uop[4U] 
                                                                   >> 0x18U)))) 
                                                         | (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow)))) 
                                        << 1U)) >> 0x1cU) 
                              | ((IData)((((QData)((IData)(
                                                           ((0xfffffffcU 
                                                             & ((vlSelfRef.__PVT__SQB_uop[5U] 
                                                                 << 8U) 
                                                                | (0xfcU 
                                                                   & (vlSelfRef.__PVT__SQB_uop[4U] 
                                                                      >> 0x18U)))) 
                                                            | (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow)))) 
                                           << 1U) >> 0x20U)) 
                                 << 4U)));
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] 
                        = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U]) 
                           | (0xfffe0000U & ((vlSelfRef.__PVT__SQB_uop[1U] 
                                              << 0x19U) 
                                             | (0x1fe0000U 
                                                & (vlSelfRef.__PVT__SQB_uop[0U] 
                                                   >> 7U)))));
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U] 
                        = ((0xfffe0000U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U]) 
                           | (0x1ffffU & (vlSelfRef.__PVT__SQB_uop[1U] 
                                          >> 7U)));
                } else if ((((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
                              & (IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid)) 
                             & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_ldStall))) 
                            & (((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
                                 >> 2U) | (~ vlSelfRef.branch[0U])) 
                               | VL_GTES_III(32, 0U, 
                                             VL_EXTENDS_II(32,7, 
                                                           (0x7fU 
                                                            & (((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
                                                                 << 0x1bU) 
                                                                | (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
                                                                   >> 5U)) 
                                                               - 
                                                               ((vlSelfRef.branch[0U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.branch[0U] 
                                                                   >> 0x15U))))))))) {
                    if ((0U == (3U & (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                      >> 1U)))) {
                        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                            = (4U | (0xfffffff0U & 
                                     vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                    } else if ((1U == (3U & (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                             >> 1U)))) {
                        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                            = (5U | (0xfffffff0U & 
                                     vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                    } else if ((2U == (3U & (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                             >> 1U)))) {
                        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                            = (6U | (0xfffffff0U & 
                                     vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                        VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:99: Assertion failed in %NTop.soc.core.lsu.bypassLSU: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/BypassLSU.sv", 99, "");
                    }
                    __Vdly__lsu__DOT__bypassLSU__DOT__state = 1U;
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U] 
                        = vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U];
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[1U] 
                        = vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U];
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[2U] 
                        = vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U];
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[3U] 
                        = vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[3U];
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U] 
                        = ((0x1fU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U]) 
                           | ((IData)((QData)((IData)(
                                                      ((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U] 
                                                        << 0x1cU) 
                                                       | (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                                          >> 4U))))) 
                              << 5U));
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] 
                        = ((0xfffe0000U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U]) 
                           | (((IData)((QData)((IData)(
                                                       ((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U] 
                                                         << 0x1cU) 
                                                        | (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                                           >> 4U))))) 
                               >> 0x1bU) | ((IData)(
                                                    ((QData)((IData)(
                                                                     ((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U] 
                                                                       << 0x1cU) 
                                                                      | (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                                                         >> 4U)))) 
                                                     >> 0x20U)) 
                                            << 5U)));
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                        = (0xffffffefU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))) {
                if (vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled) {
                    __Vdly__lsu__DOT__bypassLSU__DOT__state = 0U;
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U] = 0U;
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[1U] = 0U;
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[2U] = 0U;
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[3U] = 0U;
                    __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U] 
                        = (0xfffffffeU & __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U]);
                }
            } else if ((0x10U & vlSymsp->TOP__Top__soc.MemC_stat[0U])) {
                __Vdly__lsu__DOT__bypassLSU__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))) {
                if ((0x20000U & vlSymsp->TOP__Top__soc.MemC_stat[0U])) {
                    __Vdly__lsu__DOT__bypassLSU__DOT__state = 5U;
                    vlSelfRef.__PVT__lsu__DOT__BLSU_ldResult 
                        = ((0U == (3U & (vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[1U] 
                                         >> 1U))) ? 
                           ((0xff000000U & ((vlSymsp->TOP__Top__soc.MemC_stat[1U] 
                                             << 0x1aU) 
                                            | (0x3000000U 
                                               & (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                                                  >> 6U)))) 
                            | ((0xff0000U & ((vlSymsp->TOP__Top__soc.MemC_stat[1U] 
                                              << 0x12U) 
                                             | (0x30000U 
                                                & (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                                                   >> 0xeU)))) 
                               | ((0xff00U & ((vlSymsp->TOP__Top__soc.MemC_stat[1U] 
                                               << 0xaU) 
                                              | (0x300U 
                                                 & (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                                                    >> 0x16U)))) 
                                  | (0xffU & ((vlSymsp->TOP__Top__soc.MemC_stat[1U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                                                 >> 0x1eU))))))
                            : ((1U == (3U & (vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[1U] 
                                             >> 1U)))
                                ? ((0xffff0000U & (
                                                   (vlSymsp->TOP__Top__soc.MemC_stat[1U] 
                                                    << 0x12U) 
                                                   | (0x30000U 
                                                      & (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                                                         >> 0xeU)))) 
                                   | (0xffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[1U] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                                                    >> 0x1eU))))
                                : ((vlSymsp->TOP__Top__soc.MemC_stat[1U] 
                                    << 2U) | (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                                              >> 0x1eU))));
                }
            } else if ((1U & (~ (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                                 >> 3U)))) {
                __Vdly__lsu__DOT__bypassLSU__DOT__state 
                    = ((1U == (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))
                        ? 3U : 4U);
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[0U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[1U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[2U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[3U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[4U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[4U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[5U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[5U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[6U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[6U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[7U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[7U];
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))) {
            if ((1U & (~ (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                          >> 3U)))) {
                __Vdly__lsu__DOT__bypassLSU__DOT__state 
                    = ((1U == (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state))
                        ? 3U : 4U);
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[0U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[1U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[2U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[3U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[4U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[4U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[5U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[5U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[6U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[6U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[7U] 
                    = VTop__ConstPool__CONST_hbd3d39cf_0[7U];
            }
        } else {
            __Vdly__lsu__DOT__bypassLSU__DOT__state = 0U;
            if (((vlSelfRef.__PVT__SQB_uop[0U] & (IData)(vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopStEn)) 
                 & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_stStall)))) {
                if ((0x800U & vlSelfRef.__PVT__SQB_uop[0U])) {
                    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = 3U;
                }
                if ((0x400U & vlSelfRef.__PVT__SQB_uop[0U])) {
                    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = 2U;
                }
                __Vdly__lsu__DOT__bypassLSU__DOT__state = 2U;
                if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = 1U;
                }
                if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = 0U;
                }
                if ((0x800U & vlSelfRef.__PVT__SQB_uop[0U])) {
                    if ((0x400U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                            if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                                    = (9U | (0xfffffff0U 
                                             & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                            } else if (VL_UNLIKELY((
                                                    vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                                VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                VL_STOP_MT("src/BypassLSU.sv", 81, "");
                            }
                        } else if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                                VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                             64,VL_TIME_UNITED_Q(1),
                                             -12,vlSymsp->name());
                                VL_STOP_MT("src/BypassLSU.sv", 81, "");
                            }
                        } else {
                            vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                                = (8U | (0xfffffff0U 
                                         & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                        }
                    } else if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                            VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/BypassLSU.sv", 81, "");
                        }
                    } else if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                            VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/BypassLSU.sv", 81, "");
                        }
                    } else {
                        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                            = (7U | (0xfffffff0U & 
                                     vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                    }
                } else if ((0x400U & vlSelfRef.__PVT__SQB_uop[0U])) {
                    if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                            VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/BypassLSU.sv", 81, "");
                        }
                    } else if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                            VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("src/BypassLSU.sv", 81, "");
                        }
                    } else {
                        vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                            = (7U | (0xfffffff0U & 
                                     vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                    }
                } else if ((0x200U & vlSelfRef.__PVT__SQB_uop[0U])) {
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]) 
                           | ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])
                               ? 8U : 7U));
                } else if ((0x100U & vlSelfRef.__PVT__SQB_uop[0U])) {
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                        = (7U | (0xfffffff0U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:81: Assertion failed in %NTop.soc.core.lsu.bypassLSU.unnamedblk1: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/BypassLSU.sv", 81, "");
                }
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] 
                    = (0xfffe001fU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U]);
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                    = ((0xfU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]) 
                       | ((IData)(((QData)((IData)(
                                                   ((0xfffffffcU 
                                                     & ((vlSelfRef.__PVT__SQB_uop[5U] 
                                                         << 8U) 
                                                        | (0xfcU 
                                                           & (vlSelfRef.__PVT__SQB_uop[4U] 
                                                              >> 0x18U)))) 
                                                    | (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow)))) 
                                   << 1U)) << 4U));
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U] 
                    = ((0xffffffe0U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U]) 
                       | (((IData)(((QData)((IData)(
                                                    ((0xfffffffcU 
                                                      & ((vlSelfRef.__PVT__SQB_uop[5U] 
                                                          << 8U) 
                                                         | (0xfcU 
                                                            & (vlSelfRef.__PVT__SQB_uop[4U] 
                                                               >> 0x18U)))) 
                                                     | (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow)))) 
                                    << 1U)) >> 0x1cU) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xfffffffcU 
                                                         & ((vlSelfRef.__PVT__SQB_uop[5U] 
                                                             << 8U) 
                                                            | (0xfcU 
                                                               & (vlSelfRef.__PVT__SQB_uop[4U] 
                                                                  >> 0x18U)))) 
                                                        | (IData)(vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow)))) 
                                       << 1U) >> 0x20U)) 
                             << 4U)));
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] 
                    = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U]) 
                       | (0xfffe0000U & ((vlSelfRef.__PVT__SQB_uop[1U] 
                                          << 0x19U) 
                                         | (0x1fe0000U 
                                            & (vlSelfRef.__PVT__SQB_uop[0U] 
                                               >> 7U)))));
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U] 
                    = ((0xfffe0000U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U]) 
                       | (0x1ffffU & (vlSelfRef.__PVT__SQB_uop[1U] 
                                      >> 7U)));
            } else if ((((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
                          & (IData)(vlSelfRef.__PVT__lsu__DOT__blsuLdIdxValid)) 
                         & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_ldStall))) 
                        & (((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
                             >> 2U) | (~ vlSelfRef.branch[0U])) 
                           | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                               (0x7fU 
                                                                & (((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
                                                                     << 0x1bU) 
                                                                    | (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U] 
                                                                       >> 5U)) 
                                                                   - 
                                                                   ((vlSelfRef.branch[0U] 
                                                                     << 0xbU) 
                                                                    | (vlSelfRef.branch[0U] 
                                                                       >> 0x15U))))))))) {
                if ((0U == (3U & (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                  >> 1U)))) {
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                        = (4U | (0xfffffff0U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                } else if ((1U == (3U & (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                         >> 1U)))) {
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                        = (5U | (0xfffffff0U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                } else if ((2U == (3U & (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                         >> 1U)))) {
                    vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                        = (6U | (0xfffffff0U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]));
                } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: BypassLSU.sv:99: Assertion failed in %NTop.soc.core.lsu.bypassLSU: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/BypassLSU.sv", 99, "");
                }
                __Vdly__lsu__DOT__bypassLSU__DOT__state = 1U;
                __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U] 
                    = vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[0U];
                __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[1U] 
                    = vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U];
                __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[2U] 
                    = vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U];
                __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[3U] 
                    = vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[3U];
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U] 
                    = ((0x1fU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U]) 
                       | ((IData)((QData)((IData)((
                                                   (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U] 
                                                    << 0x1cU) 
                                                   | (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                                      >> 4U))))) 
                          << 5U));
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U] 
                    = ((0xfffe0000U & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U]) 
                       | (((IData)((QData)((IData)(
                                                   ((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U] 
                                                     << 0x1cU) 
                                                    | (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                                       >> 4U))))) 
                           >> 0x1bU) | ((IData)(((QData)((IData)(
                                                                 ((vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopLd[1U] 
                                                                     >> 4U)))) 
                                                 >> 0x20U)) 
                                        << 5U)));
                vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U] 
                    = (0xffffffefU & vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U]);
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__VdlySet__lb__DOT__entries__v0 = 1U;
        vlSelfRef.__Vdly__lb__DOT__specRsv = 0ULL;
        vlSelfRef.__PVT__lb__DOT__comRsv = 0ULL;
        vlSelfRef.__VdlySet__lb__DOT__entries__v1 = 1U;
    } else {
        vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__lateLoadPassthru = 0U;
        if ((1U & (~ vlSelfRef.__PVT__LS_AGULD_uopStall
                   [0U]))) {
            vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v4 = 1U;
        }
        if ((1U & (~ vlSelfRef.__PVT__LS_AGULD_uopStall
                   [1U]))) {
            vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v6 = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.__PVT__LSU_ldAck
                            [0U]) & (IData)((vlSelfRef.__PVT__LSU_ldAck
                                             [0U] >> 3U))) 
                   & (~ (IData)((vlSelfRef.__PVT__LSU_ldAck
                                 [0U] >> 1U)))))) {
            vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk23__DOT__unnamedblk24__DOT__index 
                = (0xfU & (IData)((vlSelfRef.__PVT__LSU_ldAck
                                   [0U] >> 4U)));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v16 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk23__DOT__unnamedblk24__DOT__index;
            vlSelfRef.__VdlySet__lb__DOT__entries__v16 = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.__PVT__LSU_ldAck
                            [1U]) & (IData)((vlSelfRef.__PVT__LSU_ldAck
                                             [1U] >> 3U))) 
                   & (~ (IData)((vlSelfRef.__PVT__LSU_ldAck
                                 [1U] >> 1U)))))) {
            vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk23__DOT__unnamedblk24__DOT__index 
                = (0xfU & (IData)((vlSelfRef.__PVT__LSU_ldAck
                                   [1U] >> 4U)));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v17 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk23__DOT__unnamedblk24__DOT__index;
            vlSelfRef.__VdlySet__lb__DOT__entries__v17 = 1U;
        }
        if ((1U & (((vlSelfRef.__PVT__AGU_uop[0U][0U] 
                     & ((~ vlSelfRef.branch[0U]) | 
                        VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
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
                                                                  >> 0x15U)))))))) 
                    & (vlSelfRef.__PVT__AGU_uop[0U][1U] 
                       >> 0xaU)) & (vlSelfRef.__PVT__AGU_uop
                                    [0U][1U] >> 8U)))) {
            vlSelfRef.__PVT__lb__DOT__comRsv = 0ULL;
        }
        if ((1U & (((vlSelfRef.__PVT__AGU_uop[1U][0U] 
                     & ((~ vlSelfRef.branch[0U]) | 
                        VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
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
                                                                  >> 0x15U)))))))) 
                    & (vlSelfRef.__PVT__AGU_uop[1U][1U] 
                       >> 0xaU)) & (vlSelfRef.__PVT__AGU_uop
                                    [1U][1U] >> 8U)))) {
            vlSelfRef.__PVT__lb__DOT__comRsv = 0ULL;
        }
        if ((((IData)(vlSelfRef.__PVT__lb__DOT__specRsv) 
              & ((~ vlSelfRef.branch[0U]) | VL_GTS_III(32, 0U, 
                                                       VL_EXTENDS_II(32,7, 
                                                                     (0x7fU 
                                                                      & ((IData)(
                                                                                (vlSelfRef.__PVT__lb__DOT__specRsv 
                                                                                >> 0x1fU)) 
                                                                         - 
                                                                         ((vlSelfRef.branch[0U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.branch[0U] 
                                                                             >> 0x15U)))))))) 
             & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                (0x7fU 
                                                 & ((IData)(
                                                            (vlSelfRef.__PVT__lb__DOT__specRsv 
                                                             >> 0x1fU)) 
                                                    - (IData)(vlSelfRef.ROB_curSqN))))))) {
            vlSelfRef.__PVT__lb__DOT__comRsv = vlSelfRef.__PVT__lb__DOT__specRsv;
            vlSelfRef.__Vdly__lb__DOT__specRsv = 0ULL;
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                   | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v18 = 1U;
        }
        if ((2U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                   | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v19 = 1U;
        }
        if ((4U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                   | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v20 = 1U;
        }
        if ((8U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                   | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v21 = 1U;
        }
        if ((0x10U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                      | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v22 = 1U;
        }
        if ((0x20U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                      | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v23 = 1U;
        }
        if ((0x40U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                      | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v24 = 1U;
        }
        if ((0x80U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                      | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v25 = 1U;
        }
        if ((0x100U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                       | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v26 = 1U;
        }
        if ((0x200U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                       | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v27 = 1U;
        }
        if ((0x400U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                       | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v28 = 1U;
        }
        if ((0x800U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                       | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v29 = 1U;
        }
        if ((0x1000U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                        | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v30 = 1U;
        }
        if ((0x2000U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                        | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v31 = 1U;
        }
        if ((0x4000U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                        | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v32 = 1U;
        }
        if ((0x8000U & ((IData)(vlSelfRef.__PVT__lb__DOT__invalMaskBr) 
                        | (IData)(vlSelfRef.__PVT__lb__DOT__invalMask)))) {
            vlSelfRef.__VdlySet__lb__DOT__entries__v33 = 1U;
        }
        if ((1U & vlSelfRef.branch[0U])) {
            if (((IData)(vlSelfRef.__PVT__lb__DOT__specRsv) 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                     (0x7fU 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__lb__DOT__specRsv 
                                                                  >> 0x1fU)) 
                                                         - 
                                                         ((vlSelfRef.branch[0U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.branch[0U] 
                                                             >> 0x15U)))))))) {
                vlSelfRef.__Vdly__lb__DOT__specRsv = 0ULL;
            }
            if ((1U & (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                                                              [0U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                                                                [0U][0U] 
                                                                >> 5U)) 
                                                            - 
                                                            ((vlSelfRef.branch[0U] 
                                                              << 0xbU) 
                                                             | (vlSelfRef.branch[0U] 
                                                                >> 0x15U)))))) 
                       | (vlSelfRef.branch[0U] >> 6U)))) {
                vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v8 = 1U;
            }
            if ((1U & (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                                                              [1U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                                                                [1U][0U] 
                                                                >> 5U)) 
                                                            - 
                                                            ((vlSelfRef.branch[0U] 
                                                              << 0xbU) 
                                                             | (vlSelfRef.branch[0U] 
                                                                >> 0x15U)))))) 
                       | (vlSelfRef.branch[0U] >> 6U)))) {
                vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v10 = 1U;
            }
        } else {
            if ((1U & (((~ vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                         [0U][0U]) | (~ vlSelfRef.__PVT__LS_AGULD_uopStall
                                      [0U])) | (vlSelfRef.__PVT__lb__DOT__ltIssue
                                                [0U] 
                                                & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                                   [0U] 
                                                   >> 1U))))) {
                if ((vlSelfRef.__PVT__LS_AGULD_uopStall
                     [0U] & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                     [0U][0U])) {
                    vlSelfRef.__VdlyDim0__lb__DOT__entries__v34 
                        = (0xfU & (vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                                   [0U][0U] >> 0x13U));
                    vlSelfRef.__VdlySet__lb__DOT__entries__v34 = 1U;
                }
                if ((1U & vlSelfRef.__PVT__lb__DOT__ltIssue
                     [0U])) {
                    vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                        = vlSelfRef.__PVT__lb__DOT__entries
                        [(0xfU & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                  [0U] >> 2U))];
                    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v12 = 1U;
                    vlSelfRef.__VdlyDim0__lb__DOT__entries__v35 
                        = (0xfU & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                   [0U] >> 2U));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v14 
                        = (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                   >> 7U));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v15 
                        = (1U & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                         >> 5U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v16 
                        = (3U & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                         >> 0x27U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v17 
                        = (0x7fU & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                            >> 0x37U)));
                    __Vfunc_lb__DOT__GetLoadSqN__6__idx 
                        = (0xfU & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                   [0U] >> 2U));
                    __Vfunc_lb__DOT__GetLoadSqN__6__hiBits 
                        = (7U & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
                                 >> 4U));
                    __Vfunc_lb__DOT__GetLoadSqN__6__rv 
                        = ((0x70U & ((((IData)(__Vfunc_lb__DOT__GetLoadSqN__6__idx) 
                                       >= (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)))
                                       ? (IData)(__Vfunc_lb__DOT__GetLoadSqN__6__hiBits)
                                       : ((IData)(1U) 
                                          + (IData)(__Vfunc_lb__DOT__GetLoadSqN__6__hiBits))) 
                                     << 4U)) | (IData)(__Vfunc_lb__DOT__GetLoadSqN__6__idx));
                    __Vfunc_lb__DOT__GetLoadSqN__6__Vfuncout 
                        = __Vfunc_lb__DOT__GetLoadSqN__6__rv;
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v18 
                        = __Vfunc_lb__DOT__GetLoadSqN__6__Vfuncout;
                    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v18 = 1U;
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v19 
                        = (0x7fU & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                            >> 0x29U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v20 
                        = (0x7fU & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                            >> 0x30U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v21 
                        = (1U & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                         >> 6U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v22 
                        = (1U & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                         >> 4U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v24 
                        = (0x80000000U > (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                                  >> 7U)));
                } else {
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__lb__DOT__specRsv)) 
                               & (IData)(vlSelfRef.__PVT__lb__DOT__loadRsv)))) {
                        vlSelfRef.__Vdly__lb__DOT__specRsv 
                            = (1ULL | vlSelfRef.__Vdly__lb__DOT__specRsv);
                        vlSelfRef.__Vdly__lb__DOT__specRsv 
                            = ((0x7fffffffULL & vlSelfRef.__Vdly__lb__DOT__specRsv) 
                               | ((QData)((IData)((0x7fU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__lb__DOT__entries
                                                              [
                                                              (0xfU 
                                                               & ((IData)(vlSelfRef.__PVT__lb__DOT__loadRsv) 
                                                                  >> 1U))] 
                                                              >> 0x30U))))) 
                                  << 0x1fU));
                        vlSelfRef.__Vdly__lb__DOT__specRsv 
                            = ((0x3f80000001ULL & vlSelfRef.__Vdly__lb__DOT__specRsv) 
                               | ((QData)((IData)((0x3fffffffU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__lb__DOT__entries
                                                              [
                                                              (0xfU 
                                                               & ((IData)(vlSelfRef.__PVT__lb__DOT__loadRsv) 
                                                                  >> 1U))] 
                                                              >> 9U))))) 
                                  << 1U));
                        vlSelfRef.__VdlyDim0__lb__DOT__entries__v36 
                            = (0xfU & ((IData)(vlSelfRef.__PVT__lb__DOT__loadRsv) 
                                       >> 1U));
                        vlSelfRef.__VdlySet__lb__DOT__entries__v36 = 1U;
                    }
                    if ((((vlSelfRef.__PVT__AGU_uop
                           [0U][0U] & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 9U)) 
                          & vlSelfRef.__PVT__lb__DOT__delayLoad
                          [0U]) & (~ vlSelfRef.__PVT__lb__DOT__nonSpeculative
                                   [0U]))) {
                        vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__lateLoadPassthru 
                            = (1U | (IData)(vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__lateLoadPassthru));
                        vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v26 = 1U;
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v28 
                            = ((vlSelfRef.__PVT__AGU_uop
                                [0U][2U] << 0xeU) | 
                               (vlSelfRef.__PVT__AGU_uop
                                [0U][1U] >> 0x12U));
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v29 
                            = (1U & (vlSelfRef.__PVT__AGU_uop
                                     [0U][1U] >> 0xdU));
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v30 
                            = (3U & (vlSelfRef.__PVT__AGU_uop
                                     [0U][1U] >> 0xbU));
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v31 
                            = (0x7fU & (vlSelfRef.__PVT__AGU_uop
                                        [0U][0U] >> 0x12U));
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v32 
                            = (0x7fU & (vlSelfRef.__PVT__AGU_uop
                                        [0U][0U] >> 0xbU));
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v33 
                            = (0x7fU & vlSelfRef.__PVT__AGU_uop
                               [0U][1U]);
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v34 
                            = (vlSelfRef.__PVT__AGU_uop
                               [0U][0U] >> 0x19U);
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v35 
                            = (1U & ((vlSelfRef.__PVT__AGU_uop
                                      [0U][1U] >> 9U) 
                                     & (vlSelfRef.__PVT__AGU_uop
                                        [0U][1U] >> 0xaU)));
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v36 
                            = (1U & (vlSelfRef.__PVT__AGU_uop
                                     [0U][0U] >> 2U));
                        vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v38 
                            = (0x80000000U > ((vlSelfRef.__PVT__AGU_uop
                                               [0U][2U] 
                                               << 0xeU) 
                                              | (vlSelfRef.__PVT__AGU_uop
                                                 [0U][1U] 
                                                 >> 0x12U)));
                    }
                }
            }
            if ((1U & (((~ vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                         [1U][0U]) | (~ vlSelfRef.__PVT__LS_AGULD_uopStall
                                      [1U])) | (vlSelfRef.__PVT__lb__DOT__ltIssue
                                                [1U] 
                                                & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                                   [1U] 
                                                   >> 1U))))) {
                if ((vlSelfRef.__PVT__LS_AGULD_uopStall
                     [1U] & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                     [1U][0U])) {
                    vlSelfRef.__VdlyDim0__lb__DOT__entries__v37 
                        = (0xfU & (vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                                   [1U][0U] >> 0x13U));
                    vlSelfRef.__VdlySet__lb__DOT__entries__v37 = 1U;
                }
                if ((1U & vlSelfRef.__PVT__lb__DOT__ltIssue
                     [1U])) {
                    vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                        = vlSelfRef.__PVT__lb__DOT__entries
                        [(0xfU & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                  [1U] >> 2U))];
                    vlSelfRef.__VdlyDim0__lb__DOT__entries__v38 
                        = (0xfU & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                   [1U] >> 2U));
                    vlSelfRef.__VdlySet__lb__DOT__entries__v38 = 1U;
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v42 
                        = (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                   >> 7U));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v43 
                        = (1U & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                         >> 5U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v44 
                        = (3U & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                         >> 0x27U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v45 
                        = (0x7fU & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                            >> 0x37U)));
                    __Vfunc_lb__DOT__GetLoadSqN__6__idx 
                        = (0xfU & (vlSelfRef.__PVT__lb__DOT__ltIssue
                                   [1U] >> 2U));
                    __Vfunc_lb__DOT__GetLoadSqN__6__hiBits 
                        = (7U & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
                                 >> 4U));
                    __Vfunc_lb__DOT__GetLoadSqN__6__rv 
                        = ((0x70U & ((((IData)(__Vfunc_lb__DOT__GetLoadSqN__6__idx) 
                                       >= (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)))
                                       ? (IData)(__Vfunc_lb__DOT__GetLoadSqN__6__hiBits)
                                       : ((IData)(1U) 
                                          + (IData)(__Vfunc_lb__DOT__GetLoadSqN__6__hiBits))) 
                                     << 4U)) | (IData)(__Vfunc_lb__DOT__GetLoadSqN__6__idx));
                    __Vfunc_lb__DOT__GetLoadSqN__6__Vfuncout 
                        = __Vfunc_lb__DOT__GetLoadSqN__6__rv;
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v46 
                        = __Vfunc_lb__DOT__GetLoadSqN__6__Vfuncout;
                    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v46 = 1U;
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v47 
                        = (0x7fU & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                            >> 0x29U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v48 
                        = (0x7fU & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                            >> 0x30U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v49 
                        = (1U & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                         >> 6U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v50 
                        = (1U & (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                         >> 4U)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v52 
                        = (0x80000000U > (IData)((vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e 
                                                  >> 7U)));
                } else if ((((vlSelfRef.__PVT__AGU_uop
                              [1U][0U] & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 9U)) & 
                             vlSelfRef.__PVT__lb__DOT__delayLoad
                             [1U]) & (~ vlSelfRef.__PVT__lb__DOT__nonSpeculative
                                      [1U]))) {
                    vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__lateLoadPassthru 
                        = (2U | (IData)(vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__lateLoadPassthru));
                    vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v54 = 1U;
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v56 
                        = ((vlSelfRef.__PVT__AGU_uop
                            [1U][2U] << 0xeU) | (vlSelfRef.__PVT__AGU_uop
                                                 [1U][1U] 
                                                 >> 0x12U));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v57 
                        = (1U & (vlSelfRef.__PVT__AGU_uop
                                 [1U][1U] >> 0xdU));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v58 
                        = (3U & (vlSelfRef.__PVT__AGU_uop
                                 [1U][1U] >> 0xbU));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v59 
                        = (0x7fU & (vlSelfRef.__PVT__AGU_uop
                                    [1U][0U] >> 0x12U));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v60 
                        = (0x7fU & (vlSelfRef.__PVT__AGU_uop
                                    [1U][0U] >> 0xbU));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v61 
                        = (0x7fU & vlSelfRef.__PVT__AGU_uop
                           [1U][1U]);
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v62 
                        = (vlSelfRef.__PVT__AGU_uop
                           [1U][0U] >> 0x19U);
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v63 
                        = (1U & ((vlSelfRef.__PVT__AGU_uop
                                  [1U][1U] >> 9U) & 
                                 (vlSelfRef.__PVT__AGU_uop
                                  [1U][1U] >> 0xaU)));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v64 
                        = (1U & (vlSelfRef.__PVT__AGU_uop
                                 [1U][0U] >> 2U));
                    vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v66 
                        = (0x80000000U > ((vlSelfRef.__PVT__AGU_uop
                                           [1U][2U] 
                                           << 0xeU) 
                                          | (vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 0x12U)));
                }
            }
        }
        if ((1U & ((vlSelfRef.__PVT__AGU_uop[0U][0U] 
                    & (vlSelfRef.__PVT__AGU_uop[0U][1U] 
                       >> 9U)) & ((~ vlSelfRef.branch[0U]) 
                                  | VL_GTES_III(32, 0U, 
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
            vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index 
                = (0xfU & (vlSelfRef.__PVT__AGU_uop
                           [0U][0U] >> 0xbU));
            vlSelfRef.__VdlyVal__lb__DOT__entries__v39 
                = (0x7fU & (vlSelfRef.__PVT__AGU_uop
                            [0U][0U] >> 0x12U));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v39 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlySet__lb__DOT__entries__v39 = 1U;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v40 
                = (vlSelfRef.__PVT__AGU_uop[0U][0U] 
                   >> 0x19U);
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v40 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v41 
                = (0x7fU & vlSelfRef.__PVT__AGU_uop
                   [0U][1U]);
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v41 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v42 
                = (1U & ((vlSelfRef.__PVT__AGU_uop[0U][1U] 
                          >> 9U) & (vlSelfRef.__PVT__AGU_uop
                                    [0U][1U] >> 0xaU)));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v42 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v43 
                = (1U & (vlSelfRef.__PVT__AGU_uop[0U][1U] 
                         >> 0xdU));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v43 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v44 
                = ((vlSelfRef.__PVT__AGU_uop[0U][2U] 
                    << 0xeU) | (vlSelfRef.__PVT__AGU_uop
                                [0U][1U] >> 0x12U));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v44 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v45 
                = (3U & (vlSelfRef.__PVT__AGU_uop[0U][1U] 
                         >> 0xbU));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v45 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v46 
                = (1U & (vlSelfRef.__PVT__AGU_uop[0U][1U] 
                         >> 8U));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v46 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v47 
                = (1U & (vlSelfRef.__PVT__AGU_uop[0U][0U] 
                         >> 2U));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v47 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v48 
                = (1U & ((~ vlSelfRef.__PVT__lb__DOT__delayLoad
                          [0U]) | (IData)(vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__lateLoadPassthru)));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v48 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v49 
                = vlSelfRef.__PVT__lb__DOT__nonSpeculative
                [0U];
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v49 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v50 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
        }
        if ((1U & ((vlSelfRef.__PVT__AGU_uop[1U][0U] 
                    & (vlSelfRef.__PVT__AGU_uop[1U][1U] 
                       >> 9U)) & ((~ vlSelfRef.branch[0U]) 
                                  | VL_GTES_III(32, 0U, 
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
            vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index 
                = (0xfU & (vlSelfRef.__PVT__AGU_uop
                           [1U][0U] >> 0xbU));
            vlSelfRef.__VdlyVal__lb__DOT__entries__v51 
                = (0x7fU & (vlSelfRef.__PVT__AGU_uop
                            [1U][0U] >> 0x12U));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v51 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlySet__lb__DOT__entries__v51 = 1U;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v52 
                = (vlSelfRef.__PVT__AGU_uop[1U][0U] 
                   >> 0x19U);
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v52 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v53 
                = (0x7fU & vlSelfRef.__PVT__AGU_uop
                   [1U][1U]);
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v53 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v54 
                = (1U & ((vlSelfRef.__PVT__AGU_uop[1U][1U] 
                          >> 9U) & (vlSelfRef.__PVT__AGU_uop
                                    [1U][1U] >> 0xaU)));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v54 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v55 
                = (1U & (vlSelfRef.__PVT__AGU_uop[1U][1U] 
                         >> 0xdU));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v55 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v56 
                = ((vlSelfRef.__PVT__AGU_uop[1U][2U] 
                    << 0xeU) | (vlSelfRef.__PVT__AGU_uop
                                [1U][1U] >> 0x12U));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v56 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v57 
                = (3U & (vlSelfRef.__PVT__AGU_uop[1U][1U] 
                         >> 0xbU));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v57 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v58 
                = (1U & (vlSelfRef.__PVT__AGU_uop[1U][1U] 
                         >> 8U));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v58 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v59 
                = (1U & (vlSelfRef.__PVT__AGU_uop[1U][0U] 
                         >> 2U));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v59 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v60 
                = (1U & ((~ vlSelfRef.__PVT__lb__DOT__delayLoad
                          [1U]) | ((IData)(vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__lateLoadPassthru) 
                                   >> 1U)));
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v60 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyVal__lb__DOT__entries__v61 
                = vlSelfRef.__PVT__lb__DOT__nonSpeculative
                [1U];
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v61 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
            vlSelfRef.__VdlyDim0__lb__DOT__entries__v62 
                = vlSelfRef.__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index;
        }
    }
    vlSelfRef.__PVT__lsu__DOT__selLdSrc_r[1U] = __VdlyVal__lsu__DOT__selLdSrc_r__v0;
    vlSelfRef.__PVT__lsu__DOT__selLdSrc_r[0U] = __VdlyVal__lsu__DOT__selLdSrc_r__v1;
    vlSelfRef.__PVT__lsu__DOT__loadWasExtIOBusy[0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__loadWasExtIOBusy[1U] = 0U;
    if (__VdlySet__lsu__DOT__loadWasExtIOBusy__v2) {
        vlSelfRef.__PVT__lsu__DOT__loadWasExtIOBusy[0U] 
            = __VdlyVal__lsu__DOT__loadWasExtIOBusy__v2;
    }
    if (__VdlySet__lsu__DOT__loadWasExtIOBusy__v3) {
        vlSelfRef.__PVT__lsu__DOT__loadWasExtIOBusy[1U] 
            = __VdlyVal__lsu__DOT__loadWasExtIOBusy__v3;
    }
    vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed[0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed[1U] = 0U;
    if (__VdlySet__lsu__DOT__loadCacheAccessFailed__v2) {
        vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed[0U] 
            = ((2U & vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                [0U]) | (IData)(__VdlyVal__lsu__DOT__loadCacheAccessFailed__v2));
    }
    if (__VdlySet__lsu__DOT__loadCacheAccessFailed__v3) {
        vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed[0U] 
            = ((1U & vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                [0U]) | ((IData)(__VdlyVal__lsu__DOT__loadCacheAccessFailed__v3) 
                         << 1U));
    }
    if (__VdlySet__lsu__DOT__loadCacheAccessFailed__v4) {
        vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed[1U] 
            = ((2U & vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                [1U]) | (IData)(__VdlyVal__lsu__DOT__loadCacheAccessFailed__v4));
    }
    if (__VdlySet__lsu__DOT__loadCacheAccessFailed__v5) {
        vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed[1U] 
            = ((1U & vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                [1U]) | ((IData)(__VdlyVal__lsu__DOT__loadCacheAccessFailed__v5) 
                         << 1U));
    }
    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[0U] 
        = __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[0U];
    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[1U] 
        = __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[1U];
    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[2U] 
        = __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[2U];
    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__activeLd[3U] 
        = __Vdly__lsu__DOT__bypassLSU__DOT__activeLd[3U];
    vlSelfRef.__PVT__lsu__DOT__bypassLSU__DOT__state 
        = __Vdly__lsu__DOT__bypassLSU__DOT__state;
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
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__7(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__7\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v4 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v5 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v6 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v7 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v8 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v9 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v10 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v11 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v12 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v13 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v14 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v15 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v16 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v17 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v18 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v19 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v20 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v21 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v22 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v23 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v26 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v27 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v28 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v29 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v4 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v5 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v6 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v7 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v8 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v9 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v10 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v11 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v12 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v13 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v14 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v15 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v16 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v17 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v18 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v19 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v20 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v21 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v22 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v23 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v26 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v27 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v28 = 0U;
    vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v29 = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v0 = 1U;
        vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v0 = 1U;
    } else {
        if ((((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
               [0U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                              [0U][0U] >> 0x11U))) 
              & (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                 >> 0xeU)) & ((0xfffffffU & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                              [0U][1U] 
                                              << 7U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                [0U][0U] 
                                                >> 0x19U))) 
                              == (0xfffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xdU] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                                                   >> 0x13U)))))) {
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v4 = 1U;
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [0U][1U] >> 0x15U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (0xcU 
                                                             & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                [0U][0U] 
                                                                >> 0x15U)), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                       [0U][0U] 
                                                                       >> 0x15U)), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                       [0U][0U] 
                                                                       >> 0x15U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xcU 
                                                                        & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                           [0U][0U] 
                                                                           >> 0x15U)), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0xcU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                              [0U][0U] 
                                                              >> 0x15U)), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0xcU 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                      [0U][0U] 
                                                                      >> 0x15U)), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v5 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v5 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [0U][1U] >> 0x16U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (1U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [0U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (1U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [0U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [0U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (1U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [0U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v6 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v6 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [0U][1U] >> 0x17U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (2U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [0U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (2U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [0U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (2U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [0U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (2U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [0U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v7 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v7 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [0U][1U] >> 0x18U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (3U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [0U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [0U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [0U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [0U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v8 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v8 = 1U;
            }
        }
        if ((((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
               [1U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                              [1U][0U] >> 0x11U))) 
              & (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                 >> 0xeU)) & ((0xfffffffU & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                              [1U][1U] 
                                              << 7U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                [1U][0U] 
                                                >> 0x19U))) 
                              == (0xfffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xdU] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                                                   >> 0x13U)))))) {
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v9 = 1U;
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [1U][1U] >> 0x15U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (0xcU 
                                                             & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                [1U][0U] 
                                                                >> 0x15U)), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                       [1U][0U] 
                                                                       >> 0x15U)), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                       [1U][0U] 
                                                                       >> 0x15U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xcU 
                                                                        & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                           [1U][0U] 
                                                                           >> 0x15U)), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0xcU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                              [1U][0U] 
                                                              >> 0x15U)), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0xcU 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                      [1U][0U] 
                                                                      >> 0x15U)), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v10 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v10 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [1U][1U] >> 0x16U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (1U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [1U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (1U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [1U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [1U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (1U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [1U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v11 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v11 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [1U][1U] >> 0x17U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (2U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [1U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (2U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [1U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (2U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [1U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (2U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [1U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v12 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v12 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [1U][1U] >> 0x18U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (3U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [1U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [1U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [1U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [1U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v13 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v13 = 1U;
            }
        }
        if ((((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
               [2U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                              [2U][0U] >> 0x11U))) 
              & (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                 >> 0xeU)) & ((0xfffffffU & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                              [2U][1U] 
                                              << 7U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                [2U][0U] 
                                                >> 0x19U))) 
                              == (0xfffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xdU] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                                                   >> 0x13U)))))) {
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v14 = 1U;
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [2U][1U] >> 0x15U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (0xcU 
                                                             & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                [2U][0U] 
                                                                >> 0x15U)), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                       [2U][0U] 
                                                                       >> 0x15U)), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                       [2U][0U] 
                                                                       >> 0x15U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xcU 
                                                                        & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                           [2U][0U] 
                                                                           >> 0x15U)), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0xcU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                              [2U][0U] 
                                                              >> 0x15U)), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0xcU 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                      [2U][0U] 
                                                                      >> 0x15U)), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v15 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v15 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [2U][1U] >> 0x16U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (1U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [2U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (1U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [2U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [2U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (1U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [2U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v16 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v16 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [2U][1U] >> 0x17U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (2U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [2U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (2U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [2U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (2U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [2U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (2U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [2U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v17 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v17 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [2U][1U] >> 0x18U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (3U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [2U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [2U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [2U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [2U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v18 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v18 = 1U;
            }
        }
        if ((((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
               [3U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                              [3U][0U] >> 0x11U))) 
              & (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                 >> 0xeU)) & ((0xfffffffU & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                              [3U][1U] 
                                              << 7U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                [3U][0U] 
                                                >> 0x19U))) 
                              == (0xfffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xdU] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                                                   >> 0x13U)))))) {
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v19 = 1U;
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [3U][1U] >> 0x15U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (0xcU 
                                                             & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                [3U][0U] 
                                                                >> 0x15U)), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                       [3U][0U] 
                                                                       >> 0x15U)), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                       [3U][0U] 
                                                                       >> 0x15U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xcU 
                                                                        & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                           [3U][0U] 
                                                                           >> 0x15U)), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0xcU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                              [3U][0U] 
                                                              >> 0x15U)), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0xcU 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                      [3U][0U] 
                                                                      >> 0x15U)), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v20 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v20 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [3U][1U] >> 0x16U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (1U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [3U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (1U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [3U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [3U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (1U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [3U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v21 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v21 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [3U][1U] >> 0x17U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (2U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [3U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (2U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [3U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (2U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [3U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (2U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [3U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v22 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v22 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                          [3U][1U] >> 0x18U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (3U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                   [3U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                              [3U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                 [3U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                                         [3U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v23 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v23 = 1U;
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c))) {
            vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24 
                = (3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c) 
                         >> 1U));
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[0U] 
                    & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enq)) 
                   & (((~ vlSelfRef.branch[0U]) | (
                                                   vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[0U] 
                                                   >> 2U)) 
                      | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                          (0x7fU 
                                                           & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[0U] 
                                                                << 0x1dU) 
                                                               | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[0U] 
                                                                  >> 3U)) 
                                                              - 
                                                              ((vlSelfRef.branch[0U] 
                                                                << 0xbU) 
                                                               | (vlSelfRef.branch[0U] 
                                                                  >> 0x15U)))))))))) {
            vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25[0U] 
                = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[0U];
            vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25[1U] 
                = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[1U];
            vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25[2U] 
                = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[2U];
            vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25 
                = (3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enq) 
                         >> 1U));
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25 = 1U;
        }
        if ((1U & vlSelfRef.branch[0U])) {
            if (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                  [0U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                 [0U][0U] >> 2U))) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                          [0U][0U] 
                                                          << 0x1dU) 
                                                         | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                            [0U][0U] 
                                                            >> 3U)) 
                                                        - 
                                                        ((vlSelfRef.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.branch[0U] 
                                                            >> 0x15U)))))))) {
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v26 = 1U;
            }
            if (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                  [1U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                 [1U][0U] >> 2U))) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                          [1U][0U] 
                                                          << 0x1dU) 
                                                         | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                            [1U][0U] 
                                                            >> 3U)) 
                                                        - 
                                                        ((vlSelfRef.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.branch[0U] 
                                                            >> 0x15U)))))))) {
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v27 = 1U;
            }
            if (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                  [2U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                 [2U][0U] >> 2U))) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                          [2U][0U] 
                                                          << 0x1dU) 
                                                         | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                            [2U][0U] 
                                                            >> 3U)) 
                                                        - 
                                                        ((vlSelfRef.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.branch[0U] 
                                                            >> 0x15U)))))))) {
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v28 = 1U;
            }
            if (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                  [3U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                 [3U][0U] >> 2U))) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                          [3U][0U] 
                                                          << 0x1dU) 
                                                         | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                                                            [3U][0U] 
                                                            >> 3U)) 
                                                        - 
                                                        ((vlSelfRef.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.branch[0U] 
                                                            >> 0x15U)))))))) {
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v29 = 1U;
            }
            if (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                  [0U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                 [0U][0U] >> 2U))) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                          [0U][0U] 
                                                          << 0x1dU) 
                                                         | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                            [0U][0U] 
                                                            >> 3U)) 
                                                        - 
                                                        ((vlSelfRef.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.branch[0U] 
                                                            >> 0x15U)))))))) {
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v26 = 1U;
            }
            if (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                  [1U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                 [1U][0U] >> 2U))) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                          [1U][0U] 
                                                          << 0x1dU) 
                                                         | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                            [1U][0U] 
                                                            >> 3U)) 
                                                        - 
                                                        ((vlSelfRef.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.branch[0U] 
                                                            >> 0x15U)))))))) {
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v27 = 1U;
            }
            if (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                  [2U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                 [2U][0U] >> 2U))) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                          [2U][0U] 
                                                          << 0x1dU) 
                                                         | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                            [2U][0U] 
                                                            >> 3U)) 
                                                        - 
                                                        ((vlSelfRef.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.branch[0U] 
                                                            >> 0x15U)))))))) {
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v28 = 1U;
            }
            if (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                  [3U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                 [3U][0U] >> 2U))) 
                 & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                    (0x7fU 
                                                     & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                          [3U][0U] 
                                                          << 0x1dU) 
                                                         | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                            [3U][0U] 
                                                            >> 3U)) 
                                                        - 
                                                        ((vlSelfRef.branch[0U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.branch[0U] 
                                                            >> 0x15U)))))))) {
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v29 = 1U;
            }
        }
        if ((((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
               [0U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                              [0U][0U] >> 0x11U))) 
              & (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                 >> 0xeU)) & ((0xfffffffU & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                              [0U][1U] 
                                              << 7U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                [0U][0U] 
                                                >> 0x19U))) 
                              == (0xfffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xdU] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                                                   >> 0x13U)))))) {
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v4 = 1U;
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [0U][1U] >> 0x15U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (0xcU 
                                                             & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                [0U][0U] 
                                                                >> 0x15U)), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                       [0U][0U] 
                                                                       >> 0x15U)), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                       [0U][0U] 
                                                                       >> 0x15U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xcU 
                                                                        & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                           [0U][0U] 
                                                                           >> 0x15U)), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0xcU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                              [0U][0U] 
                                                              >> 0x15U)), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0xcU 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                      [0U][0U] 
                                                                      >> 0x15U)), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v5 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v5 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [0U][1U] >> 0x16U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (1U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [0U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (1U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [0U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [0U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (1U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [0U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v6 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v6 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [0U][1U] >> 0x17U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (2U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [0U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (2U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [0U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (2U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [0U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (2U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [0U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v7 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v7 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [0U][1U] >> 0x18U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (3U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [0U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [0U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [0U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [0U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [0U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v8 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v8 = 1U;
            }
        }
        if ((((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
               [1U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                              [1U][0U] >> 0x11U))) 
              & (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                 >> 0xeU)) & ((0xfffffffU & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                              [1U][1U] 
                                              << 7U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                [1U][0U] 
                                                >> 0x19U))) 
                              == (0xfffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xdU] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                                                   >> 0x13U)))))) {
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v9 = 1U;
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [1U][1U] >> 0x15U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (0xcU 
                                                             & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                [1U][0U] 
                                                                >> 0x15U)), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                       [1U][0U] 
                                                                       >> 0x15U)), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                       [1U][0U] 
                                                                       >> 0x15U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xcU 
                                                                        & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                           [1U][0U] 
                                                                           >> 0x15U)), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0xcU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                              [1U][0U] 
                                                              >> 0x15U)), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0xcU 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                      [1U][0U] 
                                                                      >> 0x15U)), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v10 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v10 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [1U][1U] >> 0x16U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (1U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [1U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (1U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [1U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [1U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (1U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [1U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v11 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v11 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [1U][1U] >> 0x17U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (2U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [1U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (2U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [1U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (2U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [1U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (2U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [1U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v12 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v12 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [1U][1U] >> 0x18U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (3U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [1U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [1U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [1U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [1U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [1U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v13 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v13 = 1U;
            }
        }
        if ((((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
               [2U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                              [2U][0U] >> 0x11U))) 
              & (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                 >> 0xeU)) & ((0xfffffffU & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                              [2U][1U] 
                                              << 7U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                [2U][0U] 
                                                >> 0x19U))) 
                              == (0xfffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xdU] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                                                   >> 0x13U)))))) {
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v14 = 1U;
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [2U][1U] >> 0x15U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (0xcU 
                                                             & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                [2U][0U] 
                                                                >> 0x15U)), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                       [2U][0U] 
                                                                       >> 0x15U)), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                       [2U][0U] 
                                                                       >> 0x15U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xcU 
                                                                        & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                           [2U][0U] 
                                                                           >> 0x15U)), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0xcU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                              [2U][0U] 
                                                              >> 0x15U)), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0xcU 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                      [2U][0U] 
                                                                      >> 0x15U)), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v15 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v15 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [2U][1U] >> 0x16U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (1U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [2U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (1U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [2U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [2U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (1U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [2U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v16 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v16 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [2U][1U] >> 0x17U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (2U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [2U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (2U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [2U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (2U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [2U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (2U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [2U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v17 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v17 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [2U][1U] >> 0x18U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (3U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [2U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [2U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [2U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [2U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [2U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v18 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v18 = 1U;
            }
        }
        if ((((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
               [3U][0U] & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                              [3U][0U] >> 0x11U))) 
              & (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                 >> 0xeU)) & ((0xfffffffU & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                              [3U][1U] 
                                              << 7U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                [3U][0U] 
                                                >> 0x19U))) 
                              == (0xfffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xdU] 
                                                 << 0xdU) 
                                                | (vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                                                   >> 0x13U)))))) {
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v19 = 1U;
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [3U][1U] >> 0x15U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (0xcU 
                                                             & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                [3U][0U] 
                                                                >> 0x15U)), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                       [3U][0U] 
                                                                       >> 0x15U)), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0xcU 
                                                                    & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                       [3U][0U] 
                                                                       >> 0x15U)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0xcU 
                                                                        & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                           [3U][0U] 
                                                                           >> 0x15U)), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0xcU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                              [3U][0U] 
                                                              >> 0x15U)), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0xcU 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                      [3U][0U] 
                                                                      >> 0x15U)), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v20 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v20 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [3U][1U] >> 0x16U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (1U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [3U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (1U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (1U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [3U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (1U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [3U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (1U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [3U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v21 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v21 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [3U][1U] >> 0x17U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (2U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [3U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (2U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (2U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [3U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (2U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [3U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (2U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [3U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v22 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v22 = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                          [3U][1U] >> 0x18U)))) {
                vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 
                    = ((0x22eU >= ((IData)(0x1afU) 
                                   + (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                            (3U 
                                                             | (0xcU 
                                                                & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                   [3U][0U] 
                                                                   >> 0x15U))), 3U))))
                        ? (0xffU & (((0U == (0x1fU 
                                             & ((IData)(0x1afU) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U)))))
                                      ? 0U : (vlSymsp->TOP__Top__soc.MemC_stat[
                                              (((IData)(0x1b6U) 
                                                + (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (3U 
                                                                    | (0xcU 
                                                                       & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                          [3U][0U] 
                                                                          >> 0x15U))), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1afU) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        | (0xcU 
                                                                           & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                              [3U][0U] 
                                                                              >> 0x15U))), 3U))))))) 
                                    | (vlSymsp->TOP__Top__soc.MemC_stat[
                                       (((IData)(0x1afU) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           | (0xcU 
                                                              & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                 [3U][0U] 
                                                                 >> 0x15U))), 3U))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x1afU) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   | (0xcU 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                                                                         [3U][0U] 
                                                                         >> 0x15U))), 3U)))))))
                        : 0U);
                vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v23 
                    = vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0;
                vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v23 = 1U;
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c))) {
            vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24 
                = (3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c) 
                         >> 1U));
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24 = 1U;
        }
        if ((1U & ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[0U] 
                    & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enq)) 
                   & (((~ vlSelfRef.branch[0U]) | (
                                                   vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[0U] 
                                                   >> 2U)) 
                      | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                          (0x7fU 
                                                           & (((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[0U] 
                                                                << 0x1dU) 
                                                               | (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[0U] 
                                                                  >> 3U)) 
                                                              - 
                                                              ((vlSelfRef.branch[0U] 
                                                                << 0xbU) 
                                                               | (vlSelfRef.branch[0U] 
                                                                  >> 0x15U)))))))))) {
            vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25[0U] 
                = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[0U];
            vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25[1U] 
                = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[1U];
            vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25[2U] 
                = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[2U];
            vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25 
                = (3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enq) 
                         >> 1U));
            vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25 = 1U;
        }
    }
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__8(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__8\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx;
    __PVT__lb__DOT__genblk1__BRA__0__KET____DOT__startIdx = 0;
    CData/*0:0*/ lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable;
    lb__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__IN_enable = 0;
    CData/*3:0*/ __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx;
    __PVT__lb__DOT__genblk1__BRA__1__KET____DOT__startIdx = 0;
    CData/*0:0*/ lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable;
    lb__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__IN_enable = 0;
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
    CData/*0:0*/ __PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx;
    __PVT__lsu__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx = 0;
    // Body
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v4) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v6) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v8) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v10) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v12) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] 
            = (0x1fU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][2U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v35] 
            = (4ULL | vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v35]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] 
            = (0xffffffefU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][2U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] 
            = ((0xfU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][1U]) | (vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v14 
                             << 4U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][2U]) | (vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v14 
                             >> 0x1cU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] 
            = ((0xfffffff7U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v15) 
                             << 3U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] 
            = ((0xfffffff9U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v16) 
                             << 1U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0x3ffffffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v17) 
                             << 0x1aU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] 
            = ((0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v17) 
                             >> 6U));
    }
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v18) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfc07ffffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v18) 
                             << 0x13U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfff80fffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v19) 
                             << 0xcU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfffff01fU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v20) 
                             << 5U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xffffffefU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v21) 
                             << 4U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfffffff7U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v22) 
                             << 3U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][0U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v24) 
                             << 1U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = (1U | vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v26) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] 
            = (0x1fU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][2U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] 
            = (0xffffffefU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][2U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] 
            = ((0xfU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][1U]) | (vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v28 
                             << 4U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][2U]) | (vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v28 
                             >> 0x1cU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] 
            = ((0xfffffff7U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v29) 
                             << 3U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] 
            = ((0xfffffff9U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v30) 
                             << 1U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0x3ffffffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v31) 
                             << 0x1aU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] 
            = ((0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v31) 
                             >> 6U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfc07ffffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v32) 
                             << 0x13U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfff80fffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v33) 
                             << 0xcU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfffff01fU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v34) 
                             << 5U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xffffffefU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v35) 
                             << 4U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfffffff7U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v36) 
                             << 3U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][0U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v38) 
                             << 1U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = (1U | vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v46) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfc07ffffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v46) 
                             << 0x13U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfff80fffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v47) 
                             << 0xcU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfffff01fU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v48) 
                             << 5U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xffffffefU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v49) 
                             << 4U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfffffff7U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v50) 
                             << 3U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][0U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v52) 
                             << 1U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = (1U | vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__lateLoadUOp__v54) {
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] 
            = (0x1fU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][2U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] 
            = (0xffffffefU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][2U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] 
            = ((0xfU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][1U]) | (vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v56 
                             << 4U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][2U]) | (vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v56 
                             >> 0x1cU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] 
            = ((0xfffffff7U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v57) 
                             << 3U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] 
            = ((0xfffffff9U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v58) 
                             << 1U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0x3ffffffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v59) 
                             << 0x1aU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] 
            = ((0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v59) 
                             >> 6U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfc07ffffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v60) 
                             << 0x13U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfff80fffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v61) 
                             << 0xcU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfffff01fU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v62) 
                             << 5U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xffffffefU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v63) 
                             << 4U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfffffff7U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v64) 
                             << 3U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][0U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v66) 
                             << 1U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = (1U | vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v0) {
        vlSelfRef.__PVT__lb__DOT__entries[0U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][1U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][2U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v1) {
        vlSelfRef.__PVT__lb__DOT__entries[1U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [0U][0U]);
        vlSelfRef.__PVT__lb__DOT__entries[2U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__entries[3U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][0U]);
        vlSelfRef.__PVT__lb__DOT__entries[4U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[5U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[6U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[7U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[8U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[9U] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[0xaU] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[0xbU] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[0xcU] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[0xdU] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[0xeU] = 2ULL;
        vlSelfRef.__PVT__lb__DOT__entries[0xfU] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v16) {
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v16] 
            = (0x3ffffffffffffffbULL & vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v16]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v17) {
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v17] 
            = (0x3ffffffffffffffbULL & vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v17]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v18) {
        vlSelfRef.__PVT__lb__DOT__entries[0U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v19) {
        vlSelfRef.__PVT__lb__DOT__entries[1U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v20) {
        vlSelfRef.__PVT__lb__DOT__entries[2U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v21) {
        vlSelfRef.__PVT__lb__DOT__entries[3U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v22) {
        vlSelfRef.__PVT__lb__DOT__entries[4U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v23) {
        vlSelfRef.__PVT__lb__DOT__entries[5U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v24) {
        vlSelfRef.__PVT__lb__DOT__entries[6U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v25) {
        vlSelfRef.__PVT__lb__DOT__entries[7U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v26) {
        vlSelfRef.__PVT__lb__DOT__entries[8U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v27) {
        vlSelfRef.__PVT__lb__DOT__entries[9U] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v28) {
        vlSelfRef.__PVT__lb__DOT__entries[0xaU] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v29) {
        vlSelfRef.__PVT__lb__DOT__entries[0xbU] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v30) {
        vlSelfRef.__PVT__lb__DOT__entries[0xcU] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v31) {
        vlSelfRef.__PVT__lb__DOT__entries[0xdU] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v32) {
        vlSelfRef.__PVT__lb__DOT__entries[0xeU] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v33) {
        vlSelfRef.__PVT__lb__DOT__entries[0xfU] = 2ULL;
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v34) {
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v34] 
            = (0x3ffffffffffffffbULL & vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v34]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v36) {
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v36] 
            = (0x3ffffffffffffffdULL & vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v36]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v37) {
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v37] 
            = (0x3ffffffffffffffbULL & vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v37]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v38) {
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v38] 
            = (4ULL | vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v38]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] 
            = (0x1fU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][2U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][3U] = 0U;
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] 
            = (0xffffffefU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
               [1U][2U]);
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] 
            = ((0xfU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][1U]) | (vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v42 
                             << 4U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][2U] 
            = ((0xfffffff0U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][2U]) | (vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v42 
                             >> 0x1cU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] 
            = ((0xfffffff7U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v43) 
                             << 3U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] 
            = ((0xfffffff9U & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v44) 
                             << 1U));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][0U] 
            = ((0x3ffffffU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v45) 
                             << 0x1aU));
        vlSelfRef.__PVT__lb__DOT__lateLoadUOp[1U][1U] 
            = ((0xfffffffeU & vlSelfRef.__PVT__lb__DOT__lateLoadUOp
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lb__DOT__lateLoadUOp__v45) 
                             >> 6U));
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v39) {
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v39] 
            = ((0x7fffffffffffffULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v39]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v39)) 
                  << 0x37U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v40] 
            = ((0x3f80ffffffffffffULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v40]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v40)) 
                  << 0x30U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v41] 
            = ((0x3fff01ffffffffffULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v41]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v41)) 
                  << 0x29U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v42] 
            = ((0x3fffffffffffffbfULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v42]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v42)) 
                  << 6U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v43] 
            = ((0x3fffffffffffffdfULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v43]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v43)) 
                  << 5U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v44] 
            = ((0x3fffff800000007fULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v44]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v44)) 
                  << 7U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v45] 
            = ((0x3ffffe7fffffffffULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v45]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v45)) 
                  << 0x27U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v46] 
            = ((0x3ffffffffffffffdULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v46]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v46)) 
                  << 1U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v47] 
            = ((0x3fffffffffffffefULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v47]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v47)) 
                  << 4U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v48] 
            = ((0x3ffffffffffffffbULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v48]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v48)) 
                  << 2U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v49] 
            = ((0x3ffffffffffffff7ULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v49]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v49)) 
                  << 3U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v50] 
            = (1ULL | vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v50]);
    }
    if (vlSelfRef.__VdlySet__lb__DOT__entries__v51) {
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v51] 
            = ((0x7fffffffffffffULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v51]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v51)) 
                  << 0x37U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v52] 
            = ((0x3f80ffffffffffffULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v52]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v52)) 
                  << 0x30U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v53] 
            = ((0x3fff01ffffffffffULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v53]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v53)) 
                  << 0x29U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v54] 
            = ((0x3fffffffffffffbfULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v54]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v54)) 
                  << 6U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v55] 
            = ((0x3fffffffffffffdfULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v55]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v55)) 
                  << 5U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v56] 
            = ((0x3fffff800000007fULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v56]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v56)) 
                  << 7U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v57] 
            = ((0x3ffffe7fffffffffULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v57]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v57)) 
                  << 0x27U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v58] 
            = ((0x3ffffffffffffffdULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v58]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v58)) 
                  << 1U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v59] 
            = ((0x3fffffffffffffefULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v59]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v59)) 
                  << 4U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v60] 
            = ((0x3ffffffffffffffbULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v60]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v60)) 
                  << 2U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v61] 
            = ((0x3ffffffffffffff7ULL & vlSelfRef.__PVT__lb__DOT__entries
                [vlSelfRef.__VdlyDim0__lb__DOT__entries__v61]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__lb__DOT__entries__v61)) 
                  << 3U));
        vlSelfRef.__PVT__lb__DOT__entries[vlSelfRef.__VdlyDim0__lb__DOT__entries__v62] 
            = (1ULL | vlSelfRef.__PVT__lb__DOT__entries
               [vlSelfRef.__VdlyDim0__lb__DOT__entries__v62]);
    }
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
    vlSelfRef.__PVT__AGU_uop[0U][0U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[0U];
    vlSelfRef.__PVT__AGU_uop[0U][1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[1U];
    vlSelfRef.__PVT__AGU_uop[0U][2U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp[2U];
    vlSelfRef.__PVT__AGU_uop[1U][0U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[0U];
    vlSelfRef.__PVT__AGU_uop[1U][1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[1U];
    vlSelfRef.__PVT__AGU_uop[1U][2U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp[2U];
    vlSelfRef.__PVT__lb__DOT__lastBaseIndex = ((IData)(vlSymsp->TOP.rst)
                                                ? 0U
                                                : (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN));
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
    vlSelfRef.__PVT__lb__DOT__isBefore[0U] = vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range;
    vlSelfRef.__PVT__lb__DOT__isBefore[1U] = vlSelfRef.lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range;
}
