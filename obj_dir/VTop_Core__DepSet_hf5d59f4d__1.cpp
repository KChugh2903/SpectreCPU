// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__9(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__9\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 = 0;
    CData/*0:0*/ genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 = 0;
    // Body
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v0 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v0 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 1U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v1 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v1 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 2U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v2 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v2 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 3U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v3 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v3 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 4U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v4 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v4 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 5U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v5 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v5 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 6U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v6 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v6 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v7 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v7 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v8 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v8 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 1U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v9 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v9 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 2U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v10 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v10 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 3U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v11 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v11 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 4U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v12 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v12 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 5U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v13 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v13 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 6U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v14 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v14 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v15 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v15 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [2U]));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v16 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v16 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 1U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v17 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v17 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 2U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v18 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v18 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 3U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v19 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v19 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 4U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v20 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v20 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 5U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v21 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v21 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 6U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v22 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v22 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v23 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v23 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [3U]));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v24 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v24 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 1U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v25 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v25 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 2U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v26 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v26 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 3U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v27 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v27 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 4U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v28 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v28 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 5U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v29 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v29 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 6U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v30 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v30 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v31 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [4U]));
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v31 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v32 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 1U)));
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v32 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v33 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 2U)));
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v33 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v34 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 3U)));
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v34 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v35 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 4U)));
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v35 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v36 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 5U)));
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v36 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v37 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 6U)));
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v37 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v38 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v38 = 1U;
    genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v39 
        = genblk1__BRA__3__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v39 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v0 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v0 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 1U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v1 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v1 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 2U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v2 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v2 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 3U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v3 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v3 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 4U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v4 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v4 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 5U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v5 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v5 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [0U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 6U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v6 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v6 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [0U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v7 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v7 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v8 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v8 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 1U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v9 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v9 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 2U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v10 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v10 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 3U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v11 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v11 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 4U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v12 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v12 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 5U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v13 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v13 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [1U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 6U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v14 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v14 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [1U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v15 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v15 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [2U]));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v16 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v16 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 1U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v17 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v17 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 2U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v18 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v18 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 3U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v19 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v19 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 4U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v20 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v20 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 5U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v21 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v21 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [2U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 6U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v22 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v22 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [2U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v23 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v23 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [3U]));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v24 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v24 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 1U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v25 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v25 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 2U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v26 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v26 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 3U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v27 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v27 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 4U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v28 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v28 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 5U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v29 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v29 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [3U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 6U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v30 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v30 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [3U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v31 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
                   & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 1U)
                  : vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [4U]));
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v31 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v32 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 1U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 2U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 1U)));
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v32 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v33 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 2U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 3U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 2U)));
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v33 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v34 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 3U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 4U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 3U)));
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v34 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v35 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 4U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 5U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 4U)));
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v35 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v36 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 6U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 5U)));
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v36 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v37 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = (1U & (((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                    & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                       >> 6U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                  & (~ vlSelfRef.branch[0U])) ? (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                                 [4U] 
                                                 >> 7U)
                  : (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 6U)));
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v37 = 1U;
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v38 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v38 = 1U;
    genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0 
        = ((1U & (~ ((((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                       & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c) 
                          >> 7U)) & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free))) 
                     & (~ vlSelfRef.branch[0U])))) 
           && (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                     [4U] >> 7U)));
    vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v39 
        = genblk1__BRA__4__KET____DOT__iq__DOT____Vlvbound_hfe0d59e6__0;
    vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v39 = 1U;
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__23(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__23\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 = 0;
    // Body
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs 
        = vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt;
    vlSelfRef.LD_uop[0U][0U] = 0U;
    vlSelfRef.LD_uop[0U][1U] = 0U;
    vlSelfRef.LD_uop[0U][2U] = 0U;
    vlSelfRef.LD_uop[0U][3U] = 0U;
    vlSelfRef.LD_uop[0U][4U] = 0U;
    vlSelfRef.LD_uop[0U][5U] = 0U;
    if ((1U & vlSelfRef.__PVT__ld__DOT__outUOpReg[0U][0U])) {
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[0U][0U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[0U][1U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[0U][2U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[0U][3U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[0U][4U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[0U][5U];
        vlSelfRef.LD_uop[0U][0U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U];
        vlSelfRef.LD_uop[0U][1U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U];
        vlSelfRef.LD_uop[0U][2U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U];
        vlSelfRef.LD_uop[0U][3U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U];
        vlSelfRef.LD_uop[0U][4U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U];
        vlSelfRef.LD_uop[0U][5U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U];
        if ((1U & (IData)(vlSelfRef.__PVT__ld__DOT__operandIsReg))) {
            vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                = vlSelfRef.__Vcellout__rfMux__OUT_readData[0U];
            vlSelfRef.LD_uop[0U][4U] = ((0x7fffffU 
                                         & vlSelfRef.LD_uop
                                         [0U][4U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                           << 0x17U));
            vlSelfRef.LD_uop[0U][5U] = (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                        >> 9U);
        }
        if ((2U & (IData)(vlSelfRef.__PVT__ld__DOT__operandIsReg))) {
            vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                = vlSelfRef.__Vcellout__rfMux__OUT_readData[5U];
            vlSelfRef.LD_uop[0U][3U] = ((0x7fffffU 
                                         & vlSelfRef.LD_uop
                                         [0U][3U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                                           << 0x17U));
            vlSelfRef.LD_uop[0U][4U] = ((0xff800000U 
                                         & vlSelfRef.LD_uop
                                         [0U][4U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                                           >> 9U));
        }
        vlSelfRef.LD_uop[0U][0U] = (0xffefffffU & vlSelfRef.LD_uop
                                    [0U][0U]);
        vlSelfRef.ld__DOT____Vlvbound_h51828e45__0 
            = (((IData)((vlSelfRef.__PVT__PC_readData
                         [0U] >> 7U)) << 4U) | (0xeU 
                                                & (vlSelfRef.__PVT__ld__DOT__outUOpReg
                                                   [0U][2U] 
                                                   >> 0x13U)));
        vlSelfRef.LD_uop[0U][2U] = ((0x7fffffU & vlSelfRef.LD_uop
                                     [0U][2U]) | (vlSelfRef.ld__DOT____Vlvbound_h51828e45__0 
                                                  << 0x17U));
        vlSelfRef.LD_uop[0U][3U] = ((0xff800000U & 
                                     vlSelfRef.LD_uop
                                     [0U][3U]) | (vlSelfRef.ld__DOT____Vlvbound_h51828e45__0 
                                                  >> 9U));
        vlSelfRef.ld__DOT____Vlvbound_h326e43bc__0 
            = (7U & (IData)((vlSelfRef.__PVT__PC_readData
                             [0U] >> 4U)));
        vlSelfRef.LD_uop[0U][2U] = ((0xfff1ffffU & 
                                     vlSelfRef.LD_uop
                                     [0U][2U]) | ((IData)(vlSelfRef.ld__DOT____Vlvbound_h326e43bc__0) 
                                                  << 0x11U));
        vlSelfRef.ld__DOT____Vlvbound_h326e7268__0 
            = (7U & (IData)((vlSelfRef.__PVT__PC_readData
                             [0U] >> 1U)));
        vlSelfRef.LD_uop[0U][2U] = ((0xfffe3fffU & 
                                     vlSelfRef.LD_uop
                                     [0U][2U]) | ((IData)(vlSelfRef.ld__DOT____Vlvbound_h326e7268__0) 
                                                  << 0xeU));
        if (((7U & (vlSelfRef.__PVT__ld__DOT__outUOpReg
                    [0U][2U] >> 0x14U)) == (7U & (IData)(
                                                         (vlSelfRef.__PVT__PC_readData
                                                          [0U] 
                                                          >> 1U))))) {
            vlSelfRef.ld__DOT____Vlvbound_hf5f20e55__1 
                = (1U & (IData)(vlSelfRef.__PVT__PC_readData
                                [0U]));
            vlSelfRef.LD_uop[0U][0U] = ((0xffefffffU 
                                         & vlSelfRef.LD_uop
                                         [0U][0U]) 
                                        | ((IData)(vlSelfRef.ld__DOT____Vlvbound_hf5f20e55__1) 
                                           << 0x14U));
        }
    }
    vlSelfRef.LD_uop[1U][0U] = 0U;
    vlSelfRef.LD_uop[1U][1U] = 0U;
    vlSelfRef.LD_uop[1U][2U] = 0U;
    vlSelfRef.LD_uop[1U][3U] = 0U;
    vlSelfRef.LD_uop[1U][4U] = 0U;
    vlSelfRef.LD_uop[1U][5U] = 0U;
    if ((1U & vlSelfRef.__PVT__ld__DOT__outUOpReg[1U][0U])) {
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[1U][0U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[1U][1U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[1U][2U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[1U][3U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[1U][4U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[1U][5U];
        vlSelfRef.LD_uop[1U][0U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U];
        vlSelfRef.LD_uop[1U][1U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U];
        vlSelfRef.LD_uop[1U][2U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U];
        vlSelfRef.LD_uop[1U][3U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U];
        vlSelfRef.LD_uop[1U][4U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U];
        vlSelfRef.LD_uop[1U][5U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U];
        if ((4U & (IData)(vlSelfRef.__PVT__ld__DOT__operandIsReg))) {
            vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                = vlSelfRef.__Vcellout__rfMux__OUT_readData[1U];
            vlSelfRef.LD_uop[1U][4U] = ((0x7fffffU 
                                         & vlSelfRef.LD_uop
                                         [1U][4U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                           << 0x17U));
            vlSelfRef.LD_uop[1U][5U] = (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                        >> 9U);
        }
        if ((8U & (IData)(vlSelfRef.__PVT__ld__DOT__operandIsReg))) {
            vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                = vlSelfRef.__Vcellout__rfMux__OUT_readData[6U];
            vlSelfRef.LD_uop[1U][3U] = ((0x7fffffU 
                                         & vlSelfRef.LD_uop
                                         [1U][3U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                                           << 0x17U));
            vlSelfRef.LD_uop[1U][4U] = ((0xff800000U 
                                         & vlSelfRef.LD_uop
                                         [1U][4U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                                           >> 9U));
        }
        vlSelfRef.LD_uop[1U][0U] = (0xffefffffU & vlSelfRef.LD_uop
                                    [1U][0U]);
        vlSelfRef.ld__DOT____Vlvbound_h51828e45__0 
            = (((IData)((vlSelfRef.__PVT__PC_readData
                         [1U] >> 7U)) << 4U) | (0xeU 
                                                & (vlSelfRef.__PVT__ld__DOT__outUOpReg
                                                   [1U][2U] 
                                                   >> 0x13U)));
        vlSelfRef.LD_uop[1U][2U] = ((0x7fffffU & vlSelfRef.LD_uop
                                     [1U][2U]) | (vlSelfRef.ld__DOT____Vlvbound_h51828e45__0 
                                                  << 0x17U));
        vlSelfRef.LD_uop[1U][3U] = ((0xff800000U & 
                                     vlSelfRef.LD_uop
                                     [1U][3U]) | (vlSelfRef.ld__DOT____Vlvbound_h51828e45__0 
                                                  >> 9U));
        vlSelfRef.ld__DOT____Vlvbound_h326e43bc__0 
            = (7U & (IData)((vlSelfRef.__PVT__PC_readData
                             [1U] >> 4U)));
        vlSelfRef.LD_uop[1U][2U] = ((0xfff1ffffU & 
                                     vlSelfRef.LD_uop
                                     [1U][2U]) | ((IData)(vlSelfRef.ld__DOT____Vlvbound_h326e43bc__0) 
                                                  << 0x11U));
        vlSelfRef.ld__DOT____Vlvbound_h326e7268__0 
            = (7U & (IData)((vlSelfRef.__PVT__PC_readData
                             [1U] >> 1U)));
        vlSelfRef.LD_uop[1U][2U] = ((0xfffe3fffU & 
                                     vlSelfRef.LD_uop
                                     [1U][2U]) | ((IData)(vlSelfRef.ld__DOT____Vlvbound_h326e7268__0) 
                                                  << 0xeU));
        if (((7U & (vlSelfRef.__PVT__ld__DOT__outUOpReg
                    [1U][2U] >> 0x14U)) == (7U & (IData)(
                                                         (vlSelfRef.__PVT__PC_readData
                                                          [1U] 
                                                          >> 1U))))) {
            vlSelfRef.ld__DOT____Vlvbound_hf5f20e55__1 
                = (1U & (IData)(vlSelfRef.__PVT__PC_readData
                                [1U]));
            vlSelfRef.LD_uop[1U][0U] = ((0xffefffffU 
                                         & vlSelfRef.LD_uop
                                         [1U][0U]) 
                                        | ((IData)(vlSelfRef.ld__DOT____Vlvbound_hf5f20e55__1) 
                                           << 0x14U));
        }
    }
    vlSelfRef.LD_uop[2U][0U] = 0U;
    vlSelfRef.LD_uop[2U][1U] = 0U;
    vlSelfRef.LD_uop[2U][2U] = 0U;
    vlSelfRef.LD_uop[2U][3U] = 0U;
    vlSelfRef.LD_uop[2U][4U] = 0U;
    vlSelfRef.LD_uop[2U][5U] = 0U;
    if ((1U & vlSelfRef.__PVT__ld__DOT__outUOpReg[2U][0U])) {
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[2U][0U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[2U][1U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[2U][2U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[2U][3U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[2U][4U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[2U][5U];
        vlSelfRef.LD_uop[2U][0U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U];
        vlSelfRef.LD_uop[2U][1U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U];
        vlSelfRef.LD_uop[2U][2U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U];
        vlSelfRef.LD_uop[2U][3U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U];
        vlSelfRef.LD_uop[2U][4U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U];
        vlSelfRef.LD_uop[2U][5U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U];
        if ((0x10U & (IData)(vlSelfRef.__PVT__ld__DOT__operandIsReg))) {
            vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                = vlSelfRef.__Vcellout__rfMux__OUT_readData[2U];
            vlSelfRef.LD_uop[2U][4U] = ((0x7fffffU 
                                         & vlSelfRef.LD_uop
                                         [2U][4U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                           << 0x17U));
            vlSelfRef.LD_uop[2U][5U] = (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                        >> 9U);
        }
        if ((0x20U & (IData)(vlSelfRef.__PVT__ld__DOT__operandIsReg))) {
            vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                = vlSelfRef.__Vcellout__rfMux__OUT_readData[7U];
            vlSelfRef.LD_uop[2U][3U] = ((0x7fffffU 
                                         & vlSelfRef.LD_uop
                                         [2U][3U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                                           << 0x17U));
            vlSelfRef.LD_uop[2U][4U] = ((0xff800000U 
                                         & vlSelfRef.LD_uop
                                         [2U][4U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51acca77__0 
                                           >> 9U));
        }
        vlSelfRef.LD_uop[2U][0U] = (0xffefffffU & vlSelfRef.LD_uop
                                    [2U][0U]);
    }
    vlSelfRef.LD_uop[3U][0U] = 0U;
    vlSelfRef.LD_uop[3U][1U] = 0U;
    vlSelfRef.LD_uop[3U][2U] = 0U;
    vlSelfRef.LD_uop[3U][3U] = 0U;
    vlSelfRef.LD_uop[3U][4U] = 0U;
    vlSelfRef.LD_uop[3U][5U] = 0U;
    if ((1U & vlSelfRef.__PVT__ld__DOT__outUOpReg[3U][0U])) {
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[3U][0U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[3U][1U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[3U][2U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[3U][3U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[3U][4U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[3U][5U];
        vlSelfRef.LD_uop[3U][0U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U];
        vlSelfRef.LD_uop[3U][1U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U];
        vlSelfRef.LD_uop[3U][2U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U];
        vlSelfRef.LD_uop[3U][3U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U];
        vlSelfRef.LD_uop[3U][4U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U];
        vlSelfRef.LD_uop[3U][5U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U];
        if ((0x40U & (IData)(vlSelfRef.__PVT__ld__DOT__operandIsReg))) {
            vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                = vlSelfRef.__Vcellout__rfMux__OUT_readData[3U];
            vlSelfRef.LD_uop[3U][4U] = ((0x7fffffU 
                                         & vlSelfRef.LD_uop
                                         [3U][4U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                           << 0x17U));
            vlSelfRef.LD_uop[3U][5U] = (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                        >> 9U);
        }
        vlSelfRef.LD_uop[3U][0U] = (0xffefffffU & vlSelfRef.LD_uop
                                    [3U][0U]);
    }
    vlSelfRef.LD_uop[4U][0U] = 0U;
    vlSelfRef.LD_uop[4U][1U] = 0U;
    vlSelfRef.LD_uop[4U][2U] = 0U;
    vlSelfRef.LD_uop[4U][3U] = 0U;
    vlSelfRef.LD_uop[4U][4U] = 0U;
    vlSelfRef.LD_uop[4U][5U] = 0U;
    if ((1U & vlSelfRef.__PVT__ld__DOT__outUOpReg[4U][0U])) {
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[4U][0U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[4U][1U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[4U][2U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[4U][3U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[4U][4U];
        vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U] 
            = vlSelfRef.__PVT__ld__DOT__outUOpReg[4U][5U];
        vlSelfRef.LD_uop[4U][0U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[0U];
        vlSelfRef.LD_uop[4U][1U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[1U];
        vlSelfRef.LD_uop[4U][2U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[2U];
        vlSelfRef.LD_uop[4U][3U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[3U];
        vlSelfRef.LD_uop[4U][4U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[4U];
        vlSelfRef.LD_uop[4U][5U] = vlSelfRef.ld__DOT____Vlvbound_h09810eaf__1[5U];
        if ((0x100U & (IData)(vlSelfRef.__PVT__ld__DOT__operandIsReg))) {
            vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                = vlSelfRef.__Vcellout__rfMux__OUT_readData[4U];
            vlSelfRef.LD_uop[4U][4U] = ((0x7fffffU 
                                         & vlSelfRef.LD_uop
                                         [4U][4U]) 
                                        | (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                           << 0x17U));
            vlSelfRef.LD_uop[4U][5U] = (vlSelfRef.ld__DOT____Vlvbound_h51868639__0 
                                        >> 9U);
        }
        vlSelfRef.LD_uop[4U][0U] = (0xffefffffU & vlSelfRef.LD_uop
                                    [4U][0U]);
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__flags = 0U;
    if (((0U == (0xfU & (vlSelfRef.LD_uop[0U][0U] >> 2U))) 
         & (0xbU == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                              >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__flags 
            = (0xfU & (vlSelfRef.LD_uop[0U][1U] >> 0xeU));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__flags = 0U;
    if (((0U == (0xfU & (vlSelfRef.LD_uop[1U][0U] >> 2U))) 
         & (0xbU == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                              >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__flags 
            = (0xfU & (vlSelfRef.LD_uop[1U][1U] >> 0xeU));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__flags = 0U;
    if (((0U == (0xfU & (vlSelfRef.LD_uop[2U][0U] >> 2U))) 
         & (0xbU == (0x3fU & (vlSelfRef.LD_uop[2U][1U] 
                              >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__flags 
            = (0xfU & (vlSelfRef.LD_uop[2U][1U] >> 0xeU));
    }
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][0U] 
        = vlSelfRef.LD_uop[4U][0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][1U] 
        = vlSelfRef.LD_uop[4U][1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][2U] 
        = vlSelfRef.LD_uop[4U][2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][3U] 
        = vlSelfRef.LD_uop[4U][3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][4U] 
        = vlSelfRef.LD_uop[4U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[1U][5U] 
        = vlSelfRef.LD_uop[4U][5U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][0U] 
        = vlSelfRef.LD_uop[3U][0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][1U] 
        = vlSelfRef.LD_uop[3U][1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][2U] 
        = vlSelfRef.LD_uop[3U][2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][3U] 
        = vlSelfRef.LD_uop[3U][3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][4U] 
        = vlSelfRef.LD_uop[3U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[0U][5U] 
        = vlSelfRef.LD_uop[3U][5U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][0U] 
        = vlSelfRef.LD_uop[4U][0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][1U] 
        = vlSelfRef.LD_uop[4U][1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][2U] 
        = vlSelfRef.LD_uop[4U][2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][3U] 
        = vlSelfRef.LD_uop[4U][3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][4U] 
        = vlSelfRef.LD_uop[4U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[1U][5U] 
        = vlSelfRef.LD_uop[4U][5U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][0U] 
        = vlSelfRef.LD_uop[3U][0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][1U] 
        = vlSelfRef.LD_uop[3U][1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][2U] 
        = vlSelfRef.LD_uop[3U][2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][3U] 
        = vlSelfRef.LD_uop[3U][3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][4U] 
        = vlSelfRef.LD_uop[3U][4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[0U][5U] 
        = vlSelfRef.LD_uop[3U][5U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst = 0U;
    if ((((8U == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                           >> 8U))) || (9U == (0x3fU 
                                               & (vlSelfRef.LD_uop
                                                  [0U][1U] 
                                                  >> 8U)))) 
         || (0xaU == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                               >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
            = (((vlSelfRef.LD_uop[0U][5U] << 9U) | 
                (vlSelfRef.LD_uop[0U][4U] >> 0x17U)) 
               + (((- (IData)((1U & (vlSelfRef.LD_uop
                                     [0U][1U] >> 0x19U)))) 
                   << 0xcU) | (0xfffU & (vlSelfRef.LD_uop
                                         [0U][1U] >> 0xeU))));
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst);
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect 
            = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                >> 1U) == (0x7fffffffU & ((vlSelfRef.LD_uop
                                           [0U][4U] 
                                           << 8U) | 
                                          (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x18U))));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst = 0U;
    if ((((8U == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                           >> 8U))) || (9U == (0x3fU 
                                               & (vlSelfRef.LD_uop
                                                  [1U][1U] 
                                                  >> 8U)))) 
         || (0xaU == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                               >> 8U))))) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
            = (((vlSelfRef.LD_uop[1U][5U] << 9U) | 
                (vlSelfRef.LD_uop[1U][4U] >> 0x17U)) 
               + (((- (IData)((1U & (vlSelfRef.LD_uop
                                     [1U][1U] >> 0x19U)))) 
                   << 0xcU) | (0xfffU & (vlSelfRef.LD_uop
                                         [1U][1U] >> 0xeU))));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect 
            = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                >> 1U) == (0x7fffffffU & ((vlSelfRef.LD_uop
                                           [1U][4U] 
                                           << 8U) | 
                                          (vlSelfRef.LD_uop
                                           [1U][3U] 
                                           >> 0x18U))));
    }
    if ((1U == (0xfU & (vlSelfRef.LD_uop[0U][0U] >> 2U)))) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch 
            = ((((((2U == (0x3fU & (vlSelfRef.LD_uop
                                    [0U][1U] >> 8U))) 
                   | (3U == (0x3fU & (vlSelfRef.LD_uop
                                      [0U][1U] >> 8U)))) 
                  | (4U == (0x3fU & (vlSelfRef.LD_uop
                                     [0U][1U] >> 8U)))) 
                 | (5U == (0x3fU & (vlSelfRef.LD_uop
                                    [0U][1U] >> 8U)))) 
                | (6U == (0x3fU & (vlSelfRef.LD_uop
                                   [0U][1U] >> 8U)))) 
               | (7U == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                                  >> 8U))));
    }
    if ((1U == (0xfU & (vlSelfRef.LD_uop[1U][0U] >> 2U)))) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch 
            = ((((((2U == (0x3fU & (vlSelfRef.LD_uop
                                    [1U][1U] >> 8U))) 
                   | (3U == (0x3fU & (vlSelfRef.LD_uop
                                      [1U][1U] >> 8U)))) 
                  | (4U == (0x3fU & (vlSelfRef.LD_uop
                                     [1U][1U] >> 8U)))) 
                 | (5U == (0x3fU & (vlSelfRef.LD_uop
                                    [1U][1U] >> 8U)))) 
                | (6U == (0x3fU & (vlSelfRef.LD_uop
                                   [1U][1U] >> 8U)))) 
               | (7U == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                                  >> 8U))));
    }
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd, 
                    ((vlSelfRef.LD_uop[0U][0U] & ([&]() {
                        vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__fu 
                            = (0xfU & (vlSelfRef.LD_uop
                                       [0U][0U] >> 2U));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__rv 
                            = (0U != (0x403U & ((IData)(1U) 
                                                << (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__fu))));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__Vfuncout 
                            = vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__Vfuncout))) 
                     & (~ (vlSelfRef.LD_uop[0U][1U] 
                           >> 7U))));
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd, 
                    ((vlSelfRef.LD_uop[1U][0U] & ([&]() {
                        vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__fu 
                            = (0xfU & (vlSelfRef.LD_uop
                                       [1U][0U] >> 2U));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__rv 
                            = (0U != (0x403U & ((IData)(1U) 
                                                << (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__fu))));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__Vfuncout 
                            = vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__Vfuncout))) 
                     & (~ (vlSelfRef.LD_uop[1U][1U] 
                           >> 7U))));
    VL_ASSIGNBIT_QI(0U, vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd, 
                    ((vlSelfRef.LD_uop[2U][0U] & ([&]() {
                        vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__fu 
                            = (0xfU & (vlSelfRef.LD_uop
                                       [2U][0U] >> 2U));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__rv 
                            = (0U != (5U & ((IData)(1U) 
                                            << (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__fu))));
                        vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__Vfuncout 
                            = vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__Vfuncout))) 
                     & (~ (vlSelfRef.LD_uop[2U][1U] 
                           >> 7U))));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           + ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           ^ ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           | ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           & ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           << (0x1fU & (vlSelfRef.LD_uop[0U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           >> (0x1fU & (vlSelfRef.LD_uop[0U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           + ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           ^ ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           | ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           & ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           << (0x1fU & (vlSelfRef.LD_uop[1U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           >> (0x1fU & (vlSelfRef.LD_uop[1U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           + ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           ^ ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           | ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           & ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           << (0x1fU & (vlSelfRef.LD_uop[2U][3U] >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__1 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           >> (0x1fU & (vlSelfRef.LD_uop[2U][3U] >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
        = (((vlSelfRef.LD_uop[0U][3U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][2U] 
                                                >> 0x17U)) 
           - ((2U & vlSelfRef.LD_uop[0U][0U]) ? 0U : 2U));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
        = (((vlSelfRef.LD_uop[1U][3U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][2U] 
                                                >> 0x17U)) 
           - ((2U & vlSelfRef.LD_uop[1U][0U]) ? 0U : 2U));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThan 
        = VL_LTS_III(32, ((vlSelfRef.LD_uop[2U][5U] 
                           << 9U) | (vlSelfRef.LD_uop
                                     [2U][4U] >> 0x17U)), 
                     ((vlSelfRef.LD_uop[2U][4U] << 9U) 
                      | (vlSelfRef.LD_uop[2U][3U] >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU 
        = (((vlSelfRef.LD_uop[2U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [2U][4U] 
                                                >> 0x17U)) 
           < ((vlSelfRef.LD_uop[2U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan 
        = VL_LTS_III(32, ((vlSelfRef.LD_uop[0U][5U] 
                           << 9U) | (vlSelfRef.LD_uop
                                     [0U][4U] >> 0x17U)), 
                     ((vlSelfRef.LD_uop[0U][4U] << 9U) 
                      | (vlSelfRef.LD_uop[0U][3U] >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU 
        = (((vlSelfRef.LD_uop[0U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [0U][4U] 
                                                >> 0x17U)) 
           < ((vlSelfRef.LD_uop[0U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan 
        = VL_LTS_III(32, ((vlSelfRef.LD_uop[1U][5U] 
                           << 9U) | (vlSelfRef.LD_uop
                                     [1U][4U] >> 0x17U)), 
                     ((vlSelfRef.LD_uop[1U][4U] << 9U) 
                      | (vlSelfRef.LD_uop[1U][3U] >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU 
        = (((vlSelfRef.LD_uop[1U][5U] << 9U) | (vlSelfRef.LD_uop
                                                [1U][4U] 
                                                >> 0x17U)) 
           < ((vlSelfRef.LD_uop[1U][4U] << 9U) | (vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  >> 0x17U)));
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv 
        = (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running) 
            & ((0U != (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt)) 
               & (0x3fU != (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt)))) 
           | ((vlSelfRef.LD_uop[0U][0U] & (5U == (0xfU 
                                                  & (vlSelfRef.LD_uop
                                                     [0U][0U] 
                                                     >> 2U)))) 
              | (IData)((0x15U == (0x3dU & vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U])))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffffcU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (3U & ((1U & (vlSelfRef.LD_uop[2U][4U] 
                           >> 0x17U)) + (1U & (vlSelfRef.LD_uop
                                               [2U][4U] 
                                               >> 0x18U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffff3U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xcU & (((1U & (vlSelfRef.LD_uop[2U][4U] 
                              >> 0x19U)) + (1U & (vlSelfRef.LD_uop
                                                  [2U][4U] 
                                                  >> 0x1aU))) 
                      << 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffffcfU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30U & (((1U & (vlSelfRef.LD_uop[2U][4U] 
                               >> 0x1bU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x1cU))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffff3fU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0U & (((1U & (vlSelfRef.LD_uop[2U][4U] 
                               >> 0x1dU)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x1eU))) 
                       << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffffcffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300U & (((vlSelfRef.LD_uop[2U][4U] 
                          >> 0x1fU) + (1U & vlSelfRef.LD_uop
                                       [2U][5U])) << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffff3ffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                >> 1U)) + (1U & (vlSelfRef.LD_uop
                                                 [2U][5U] 
                                                 >> 2U))) 
                        << 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffffcfffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                 >> 3U)) + (1U & (vlSelfRef.LD_uop
                                                  [2U][5U] 
                                                  >> 4U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffff3fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                 >> 5U)) + (1U & (vlSelfRef.LD_uop
                                                  [2U][5U] 
                                                  >> 6U))) 
                         << 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfffcffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                  >> 7U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][5U] 
                                                   >> 8U))) 
                          << 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfff3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc0000U & (((1U & (vlSelfRef.LD_uop[2U][5U] 
                                  >> 9U)) + (1U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][5U] 
                                                   >> 0xaU))) 
                          << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xffcfffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x300000U & (((1U & (vlSelfRef.LD_uop
                                   [2U][5U] >> 0xbU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [2U][5U] >> 0xcU))) 
                           << 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xff3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc00000U & (((1U & (vlSelfRef.LD_uop
                                   [2U][5U] >> 0xdU)) 
                            + (1U & (vlSelfRef.LD_uop
                                     [2U][5U] >> 0xeU))) 
                           << 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xfcffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x3000000U & (((1U & (vlSelfRef.LD_uop
                                    [2U][5U] >> 0xfU)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [2U][5U] >> 0x10U))) 
                            << 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xf3ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0xc000000U & (((1U & (vlSelfRef.LD_uop
                                    [2U][5U] >> 0x11U)) 
                             + (1U & (vlSelfRef.LD_uop
                                      [2U][5U] >> 0x12U))) 
                            << 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0xcfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (0x30000000U & (((1U & (vlSelfRef.LD_uop
                                     [2U][5U] >> 0x13U)) 
                              + (1U & (vlSelfRef.LD_uop
                                       [2U][5U] >> 0x14U))) 
                             << 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
           | (((1U & (vlSelfRef.LD_uop[2U][5U] >> 0x15U)) 
               + (1U & (vlSelfRef.LD_uop[2U][5U] >> 0x16U))) 
              << 0x1eU));
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
        = (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
           + (((- (IData)((1U & (vlSelfRef.LD_uop[0U][1U] 
                                 >> 0x1aU)))) << 0xdU) 
              | (0x1fffU & (vlSelfRef.LD_uop[0U][1U] 
                            >> 0xeU))));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
        = (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
           + (((- (IData)((1U & (vlSelfRef.LD_uop[1U][1U] 
                                 >> 0x1aU)))) << 0xdU) 
              | (0x1fffU & (vlSelfRef.LD_uop[1U][1U] 
                            >> 0xeU))));
    if (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThan) {
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__1 
            = ((vlSelfRef.LD_uop[2U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__1 
            = ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U));
    } else {
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__1 
            = ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__1 
            = ((vlSelfRef.LD_uop[2U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U));
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU) {
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__1 
            = ((vlSelfRef.LD_uop[2U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__1 
            = ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U));
    } else {
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__1 
            = ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__1 
            = ((vlSelfRef.LD_uop[2U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U));
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan) {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 
            = ((vlSelfRef.LD_uop[0U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U));
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 
            = ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U));
    } else {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 
            = ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U));
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 
            = ((vlSelfRef.LD_uop[0U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = 0U;
    if ((1U == (0xfU & (vlSelfRef.LD_uop[0U][0U] >> 2U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelfRef.LD_uop[0U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken 
                            = (1U & ((0x200U & vlSelfRef.LD_uop
                                      [0U][1U]) ? (
                                                   (0x100U 
                                                    & vlSelfRef.LD_uop
                                                    [0U][1U])
                                                    ? 
                                                   (~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU))
                                                    : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU))
                                      : ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [0U][1U])
                                          ? (~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))
                                          : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))));
                    } else if ((0x200U & vlSelfRef.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken 
                            = ((0x100U & vlSelfRef.LD_uop
                                [0U][1U]) ? (((vlSelfRef.LD_uop
                                               [0U][5U] 
                                               << 9U) 
                                              | (vlSelfRef.LD_uop
                                                 [0U][4U] 
                                                 >> 0x17U)) 
                                             != ((vlSelfRef.LD_uop
                                                  [0U][4U] 
                                                  << 9U) 
                                                 | (vlSelfRef.LD_uop
                                                    [0U][3U] 
                                                    >> 0x17U)))
                                : (((vlSelfRef.LD_uop
                                     [0U][5U] << 9U) 
                                    | (vlSelfRef.LD_uop
                                       [0U][4U] >> 0x17U)) 
                                   == ((vlSelfRef.LD_uop
                                        [0U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [0U][3U] 
                                          >> 0x17U))));
                    } else if ((0x100U & vlSelfRef.LD_uop
                                [0U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU) {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 
            = ((vlSelfRef.LD_uop[0U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U));
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 
            = ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U));
    } else {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 
            = ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U));
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 
            = ((vlSelfRef.LD_uop[0U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U));
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan) {
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 
            = ((vlSelfRef.LD_uop[1U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 
            = ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U));
    } else {
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 
            = ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 
            = ((vlSelfRef.LD_uop[1U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = 0U;
    if ((1U == (0xfU & (vlSelfRef.LD_uop[1U][0U] >> 2U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelfRef.LD_uop[1U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken 
                            = (1U & ((0x200U & vlSelfRef.LD_uop
                                      [1U][1U]) ? (
                                                   (0x100U 
                                                    & vlSelfRef.LD_uop
                                                    [1U][1U])
                                                    ? 
                                                   (~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU))
                                                    : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU))
                                      : ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [1U][1U])
                                          ? (~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))
                                          : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))));
                    } else if ((0x200U & vlSelfRef.LD_uop
                                [1U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken 
                            = ((0x100U & vlSelfRef.LD_uop
                                [1U][1U]) ? (((vlSelfRef.LD_uop
                                               [1U][5U] 
                                               << 9U) 
                                              | (vlSelfRef.LD_uop
                                                 [1U][4U] 
                                                 >> 0x17U)) 
                                             != ((vlSelfRef.LD_uop
                                                  [1U][4U] 
                                                  << 9U) 
                                                 | (vlSelfRef.LD_uop
                                                    [1U][3U] 
                                                    >> 0x17U)))
                                : (((vlSelfRef.LD_uop
                                     [1U][5U] << 9U) 
                                    | (vlSelfRef.LD_uop
                                       [1U][4U] >> 0x17U)) 
                                   == ((vlSelfRef.LD_uop
                                        [1U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [1U][3U] 
                                          >> 0x17U))));
                    } else if ((0x100U & vlSelfRef.LD_uop
                                [1U][1U])) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU) {
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 
            = ((vlSelfRef.LD_uop[1U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 
            = ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U));
    } else {
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 
            = ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U));
        vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 
            = ((vlSelfRef.LD_uop[1U][4U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffff8U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (7U & ((3U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
                    + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                             >> 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                               >> 4U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 6U))) 
                       << 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 8U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0xaU))) 
                        << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 0xcU)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0xeU))) 
                        << 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x7000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                 >> 0x10U)) + (3U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                  >> 0x14U)) + (3U 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x18U)) + (3U 
                                                 & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0x1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x1cU)) + (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0x1eU)) 
                           << 0x15U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC = 0U;
    if ((0U == (0xfU & (vlSelfRef.LD_uop[0U][0U] >> 2U)))) {
        if ((0x2000U & vlSelfRef.LD_uop[0U][1U])) {
            if ((0x1000U & vlSelfRef.LD_uop[0U][1U])) {
                if ((0x800U & vlSelfRef.LD_uop[0U][1U])) {
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                        = ((0x400U & vlSelfRef.LD_uop
                            [0U][1U]) ? ((0x200U & 
                                          vlSelfRef.LD_uop
                                          [0U][1U])
                                          ? ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [0U][1U])
                                              ? intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0
                                              : intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0)
                                          : ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [0U][1U])
                                              ? intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0
                                              : intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0))
                            : ((0x200U & vlSelfRef.LD_uop
                                [0U][1U]) ? ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [0U][1U])
                                              ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0
                                              : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0)
                                : ((0x100U & vlSelfRef.LD_uop
                                    [0U][1U]) ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0
                                    : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0)));
                }
            }
        } else if ((0x1000U & vlSelfRef.LD_uop[0U][1U])) {
            if ((0x800U & vlSelfRef.LD_uop[0U][1U])) {
                if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [0U][1U] >> 8U)))) {
                            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                = (0xffffU & ((vlSelfRef.LD_uop
                                               [0U][5U] 
                                               << 9U) 
                                              | (vlSelfRef.LD_uop
                                                 [0U][4U] 
                                                 >> 0x17U)));
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x400U & vlSelfRef.LD_uop[0U][1U])
                        ? ((0x200U & vlSelfRef.LD_uop
                            [0U][1U]) ? ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [0U][1U])
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.LD_uop
                                                             [0U][5U] 
                                                             >> 6U)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & ((vlSelfRef.LD_uop
                                                    [0U][5U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [0U][4U] 
                                                      >> 0x17U))))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.LD_uop
                                                             [0U][4U] 
                                                             >> 0x1eU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U))))
                            : ((0x100U & vlSelfRef.LD_uop
                                [0U][1U]) ? intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0
                                : intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0))
                        : ((0x200U & vlSelfRef.LD_uop
                            [0U][1U]) ? ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [0U][1U])
                                          ? intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0
                                          : intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0)
                            : ((0x100U & vlSelfRef.LD_uop
                                [0U][1U]) ? ((~ ((vlSelfRef.LD_uop
                                                  [0U][4U] 
                                                  << 9U) 
                                                 | (vlSelfRef.LD_uop
                                                    [0U][3U] 
                                                    >> 0x17U))) 
                                             | ((vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U)))
                                : ((~ ((vlSelfRef.LD_uop
                                        [0U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [0U][3U] 
                                          >> 0x17U))) 
                                   & ((vlSelfRef.LD_uop
                                       [0U][5U] << 9U) 
                                      | (vlSelfRef.LD_uop
                                         [0U][4U] >> 0x17U))))));
            }
        } else if ((0x800U & vlSelfRef.LD_uop[0U][1U])) {
            if ((0x400U & vlSelfRef.LD_uop[0U][1U])) {
                vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x200U & vlSelfRef.LD_uop[0U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? ((~ ((vlSelfRef.LD_uop
                                              [0U][4U] 
                                              << 9U) 
                                             | (vlSelfRef.LD_uop
                                                [0U][3U] 
                                                >> 0x17U))) 
                                         ^ ((vlSelfRef.LD_uop
                                             [0U][5U] 
                                             << 9U) 
                                            | (vlSelfRef.LD_uop
                                               [0U][4U] 
                                               >> 0x17U)))
                            : (((vlSelfRef.LD_uop[0U][4U] 
                                 << 9U) | (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x17U)) 
                               + VL_SHIFTL_III(32,32,32, 
                                               ((vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U)), 3U)))
                        : ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? (((vlSelfRef.LD_uop
                                           [0U][4U] 
                                           << 9U) | 
                                          (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x17U)) 
                                         + VL_SHIFTL_III(32,32,32, 
                                                         ((vlSelfRef.LD_uop
                                                           [0U][5U] 
                                                           << 9U) 
                                                          | (vlSelfRef.LD_uop
                                                             [0U][4U] 
                                                             >> 0x17U)), 2U))
                            : (((vlSelfRef.LD_uop[0U][4U] 
                                 << 9U) | (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x17U)) 
                               + VL_SHIFTL_III(32,32,32, 
                                               ((vlSelfRef.LD_uop
                                                 [0U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U)), 1U))));
            } else if ((0x200U & vlSelfRef.LD_uop[0U][1U])) {
                if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                              >> 8U)))) {
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                        = ((vlSelfRef.LD_uop[0U][4U] 
                            << 9U) | (vlSelfRef.LD_uop
                                      [0U][3U] >> 0x17U));
                }
            } else {
                vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x100U & vlSelfRef.LD_uop[0U][1U])
                        ? VL_SHIFTRS_III(32,32,5, (
                                                   (vlSelfRef.LD_uop
                                                    [0U][5U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [0U][4U] 
                                                      >> 0x17U)), 
                                         (0x1fU & (
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   >> 0x17U)))
                        : (((vlSelfRef.LD_uop[0U][5U] 
                             << 9U) | (vlSelfRef.LD_uop
                                       [0U][4U] >> 0x17U)) 
                           - ((vlSelfRef.LD_uop[0U][4U] 
                               << 9U) | (vlSelfRef.LD_uop
                                         [0U][3U] >> 0x17U))));
            }
        } else {
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                = ((0x400U & vlSelfRef.LD_uop[0U][1U])
                    ? ((0x200U & vlSelfRef.LD_uop[0U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU)
                            : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))
                        : ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0
                            : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0))
                    : ((0x200U & vlSelfRef.LD_uop[0U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0
                            : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0)
                        : ((0x100U & vlSelfRef.LD_uop
                            [0U][1U]) ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0
                            : vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0)));
        }
    } else if ((1U == (0xfU & (vlSelfRef.LD_uop[0U][0U] 
                               >> 2U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelfRef.LD_uop[0U][1U])) {
                    if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelfRef.LD_uop
                             [0U][1U])) {
                            if ((1U & (~ (vlSelfRef.LD_uop
                                          [0U][1U] 
                                          >> 8U)))) {
                                vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                    = ((IData)(2U) 
                                       + ((vlSelfRef.LD_uop
                                           [0U][3U] 
                                           << 9U) | 
                                          (vlSelfRef.LD_uop
                                           [0U][2U] 
                                           >> 0x17U)));
                            }
                        } else {
                            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                = ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [0U][2U] 
                                                     >> 0x17U)));
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.LD_uop
                                     [0U][1U] >> 0xaU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[0U][1U] 
                                  >> 9U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                            = ((0x100U & vlSelfRef.LD_uop
                                [0U][1U]) ? ((IData)(2U) 
                                             + ((vlSelfRef.LD_uop
                                                 [0U][3U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [0U][2U] 
                                                   >> 0x17U)))
                                : (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
                                   + ((vlSelfRef.LD_uop
                                       [0U][2U] << 0x12U) 
                                      | (vlSelfRef.LD_uop
                                         [0U][1U] >> 0xeU))));
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC = 0U;
    if ((0U == (0xfU & (vlSelfRef.LD_uop[1U][0U] >> 2U)))) {
        if ((0x2000U & vlSelfRef.LD_uop[1U][1U])) {
            if ((0x1000U & vlSelfRef.LD_uop[1U][1U])) {
                if ((0x800U & vlSelfRef.LD_uop[1U][1U])) {
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                        = ((0x400U & vlSelfRef.LD_uop
                            [1U][1U]) ? ((0x200U & 
                                          vlSelfRef.LD_uop
                                          [1U][1U])
                                          ? ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [1U][1U])
                                              ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0
                                              : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0)
                                          : ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [1U][1U])
                                              ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0
                                              : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0))
                            : ((0x200U & vlSelfRef.LD_uop
                                [1U][1U]) ? ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [1U][1U])
                                              ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0
                                              : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0)
                                : ((0x100U & vlSelfRef.LD_uop
                                    [1U][1U]) ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0
                                    : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0)));
                }
            }
        } else if ((0x1000U & vlSelfRef.LD_uop[1U][1U])) {
            if ((0x800U & vlSelfRef.LD_uop[1U][1U])) {
                if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [1U][1U] >> 8U)))) {
                            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                = (0xffffU & ((vlSelfRef.LD_uop
                                               [1U][5U] 
                                               << 9U) 
                                              | (vlSelfRef.LD_uop
                                                 [1U][4U] 
                                                 >> 0x17U)));
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x400U & vlSelfRef.LD_uop[1U][1U])
                        ? ((0x200U & vlSelfRef.LD_uop
                            [1U][1U]) ? ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [1U][1U])
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.LD_uop
                                                             [1U][5U] 
                                                             >> 6U)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & ((vlSelfRef.LD_uop
                                                    [1U][5U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [1U][4U] 
                                                      >> 0x17U))))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.LD_uop
                                                             [1U][4U] 
                                                             >> 0x1eU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U))))
                            : ((0x100U & vlSelfRef.LD_uop
                                [1U][1U]) ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0
                                : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0))
                        : ((0x200U & vlSelfRef.LD_uop
                            [1U][1U]) ? ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [1U][1U])
                                          ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0
                                          : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0)
                            : ((0x100U & vlSelfRef.LD_uop
                                [1U][1U]) ? ((~ ((vlSelfRef.LD_uop
                                                  [1U][4U] 
                                                  << 9U) 
                                                 | (vlSelfRef.LD_uop
                                                    [1U][3U] 
                                                    >> 0x17U))) 
                                             | ((vlSelfRef.LD_uop
                                                 [1U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U)))
                                : ((~ ((vlSelfRef.LD_uop
                                        [1U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [1U][3U] 
                                          >> 0x17U))) 
                                   & ((vlSelfRef.LD_uop
                                       [1U][5U] << 9U) 
                                      | (vlSelfRef.LD_uop
                                         [1U][4U] >> 0x17U))))));
            }
        } else if ((0x800U & vlSelfRef.LD_uop[1U][1U])) {
            if ((0x400U & vlSelfRef.LD_uop[1U][1U])) {
                vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x200U & vlSelfRef.LD_uop[1U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [1U][1U]) ? ((~ ((vlSelfRef.LD_uop
                                              [1U][4U] 
                                              << 9U) 
                                             | (vlSelfRef.LD_uop
                                                [1U][3U] 
                                                >> 0x17U))) 
                                         ^ ((vlSelfRef.LD_uop
                                             [1U][5U] 
                                             << 9U) 
                                            | (vlSelfRef.LD_uop
                                               [1U][4U] 
                                               >> 0x17U)))
                            : (((vlSelfRef.LD_uop[1U][4U] 
                                 << 9U) | (vlSelfRef.LD_uop
                                           [1U][3U] 
                                           >> 0x17U)) 
                               + VL_SHIFTL_III(32,32,32, 
                                               ((vlSelfRef.LD_uop
                                                 [1U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U)), 3U)))
                        : ((0x100U & vlSelfRef.LD_uop
                            [1U][1U]) ? (((vlSelfRef.LD_uop
                                           [1U][4U] 
                                           << 9U) | 
                                          (vlSelfRef.LD_uop
                                           [1U][3U] 
                                           >> 0x17U)) 
                                         + VL_SHIFTL_III(32,32,32, 
                                                         ((vlSelfRef.LD_uop
                                                           [1U][5U] 
                                                           << 9U) 
                                                          | (vlSelfRef.LD_uop
                                                             [1U][4U] 
                                                             >> 0x17U)), 2U))
                            : (((vlSelfRef.LD_uop[1U][4U] 
                                 << 9U) | (vlSelfRef.LD_uop
                                           [1U][3U] 
                                           >> 0x17U)) 
                               + VL_SHIFTL_III(32,32,32, 
                                               ((vlSelfRef.LD_uop
                                                 [1U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U)), 1U))));
            } else if ((0x200U & vlSelfRef.LD_uop[1U][1U])) {
                if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                              >> 8U)))) {
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                        = ((vlSelfRef.LD_uop[1U][4U] 
                            << 9U) | (vlSelfRef.LD_uop
                                      [1U][3U] >> 0x17U));
                }
            } else {
                vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x100U & vlSelfRef.LD_uop[1U][1U])
                        ? VL_SHIFTRS_III(32,32,5, (
                                                   (vlSelfRef.LD_uop
                                                    [1U][5U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [1U][4U] 
                                                      >> 0x17U)), 
                                         (0x1fU & (
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   >> 0x17U)))
                        : (((vlSelfRef.LD_uop[1U][5U] 
                             << 9U) | (vlSelfRef.LD_uop
                                       [1U][4U] >> 0x17U)) 
                           - ((vlSelfRef.LD_uop[1U][4U] 
                               << 9U) | (vlSelfRef.LD_uop
                                         [1U][3U] >> 0x17U))));
            }
        } else {
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                = ((0x400U & vlSelfRef.LD_uop[1U][1U])
                    ? ((0x200U & vlSelfRef.LD_uop[1U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [1U][1U]) ? (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU)
                            : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))
                        : ((0x100U & vlSelfRef.LD_uop
                            [1U][1U]) ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0
                            : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0))
                    : ((0x200U & vlSelfRef.LD_uop[1U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [1U][1U]) ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0
                            : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0)
                        : ((0x100U & vlSelfRef.LD_uop
                            [1U][1U]) ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0
                            : vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0)));
        }
    } else if ((1U == (0xfU & (vlSelfRef.LD_uop[1U][0U] 
                               >> 2U)))) {
        if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelfRef.LD_uop[1U][1U])) {
                    if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSelfRef.LD_uop
                             [1U][1U])) {
                            if ((1U & (~ (vlSelfRef.LD_uop
                                          [1U][1U] 
                                          >> 8U)))) {
                                vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                    = ((IData)(2U) 
                                       + ((vlSelfRef.LD_uop
                                           [1U][3U] 
                                           << 9U) | 
                                          (vlSelfRef.LD_uop
                                           [1U][2U] 
                                           >> 0x17U)));
                            }
                        } else {
                            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                = ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [1U][2U] 
                                                     >> 0x17U)));
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.LD_uop
                                     [1U][1U] >> 0xaU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[1U][1U] 
                                  >> 9U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                            = ((0x100U & vlSelfRef.LD_uop
                                [1U][1U]) ? ((IData)(2U) 
                                             + ((vlSelfRef.LD_uop
                                                 [1U][3U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [1U][2U] 
                                                   >> 0x17U)))
                                : (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC 
                                   + ((vlSelfRef.LD_uop
                                       [1U][2U] << 0x12U) 
                                      | (vlSelfRef.LD_uop
                                         [1U][1U] >> 0xeU))));
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfff0U & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xfU & ((7U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
                      + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 3U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xff0fU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf0U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 6U)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 9U))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xf0ffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf00U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                >> 0xcU)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                   >> 0xfU))) 
                        << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf000U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                 >> 0x12U)) + (7U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 0x15U))) 
                         << 0xcU)));
    vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd 
        = ((1ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd) 
           | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
               << 8U) | ((QData)((IData)((0x7fU & (
                                                   vlSelfRef.LD_uop
                                                   [0U][1U] 
                                                   >> 1U)))) 
                         << 1U)));
    vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd 
        = ((1ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd) 
           | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
               << 8U) | ((QData)((IData)((0x7fU & (
                                                   vlSelfRef.LD_uop
                                                   [1U][1U] 
                                                   >> 1U)))) 
                         << 1U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x3e0U & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x1fU & ((0xfU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
                       + (0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 4U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x1fU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x3e0U & (((0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 8U)) + (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                              >> 0xcU))) 
                        << 5U)));
    vlSelfRef.__PVT__LD_zcFwd[0U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd;
    vlSelfRef.__PVT__LD_zcFwd[1U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd;
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__25(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__25\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    // Body
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v0) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [0U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v0));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v1) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v1) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v2) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v2) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v3) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v3) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v4) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v4) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v5) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v5) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v6) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v6) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v7) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v7) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v8) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [1U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v8));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v9) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v9) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v10) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v10) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v11) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v11) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v12) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v12) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v13) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v13) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v14) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v14) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v15) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v15) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v16) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [2U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v16));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v17) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v17) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v18) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v18) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v19) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v19) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v20) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v20) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v21) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v21) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v22) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v22) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v23) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v23) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v24) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [3U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v24));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v25) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v25) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v26) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v26) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v27) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v27) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v28) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v28) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v29) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v29) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v30) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v30) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v31) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v31) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v32) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [4U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v32));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v33) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v33) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v34) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v34) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v35) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v35) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v36) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v36) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v37) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v37) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v38) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v38) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v39) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v39) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v0) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [0U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v0));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v1) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v1) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v2) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v2) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v3) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v3) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v4) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v4) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v5) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v5) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v6) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v6) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v7) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[0U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v7) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v8) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [1U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v8));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v9) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v9) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v10) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v10) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v11) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v11) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v12) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v12) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v13) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v13) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v14) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v14) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v15) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[1U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v15) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v16) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [2U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v16));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v17) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v17) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v18) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v18) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v19) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v19) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v20) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v20) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v21) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v21) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v22) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v22) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v23) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[2U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v23) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v24) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [3U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v24));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v25) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v25) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v26) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v26) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v27) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v27) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v28) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v28) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v29) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v29) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v30) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v30) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v31) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[3U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v31) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v32) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xfeU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [4U]) | (IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v32));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v33) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xfdU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v33) 
                         << 1U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v34) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xfbU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v34) 
                         << 2U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v35) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xf7U & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v35) 
                         << 3U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v36) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xefU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v36) 
                         << 4U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v37) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xdfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v37) 
                         << 5U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v38) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0xbfU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v38) 
                         << 6U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v39) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[4U] 
            = ((0x7fU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v39) 
                         << 7U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v0) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[0U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v0) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[1U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v1) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[2U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [2U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v2) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[3U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [3U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v3) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[4U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [4U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v4) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[5U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [5U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v5) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[6U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [6U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v6) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[7U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [7U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v7) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v8) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[0U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[0U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[0U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[1U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[1U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[1U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[2U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[2U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[2U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[3U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[3U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[3U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[4U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[4U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[4U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[5U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[5U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[5U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[6U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[6U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[6U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[7U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[7U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[7U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v16) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[0U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v16[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[0U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v16[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[0U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v16[2U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[0U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v17) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v18) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[1U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v18[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[1U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v18[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[1U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v18[2U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[1U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v19) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v20) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[2U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v20[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[2U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v20[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[2U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v20[2U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[2U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [2U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v21) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v22) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[3U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v22[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[3U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v22[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[3U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v22[2U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[3U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [3U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v23) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v24) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[4U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v24[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[4U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v24[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[4U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v24[2U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[4U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [4U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v25) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v26) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[5U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v26[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[5U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v26[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[5U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v26[2U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[5U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [5U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v27) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v28) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[6U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v28[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[6U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v28[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[6U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v28[2U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[6U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                [6U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v29) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30[2U];
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31) {
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31[0U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31[1U];
        vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31[2U];
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v0) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[0U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v0) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[1U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v1) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[2U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [2U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v2) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[3U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [3U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v3) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[4U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [4U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v4) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[5U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [5U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v5) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[6U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [6U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v6) 
                             << 0x17U));
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[7U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [7U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v7) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v8) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[0U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[0U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[0U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[1U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[1U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[1U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[2U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[2U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[2U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[3U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[3U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[3U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[4U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[4U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[4U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[5U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[5U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[5U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[6U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[6U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[6U][2U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[7U][0U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[7U][1U] = 0U;
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[7U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v16) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[0U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v16[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[0U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v16[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[0U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v16[2U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[0U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v17) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v18) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[1U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v18[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[1U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v18[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[1U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v18[2U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[1U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v19) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v20) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[2U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v20[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[2U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v20[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[2U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v20[2U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[2U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [2U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v21) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v22) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[3U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v22[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[3U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v22[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[3U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v22[2U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[3U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [3U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v23) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v24) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[4U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v24[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[4U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v24[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[4U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v24[2U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[4U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [4U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v25) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v26) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[5U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v26[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[5U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v26[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[5U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v26[2U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[5U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [5U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v27) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v28) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[6U][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v28[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[6U][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v28[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[6U][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v28[2U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[6U][1U] 
            = ((0xff7fffffU & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                [6U][1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v29) 
                             << 0x17U));
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30[2U];
    }
    if (vlSelfRef.__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31) {
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31][0U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31[0U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31][1U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31[1U];
        vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[vlSelfRef.__VdlyDim0__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31][2U] 
            = vlSelfRef.__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31[2U];
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex 
        = vlSelfRef.__Vdly__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex 
        = vlSelfRef.__Vdly__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex;
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
    vlSelfRef.branch[0U] = vlSelfRef.__PVT__bsel__DOT__branch_c[0U];
    vlSelfRef.branch[1U] = vlSelfRef.__PVT__bsel__DOT__branch_c[1U];
    vlSelfRef.branch[2U] = vlSelfRef.__PVT__bsel__DOT__branch_c[2U];
    vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall 
        = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [0U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall 
                = (1U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall 
        = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [1U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall 
                = (2U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall 
        = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [2U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall 
                = (4U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall 
        = (7U & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((~ vlSelfRef.branch[0U]) & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                                  [3U] 
                                                  <= (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall 
                = (8U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall));
        }
    }
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
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid 
        = (0xfU & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer) 
                      | (- (IData)((1U & vlSelfRef.branch[0U]))))));
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid 
        = (0xfU & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer) 
                      | (- (IData)((1U & vlSelfRef.branch[0U]))))));
    vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall 
        = (0xeU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall));
    if ((1U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ ((IData)(vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
                      & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                         [0U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall 
                = (1U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall 
        = (0xdU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall));
    if ((2U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ (((IData)(vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
                       >> 1U) & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                 [1U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall 
                = (2U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall 
        = (0xbU & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall));
    if ((4U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ (((IData)(vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
                       >> 2U) & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                 [2U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall 
                = (4U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall));
        }
    }
    vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall 
        = (7U & (IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall));
    if ((8U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c))) {
        if ((1U & (~ (((IData)(vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid) 
                       >> 3U) & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c
                                 [3U] <= (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c)))))) {
            vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall 
                = (8U | (IData)(vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall));
        }
    }
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__31(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__31\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    // Body
    vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [0U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [0U][1U] >> 0x1eU)) 
                 | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [1U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [1U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [2U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [2U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [3U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [3U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [4U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [4U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [5U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [5U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [6U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [6U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                   [7U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                      [7U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
               & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                  [0U][0U])) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [0U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [0U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][1U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [1U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [1U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][2U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [2U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [2U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][3U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [3U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [3U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][4U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [4U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [4U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][5U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [5U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [5U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][6U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [6U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [6U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c
                   [0U][7U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                     [7U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                    [7U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs)))) 
              << 7U));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    __PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
}
