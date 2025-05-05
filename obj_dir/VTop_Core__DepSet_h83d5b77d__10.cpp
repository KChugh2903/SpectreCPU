// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__35(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__35\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RN_stall = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_stall;
    vlSelfRef.__Vcellinp__idec__en = ((~ (IData)(vlSelfRef.RN_stall)) 
                                      & (IData)(vlSelfRef.frontendEn));
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__36(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__36\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*0:0*/ aguPortsGen__BRA__0__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__2;
    aguPortsGen__BRA__0__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__2 = 0;
    CData/*0:0*/ aguPortsGen__BRA__1__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__0;
    aguPortsGen__BRA__1__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__0 = 0;
    // Body
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
    if ((0x40000000U & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr 
            = ((0xfffff000U & (vlSelfRef.__PVT__TLB_res
                               [0U] << 4U)) | (0xfffU 
                                               & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                                                  >> 0x12U)));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr 
            = ((0xfffff000U & (vlSelfRef.__PVT__TLB_res
                               [1U] << 4U)) | (0xfffU 
                                               & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                                                  >> 0x12U)));
    } else {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr 
            = ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
                << 0xeU) | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                            >> 0x12U));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr 
            = ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
                << 0xeU) | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                            >> 0x12U));
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [0U][1U] >> 0x17U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [1U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [2U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [3U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [4U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [5U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [6U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                  [7U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [0U][1U] >> 0x17U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [1U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [2U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [3U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [4U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [5U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [6U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (1U & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                  [7U][1U] >> 0x17U) | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                                        [0U] >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (1U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 7U)));
    aguPortsGen__BRA__0__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__2 
        = (IData)((0U != (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr)));
    aguPortsGen__BRA__1__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__0 
        = (IData)((0U != (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                  & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                  [0U][0U]) & (~ ((((((0U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U))) 
                                      | (1U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [0U][0U] 
                                                   >> 1U)))) 
                                     | (2U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U)))) 
                                    | (6U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U)))) 
                                   | (7U == (0xfU & 
                                             (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [0U][0U] 
                                              >> 1U)))) 
                                  & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [0U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [0U][0U] >> 1U)))) 
                    | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [0U][1U] << 5U) 
                                        | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                           [0U][0U] 
                                           >> 0x1bU)))) 
                       & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                             [0U][1U] 
                                             << 5U) 
                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                               [0U][0U] 
                                               >> 0x1bU)))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [0U][0U] 
                                                             << 0x1bU) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [0U][0U] 
                                                               >> 5U)) 
                                                           - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
               & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                    [0U][0U] >> 1U))) 
                    & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 1U)))) 
                   | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [0U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 0x1bU))))) 
                  | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                      (0x7fU 
                                                       & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                            [0U][0U] 
                                                            << 0x14U) 
                                                           | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [0U][0U] 
                                                              >> 0xcU)) 
                                                          - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
              & (((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [0U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [0U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 0x1bU))))) 
                 | ((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                              [0U][1U] >> 8U)) == (IData)(vlSelfRef.ROB_curSqN)))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][1U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [1U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [1U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [1U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [1U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [1U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [1U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [1U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [1U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [1U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [1U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [1U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [1U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [1U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [1U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [1U][0U] >> 0x1bU)))))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][2U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [2U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [2U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [2U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [2U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [2U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [2U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [2U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [2U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [2U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [2U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [2U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [2U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [2U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [2U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [2U][0U] >> 0x1bU)))))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][3U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [3U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [3U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [3U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [3U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [3U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [3U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [3U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [3U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [3U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [3U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [3U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [3U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [3U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [3U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [3U][0U] >> 0x1bU)))))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][4U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [4U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [4U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [4U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [4U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [4U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [4U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [4U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [4U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [4U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [4U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [4U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [4U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [4U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [4U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [4U][0U] >> 0x1bU)))))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][5U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [5U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [5U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [5U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [5U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [5U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [5U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [5U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [5U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [5U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [5U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [5U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [5U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [5U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [5U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [5U][0U] >> 0x1bU)))))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][6U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [6U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [6U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [6U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [6U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [6U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [6U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [6U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [6U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [6U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [6U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [6U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [6U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [6U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [6U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [6U][0U] >> 0x1bU)))))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c
                   [0U][7U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                    [7U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                 [7U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [7U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [7U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                              [7U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                [7U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                              [7U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                                [7U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                     [7U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                       [7U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                             [7U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                                               [7U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                  [7U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                      [7U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue
                                        [7U][0U] >> 0x1bU)))))) 
              << 7U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                  & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                  [0U][0U]) & (~ ((((((0U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U))) 
                                      | (1U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [0U][0U] 
                                                   >> 1U)))) 
                                     | (2U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U)))) 
                                    | (6U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U)))) 
                                   | (7U == (0xfU & 
                                             (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [0U][0U] 
                                              >> 1U)))) 
                                  & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [0U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [0U][0U] >> 1U)))) 
                    | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [0U][1U] << 5U) 
                                        | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                           [0U][0U] 
                                           >> 0x1bU)))) 
                       & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                             [0U][1U] 
                                             << 5U) 
                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                               [0U][0U] 
                                               >> 0x1bU)))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [0U][0U] 
                                                             << 0x1bU) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [0U][0U] 
                                                               >> 5U)) 
                                                           - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
               & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                    [0U][0U] >> 1U))) 
                    & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 1U)))) 
                   | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [0U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 0x1bU))))) 
                  | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                      (0x7fU 
                                                       & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                            [0U][0U] 
                                                            << 0x14U) 
                                                           | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [0U][0U] 
                                                              >> 0xcU)) 
                                                          - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
              & (((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [0U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [0U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [0U][0U] >> 0x1bU))))) 
                 | ((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                              [0U][1U] >> 8U)) == (IData)(vlSelfRef.ROB_curSqN)))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][1U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [1U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [1U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [1U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [1U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [1U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [1U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [1U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [1U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [1U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [1U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [1U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [1U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [1U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [1U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [1U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [1U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [1U][0U] >> 0x1bU)))))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][2U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [2U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [2U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [2U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [2U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [2U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [2U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [2U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [2U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [2U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [2U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [2U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [2U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [2U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [2U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [2U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [2U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [2U][0U] >> 0x1bU)))))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][3U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [3U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [3U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [3U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [3U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [3U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [3U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [3U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [3U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [3U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [3U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [3U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [3U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [3U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [3U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [3U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [3U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [3U][0U] >> 0x1bU)))))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][4U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [4U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [4U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [4U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [4U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [4U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [4U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [4U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [4U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [4U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [4U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [4U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [4U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [4U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [4U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [4U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [4U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [4U][0U] >> 0x1bU)))))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][5U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [5U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [5U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [5U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [5U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [5U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [5U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [5U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [5U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [5U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [5U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [5U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [5U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [5U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [5U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [5U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [5U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [5U][0U] >> 0x1bU)))))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][6U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [6U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [6U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [6U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [6U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [6U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [6U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [6U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [6U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [6U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [6U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [6U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [6U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [6U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [6U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [6U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [6U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [6U][0U] >> 0x1bU)))))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex)) 
                   & vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c
                   [0U][7U]) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                    [7U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                 [7U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs)))) 
                 & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [7U][0U] >> 1U))) 
                      & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 1U)))) 
                     | ((6U <= (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [7U][1U] 
                                          << 5U) | 
                                         (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                          [7U][0U] 
                                          >> 0x1bU)))) 
                        & (0x37U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                              [7U][1U] 
                                              << 5U) 
                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                [7U][0U] 
                                                >> 0x1bU)))))) 
                    | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                        (0x7fU 
                                                         & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                              [7U][0U] 
                                                              << 0x1bU) 
                                                             | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                                [7U][0U] 
                                                                >> 5U)) 
                                                            - (IData)(vlSelfRef.__PVT__LB_maxLoadSqN))))))) 
                & ((((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                     [7U][0U] >> 1U))) 
                     & (0xaU != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 1U)))) 
                    | (6U > (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                       [7U][1U] << 5U) 
                                      | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                         [7U][0U] >> 0x1bU))))) 
                   | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                       (0x7fU 
                                                        & (((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                             [7U][0U] 
                                                             << 0x14U) 
                                                            | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                                               [7U][0U] 
                                                               >> 0xcU)) 
                                                           - (IData)(vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_maxStoreSqN))))))) 
               & ((3U != (0xfU & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                  [7U][0U] >> 1U))) 
                  | (6U != (0x3fU & ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                      [7U][1U] << 5U) 
                                     | (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue
                                        [7U][0U] >> 0x1bU)))))) 
              << 7U));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags = 0U;
    if ((IData)((0x400U == (0x3c400U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U])))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags = 5U;
    }
    if (((IData)(((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                   >> 0x1eU) & vlSelfRef.__PVT__TLB_res
                  [0U])) && ((1U & (vlSelfRef.__PVT__TLB_res
                                    [0U] >> 7U)) || 
                             ([&]() {
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__isStore 
                            = (1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                                     >> 0xaU));
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__isLoad 
                            = (1U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                                     >> 9U));
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_user 
                            = (1U & (vlSelfRef.__PVT__TLB_res
                                     [0U] >> 1U));
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_rwx 
                            = (7U & (vlSelfRef.__PVT__TLB_res
                                     [0U] >> 3U));
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__Vstatic__r 
                            = (((((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__isLoad) 
                                  & (~ (((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_rwx) 
                                         >> 2U) | ((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_rwx) 
                                                   & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                                      >> 6U))))) 
                                 | ((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__isStore) 
                                    & (~ ((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_rwx) 
                                          >> 1U)))) 
                                | ((0U == (3U & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) 
                                   & (~ (IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_user)))) 
                               | (IData)(((1U == (0x23U 
                                                  & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) 
                                          & (IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_user))));
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__Vfuncout 
                            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__Vstatic__r;
                    }(), (IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__Vfuncout))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags 
            = ((0x400U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U])
                ? 0xdU : 0xaU);
    } else if ((1U & (((~ (((0x80000000U <= vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr) 
                            & (0x90000000U > vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr)) 
                           | ((0x80000000U > vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr) 
                              & (0x10000000U <= vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr)))) 
                       | (vlSelfRef.__PVT__TLB_res[0U] 
                          >> 6U)) & (~ ((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                         >> 0x1eU) 
                                        & (~ vlSelfRef.__PVT__TLB_res
                                           [0U])))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags 
            = ((0x400U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U])
                ? 0xcU : 9U);
    }
    if ((0x400U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U])) {
        if ((0U != (3U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                          >> 0xbU)))) {
            if ((1U == (3U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                              >> 0xbU)))) {
                if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr)) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags = 0xbU;
                }
            } else if (aguPortsGen__BRA__0__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__2) {
                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags = 0xbU;
            }
        }
    } else if ((0U != (3U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                             >> 0xbU)))) {
        if ((1U == (3U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                          >> 0xbU)))) {
            if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr)) {
                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags = 8U;
            }
        } else if (aguPortsGen__BRA__0__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__2) {
            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags = 8U;
        }
    }
    if ((0U != (0xfU & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
                        >> 2U)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags 
            = (0xfU & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
                       >> 2U));
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags = 0U;
    if ((IData)((0x400U == (0x3c400U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U])))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags = 5U;
    }
    if (((IData)(((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                   >> 0x1eU) & vlSelfRef.__PVT__TLB_res
                  [1U])) && ((1U & (vlSelfRef.__PVT__TLB_res
                                    [1U] >> 7U)) || 
                             ([&]() {
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__isStore 
                            = (1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                                     >> 0xaU));
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__isLoad 
                            = (1U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                                     >> 9U));
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_user 
                            = (1U & (vlSelfRef.__PVT__TLB_res
                                     [1U] >> 1U));
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_rwx 
                            = (7U & (vlSelfRef.__PVT__TLB_res
                                     [1U] >> 3U));
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__Vstatic__r 
                            = (((((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__isLoad) 
                                  & (~ (((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_rwx) 
                                         >> 2U) | ((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_rwx) 
                                                   & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                                      >> 6U))))) 
                                 | ((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__isStore) 
                                    & (~ ((IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_rwx) 
                                          >> 1U)))) 
                                | ((0U == (3U & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) 
                                   & (~ (IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_user)))) 
                               | (IData)(((1U == (0x23U 
                                                  & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem)) 
                                          & (IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_user))));
                        vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__Vfuncout 
                            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__Vstatic__r;
                    }(), (IData)(vlSelfRef.__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__Vfuncout))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags 
            = ((0x400U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U])
                ? 0xdU : 0xaU);
    } else if ((1U & (((~ (((0x80000000U <= vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr) 
                            & (0x90000000U > vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr)) 
                           | ((0x80000000U > vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr) 
                              & (0x10000000U <= vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr)))) 
                       | (vlSelfRef.__PVT__TLB_res[1U] 
                          >> 6U)) & (~ ((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                                         >> 0x1eU) 
                                        & (~ vlSelfRef.__PVT__TLB_res
                                           [1U])))))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags 
            = ((0x400U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U])
                ? 0xcU : 9U);
    }
    if ((0x400U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U])) {
        if ((0U != (3U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                          >> 0xbU)))) {
            if ((1U == (3U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                              >> 0xbU)))) {
                if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr)) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags = 0xbU;
                }
            } else if (aguPortsGen__BRA__1__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__0) {
                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags = 0xbU;
            }
        }
    } else if ((0U != (3U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                             >> 0xbU)))) {
        if ((1U == (3U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                          >> 0xbU)))) {
            if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr)) {
                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags = 8U;
            }
        } else if (aguPortsGen__BRA__1__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__0) {
            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags = 8U;
        }
    }
    if ((0U != (0xfU & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
                        >> 2U)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags 
            = (0xfU & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
                       >> 2U));
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tlbMiss = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_enqueue = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uopReady = 0U;
    if (((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
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
                                                                          >> 0x15U)))))))) 
         & (((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
              >> 0x1eU) & (0U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags))) 
            & (~ vlSelfRef.__PVT__TLB_res[0U])))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tlbMiss = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_enqueue = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uopReady = 0U;
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tlbMiss = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_enqueue = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uopReady = 0U;
    if (((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
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
                                                                          >> 0x15U)))))))) 
         & (((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
              >> 0x1eU) & (0U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags))) 
            & (~ vlSelfRef.__PVT__TLB_res[1U])))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tlbMiss = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_enqueue = 1U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uopReady = 0U;
    }
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    __PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__37(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__37\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__rn__IN_flagsUOps[4U] = vlSelfRef.flagUOps
        [4U];
    vlSelfRef.__Vcellinp__rn__IN_flagsUOps[3U] = vlSelfRef.flagUOps
        [3U];
    vlSelfRef.__Vcellinp__rn__IN_flagsUOps[2U] = vlSelfRef.flagUOps
        [2U];
    vlSelfRef.__Vcellinp__rn__IN_flagsUOps[1U] = vlSelfRef.flagUOps
        [1U];
    vlSelfRef.__Vcellinp__rn__IN_flagsUOps[0U] = vlSelfRef.flagUOps
        [0U];
    vlSelfRef.__PVT__lsu__DOT__uopLd[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[0U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[0U][3U] = 0U;
    if ((1U & (vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
               & ((~ (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy)) 
                  | (vlSelfRef.__PVT__lsu__DOT__selLd
                     [0U][0U] >> 1U))))) {
        vlSelfRef.__PVT__lsu__DOT__uopLd[0U][0U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[0U][1U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][1U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[0U][2U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][2U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[0U][3U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][3U];
    }
    vlSelfRef.__PVT__lsu__DOT__uopLd[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[1U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__uopLd[1U][3U] = 0U;
    vlSelfRef.__PVT__LSU_AGUStall[0U] = 1U;
    vlSelfRef.__PVT__LSU_AGUStall[1U] = 1U;
    if ((1U & (vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
               & ((~ (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy)) 
                  | (vlSelfRef.__PVT__lsu__DOT__selLd
                     [0U][0U] >> 1U))))) {
        if ((1U & (~ vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
                   [0U]))) {
            vlSelfRef.__PVT__LSU_AGUStall[(1U & (IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c))] = 0U;
        }
        vlSelfRef.__PVT__CC_loadStall[0U] = 1U;
        vlSelfRef.__PVT__CC_loadStall[1U] = 1U;
        if (vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[0U]) {
            if (vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
                [0U]) {
                vlSelfRef.__PVT__CC_loadStall[(1U & (IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c))] = 0U;
            }
        }
    } else {
        vlSelfRef.__PVT__CC_loadStall[0U] = 1U;
        vlSelfRef.__PVT__CC_loadStall[1U] = 1U;
    }
    if ((1U & (vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
               & ((~ ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy) 
                      >> 1U)) | (vlSelfRef.__PVT__lsu__DOT__selLd
                                 [1U][0U] >> 1U))))) {
        vlSelfRef.__PVT__lsu__DOT__uopLd[1U][0U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[1U][1U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][1U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[1U][2U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][2U];
        vlSelfRef.__PVT__lsu__DOT__uopLd[1U][3U] = 
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][3U];
        if ((1U & (~ vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
                   [1U]))) {
            vlSelfRef.__PVT__LSU_AGUStall[(1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c) 
                                                 >> 1U))] = 0U;
        }
        if (vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[1U]) {
            if (vlSelfRef.__PVT__lsu__DOT__selLdSrc_c
                [1U]) {
                vlSelfRef.__PVT__CC_loadStall[(1U & 
                                               ((IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c) 
                                                >> 1U))] = 0U;
            }
        }
    }
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[4U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[4U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[3U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[3U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[2U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[2U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[1U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[1U];
    vlSymsp->TOP__Top__soc__core__rn.__PVT__IN_flagsUOps[0U] 
        = vlSelfRef.__Vcellinp__rn__IN_flagsUOps[0U];
    vlSelfRef.__PVT__CC_PW_LD_stall[0U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__PW_LD_uop[0U]))) {
        vlSelfRef.__PVT__CC_PW_LD_stall[0U] = vlSelfRef.__PVT__CC_loadStall
            [0U];
    }
    vlSelfRef.__PVT__CC_PW_LD_stall[1U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__PW_LD_uop[1U]))) {
        vlSelfRef.__PVT__CC_PW_LD_stall[1U] = vlSelfRef.__PVT__CC_loadStall
            [1U];
    }
    vlSelfRef.__PVT__LS_AGULD_uopStall[0U] = 0U;
    if ((1U & vlSelfRef.__PVT__LB_uopLd[0U][0U])) {
        vlSelfRef.__PVT__LS_AGULD_uopStall[0U] = (1U 
                                                  & ((IData)(
                                                             vlSelfRef.__PVT__PW_LD_uop
                                                             [0U]) 
                                                     | vlSelfRef.__PVT__CC_loadStall
                                                     [0U]));
    }
    vlSelfRef.__PVT__LS_AGULD_uopStall[1U] = 0U;
    if ((1U & vlSelfRef.__PVT__LB_uopLd[1U][0U])) {
        vlSelfRef.__PVT__LS_AGULD_uopStall[1U] = (1U 
                                                  & ((IData)(
                                                             vlSelfRef.__PVT__PW_LD_uop
                                                             [1U]) 
                                                     | vlSelfRef.__PVT__CC_loadStall
                                                     [1U]));
    }
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__38(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__38\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    CData/*0:0*/ ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1;
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 = 0;
    SData/*15:0*/ genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 = 0;
    CData/*3:0*/ __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*5:0*/ __PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*4:0*/ intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0;
    intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0 = 0;
    CData/*0:0*/ intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0;
    intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0 = 0;
    // Body
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffffff8U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((4U & (vlSelfRef.LD_uop[2U][5U] >> 0x12U)) 
              | ((2U & (vlSelfRef.LD_uop[2U][5U] >> 0x14U)) 
                 | (1U & (vlSelfRef.LD_uop[2U][5U] 
                          >> 0x16U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20U & (vlSelfRef.LD_uop[2U][5U] >> 0xcU)) 
              | ((0x10U & (vlSelfRef.LD_uop[2U][5U] 
                           >> 0xeU)) | (8U & (vlSelfRef.LD_uop
                                              [2U][5U] 
                                              >> 0x10U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x100U & (vlSelfRef.LD_uop[2U][5U] >> 6U)) 
              | ((0x80U & (vlSelfRef.LD_uop[2U][5U] 
                           >> 8U)) | (0x40U & (vlSelfRef.LD_uop
                                               [2U][5U] 
                                               >> 0xaU)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x800U & vlSelfRef.LD_uop[2U][5U]) | 
              ((0x400U & (vlSelfRef.LD_uop[2U][5U] 
                          >> 2U)) | (0x200U & (vlSelfRef.LD_uop
                                               [2U][5U] 
                                               >> 4U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x4000U & (vlSelfRef.LD_uop[2U][5U] 
                          << 6U)) | ((0x2000U & (vlSelfRef.LD_uop
                                                 [2U][5U] 
                                                 << 4U)) 
                                     | (0x1000U & (
                                                   vlSelfRef.LD_uop
                                                   [2U][5U] 
                                                   << 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xfffc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20000U & (vlSelfRef.LD_uop[2U][5U] 
                           << 0xcU)) | ((0x10000U & 
                                         (vlSelfRef.LD_uop
                                          [2U][5U] 
                                          << 0xaU)) 
                                        | (0x8000U 
                                           & (vlSelfRef.LD_uop
                                              [2U][5U] 
                                              << 8U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xffe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x100000U & (vlSelfRef.LD_uop[2U][5U] 
                            << 0x12U)) | ((0x80000U 
                                           & (vlSelfRef.LD_uop
                                              [2U][5U] 
                                              << 0x10U)) 
                                          | (0x40000U 
                                             & (vlSelfRef.LD_uop
                                                [2U][5U] 
                                                << 0xeU)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xff1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x800000U & (vlSelfRef.LD_uop[2U][4U] 
                            >> 8U)) | ((0x400000U & 
                                        (vlSelfRef.LD_uop
                                         [2U][5U] << 0x16U)) 
                                       | (0x200000U 
                                          & (vlSelfRef.LD_uop
                                             [2U][5U] 
                                             << 0x14U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xf8ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x4000000U & (vlSelfRef.LD_uop[2U][4U] 
                             >> 2U)) | ((0x2000000U 
                                         & (vlSelfRef.LD_uop
                                            [2U][4U] 
                                            >> 4U)) 
                                        | (0x1000000U 
                                           & (vlSelfRef.LD_uop
                                              [2U][4U] 
                                              >> 6U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0xc7ffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x20000000U & (vlSelfRef.LD_uop[2U][4U] 
                              << 4U)) | ((0x10000000U 
                                          & (vlSelfRef.LD_uop
                                             [2U][4U] 
                                             << 2U)) 
                                         | (0x8000000U 
                                            & vlSelfRef.LD_uop
                                            [2U][4U]))));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev 
        = ((0x3fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev) 
           | ((0x80000000U & (vlSelfRef.LD_uop[2U][4U] 
                              << 8U)) | (0x40000000U 
                                         & (vlSelfRef.LD_uop
                                            [2U][4U] 
                                            << 6U))));
    vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
        = ((0U == (0x3fU & (vlSelfRef.LD_uop[2U][1U] 
                            >> 8U))) ? vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev
            : ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] = 0U;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[2U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[3U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] = 0U;
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (1U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [0U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (2U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (4U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [1U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (8U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x10U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [2U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x20U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x40U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [3U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x80U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x100U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [4U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x200U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x400U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [5U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x800U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x1000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [6U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x2000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x10U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][1U] 
                                                   >> 0x17U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
               [0U]);
    }
    if ((1U & (vlSelfRef.IS_uop[0U][0U] & (~ (vlSelfRef.IS_uop
                                              [0U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [0U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [0U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[0U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[0U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[1U][0U] & (~ (vlSelfRef.IS_uop
                                              [1U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [1U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [1U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[1U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[1U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    if ((1U & (vlSelfRef.IS_uop[2U][0U] & (~ (vlSelfRef.IS_uop
                                              [2U][1U] 
                                              >> 8U))))) {
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x10U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x4000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
        if (((0x7fU & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                       [7U][1U] >> 0x17U)) == (0x7fU 
                                               & (vlSelfRef.IS_uop
                                                  [2U][1U] 
                                                  >> 2U)))) {
            if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                          >> 5U)))) {
                if ((0x10U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[1U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [1U]);
                    } else if ((1U & (~ (vlSelfRef.IS_uop
                                         [2U][0U] >> 2U)))) {
                        if ((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex))) {
                            vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[4U] 
                                = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                                   [4U]);
                        }
                    }
                } else if ((8U & vlSelfRef.IS_uop[2U][0U])) {
                    if ((1U & (~ (vlSelfRef.IS_uop[2U][0U] 
                                  >> 2U)))) {
                        vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                            = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                               [0U]);
                    }
                } else {
                    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[0U] 
                        = (0x8000U | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                           [0U]);
                }
            }
        }
    }
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 1U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 5U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 7U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[8U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[9U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xaU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xbU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xbU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xcU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xdU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xdU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xeU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xfU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x10U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x11U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x11U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x12U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x13U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x13U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x14U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x15U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x15U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x16U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x17U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x18U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x19U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x19U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1bU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1dU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1eU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1fU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][0U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [0U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [0U][1U] >> 0x1eU)) 
                 | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [0U]));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][0U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][0U] | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                 [1U]));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][1U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [1U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [1U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][1U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][1U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][2U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [2U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [2U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][2U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][2U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][3U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [3U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [3U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][3U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][3U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][4U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [4U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [4U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][4U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][4U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 8U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][5U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [5U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [5U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][5U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][5U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xaU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][6U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [6U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [6U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][6U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][6U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xcU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[0U][7U] 
        = (3U & (((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                   [7U][1U] << 2U) | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                      [7U][1U] >> 0x1eU)) 
                 | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                    [0U] >> 0xeU)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[1U][7U] 
        = (3U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                 [0U][7U] | (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c
                             [1U] >> 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [9U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [8U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xbU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xaU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xdU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xcU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xfU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xeU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x11U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x10U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x13U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x12U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x15U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x14U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x17U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x16U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x19U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x18U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1bU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1aU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1dU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1cU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1fU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1eU];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfeU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | (((0U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
               & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                  [0U][0U])) & (~ ((((((0U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U))) 
                                       | (1U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [0U][0U] 
                                                    >> 1U)))) 
                                      | (2U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [0U][0U] 
                                                   >> 1U)))) 
                                     | (6U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [0U][0U] 
                                                  >> 1U)))) 
                                    | (7U == (0xfU 
                                              & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                 [0U][0U] 
                                                 >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfdU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((1U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][1U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [1U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [1U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [1U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [1U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 1U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xfbU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((2U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][2U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [2U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [2U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [2U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [2U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 2U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xf7U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((3U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][3U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [3U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [3U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [3U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [3U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 3U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xefU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((4U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][4U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [4U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [4U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [4U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [4U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 4U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xdfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((5U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][5U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [5U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [5U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [5U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [5U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 5U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0xbfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((6U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][6U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [6U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [6U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [6U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [6U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 6U));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c 
        = ((0x7fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)) 
           | ((((7U < (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex)) 
                & (3U == vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c
                   [0U][7U])) & (~ ((((((0U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U))) 
                                        | (1U == (0xfU 
                                                  & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                     [7U][0U] 
                                                     >> 1U)))) 
                                       | (2U == (0xfU 
                                                 & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                    [7U][0U] 
                                                    >> 1U)))) 
                                      | (6U == (0xfU 
                                                & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                   [7U][0U] 
                                                   >> 1U)))) 
                                     | (7U == (0xfU 
                                               & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue
                                                  [7U][0U] 
                                                  >> 1U)))) 
                                    & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs)))) 
              << 7U));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[4U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [8U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [8U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[5U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xaU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xaU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[6U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xcU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xcU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[7U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xeU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xeU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[8U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x10U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x10U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[9U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x12U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x12U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xaU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x14U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x14U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xbU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x16U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x16U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xcU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x18U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x18U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xdU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1aU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1aU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xeU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1cU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1cU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xfU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1eU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1eU]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 1U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 4U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 5U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 6U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c) 
                    >> 7U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [9U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [8U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xbU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xaU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xdU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xcU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xfU];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xeU];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [4U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [6U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [8U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [8U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xaU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xaU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xcU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xcU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xeU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xeU]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [2U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [4U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [6U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0x10U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                     [0U] << 4U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0x10U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                     [2U] << 4U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
        [0U];
    __PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0x20U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
                     [0U] << 5U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq 
        = ((vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3
           [0U]);
    __PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s
        [0U];
    intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0 
        = (0x1fU & ((IData)(__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 1U));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx[0U] 
        = intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0;
    intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid[0U] 
        = intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xfcU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((1U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 1U) | (0U 
                                                >= 
                                                (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                                                    >> 1U)))));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xf3U & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((3U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 3U) | ((2U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 2U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c 
        = ((0xcfU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
           | (((5U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                             >> 1U))) << 5U) | ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                                                     >> 1U))) 
                                                << 4U)));
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c 
        = ((0x3fU & (IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c)) 
           | (0x80U | ((6U >= (7U & ((IData)(vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq) 
                                     >> 1U))) << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC = 0U;
    if ((0U == (0xfU & (vlSelfRef.LD_uop[2U][0U] >> 2U)))) {
        if ((0x2000U & vlSelfRef.LD_uop[2U][1U])) {
            if ((0x1000U & vlSelfRef.LD_uop[2U][1U])) {
                if ((0x800U & vlSelfRef.LD_uop[2U][1U])) {
                    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                        = ((0x400U & vlSelfRef.LD_uop
                            [2U][1U]) ? ((0x200U & 
                                          vlSelfRef.LD_uop
                                          [2U][1U])
                                          ? ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [2U][1U])
                                              ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__1
                                              : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__1)
                                          : ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [2U][1U])
                                              ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__1
                                              : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__1))
                            : ((0x200U & vlSelfRef.LD_uop
                                [2U][1U]) ? ((0x100U 
                                              & vlSelfRef.LD_uop
                                              [2U][1U])
                                              ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__1
                                              : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__1)
                                : ((0x100U & vlSelfRef.LD_uop
                                    [2U][1U]) ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__1
                                    : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__1)));
                }
            }
        } else if ((0x1000U & vlSelfRef.LD_uop[2U][1U])) {
            if ((0x800U & vlSelfRef.LD_uop[2U][1U])) {
                if ((1U & (~ (vlSelfRef.LD_uop[2U][1U] 
                              >> 0xaU)))) {
                    if ((1U & (~ (vlSelfRef.LD_uop[2U][1U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [2U][1U] >> 8U)))) {
                            vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                = (0xffffU & ((vlSelfRef.LD_uop
                                               [2U][5U] 
                                               << 9U) 
                                              | (vlSelfRef.LD_uop
                                                 [2U][4U] 
                                                 >> 0x17U)));
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x400U & vlSelfRef.LD_uop[2U][1U])
                        ? ((0x200U & vlSelfRef.LD_uop
                            [2U][1U]) ? ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [2U][1U])
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.LD_uop
                                                             [2U][5U] 
                                                             >> 6U)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & ((vlSelfRef.LD_uop
                                                    [2U][5U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [2U][4U] 
                                                      >> 0x17U))))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.LD_uop
                                                             [2U][4U] 
                                                             >> 0x1eU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U))))
                            : ((0x100U & vlSelfRef.LD_uop
                                [2U][1U]) ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__1
                                : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__1))
                        : ((0x200U & vlSelfRef.LD_uop
                            [2U][1U]) ? ((0x100U & 
                                          vlSelfRef.LD_uop
                                          [2U][1U])
                                          ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__1
                                          : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__1)
                            : ((0x100U & vlSelfRef.LD_uop
                                [2U][1U]) ? ((~ ((vlSelfRef.LD_uop
                                                  [2U][4U] 
                                                  << 9U) 
                                                 | (vlSelfRef.LD_uop
                                                    [2U][3U] 
                                                    >> 0x17U))) 
                                             | ((vlSelfRef.LD_uop
                                                 [2U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U)))
                                : ((~ ((vlSelfRef.LD_uop
                                        [2U][4U] << 9U) 
                                       | (vlSelfRef.LD_uop
                                          [2U][3U] 
                                          >> 0x17U))) 
                                   & ((vlSelfRef.LD_uop
                                       [2U][5U] << 9U) 
                                      | (vlSelfRef.LD_uop
                                         [2U][4U] >> 0x17U))))));
            }
        } else if ((0x800U & vlSelfRef.LD_uop[2U][1U])) {
            if ((0x400U & vlSelfRef.LD_uop[2U][1U])) {
                vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x200U & vlSelfRef.LD_uop[2U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [2U][1U]) ? ((~ ((vlSelfRef.LD_uop
                                              [2U][4U] 
                                              << 9U) 
                                             | (vlSelfRef.LD_uop
                                                [2U][3U] 
                                                >> 0x17U))) 
                                         ^ ((vlSelfRef.LD_uop
                                             [2U][5U] 
                                             << 9U) 
                                            | (vlSelfRef.LD_uop
                                               [2U][4U] 
                                               >> 0x17U)))
                            : (((vlSelfRef.LD_uop[2U][4U] 
                                 << 9U) | (vlSelfRef.LD_uop
                                           [2U][3U] 
                                           >> 0x17U)) 
                               + VL_SHIFTL_III(32,32,32, 
                                               ((vlSelfRef.LD_uop
                                                 [2U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U)), 3U)))
                        : ((0x100U & vlSelfRef.LD_uop
                            [2U][1U]) ? (((vlSelfRef.LD_uop
                                           [2U][4U] 
                                           << 9U) | 
                                          (vlSelfRef.LD_uop
                                           [2U][3U] 
                                           >> 0x17U)) 
                                         + VL_SHIFTL_III(32,32,32, 
                                                         ((vlSelfRef.LD_uop
                                                           [2U][5U] 
                                                           << 9U) 
                                                          | (vlSelfRef.LD_uop
                                                             [2U][4U] 
                                                             >> 0x17U)), 2U))
                            : (((vlSelfRef.LD_uop[2U][4U] 
                                 << 9U) | (vlSelfRef.LD_uop
                                           [2U][3U] 
                                           >> 0x17U)) 
                               + VL_SHIFTL_III(32,32,32, 
                                               ((vlSelfRef.LD_uop
                                                 [2U][5U] 
                                                 << 9U) 
                                                | (vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U)), 1U))));
            } else if ((0x200U & vlSelfRef.LD_uop[2U][1U])) {
                if ((1U & (~ (vlSelfRef.LD_uop[2U][1U] 
                              >> 8U)))) {
                    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                        = ((vlSelfRef.LD_uop[2U][4U] 
                            << 9U) | (vlSelfRef.LD_uop
                                      [2U][3U] >> 0x17U));
                }
            } else {
                vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                    = ((0x100U & vlSelfRef.LD_uop[2U][1U])
                        ? VL_SHIFTRS_III(32,32,5, (
                                                   (vlSelfRef.LD_uop
                                                    [2U][5U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [2U][4U] 
                                                      >> 0x17U)), 
                                         (0x1fU & (
                                                   vlSelfRef.LD_uop
                                                   [2U][3U] 
                                                   >> 0x17U)))
                        : (((vlSelfRef.LD_uop[2U][5U] 
                             << 9U) | (vlSelfRef.LD_uop
                                       [2U][4U] >> 0x17U)) 
                           - ((vlSelfRef.LD_uop[2U][4U] 
                               << 9U) | (vlSelfRef.LD_uop
                                         [2U][3U] >> 0x17U))));
            }
        } else {
            vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                = ((0x400U & vlSelfRef.LD_uop[2U][1U])
                    ? ((0x200U & vlSelfRef.LD_uop[2U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [2U][1U]) ? (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU)
                            : (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThan))
                        : ((0x100U & vlSelfRef.LD_uop
                            [2U][1U]) ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__1
                            : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__1))
                    : ((0x200U & vlSelfRef.LD_uop[2U][1U])
                        ? ((0x100U & vlSelfRef.LD_uop
                            [2U][1U]) ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__1
                            : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__1)
                        : ((0x100U & vlSelfRef.LD_uop
                            [2U][1U]) ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__1
                            : vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__1)));
        }
    } else if ((1U != (0xfU & (vlSelfRef.LD_uop[2U][0U] 
                               >> 2U)))) {
        if ((2U == (0xfU & (vlSelfRef.LD_uop[2U][0U] 
                            >> 2U)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[2U][1U] 
                          >> 0xdU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[2U][1U] 
                              >> 0xcU)))) {
                    if ((0x800U & vlSelfRef.LD_uop[2U][1U])) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [2U][1U] >> 0xaU)))) {
                            if ((0x200U & vlSelfRef.LD_uop
                                 [2U][1U])) {
                                if ((1U & (~ (vlSelfRef.LD_uop
                                              [2U][1U] 
                                              >> 8U)))) {
                                    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                        = (((vlSelfRef.LD_uop
                                             [2U][5U] 
                                             << 9U) 
                                            | (vlSelfRef.LD_uop
                                               [2U][4U] 
                                               >> 0x17U)) 
                                           | ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelfRef.LD_uop
                                                     [2U][3U] 
                                                     >> 0x17U))));
                                }
                            } else {
                                vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                                    = ((0x100U & vlSelfRef.LD_uop
                                        [2U][1U]) ? 
                                       (((vlSelfRef.LD_uop
                                          [2U][5U] 
                                          << 9U) | 
                                         (vlSelfRef.LD_uop
                                          [2U][4U] 
                                          >> 0x17U)) 
                                        ^ ((IData)(1U) 
                                           << (0x1fU 
                                               & (vlSelfRef.LD_uop
                                                  [2U][3U] 
                                                  >> 0x17U))))
                                        : (1U & (vlSelfRef.LD_uop
                                                 [2U][
                                                 (((IData)(0x97U) 
                                                   + 
                                                   (0x1fU 
                                                    & (vlSelfRef.LD_uop
                                                       [2U][3U] 
                                                       >> 0x17U))) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x97U) 
                                                     + 
                                                     (0x1fU 
                                                      & (vlSelfRef.LD_uop
                                                         [2U][3U] 
                                                         >> 0x17U)))))));
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC 
                            = ((0x400U & vlSelfRef.LD_uop
                                [2U][1U]) ? ((0x200U 
                                              & vlSelfRef.LD_uop
                                              [2U][1U])
                                              ? ((0x100U 
                                                  & vlSelfRef.LD_uop
                                                  [2U][1U])
                                                  ? 
                                                 ((~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (0x1fU 
                                                     & (vlSelfRef.LD_uop
                                                        [2U][3U] 
                                                        >> 0x17U)))) 
                                                  & ((vlSelfRef.LD_uop
                                                      [2U][5U] 
                                                      << 9U) 
                                                     | (vlSelfRef.LD_uop
                                                        [2U][4U] 
                                                        >> 0x17U)))
                                                  : 
                                                 (((0xff000000U 
                                                    & (vlSelfRef.LD_uop
                                                       [2U][4U] 
                                                       << 1U)) 
                                                   | (0xff0000U 
                                                      & ((vlSelfRef.LD_uop
                                                          [2U][5U] 
                                                          << 0x11U) 
                                                         | (0x10000U 
                                                            & (vlSelfRef.LD_uop
                                                               [2U][4U] 
                                                               >> 0xfU))))) 
                                                  | ((0xff00U 
                                                      & (vlSelfRef.LD_uop
                                                         [2U][5U] 
                                                         << 1U)) 
                                                     | (0xffU 
                                                        & (vlSelfRef.LD_uop
                                                           [2U][5U] 
                                                           >> 0xfU)))))
                                              : ((0x100U 
                                                  & vlSelfRef.LD_uop
                                                  [2U][1U])
                                                  ? 
                                                 ((((- (IData)(
                                                               (0U 
                                                                != 
                                                                (0xffU 
                                                                 & (vlSelfRef.LD_uop
                                                                    [2U][5U] 
                                                                    >> 0xfU))))) 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & ((- (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & (vlSelfRef.LD_uop
                                                                         [2U][5U] 
                                                                         >> 7U))))) 
                                                         << 0x10U))) 
                                                  | ((0xff00U 
                                                      & ((- (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xffU 
                                                                      & ((vlSelfRef.LD_uop
                                                                          [2U][5U] 
                                                                          << 1U) 
                                                                         | (vlSelfRef.LD_uop
                                                                            [2U][4U] 
                                                                            >> 0x1fU)))))) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & (- (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0xffU 
                                                                       & (vlSelfRef.LD_uop
                                                                          [2U][4U] 
                                                                          >> 0x17U))))))))
                                                  : 
                                                 (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__1 
                                                  | VL_SHIFTL_III(32,32,32, 
                                                                  ((vlSelfRef.LD_uop
                                                                    [2U][5U] 
                                                                    << 9U) 
                                                                   | (vlSelfRef.LD_uop
                                                                      [2U][4U] 
                                                                      >> 0x17U)), 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.LD_uop
                                                                       [2U][3U] 
                                                                       >> 0x17U)))))))
                                : ((0x200U & vlSelfRef.LD_uop
                                    [2U][1U]) ? ((0x100U 
                                                  & vlSelfRef.LD_uop
                                                  [2U][1U])
                                                  ? 
                                                 (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__1 
                                                  | VL_SHIFTR_III(32,32,32, 
                                                                  ((vlSelfRef.LD_uop
                                                                    [2U][5U] 
                                                                    << 9U) 
                                                                   | (vlSelfRef.LD_uop
                                                                      [2U][4U] 
                                                                      >> 0x17U)), 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & (vlSelfRef.LD_uop
                                                                       [2U][3U] 
                                                                       >> 0x17U)))))
                                                  : 
                                                 (0x3fU 
                                                  & ((0x1fU 
                                                      & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums) 
                                                         >> 5U)))))
                                    : (vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid
                                       [0U] ? vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx
                                       [0U] : 0x20U)));
                    }
                }
            }
        }
    }
    vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd 
        = ((1ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd) 
           | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
               << 8U) | ((QData)((IData)((0x7fU & (
                                                   vlSelfRef.LD_uop
                                                   [2U][1U] 
                                                   >> 1U)))) 
                         << 1U)));
    vlSelfRef.__PVT__LD_zcFwd[2U] = vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd;
    vlSelfRef.__PVT__ld__DOT__forwards[0U] = vlSelfRef.__PVT__LD_zcFwd
        [0U];
    vlSelfRef.__PVT__ld__DOT__forwards[1U] = vlSelfRef.__PVT__LD_zcFwd
        [1U];
    vlSelfRef.__PVT__ld__DOT__forwards[2U] = vlSelfRef.__PVT__LD_zcFwd
        [2U];
    vlSelfRef.__PVT__ld__DOT__forwards[3U] = ((0xfffffffffeULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [3U]) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & ((IData)(
                                                                            vlSelfRef.resultUOps
                                                                            [0U]) 
                                                                    & (~ (IData)(
                                                                                (vlSelfRef.resultUOps
                                                                                [0U] 
                                                                                >> 8U))))))));
    vlSelfRef.__PVT__ld__DOT__forwards[3U] = ((0xffffffff01ULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [3U]) 
                                              | ((QData)((IData)(
                                                                 (0x7fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.resultUOps
                                                                             [0U] 
                                                                             >> 2U))))) 
                                                 << 1U));
    vlSelfRef.__PVT__ld__DOT__forwards[3U] = ((0xffULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [3U]) 
                                              | ((QData)((IData)((IData)(
                                                                         (vlSelfRef.resultUOps
                                                                          [0U] 
                                                                          >> 9U)))) 
                                                 << 8U));
    vlSelfRef.__PVT__ld__DOT__forwards[4U] = ((0xfffffffffeULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [4U]) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & ((IData)(
                                                                            vlSelfRef.resultUOps
                                                                            [1U]) 
                                                                    & (~ (IData)(
                                                                                (vlSelfRef.resultUOps
                                                                                [1U] 
                                                                                >> 8U))))))));
    vlSelfRef.__PVT__ld__DOT__forwards[4U] = ((0xffffffff01ULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [4U]) 
                                              | ((QData)((IData)(
                                                                 (0x7fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.resultUOps
                                                                             [1U] 
                                                                             >> 2U))))) 
                                                 << 1U));
    vlSelfRef.__PVT__ld__DOT__forwards[4U] = ((0xffULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [4U]) 
                                              | ((QData)((IData)((IData)(
                                                                         (vlSelfRef.resultUOps
                                                                          [1U] 
                                                                          >> 9U)))) 
                                                 << 8U));
    vlSelfRef.__PVT__ld__DOT__forwards[5U] = ((0xfffffffffeULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [5U]) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & ((IData)(
                                                                            vlSelfRef.resultUOps
                                                                            [2U]) 
                                                                    & (~ (IData)(
                                                                                (vlSelfRef.resultUOps
                                                                                [2U] 
                                                                                >> 8U))))))));
    vlSelfRef.__PVT__ld__DOT__forwards[5U] = ((0xffffffff01ULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [5U]) 
                                              | ((QData)((IData)(
                                                                 (0x7fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.resultUOps
                                                                             [2U] 
                                                                             >> 2U))))) 
                                                 << 1U));
    vlSelfRef.__PVT__ld__DOT__forwards[5U] = ((0xffULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [5U]) 
                                              | ((QData)((IData)((IData)(
                                                                         (vlSelfRef.resultUOps
                                                                          [2U] 
                                                                          >> 9U)))) 
                                                 << 8U));
    vlSelfRef.__PVT__ld__DOT__forwards[6U] = ((0xfffffffffeULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [6U]) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & ((IData)(
                                                                            vlSelfRef.resultUOps
                                                                            [3U]) 
                                                                    & (~ (IData)(
                                                                                (vlSelfRef.resultUOps
                                                                                [3U] 
                                                                                >> 8U))))))));
    vlSelfRef.__PVT__ld__DOT__forwards[6U] = ((0xffffffff01ULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [6U]) 
                                              | ((QData)((IData)(
                                                                 (0x7fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.resultUOps
                                                                             [3U] 
                                                                             >> 2U))))) 
                                                 << 1U));
    vlSelfRef.__PVT__ld__DOT__forwards[6U] = ((0xffULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [6U]) 
                                              | ((QData)((IData)((IData)(
                                                                         (vlSelfRef.resultUOps
                                                                          [3U] 
                                                                          >> 9U)))) 
                                                 << 8U));
    vlSelfRef.__PVT__ld__DOT__forwards[7U] = ((0xfffffffffeULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [7U]) 
                                              | (IData)((IData)(
                                                                (1U 
                                                                 & ((IData)(
                                                                            vlSelfRef.resultUOps
                                                                            [4U]) 
                                                                    & (~ (IData)(
                                                                                (vlSelfRef.resultUOps
                                                                                [4U] 
                                                                                >> 8U))))))));
    vlSelfRef.__PVT__ld__DOT__forwards[7U] = ((0xffffffff01ULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [7U]) 
                                              | ((QData)((IData)(
                                                                 (0x7fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.resultUOps
                                                                             [4U] 
                                                                             >> 2U))))) 
                                                 << 1U));
    vlSelfRef.__PVT__ld__DOT__forwards[7U] = ((0xffULL 
                                               & vlSelfRef.__PVT__ld__DOT__forwards
                                               [7U]) 
                                              | ((QData)((IData)((IData)(
                                                                         (vlSelfRef.resultUOps
                                                                          [4U] 
                                                                          >> 9U)))) 
                                                 << 8U));
    vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups[0U] 
        = (vlSelfRef.IS_uop[0U][1U] >> 0x19U);
    vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups[5U] 
        = (0x7fU & (vlSelfRef.IS_uop[0U][1U] >> 0x11U));
    vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups[1U] 
        = (vlSelfRef.IS_uop[1U][1U] >> 0x19U);
    vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups[6U] 
        = (0x7fU & (vlSelfRef.IS_uop[1U][1U] >> 0x11U));
    vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups[2U] 
        = (vlSelfRef.IS_uop[2U][1U] >> 0x19U);
    vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups[7U] 
        = (0x7fU & (vlSelfRef.IS_uop[2U][1U] >> 0x11U));
    vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups[3U] 
        = (vlSelfRef.IS_uop[3U][1U] >> 0x19U);
    vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups[4U] 
        = (vlSelfRef.IS_uop[4U][1U] >> 0x19U);
    vlSelfRef.__PVT__ld__DOT__match[0U] = ((0xfeU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [0U]) | 
                                           ((IData)(
                                                    vlSelfRef.__PVT__ld__DOT__forwards
                                                    [0U]) 
                                            & ((0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__ld__DOT__forwards
                                                           [0U] 
                                                           >> 1U))) 
                                               == vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                               [0U])));
    vlSelfRef.__PVT__ld__DOT__match[0U] = ((0xfdU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [0U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [1U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [1U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [0U])) 
                                            << 1U));
    vlSelfRef.__PVT__ld__DOT__match[0U] = ((0xfbU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [0U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [2U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [2U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [0U])) 
                                            << 2U));
    vlSelfRef.__PVT__ld__DOT__match[0U] = ((0xf7U & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [0U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [3U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [3U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [0U])) 
                                            << 3U));
    vlSelfRef.__PVT__ld__DOT__match[0U] = ((0xefU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [0U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [4U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [4U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [0U])) 
                                            << 4U));
    vlSelfRef.__PVT__ld__DOT__match[0U] = ((0xdfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [0U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [5U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [5U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [0U])) 
                                            << 5U));
    vlSelfRef.__PVT__ld__DOT__match[0U] = ((0xbfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [0U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [6U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [6U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [0U])) 
                                            << 6U));
    vlSelfRef.__PVT__ld__DOT__match[0U] = ((0x7fU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [0U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [7U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [7U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [0U])) 
                                            << 7U));
    vlSelfRef.__PVT__ld__DOT__match[1U] = ((0xfeU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [1U]) | 
                                           ((IData)(
                                                    vlSelfRef.__PVT__ld__DOT__forwards
                                                    [0U]) 
                                            & ((0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__ld__DOT__forwards
                                                           [0U] 
                                                           >> 1U))) 
                                               == vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                               [1U])));
    vlSelfRef.__PVT__ld__DOT__match[1U] = ((0xfdU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [1U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [1U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [1U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [1U])) 
                                            << 1U));
    vlSelfRef.__PVT__ld__DOT__match[1U] = ((0xfbU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [1U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [2U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [2U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [1U])) 
                                            << 2U));
    vlSelfRef.__PVT__ld__DOT__match[1U] = ((0xf7U & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [1U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [3U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [3U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [1U])) 
                                            << 3U));
    vlSelfRef.__PVT__ld__DOT__match[1U] = ((0xefU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [1U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [4U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [4U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [1U])) 
                                            << 4U));
    vlSelfRef.__PVT__ld__DOT__match[1U] = ((0xdfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [1U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [5U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [5U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [1U])) 
                                            << 5U));
    vlSelfRef.__PVT__ld__DOT__match[1U] = ((0xbfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [1U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [6U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [6U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [1U])) 
                                            << 6U));
    vlSelfRef.__PVT__ld__DOT__match[1U] = ((0x7fU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [1U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [7U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [7U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [1U])) 
                                            << 7U));
    vlSelfRef.__PVT__ld__DOT__match[2U] = ((0xfeU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [2U]) | 
                                           ((IData)(
                                                    vlSelfRef.__PVT__ld__DOT__forwards
                                                    [0U]) 
                                            & ((0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__ld__DOT__forwards
                                                           [0U] 
                                                           >> 1U))) 
                                               == vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                               [2U])));
    vlSelfRef.__PVT__ld__DOT__match[2U] = ((0xfdU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [2U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [1U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [1U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [2U])) 
                                            << 1U));
    vlSelfRef.__PVT__ld__DOT__match[2U] = ((0xfbU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [2U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [2U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [2U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [2U])) 
                                            << 2U));
    vlSelfRef.__PVT__ld__DOT__match[2U] = ((0xf7U & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [2U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [3U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [3U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [2U])) 
                                            << 3U));
    vlSelfRef.__PVT__ld__DOT__match[2U] = ((0xefU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [2U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [4U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [4U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [2U])) 
                                            << 4U));
    vlSelfRef.__PVT__ld__DOT__match[2U] = ((0xdfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [2U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [5U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [5U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [2U])) 
                                            << 5U));
    vlSelfRef.__PVT__ld__DOT__match[2U] = ((0xbfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [2U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [6U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [6U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [2U])) 
                                            << 6U));
    vlSelfRef.__PVT__ld__DOT__match[2U] = ((0x7fU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [2U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [7U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [7U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [2U])) 
                                            << 7U));
    vlSelfRef.__PVT__ld__DOT__match[3U] = ((0xfeU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [3U]) | 
                                           ((IData)(
                                                    vlSelfRef.__PVT__ld__DOT__forwards
                                                    [0U]) 
                                            & ((0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__ld__DOT__forwards
                                                           [0U] 
                                                           >> 1U))) 
                                               == vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                               [3U])));
    vlSelfRef.__PVT__ld__DOT__match[3U] = ((0xfdU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [3U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [1U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [1U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [3U])) 
                                            << 1U));
    vlSelfRef.__PVT__ld__DOT__match[3U] = ((0xfbU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [3U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [2U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [2U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [3U])) 
                                            << 2U));
    vlSelfRef.__PVT__ld__DOT__match[3U] = ((0xf7U & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [3U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [3U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [3U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [3U])) 
                                            << 3U));
    vlSelfRef.__PVT__ld__DOT__match[3U] = ((0xefU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [3U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [4U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [4U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [3U])) 
                                            << 4U));
    vlSelfRef.__PVT__ld__DOT__match[3U] = ((0xdfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [3U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [5U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [5U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [3U])) 
                                            << 5U));
    vlSelfRef.__PVT__ld__DOT__match[3U] = ((0xbfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [3U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [6U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [6U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [3U])) 
                                            << 6U));
    vlSelfRef.__PVT__ld__DOT__match[3U] = ((0x7fU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [3U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [7U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [7U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [3U])) 
                                            << 7U));
    vlSelfRef.__PVT__ld__DOT__match[4U] = ((0xfeU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [4U]) | 
                                           ((IData)(
                                                    vlSelfRef.__PVT__ld__DOT__forwards
                                                    [0U]) 
                                            & ((0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__ld__DOT__forwards
                                                           [0U] 
                                                           >> 1U))) 
                                               == vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                               [4U])));
    vlSelfRef.__PVT__ld__DOT__match[4U] = ((0xfdU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [4U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [1U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [1U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [4U])) 
                                            << 1U));
    vlSelfRef.__PVT__ld__DOT__match[4U] = ((0xfbU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [4U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [2U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [2U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [4U])) 
                                            << 2U));
    vlSelfRef.__PVT__ld__DOT__match[4U] = ((0xf7U & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [4U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [3U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [3U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [4U])) 
                                            << 3U));
    vlSelfRef.__PVT__ld__DOT__match[4U] = ((0xefU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [4U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [4U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [4U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [4U])) 
                                            << 4U));
    vlSelfRef.__PVT__ld__DOT__match[4U] = ((0xdfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [4U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [5U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [5U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [4U])) 
                                            << 5U));
    vlSelfRef.__PVT__ld__DOT__match[4U] = ((0xbfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [4U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [6U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [6U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [4U])) 
                                            << 6U));
    vlSelfRef.__PVT__ld__DOT__match[4U] = ((0x7fU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [4U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [7U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [7U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [4U])) 
                                            << 7U));
    vlSelfRef.__PVT__ld__DOT__match[5U] = ((0xfeU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [5U]) | 
                                           ((IData)(
                                                    vlSelfRef.__PVT__ld__DOT__forwards
                                                    [0U]) 
                                            & ((0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__ld__DOT__forwards
                                                           [0U] 
                                                           >> 1U))) 
                                               == vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                               [5U])));
    vlSelfRef.__PVT__ld__DOT__match[5U] = ((0xfdU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [5U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [1U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [1U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [5U])) 
                                            << 1U));
    vlSelfRef.__PVT__ld__DOT__match[5U] = ((0xfbU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [5U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [2U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [2U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [5U])) 
                                            << 2U));
    vlSelfRef.__PVT__ld__DOT__match[5U] = ((0xf7U & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [5U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [3U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [3U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [5U])) 
                                            << 3U));
    vlSelfRef.__PVT__ld__DOT__match[5U] = ((0xefU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [5U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [4U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [4U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [5U])) 
                                            << 4U));
    vlSelfRef.__PVT__ld__DOT__match[5U] = ((0xdfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [5U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [5U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [5U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [5U])) 
                                            << 5U));
    vlSelfRef.__PVT__ld__DOT__match[5U] = ((0xbfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [5U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [6U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [6U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [5U])) 
                                            << 6U));
    vlSelfRef.__PVT__ld__DOT__match[5U] = ((0x7fU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [5U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [7U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [7U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [5U])) 
                                            << 7U));
    vlSelfRef.__PVT__ld__DOT__match[6U] = ((0xfeU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [6U]) | 
                                           ((IData)(
                                                    vlSelfRef.__PVT__ld__DOT__forwards
                                                    [0U]) 
                                            & ((0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__ld__DOT__forwards
                                                           [0U] 
                                                           >> 1U))) 
                                               == vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                               [6U])));
    vlSelfRef.__PVT__ld__DOT__match[6U] = ((0xfdU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [6U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [1U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [1U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [6U])) 
                                            << 1U));
    vlSelfRef.__PVT__ld__DOT__match[6U] = ((0xfbU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [6U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [2U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [2U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [6U])) 
                                            << 2U));
    vlSelfRef.__PVT__ld__DOT__match[6U] = ((0xf7U & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [6U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [3U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [3U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [6U])) 
                                            << 3U));
    vlSelfRef.__PVT__ld__DOT__match[6U] = ((0xefU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [6U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [4U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [4U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [6U])) 
                                            << 4U));
    vlSelfRef.__PVT__ld__DOT__match[6U] = ((0xdfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [6U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [5U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [5U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [6U])) 
                                            << 5U));
    vlSelfRef.__PVT__ld__DOT__match[6U] = ((0xbfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [6U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [6U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [6U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [6U])) 
                                            << 6U));
    vlSelfRef.__PVT__ld__DOT__match[6U] = ((0x7fU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [6U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [7U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [7U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [6U])) 
                                            << 7U));
    vlSelfRef.__PVT__ld__DOT__match[7U] = ((0xfeU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [7U]) | 
                                           ((IData)(
                                                    vlSelfRef.__PVT__ld__DOT__forwards
                                                    [0U]) 
                                            & ((0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__ld__DOT__forwards
                                                           [0U] 
                                                           >> 1U))) 
                                               == vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                               [7U])));
    vlSelfRef.__PVT__ld__DOT__match[7U] = ((0xfdU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [7U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [1U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [1U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [7U])) 
                                            << 1U));
    vlSelfRef.__PVT__ld__DOT__match[7U] = ((0xfbU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [7U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [2U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [2U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [7U])) 
                                            << 2U));
    vlSelfRef.__PVT__ld__DOT__match[7U] = ((0xf7U & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [7U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [3U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [3U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [7U])) 
                                            << 3U));
    vlSelfRef.__PVT__ld__DOT__match[7U] = ((0xefU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [7U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [4U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [4U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [7U])) 
                                            << 4U));
    vlSelfRef.__PVT__ld__DOT__match[7U] = ((0xdfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [7U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [5U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [5U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [7U])) 
                                            << 5U));
    vlSelfRef.__PVT__ld__DOT__match[7U] = ((0xbfU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [7U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [6U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [6U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [7U])) 
                                            << 6U));
    vlSelfRef.__PVT__ld__DOT__match[7U] = ((0x7fU & 
                                            vlSelfRef.__PVT__ld__DOT__match
                                            [7U]) | 
                                           (((IData)(
                                                     vlSelfRef.__PVT__ld__DOT__forwards
                                                     [7U]) 
                                             & ((0x7fU 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__ld__DOT__forwards
                                                            [7U] 
                                                            >> 1U))) 
                                                == 
                                                vlSelfRef.__PVT__ld__DOT__unnamedblk3__DOT__lookups
                                                [7U])) 
                                            << 7U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.__PVT__ld__DOT__match
                          [7U] & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid) 
                 | vlSelfRef.__PVT__ld__DOT__match[7U]));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [7U] >> 1U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [7U] >> 2U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [7U] >> 3U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 3U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [7U] >> 4U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 4U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [7U] >> 5U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 5U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [7U] >> 6U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 6U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [7U] >> 7U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.__PVT__ld__DOT__match
                          [6U] & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid) 
                 | vlSelfRef.__PVT__ld__DOT__match[6U]));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [6U] >> 1U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [6U] >> 2U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [6U] >> 3U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 3U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [6U] >> 4U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 4U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [6U] >> 5U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 5U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [6U] >> 6U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 6U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [6U] >> 7U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.__PVT__ld__DOT__match
                          [5U] & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid) 
                 | vlSelfRef.__PVT__ld__DOT__match[5U]));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [5U] >> 1U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [5U] >> 2U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [5U] >> 3U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 3U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [5U] >> 4U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 4U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [5U] >> 5U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 5U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [5U] >> 6U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 6U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [5U] >> 7U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.__PVT__ld__DOT__match
                          [4U] & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid) 
                 | vlSelfRef.__PVT__ld__DOT__match[4U]));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [4U] >> 1U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [4U] >> 2U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [4U] >> 3U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 3U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [4U] >> 4U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 4U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [4U] >> 5U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 5U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [4U] >> 6U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 6U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [4U] >> 7U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.__PVT__ld__DOT__match
                          [3U] & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid) 
                 | vlSelfRef.__PVT__ld__DOT__match[3U]));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [3U] >> 1U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [3U] >> 2U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [3U] >> 3U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 3U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [3U] >> 4U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 4U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [3U] >> 5U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 5U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [3U] >> 6U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 6U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [3U] >> 7U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.__PVT__ld__DOT__match
                          [2U] & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid) 
                 | vlSelfRef.__PVT__ld__DOT__match[2U]));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [2U] >> 1U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [2U] >> 2U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [2U] >> 3U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 3U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [2U] >> 4U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 4U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [2U] >> 5U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 5U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [2U] >> 6U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 6U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [2U] >> 7U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.__PVT__ld__DOT__match
                          [1U] & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid) 
                 | vlSelfRef.__PVT__ld__DOT__match[1U]));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [1U] >> 1U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [1U] >> 2U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [1U] >> 3U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 3U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [1U] >> 4U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 4U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [1U] >> 5U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 5U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [1U] >> 6U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 6U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [1U] >> 7U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.__PVT__ld__DOT__match
                          [0U] & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid) 
                 | vlSelfRef.__PVT__ld__DOT__match[0U]));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [0U] >> 1U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [0U] >> 2U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [0U] >> 3U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 3U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [0U] >> 4U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 4U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [0U] >> 5U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 5U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [0U] >> 6U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 6U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((vlSelfRef.__PVT__ld__DOT__match
                           [0U] >> 7U) & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [7U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [7U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [7U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [7U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [7U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [7U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [7U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [7U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [7U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__7__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [6U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [6U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [6U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [6U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [6U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [6U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [6U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [6U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [6U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__6__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [5U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [5U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [5U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [5U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [5U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [5U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [5U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [5U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [5U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__5__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [4U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [4U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [4U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [4U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [4U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [4U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [4U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [4U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [4U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__4__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [3U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [3U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [3U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [3U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [3U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [3U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [3U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [3U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [3U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__3__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | (IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | (IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | (IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [2U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | (IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [2U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx)) 
           | ((IData)(vlSelfRef.ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [1U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [1U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__1__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = (6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 1U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((6U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & ((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                 | (vlSelfRef.__PVT__ld__DOT__match
                    [0U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((4U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | (IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 2U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 3U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((5U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 1U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((1U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 1U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 4U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 5U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 6U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1 
        = (1U & (((IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx) 
                  >> 2U) | (vlSelfRef.__PVT__ld__DOT__match
                            [0U] >> 7U)));
    vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx 
        = ((3U & (IData)(vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx)) 
           | ((IData)(ld__DOT__lookupEnc__BRA__0__KET____DOT____Vlvbound_he7b3e1d0__1) 
              << 2U));
    vlSelfRef.__PVT__ld__DOT__matchValid[7U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[6U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[5U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[4U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[3U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[2U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[1U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchValid[0U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid;
    vlSelfRef.__PVT__ld__DOT__matchIdx[7U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[6U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[5U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[4U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[3U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[2U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[1U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx;
    vlSelfRef.__PVT__ld__DOT__matchIdx[0U] = vlSelfRef.ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx;
}
