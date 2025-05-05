// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__4(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___stl_sequent__TOP__Top__soc__core__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    IData/*19:0*/ lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp;
    lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp = 0;
    IData/*19:0*/ lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp;
    lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp = 0;
    CData/*0:0*/ __PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx;
    __PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx = 0;
    CData/*0:0*/ lsu__DOT____Vlvbound_h3c7694f9__0;
    lsu__DOT____Vlvbound_h3c7694f9__0 = 0;
    SData/*11:0*/ lsu__DOT____Vlvbound_h334829d0__0;
    lsu__DOT____Vlvbound_h334829d0__0 = 0;
    CData/*0:0*/ lsu__DOT____Vlvbound_h519ab844__0;
    lsu__DOT____Vlvbound_h519ab844__0 = 0;
    SData/*11:0*/ lsu__DOT____Vlvbound_hb4ca6dc7__0;
    lsu__DOT____Vlvbound_hb4ca6dc7__0 = 0;
    VlWide<3>/*88:0*/ __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c;
    VL_ZERO_W(89, __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c);
    VlWide<3>/*88:0*/ __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c;
    VL_ZERO_W(89, __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c);
    CData/*0:0*/ __PVT__cacheLineManager__DOT__missEvictConflict;
    __PVT__cacheLineManager__DOT__missEvictConflict = 0;
    CData/*0:0*/ cacheLineManager__DOT____Vlvbound_hb22928dc__0;
    cacheLineManager__DOT____Vlvbound_hb22928dc__0 = 0;
    SData/*14:0*/ cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2;
    cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2 = 0;
    SData/*15:0*/ genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__1__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 = 0;
    SData/*15:0*/ genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0;
    genblk1__BRA__2__KET____DOT__iq__DOT____Vlvbound_hb193600f__0 = 0;
    VlUnpacked<CData/*0:0*/, 1> intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid[__Vi0] = 0;
    }
    VlUnpacked<CData/*4:0*/, 1> intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx[__Vi0] = 0;
    }
    CData/*5:0*/ __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*4:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0 = 0;
    CData/*0:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0 = 0;
    VlUnpacked<CData/*0:0*/, 1> intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid[__Vi0] = 0;
    }
    VlUnpacked<CData/*4:0*/, 1> intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx[__Vi0] = 0;
    }
    CData/*5:0*/ __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*4:0*/ intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0;
    intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0 = 0;
    CData/*0:0*/ intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0;
    intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*5:0*/ __PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*4:0*/ intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0;
    intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0 = 0;
    CData/*0:0*/ intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0;
    intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*0:0*/ aguPortsGen__BRA__0__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__2;
    aguPortsGen__BRA__0__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__2 = 0;
    CData/*0:0*/ aguPortsGen__BRA__1__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__0;
    aguPortsGen__BRA__1__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__0 = 0;
    // Body
    __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = (1U & (vlSelfRef.__PVT__TLB_rqs[1U] >> 1U));
    vlSelfRef.__PVT__TLB_res[1U] = 0U;
    vlSelfRef.__PVT__TLB_res[1U] = (0xfffff7fU & vlSelfRef.__PVT__TLB_res
                                    [1U]);
    vlSelfRef.__PVT__TLB_res[1U] = (0xfffffbfU & vlSelfRef.__PVT__TLB_res
                                    [1U]);
    vlSelfRef.__PVT__TLB_res[1U] = (0xffffffeU & vlSelfRef.__PVT__TLB_res
                                    [1U]);
    if ((1U & vlSelfRef.__PVT__TLB_rqs[1U])) {
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [0U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [0U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [0U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [1U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [1U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[1U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [1U]);
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [0U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [0U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [1U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [0U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((0U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (2U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [1U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [1U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [1U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [1U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [1U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [1U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[1U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [1U]);
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [1U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [1U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [1U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [1U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((1U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (2U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [2U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [2U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [2U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [1U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [2U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [1U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[1U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [1U]);
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [2U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [2U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [1U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [2U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((2U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (2U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
        if (((IData)(vlSelfRef.__PVT__dtlb__DOT__tlb
                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                     [3U]) & ((1U & (IData)((vlSelfRef.__PVT__dtlb__DOT__tlb
                                             [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                             [3U] >> 8U)))
                               ? ((0x3ffU & (IData)(
                                                    (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                     [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                     [3U] 
                                                     >> 0x26U))) 
                                  == (0x3ffU & (vlSelfRef.__PVT__TLB_rqs
                                                [1U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [3U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [1U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[1U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [1U]);
            vlSelfRef.__PVT__TLB_res[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [1U]) 
                                            | (0xfffff00U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [3U] 
                                                               >> 8U)))
                                                    ? 
                                                   ((0xffc00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                                 [3U] 
                                                                 >> 0x13U)) 
                                                        << 0xaU)) 
                                                    | (0x3ffU 
                                                       & (vlSelfRef.__PVT__TLB_rqs
                                                          [1U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [3U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((3U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (2U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [9U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [8U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xbU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xaU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xdU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xcU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xfU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xeU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [9U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [8U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xbU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xaU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xdU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xcU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xfU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
        [0xeU];
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
    cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2 
        = (1U | ((0x6000U & (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                             << 8U)) | (0x1ffeU & (
                                                   vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                                   >> 6U))));
    __PVT__cacheLineManager__DOT__missEvictConflict = 0U;
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[1U] >> 0x1eU)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[4U] 
                            << 8U) | (vlSymsp->TOP__Top__soc.MemC_stat[3U] 
                                      >> 0x18U))) == 
            (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                            << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                         >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[4U] >> 0x12U)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[7U] 
                            << 0x14U) | (vlSymsp->TOP__Top__soc.MemC_stat[6U] 
                                         >> 0xcU))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[7U] >> 6U)) 
         & ((0x3ffffffU & vlSymsp->TOP__Top__soc.MemC_stat[9U]) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[9U] >> 0x1aU)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xcU] 
                            << 0xcU) | (vlSymsp->TOP__Top__soc.MemC_stat[0xbU] 
                                        >> 0x14U))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((((1U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U])) 
           | (2U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U]))) 
          & vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U]) 
         & ((0x3ffffffU & ((vlSelfRef.__PVT__LSU_MC_if[1U] 
                            << 0x15U) | (vlSelfRef.__PVT__LSU_MC_if[0U] 
                                         >> 0xbU))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[1U] >> 0x1eU)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[3U] 
                            << 8U) | (vlSymsp->TOP__Top__soc.MemC_stat[2U] 
                                      >> 0x18U))) == 
            (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                            << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                         >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[4U] >> 0x12U)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[6U] 
                            << 0x14U) | (vlSymsp->TOP__Top__soc.MemC_stat[5U] 
                                         >> 0xcU))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[7U] >> 6U)) 
         & ((0x3ffffffU & vlSymsp->TOP__Top__soc.MemC_stat[8U]) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
          & (vlSymsp->TOP__Top__soc.MemC_stat[9U] >> 0x1aU)) 
         & ((0x3ffffffU & ((vlSymsp->TOP__Top__soc.MemC_stat[0xbU] 
                            << 0xcU) | (vlSymsp->TOP__Top__soc.MemC_stat[0xaU] 
                                        >> 0x14U))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
    if (((((1U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U])) 
           | (3U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U]))) 
          & vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U]) 
         & ((0x3ffffffU & ((vlSelfRef.__PVT__LSU_MC_if[2U] 
                            << 0x15U) | (vlSelfRef.__PVT__LSU_MC_if[1U] 
                                         >> 0xbU))) 
            == (0x3ffffffU & ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
                               << 0x13U) | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                            >> 0xdU)))))) {
        __PVT__cacheLineManager__DOT__missEvictConflict = 1U;
    }
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
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [4U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [6U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [8U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [8U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xaU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xaU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xcU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xcU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xeU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xeU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [4U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [6U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [8U] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [8U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xaU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xaU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xcU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xcU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((4U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                  [0xeU] << 2U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s
                   [0xeU]))]);
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
    vlSelfRef.__PVT__CLM_missReady = ((~ (IData)(__PVT__cacheLineManager__DOT__missEvictConflict)) 
                                      & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__canOutputMiss));
    aguPortsGen__BRA__0__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__2 
        = (IData)((0U != (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr)));
    aguPortsGen__BRA__1__KET____DOT__agu__DOT____VdfgExtracted_h4d139a4e__0 
        = (IData)((0U != (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
        [6U];
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
    vlSelfRef.__PVT__LSU_ldAck[0U] = 0ULL;
    if ((1U & (~ ((vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U] & vlSelfRef.__PVT__lsu__DOT__LRB_ready
                   [0U]) & ((~ vlSelfRef.__PVT__lsu__DOT__miss
                             [0U][0U]) | ((IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss) 
                                          & (IData)(vlSelfRef.__PVT__CLM_missReady))))))) {
        if ((1U & vlSelfRef.__PVT__lsu__DOT__curLd[0U][0U])) {
            vlSelfRef.__PVT__LSU_ldAck[0U] = (1ULL 
                                              | vlSelfRef.__PVT__LSU_ldAck
                                              [0U]);
            vlSelfRef.__PVT__LSU_ldAck[0U] = (8ULL 
                                              | vlSelfRef.__PVT__LSU_ldAck
                                              [0U]);
            vlSelfRef.__PVT__LSU_ldAck[0U] = ((0x7fffffffffdULL 
                                               & vlSelfRef.__PVT__LSU_ldAck
                                               [0U]) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__lsu__DOT__curLd
                                                                     [0U][0U] 
                                                                     >> 2U)))) 
                                                 << 1U));
            vlSelfRef.__PVT__LSU_ldAck[0U] = ((0x7fffffff80fULL 
                                               & vlSelfRef.__PVT__LSU_ldAck
                                               [0U]) 
                                              | ((QData)((IData)(
                                                                 (0x7fU 
                                                                  & (vlSelfRef.__PVT__lsu__DOT__curLd
                                                                     [0U][0U] 
                                                                     >> 0x13U)))) 
                                                 << 4U));
            vlSelfRef.__PVT__LSU_ldAck[0U] = ((0x7ffULL 
                                               & vlSelfRef.__PVT__LSU_ldAck
                                               [0U]) 
                                              | ((QData)((IData)(
                                                                 ((vlSelfRef.__PVT__lsu__DOT__curLd
                                                                   [0U][2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSelfRef.__PVT__lsu__DOT__curLd
                                                                     [0U][1U] 
                                                                     >> 4U)))) 
                                                 << 0xbU));
            vlSelfRef.__PVT__LSU_ldAck[0U] = (0x7fffffffffbULL 
                                              & vlSelfRef.__PVT__LSU_ldAck
                                              [0U]);
        }
    }
    vlSelfRef.__PVT__LSU_ldAck[1U] = 0ULL;
    if ((1U & (~ ((vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U] & vlSelfRef.__PVT__lsu__DOT__LRB_ready
                   [1U]) & ((~ vlSelfRef.__PVT__lsu__DOT__miss
                             [1U][0U]) | (((IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss) 
                                           >> 1U) & (IData)(vlSelfRef.__PVT__CLM_missReady))))))) {
        if ((1U & vlSelfRef.__PVT__lsu__DOT__curLd[1U][0U])) {
            vlSelfRef.__PVT__LSU_ldAck[1U] = (1ULL 
                                              | vlSelfRef.__PVT__LSU_ldAck
                                              [1U]);
            vlSelfRef.__PVT__LSU_ldAck[1U] = (8ULL 
                                              | vlSelfRef.__PVT__LSU_ldAck
                                              [1U]);
            vlSelfRef.__PVT__LSU_ldAck[1U] = ((0x7fffffffffdULL 
                                               & vlSelfRef.__PVT__LSU_ldAck
                                               [1U]) 
                                              | ((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__lsu__DOT__curLd
                                                                     [1U][0U] 
                                                                     >> 2U)))) 
                                                 << 1U));
            vlSelfRef.__PVT__LSU_ldAck[1U] = ((0x7fffffff80fULL 
                                               & vlSelfRef.__PVT__LSU_ldAck
                                               [1U]) 
                                              | ((QData)((IData)(
                                                                 (0x7fU 
                                                                  & (vlSelfRef.__PVT__lsu__DOT__curLd
                                                                     [1U][0U] 
                                                                     >> 0x13U)))) 
                                                 << 4U));
            vlSelfRef.__PVT__LSU_ldAck[1U] = ((0x7ffULL 
                                               & vlSelfRef.__PVT__LSU_ldAck
                                               [1U]) 
                                              | ((QData)((IData)(
                                                                 ((vlSelfRef.__PVT__lsu__DOT__curLd
                                                                   [1U][2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSelfRef.__PVT__lsu__DOT__curLd
                                                                     [1U][1U] 
                                                                     >> 4U)))) 
                                                 << 0xbU));
            vlSelfRef.__PVT__LSU_ldAck[1U] = (0x7fffffffffbULL 
                                              & vlSelfRef.__PVT__LSU_ldAck
                                              [1U]);
        }
    }
    vlSelfRef.__PVT__cacheLineManager__DOT__forwardMiss 
        = ((IData)(vlSelfRef.__PVT__CLM_missReady) 
           & (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
              & ((6U != (0xfU & (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                 >> 1U))) & (2U != 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                                 >> 1U))))));
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][2U] = 0U;
    if (((vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
          & vlSelfRef.__PVT__lsu__DOT__LRB_ready[0U]) 
         & ((~ vlSelfRef.__PVT__lsu__DOT__miss[0U][0U]) 
            | ((IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss) 
               & (IData)(vlSelfRef.__PVT__CLM_missReady))))) {
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][0U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U];
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][1U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U];
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][2U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U];
    }
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][2U] = 0U;
    if (((vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
          & vlSelfRef.__PVT__lsu__DOT__LRB_ready[1U]) 
         & ((~ vlSelfRef.__PVT__lsu__DOT__miss[1U][0U]) 
            | (((IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss) 
                >> 1U) & (IData)(vlSelfRef.__PVT__CLM_missReady))))) {
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][0U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U];
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][1U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U];
        vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][2U] 
            = vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U];
    }
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
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [2U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [4U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [6U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [2U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [4U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((8U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                  [6U] << 3U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s
                   [6U]))]);
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
    vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c = 0ULL;
    if (((0U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state)) 
         & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__forwardMiss))) {
        if ((1U & (~ (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                      >> 4U)))) {
            if ((8U & vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U])) {
                if ((1U & (~ (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                              >> 2U)))) {
                    vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c 
                        = (QData)((IData)(cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2));
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                 >> 2U)))) {
                vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
                                           << 0xdU) 
                                          | (vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
                                             >> 0x13U))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0x8000U 
                                                     | (IData)(cacheLineManager__DOT____VdfgRegularize_ha005004a_3_2)))));
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__flushDone)))) {
            vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c 
                = (((QData)((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__flushAssocIdx)) 
                    << 0xdU) | (QData)((IData)((1U 
                                                | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__flushIdx) 
                                                   << 7U)))));
        }
    }
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[0U] 
        = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[1U] 
        = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[2U] 
        = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][2U];
    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c)))) {
        if ((1U & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                   [1U][0U] & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                               [1U][0U] >> 0x11U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[0U] = 0U;
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[1U] = 0U;
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c[2U] = 0U;
        }
    }
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[0U] 
        = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[1U] 
        = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[2U] 
        = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][2U];
    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c)))) {
        if ((1U & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                   [0U][0U] & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                               [0U][0U] >> 0x11U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[0U] = 0U;
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[1U] = 0U;
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c[2U] = 0U;
        }
    }
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] = 0U;
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[1U] = 0U;
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[2U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c))) {
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c) 
                    >> 1U))][0U];
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[1U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c) 
                    >> 1U))][1U];
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[2U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c) 
                    >> 1U))][2U];
    } else if ((1U & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                      [1U][0U] & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                                  [1U][0U] >> 0x11U)))) {
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][0U];
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[1U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][1U];
        __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[2U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[1U][2U];
    }
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] = 0U;
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[1U] = 0U;
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[2U] = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c))) {
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c) 
                    >> 1U))][0U];
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[1U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c) 
                    >> 1U))][1U];
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[2U] 
            = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
            [(3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c) 
                    >> 1U))][2U];
    } else if ((1U & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                      [0U][0U] & (vlSelfRef.__PVT__lsu__DOT__LRB_uop
                                  [0U][0U] >> 0x11U)))) {
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][0U];
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[1U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][1U];
        __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[2U] 
            = vlSelfRef.__PVT__lsu__DOT__LRB_uop[0U][2U];
    }
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
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
        [2U];
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
    vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_sr[0U] 
        = vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c;
    vlSelfRef.__PVT__CLM_ctReadReady[0U] = 1U;
    vlSelfRef.__PVT__CLM_ctReadReady[1U] = 1U;
    vlSelfRef.__PVT__CLM_ctReadReady[2U] = 1U;
    if ((2U == (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__state))) {
        vlSelfRef.__PVT__CLM_ctReadReady[0U] = 0U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_c))) {
        vlSelfRef.__PVT__CLM_ctReadReady[0U] = 0U;
        vlSelfRef.__PVT__CLM_ctReadReady[1U] = 0U;
        vlSelfRef.__PVT__CLM_ctReadReady[2U] = 0U;
    }
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c = 0ULL;
    lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp = 0U;
    if ((1U & __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U])) {
        lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp 
            = ((0xfffc0U & lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp) 
               | (1U | (2U & __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U])));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c 
            = ((0x1fffffffe00ULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c) 
               | (IData)((IData)((1U | ((0x1fcU & (
                                                   __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                   >> 8U)) 
                                        | (2U & __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U]))))));
        lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp 
            = ((0x3fU & lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp) 
               | (0xfffc0U & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                              << 3U)));
        if ((0U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                          >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)((((- (IData)(
                                                   ((__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                     >> 0x12U) 
                                                    & ((0x58U 
                                                        >= 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(5,32,32, 
                                                                           (3U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x15U)), 3U))))) 
                                                       && (1U 
                                                           & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                              (((IData)(0x39U) 
                                                                + 
                                                                (0x1fU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x39U) 
                                                                  + 
                                                                  (0x1fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))))))))))) 
                                        << 8U) | ((0x58U 
                                                   >= 
                                                   ((IData)(0x39U) 
                                                    + 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (3U 
                                                                      & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                         >> 0x15U)), 3U))))
                                                   ? 
                                                  (0xffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x39U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,32,32, 
                                                                             (3U 
                                                                              & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))))
                                                        ? 0U
                                                        : 
                                                       (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                        (((IData)(0x40U) 
                                                          + 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(5,32,32, 
                                                                           (3U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x15U)), 3U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x39U) 
                                                             + 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,32,32, 
                                                                              (3U 
                                                                               & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))))))) 
                                                      | (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                         (((IData)(0x39U) 
                                                           + 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,32,32, 
                                                                            (3U 
                                                                             & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x39U) 
                                                             + 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,32,32, 
                                                                              (3U 
                                                                               & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))))))
                                                   : 0U)))) 
                      << 9U));
        } else if ((1U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                 >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)((((- (IData)(
                                                   ((__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                     >> 0x12U) 
                                                    & ((0x58U 
                                                        >= 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(0xfU) 
                                                             + 
                                                             VL_SHIFTL_III(5,32,32, 
                                                                           (1U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x16U)), 4U))))) 
                                                       && (1U 
                                                           & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                              (((IData)(0x39U) 
                                                                + 
                                                                (0x1fU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x16U)), 4U)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x39U) 
                                                                  + 
                                                                  (0x1fU 
                                                                   & ((IData)(0xfU) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x16U)), 4U))))))))))) 
                                        << 0x10U) | 
                                       ((0x58U >= ((IData)(0x39U) 
                                                   + 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                        >> 0x16U)), 4U))))
                                         ? (0xffffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x39U) 
                                                     + 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, 
                                                                      (1U 
                                                                       & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                          >> 0x16U)), 4U)))))
                                                 ? 0U
                                                 : 
                                                (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                 (((IData)(0x48U) 
                                                   + 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                        >> 0x16U)), 4U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x39U) 
                                                      + 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (1U 
                                                                        & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                           >> 0x16U)), 4U))))))) 
                                               | (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[
                                                  (((IData)(0x39U) 
                                                    + 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (1U 
                                                                      & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                         >> 0x16U)), 4U))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x39U) 
                                                      + 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (1U 
                                                                        & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                                                           >> 0x16U)), 4U)))))))
                                         : 0U)))) << 9U));
        } else if ((2U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[0U] 
                                 >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)(((__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[2U] 
                                        << 7U) | (__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__outLMQ_c[1U] 
                                                  >> 0x19U)))) 
                      << 9U));
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: LoadResultBuffer.sv:133: Assertion failed in %NTop.soc.core.lsu.loadResBuf[1]: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/LoadResultBuffer.sv", 133, "");
        }
    }
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c = 0ULL;
    lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp = 0U;
    if ((1U & __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U])) {
        lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp 
            = ((0xfffc0U & lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp) 
               | (1U | (2U & __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U])));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c 
            = ((0x1fffffffe00ULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c) 
               | (IData)((IData)((1U | ((0x1fcU & (
                                                   __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                   >> 8U)) 
                                        | (2U & __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U]))))));
        lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp 
            = ((0x3fU & lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp) 
               | (0xfffc0U & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                              << 3U)));
        if ((0U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                          >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)((((- (IData)(
                                                   ((__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                     >> 0x12U) 
                                                    & ((0x58U 
                                                        >= 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(7U) 
                                                             + 
                                                             VL_SHIFTL_III(5,32,32, 
                                                                           (3U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x15U)), 3U))))) 
                                                       && (1U 
                                                           & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                              (((IData)(0x39U) 
                                                                + 
                                                                (0x1fU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x39U) 
                                                                  + 
                                                                  (0x1fU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (3U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))))))))))) 
                                        << 8U) | ((0x58U 
                                                   >= 
                                                   ((IData)(0x39U) 
                                                    + 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (3U 
                                                                      & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                         >> 0x15U)), 3U))))
                                                   ? 
                                                  (0xffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x39U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,32,32, 
                                                                             (3U 
                                                                              & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))))
                                                        ? 0U
                                                        : 
                                                       (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                        (((IData)(0x40U) 
                                                          + 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(5,32,32, 
                                                                           (3U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x15U)), 3U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x39U) 
                                                             + 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,32,32, 
                                                                              (3U 
                                                                               & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))))))) 
                                                      | (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                         (((IData)(0x39U) 
                                                           + 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,32,32, 
                                                                            (3U 
                                                                             & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x39U) 
                                                             + 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,32,32, 
                                                                              (3U 
                                                                               & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x15U)), 3U)))))))
                                                   : 0U)))) 
                      << 9U));
        } else if ((1U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                 >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)((((- (IData)(
                                                   ((__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                     >> 0x12U) 
                                                    & ((0x58U 
                                                        >= 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         (0x1fU 
                                                          & ((IData)(0xfU) 
                                                             + 
                                                             VL_SHIFTL_III(5,32,32, 
                                                                           (1U 
                                                                            & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                               >> 0x16U)), 4U))))) 
                                                       && (1U 
                                                           & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                              (((IData)(0x39U) 
                                                                + 
                                                                (0x1fU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x16U)), 4U)))) 
                                                               >> 5U)] 
                                                              >> 
                                                              (0x1fU 
                                                               & ((IData)(0x39U) 
                                                                  + 
                                                                  (0x1fU 
                                                                   & ((IData)(0xfU) 
                                                                      + 
                                                                      VL_SHIFTL_III(5,32,32, 
                                                                                (1U 
                                                                                & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                                >> 0x16U)), 4U))))))))))) 
                                        << 0x10U) | 
                                       ((0x58U >= ((IData)(0x39U) 
                                                   + 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                        >> 0x16U)), 4U))))
                                         ? (0xffffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x39U) 
                                                     + 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, 
                                                                      (1U 
                                                                       & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                          >> 0x16U)), 4U)))))
                                                 ? 0U
                                                 : 
                                                (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                 (((IData)(0x48U) 
                                                   + 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                        >> 0x16U)), 4U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x39U) 
                                                      + 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (1U 
                                                                        & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                           >> 0x16U)), 4U))))))) 
                                               | (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[
                                                  (((IData)(0x39U) 
                                                    + 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (1U 
                                                                      & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                         >> 0x16U)), 4U))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x39U) 
                                                      + 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,32,32, 
                                                                       (1U 
                                                                        & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                                                           >> 0x16U)), 4U)))))))
                                         : 0U)))) << 9U));
        } else if ((2U == (3U & (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[0U] 
                                 >> 0x13U)))) {
            vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c 
                = ((0x1ffULL & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c) 
                   | ((QData)((IData)(((__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[2U] 
                                        << 7U) | (__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__outLMQ_c[1U] 
                                                  >> 0x19U)))) 
                      << 9U));
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: LoadResultBuffer.sv:133: Assertion failed in %NTop.soc.core.lsu.loadResBuf[0]: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/LoadResultBuffer.sv", 133, "");
        }
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0x10U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                     [0U] << 4U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0x10U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                     [2U] << 4U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0x10U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                     [0U] << 4U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0x10U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                     [2U] << 4U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s
                   [2U]))]);
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
    vlSelfRef.__PVT__CC_storeStall = (1U & (((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassStUOp)
                                              ? (IData)(vlSelfRef.__PVT__lsu__DOT__BLSU_stStall)
                                              : (~ 
                                                 vlSelfRef.__PVT__CLM_ctReadReady
                                                 [2U])) 
                                            & vlSelfRef.__PVT__SQB_uop[0U]));
    __PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx 
        = (1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c) 
                 >> 1U));
    vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[1U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[1U][3U] = 0U;
    if (vlSelfRef.__PVT__CLM_ctReadReady[1U]) {
        if ((1U & (vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                   & (((~ vlSelfRef.branch[0U]) | (
                                                   vlSelfRef.__PVT__LS_uopLd
                                                   [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                   >> 2U)) 
                      | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                          (0x7fU 
                                                           & (((vlSelfRef.__PVT__LS_uopLd
                                                                [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                                << 0x1bU) 
                                                               | (vlSelfRef.__PVT__LS_uopLd
                                                                  [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                                  >> 5U)) 
                                                              - 
                                                              ((vlSelfRef.branch[0U] 
                                                                << 0xbU) 
                                                               | (vlSelfRef.branch[0U] 
                                                                  >> 0x15U)))))))))) {
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U];
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][1U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][1U];
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][2U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][2U];
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][3U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][3U];
            vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[1U] = 1U;
        } else if ((1U & vlSelfRef.__PVT__AGU_eLdUOp
                    [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx])) {
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__selLd
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[1U] = 0U;
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
                = (0xfffffffbU & vlSelfRef.__PVT__lsu__DOT__selLd
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][1U] 
                = ((0xffff000fU & vlSelfRef.__PVT__lsu__DOT__selLd
                    [1U][1U]) | (0xfff0U & (vlSelfRef.__PVT__AGU_eLdUOp
                                            [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx] 
                                            << 3U)));
            vlSelfRef.__PVT__lsu__DOT__selLd[1U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__lsu__DOT__selLd
                   [1U][0U]);
        }
    }
    __PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx 
        = (1U & (IData)(vlSelfRef.__PVT__lsu__DOT__idxs_c));
    vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[0U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__selLd[0U][3U] = 0U;
    if (vlSelfRef.__PVT__CLM_ctReadReady[0U]) {
        if ((1U & (vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                   & (((~ vlSelfRef.branch[0U]) | (
                                                   vlSelfRef.__PVT__LS_uopLd
                                                   [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                   >> 2U)) 
                      | VL_GTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                          (0x7fU 
                                                           & (((vlSelfRef.__PVT__LS_uopLd
                                                                [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                                << 0x1bU) 
                                                               | (vlSelfRef.__PVT__LS_uopLd
                                                                  [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U] 
                                                                  >> 5U)) 
                                                              - 
                                                              ((vlSelfRef.branch[0U] 
                                                                << 0xbU) 
                                                               | (vlSelfRef.branch[0U] 
                                                                  >> 0x15U)))))))))) {
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][0U];
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][1U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][1U];
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][2U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][2U];
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][3U] 
                = vlSelfRef.__PVT__LS_uopLd[__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx][3U];
            vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[0U] = 1U;
        } else if ((1U & vlSelfRef.__PVT__AGU_eLdUOp
                    [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx])) {
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__selLd
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__selLdSrc_c[0U] = 0U;
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
                = (0xfffffffbU & vlSelfRef.__PVT__lsu__DOT__selLd
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][1U] 
                = ((0xffff000fU & vlSelfRef.__PVT__lsu__DOT__selLd
                    [0U][1U]) | (0xfff0U & (vlSelfRef.__PVT__AGU_eLdUOp
                                            [__PVT__lsu__DOT__unnamedblk7__DOT__unnamedblk8__DOT__idx] 
                                            << 3U)));
            vlSelfRef.__PVT__lsu__DOT__selLd[0U][0U] 
                = (0xfffffffdU & vlSelfRef.__PVT__lsu__DOT__selLd
                   [0U][0U]);
        }
    }
    vlSelfRef.__Vcellout__lsu__OUT_flagsUOp[1U] = lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_flagsUOp;
    vlSelfRef.__Vcellout__lsu__OUT_flagsUOp[0U] = lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_flagsUOp;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
        [0U];
    vlSelfRef.lsu__DOT____Vcellinp__bypassLSU__IN_uopStEn 
        = ((~ (IData)(vlSelfRef.__PVT__CC_storeStall)) 
           & (IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassStUOp));
    lsu__DOT____Vlvbound_h3c7694f9__0 = (1U & (vlSelfRef.__PVT__lsu__DOT__selLd
                                               [0U][0U] 
                                               & (~ 
                                                  (vlSelfRef.__PVT__lsu__DOT__selLd
                                                   [0U][0U] 
                                                   >> 1U))));
    vlSelfRef.__PVT__CLM_ctRead[0U] = ((0x1ffeU & vlSelfRef.__PVT__CLM_ctRead
                                        [0U]) | (IData)(lsu__DOT____Vlvbound_h3c7694f9__0));
    lsu__DOT____Vlvbound_h334829d0__0 = (0xfffU & (
                                                   vlSelfRef.__PVT__lsu__DOT__selLd
                                                   [0U][1U] 
                                                   >> 4U));
    vlSelfRef.__PVT__CLM_ctRead[0U] = ((1U & vlSelfRef.__PVT__CLM_ctRead
                                        [0U]) | ((IData)(lsu__DOT____Vlvbound_h334829d0__0) 
                                                 << 1U));
    lsu__DOT____Vlvbound_h3c7694f9__0 = (1U & (vlSelfRef.__PVT__lsu__DOT__selLd
                                               [1U][0U] 
                                               & (~ 
                                                  (vlSelfRef.__PVT__lsu__DOT__selLd
                                                   [1U][0U] 
                                                   >> 1U))));
    vlSelfRef.__PVT__CLM_ctRead[1U] = ((0x1ffeU & vlSelfRef.__PVT__CLM_ctRead
                                        [1U]) | (IData)(lsu__DOT____Vlvbound_h3c7694f9__0));
    lsu__DOT____Vlvbound_h334829d0__0 = (0xfffU & (
                                                   vlSelfRef.__PVT__lsu__DOT__selLd
                                                   [1U][1U] 
                                                   >> 4U));
    vlSelfRef.__PVT__CLM_ctRead[1U] = ((1U & vlSelfRef.__PVT__CLM_ctRead
                                        [1U]) | ((IData)(lsu__DOT____Vlvbound_h334829d0__0) 
                                                 << 1U));
    vlSelfRef.__PVT__CLM_ctRead[2U] = ((0x1ffeU & vlSelfRef.__PVT__CLM_ctRead
                                        [2U]) | (1U 
                                                 & ((~ 
                                                     ((vlSelfRef.__PVT__SQB_uop[0U] 
                                                       >> 7U) 
                                                      | ((IData)(vlSelfRef.__PVT__lsu__DOT__isCacheBypassStUOp) 
                                                         | (IData)(vlSelfRef.__PVT__CC_storeStall)))) 
                                                    & vlSelfRef.__PVT__SQB_uop[0U])));
    vlSelfRef.__PVT__CLM_ctRead[2U] = ((1U & vlSelfRef.__PVT__CLM_ctRead
                                        [2U]) | (0x1ffeU 
                                                 & ((vlSelfRef.__PVT__SQB_uop[5U] 
                                                     << 9U) 
                                                    | (0x1feU 
                                                       & (vlSelfRef.__PVT__SQB_uop[4U] 
                                                          >> 0x17U)))));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__re = 7U;
    lsu__DOT____Vlvbound_h519ab844__0 = (1U & (~ (vlSelfRef.__PVT__lsu__DOT__selLd
                                                  [0U][0U] 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__lsu__DOT__selLd
                                                      [0U][0U] 
                                                      >> 1U)))));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__re = ((6U 
                                                   & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re)) 
                                                  | (IData)(lsu__DOT____Vlvbound_h519ab844__0));
    lsu__DOT____Vlvbound_h519ab844__0 = (1U & (~ (vlSelfRef.__PVT__lsu__DOT__selLd
                                                  [1U][0U] 
                                                  & (~ 
                                                     (vlSelfRef.__PVT__lsu__DOT__selLd
                                                      [1U][0U] 
                                                      >> 1U)))));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__re = ((5U 
                                                   & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re)) 
                                                  | ((IData)(lsu__DOT____Vlvbound_h519ab844__0) 
                                                     << 1U));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr = 0ULL;
    lsu__DOT____Vlvbound_hb4ca6dc7__0 = (0xfffU & (
                                                   vlSelfRef.__PVT__lsu__DOT__selLd
                                                   [0U][1U] 
                                                   >> 4U));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr = 
        ((0xffffff000ULL & vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr) 
         | (IData)((IData)(lsu__DOT____Vlvbound_hb4ca6dc7__0)));
    lsu__DOT____Vlvbound_hb4ca6dc7__0 = (0xfffU & (
                                                   vlSelfRef.__PVT__lsu__DOT__selLd
                                                   [1U][1U] 
                                                   >> 4U));
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr = 
        ((0xfff000fffULL & vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr) 
         | ((QData)((IData)(lsu__DOT____Vlvbound_hb4ca6dc7__0)) 
            << 0xcU));
    if (vlSelfRef.__PVT__lsu__DOT__storeWriteToCache) {
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__re 
            = (3U & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__re));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr 
            = ((0xffffffULL & vlSymsp->TOP__Top__soc__IF_cache.__PVT__addr) 
               | ((QData)((IData)((0xfffU & ((vlSelfRef.__PVT__lsu__DOT__stOps
                                              [1U][5U] 
                                              << 8U) 
                                             | (vlSelfRef.__PVT__lsu__DOT__stOps
                                                [1U][4U] 
                                                >> 0x18U))))) 
                  << 0x18U));
    }
    vlSelfRef.flagUOps[4U] = vlSelfRef.__Vcellout__lsu__OUT_flagsUOp
        [1U];
    vlSelfRef.flagUOps[3U] = vlSelfRef.__Vcellout__lsu__OUT_flagsUOp
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0x20U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
                     [0U] << 5U)) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0x20U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
                     [0U] << 5U)) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0x20U & (vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
                     [0U] << 5U)) | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s
                   [0U]))]);
    cacheLineManager__DOT____Vlvbound_hb22928dc__0 
        = ((~ vlSelfRef.__PVT__CLM_ctRead[0U]) & vlSelfRef.__PVT__CLM_ctReadReady
           [0U]);
    vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c 
        = ((6U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c)) 
           | (IData)(cacheLineManager__DOT____Vlvbound_hb22928dc__0));
    cacheLineManager__DOT____Vlvbound_hb22928dc__0 
        = ((~ vlSelfRef.__PVT__CLM_ctRead[1U]) & vlSelfRef.__PVT__CLM_ctReadReady
           [1U]);
    vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c 
        = ((5U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c)) 
           | ((IData)(cacheLineManager__DOT____Vlvbound_hb22928dc__0) 
              << 1U));
    cacheLineManager__DOT____Vlvbound_hb22928dc__0 
        = ((~ vlSelfRef.__PVT__CLM_ctRead[2U]) & vlSelfRef.__PVT__CLM_ctReadReady
           [2U]);
    vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c 
        = ((3U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c)) 
           | ((IData)(cacheLineManager__DOT____Vlvbound_hb22928dc__0) 
              << 2U));
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[6U] 
        = vlSelfRef.flagUOps[6U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[5U] 
        = vlSelfRef.flagUOps[5U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSymsp->TOP__Top__soc__core__rob.__PVT__IN_flagUOps[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
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
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[4U] 
        = vlSelfRef.flagUOps[4U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[3U] 
        = vlSelfRef.flagUOps[3U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[2U] 
        = vlSelfRef.flagUOps[2U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[1U] 
        = vlSelfRef.flagUOps[1U];
    vlSelfRef.__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[0U] 
        = vlSelfRef.flagUOps[0U];
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
    __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s
        [0U];
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0 
        = (0x1fU & ((IData)(__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 1U));
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx[0U] 
        = intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs)));
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid[0U] 
        = intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s
        [0U];
    intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0 
        = (0x1fU & ((IData)(__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs) 
                    >> 1U));
    intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx[0U] 
        = intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h27cce375__0;
    intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__unnamedblk3__DOT__packedIdcs)));
    intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid[0U] 
        = intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT____Vlvbound_h78b6eef7__0;
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
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__prefetch)) 
                 | (0U != (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c))));
    vlSelfRef.__PVT__cacheLineManager__DOT__PF_ctRead = 0U;
    if (((IData)(vlSelfRef.__PVT__prefetch) & (0U != (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c)))) {
        vlSelfRef.__PVT__cacheLineManager__DOT__PF_ctRead 
            = (1U | (0x1ffeU & ((IData)((vlSelfRef.__PVT__prefetch 
                                         >> 1U)) << 1U)));
    }
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c)));
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c) 
                    >> 1U)));
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c) 
                    >> 2U)));
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__readUnused_c) 
                    >> 3U)));
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [0U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [1U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [2U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [3U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [4U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [5U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [6U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [7U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [0U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [0U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [0U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [0U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [0U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [1U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [1U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [1U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [1U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [1U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [2U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [2U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [2U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [2U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [2U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [3U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [3U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [3U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [3U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [3U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [4U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [4U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [4U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [4U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [4U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [5U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [5U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [5U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [5U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [5U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [6U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [6U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [6U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [6U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [6U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
           [7U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [7U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [7U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
              [7U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl
                   [7U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [0U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [0U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [0U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [1U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [1U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [1U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [2U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [2U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [2U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [3U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [3U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [3U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [4U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [4U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [4U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [5U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [5U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [5U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [6U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [6U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [6U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
        = (2U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [7U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [0U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [0U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [0U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [1U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [1U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [1U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [2U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [2U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [2U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [3U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [3U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [3U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
          [4U] & (~ (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                     [4U] >> 0x13U))) & ((0x7fU & (
                                                   vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                                                   [7U] 
                                                   >> 7U)) 
                                         == (0x7fU 
                                             & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp
                                                [4U] 
                                                >> 0xdU))))) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
            = (1U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
               [7U]);
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [0U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [0U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [0U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [0U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[0U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [0U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [1U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [1U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [1U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [1U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[1U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [1U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [2U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [2U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [2U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [2U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[2U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [2U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [3U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [3U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [3U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [3U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[3U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [3U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [4U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [4U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [4U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [4U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[4U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [4U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [5U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [5U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [5U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [5U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[5U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [5U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [6U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [6U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [6U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [6U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[6U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [6U]);
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
        = (1U & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
           [7U]);
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [0U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [0U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [0U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [7U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [0U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [7U]);
        }
    }
    if (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
          [1U][0U] & (3U == (0xfU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                     [1U][0U] >> 2U)))) 
         & ((7U == (0x3fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][1U] >> 8U))) | (8U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                      [1U][1U] 
                                                      >> 8U)))))) {
        if (((0x7fU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
              [7U]) == (0x7fU & (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                 [1U][0U] >> 0xdU)))) {
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[7U] 
                = (2U | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl
                   [7U]);
        }
    }
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
}
