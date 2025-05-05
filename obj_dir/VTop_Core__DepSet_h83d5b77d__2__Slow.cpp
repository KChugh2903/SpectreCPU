// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

extern const VlWide<12>/*383:0*/ VTop__ConstPool__CONST_h997e551f_0;

VL_ATTR_COLD void VTop_Core___stl_sequent__TOP__Top__soc__core__3(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___stl_sequent__TOP__Top__soc__core__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*12:0*/ __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp;
    __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp = 0;
    SData/*12:0*/ __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp;
    __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp = 0;
    CData/*0:0*/ bsel__DOT____VdfgExtracted_h894d458e__0;
    bsel__DOT____VdfgExtracted_h894d458e__0 = 0;
    IData/*31:0*/ __PVT__idec__DOT__instr;
    __PVT__idec__DOT__instr = 0;
    SData/*15:0*/ __PVT__idec__DOT__i16;
    __PVT__idec__DOT__i16 = 0;
    CData/*0:0*/ __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    VlWide<4>/*100:0*/ __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld;
    VL_ZERO_W(101, __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld);
    VlWide<6>/*183:0*/ __PVT__lsu__DOT__unnamedblk28__DOT__st;
    VL_ZERO_W(184, __PVT__lsu__DOT__unnamedblk28__DOT__st);
    CData/*2:0*/ __PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHit_c;
    __PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHit_c = 0;
    CData/*0:0*/ cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3;
    cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 = 0;
    IData/*31:0*/ intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0;
    intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 = 0;
    SData/*9:0*/ __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums;
    __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums = 0;
    SData/*9:0*/ __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums;
    __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums = 0;
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    // Body
    if (vlSelfRef.__PVT__idec__DOT__invalidEnc) {
        vlSelfRef.__PVT__idec__DOT__uop[0U] = (0xb000U 
                                               | (0xfe0003ffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
        if ((1U & vlSelfRef.__PVT__idec__DOT__uop[0U])) {
            vlSelfRef.__PVT__idec__DOT__decBranch = 
                (3U | (0x3fcU & vlSelfRef.__PVT__idec__DOT__uop[0U]));
        }
    }
    vlSelfRef.__PVT__idec__DOT__uopsComb[2U][0U] = 
        vlSelfRef.__PVT__idec__DOT__uop[0U];
    vlSelfRef.__PVT__idec__DOT__uopsComb[2U][1U] = 
        vlSelfRef.__PVT__idec__DOT__uop[1U];
    vlSelfRef.__PVT__idec__DOT__uopsComb[2U][2U] = 
        vlSelfRef.__PVT__idec__DOT__uop[2U];
    __PVT__idec__DOT__instr = ((vlSelfRef.PD_instrs
                                [3U][3U] << 0x12U) 
                               | (vlSelfRef.PD_instrs
                                  [3U][2U] >> 0xeU));
    __PVT__idec__DOT__i16 = (0xffffU & (vlSelfRef.PD_instrs
                                        [3U][2U] >> 0xeU));
    vlSelfRef.__PVT__idec__DOT__uop[0U] = 0U;
    vlSelfRef.__PVT__idec__DOT__uop[1U] = 0U;
    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
    vlSelfRef.__PVT__idec__DOT__uop[0U] = ((0xfffffffeU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (((vlSelfRef.PD_instrs
                                                [3U][0U] 
                                                & (IData)(vlSelfRef.__Vcellinp__idec__en)) 
                                               & (~ (IData)(vlSelfRef.__PVT__idec__DOT__decBranch))) 
                                              & (~ (IData)(vlSelfRef.__PVT__decBranch))));
    vlSelfRef.__PVT__idec__DOT__uop[0U] = ((0xfffffc1fU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x3e0U 
                                              & (vlSelfRef.PD_instrs
                                                 [3U][0U] 
                                                 << 1U)));
    vlSelfRef.__PVT__idec__DOT__uop[0U] = ((0xffffffe3U 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x1cU 
                                              & ((((vlSelfRef.PD_instrs
                                                    [3U][1U] 
                                                    << 0x11U) 
                                                   | (vlSelfRef.PD_instrs
                                                      [3U][1U] 
                                                      >> 0xfU)) 
                                                  + 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & __PVT__idec__DOT__instr))
                                                    ? 1U
                                                    : 0U)) 
                                                 << 2U)));
    vlSelfRef.__PVT__idec__DOT__uop[1U] = ((0xffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (((0x40U 
                                                & __PVT__idec__DOT__instr)
                                                ? (
                                                   (0x20U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & __PVT__idec__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (__PVT__idec__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (__PVT__idec__DOT__instr 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     ((4U 
                                                       & __PVT__idec__DOT__instr)
                                                       ? 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (__PVT__idec__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0x14U) 
                                                         | (((0xff000U 
                                                              & __PVT__idec__DOT__instr) 
                                                             | (0x800U 
                                                                & (__PVT__idec__DOT__instr 
                                                                   >> 9U))) 
                                                            | (0x7feU 
                                                               & (__PVT__idec__DOT__instr 
                                                                  >> 0x14U))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & __PVT__idec__DOT__instr)
                                                       ? 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (__PVT__idec__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (__PVT__idec__DOT__instr 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (__PVT__idec__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0x800U 
                                                             & (__PVT__idec__DOT__instr 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (__PVT__idec__DOT__instr 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (__PVT__idec__DOT__instr 
                                                                     >> 7U)))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & __PVT__idec__DOT__instr)
                                                       ? 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (0xfffff000U 
                                                         & __PVT__idec__DOT__instr)
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((8U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & __PVT__idec__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (__PVT__idec__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (__PVT__idec__DOT__instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (__PVT__idec__DOT__instr 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & __PVT__idec__DOT__instr)
                                                       ? 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (0xfffff000U 
                                                         & __PVT__idec__DOT__instr)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (__PVT__idec__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (__PVT__idec__DOT__instr 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     ((4U 
                                                       & __PVT__idec__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (__PVT__idec__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (__PVT__idec__DOT__instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (__PVT__idec__DOT__instr 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))
                                                      : 
                                                     ((4U 
                                                       & __PVT__idec__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & __PVT__idec__DOT__instr)
                                                        ? 
                                                       ((1U 
                                                         & __PVT__idec__DOT__instr)
                                                         ? 
                                                        (((- (IData)(
                                                                     (__PVT__idec__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (__PVT__idec__DOT__instr 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)))))) 
                                              << 0x10U));
    vlSelfRef.__PVT__idec__DOT__uop[2U] = (((0x40U 
                                             & __PVT__idec__DOT__instr)
                                             ? ((0x20U 
                                                 & __PVT__idec__DOT__instr)
                                                 ? 
                                                ((0x10U 
                                                  & __PVT__idec__DOT__instr)
                                                  ? 
                                                 ((8U 
                                                   & __PVT__idec__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (__PVT__idec__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (__PVT__idec__DOT__instr 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & __PVT__idec__DOT__instr)
                                                   ? 
                                                  ((4U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (__PVT__idec__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0x14U) 
                                                      | (((0xff000U 
                                                           & __PVT__idec__DOT__instr) 
                                                          | (0x800U 
                                                             & (__PVT__idec__DOT__instr 
                                                                >> 9U))) 
                                                         | (0x7feU 
                                                            & (__PVT__idec__DOT__instr 
                                                               >> 0x14U))))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (__PVT__idec__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (__PVT__idec__DOT__instr 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (__PVT__idec__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (__PVT__idec__DOT__instr 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (__PVT__idec__DOT__instr 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (__PVT__idec__DOT__instr 
                                                                  >> 7U)))))
                                                      : 0U)
                                                     : 0U))))
                                                 : 0U)
                                             : ((0x20U 
                                                 & __PVT__idec__DOT__instr)
                                                 ? 
                                                ((0x10U 
                                                  & __PVT__idec__DOT__instr)
                                                  ? 
                                                 ((8U 
                                                   & __PVT__idec__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (0xfffff000U 
                                                      & __PVT__idec__DOT__instr)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 ((8U 
                                                   & __PVT__idec__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (__PVT__idec__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (__PVT__idec__DOT__instr 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (__PVT__idec__DOT__instr 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & __PVT__idec__DOT__instr)
                                                  ? 
                                                 ((8U 
                                                   & __PVT__idec__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (0xfffff000U 
                                                      & __PVT__idec__DOT__instr)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (__PVT__idec__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (__PVT__idec__DOT__instr 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & __PVT__idec__DOT__instr)
                                                   ? 
                                                  ((4U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (__PVT__idec__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (__PVT__idec__DOT__instr 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (__PVT__idec__DOT__instr 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))
                                                   : 
                                                  ((4U 
                                                    & __PVT__idec__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & __PVT__idec__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & __PVT__idec__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (__PVT__idec__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (__PVT__idec__DOT__instr 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))))) 
                                           >> 0x10U);
    if ((1U & vlSelfRef.__PVT__idec__DOT__uop[0U])) {
        if ((0U != (3U & (vlSelfRef.PD_instrs[3U][0U] 
                          >> 2U)))) {
            vlSelfRef.__PVT__idec__DOT__uop[0U] = (0x3000U 
                                                   | (0xffffc3ffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
            if ((1U == (3U & (vlSelfRef.PD_instrs[3U][0U] 
                              >> 2U)))) {
                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                    = (0x40000U | (0xfff03fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]));
            } else if ((2U == (3U & (vlSelfRef.PD_instrs
                                     [3U][0U] >> 2U)))) {
                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                    = (0x4000U | (0xfff03fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]));
            } else if ((3U == (3U & (vlSelfRef.PD_instrs
                                     [3U][0U] >> 2U)))) {
                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                    = (0x30000U | (0xfff03fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]));
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                VL_WRITEF_NX("[%0t] %%Error: InstrDecoder.sv:264: Assertion failed in %NTop.soc.core.idec.unnamedblk1: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("src/InstrDecoder.sv", 264, "");
            }
            vlSelfRef.__PVT__idec__DOT__uop[0U] = (
                                                   (0xfffffffdU 
                                                    & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                                   | (2U 
                                                      & vlSelfRef.PD_instrs
                                                      [3U][0U]));
        } else if ((3U == (3U & __PVT__idec__DOT__instr))) {
            if ((0x40U & __PVT__idec__DOT__instr)) {
                if ((0x20U & __PVT__idec__DOT__instr)) {
                    if ((0x10U & __PVT__idec__DOT__instr)) {
                        if ((8U & __PVT__idec__DOT__instr)) {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        } else if ((4U & __PVT__idec__DOT__instr)) {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        } else if ((2U & __PVT__idec__DOT__instr)) {
                            if ((1U & __PVT__idec__DOT__instr)) {
                                if ((0U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    if ((IData)(((0U 
                                                  == 
                                                  (0xf8f80U 
                                                   & __PVT__idec__DOT__instr)) 
                                                 & ((0U 
                                                     == 
                                                     ((vlSelfRef.__PVT__idec__DOT__uop[2U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                                         >> 0x10U))) 
                                                    | (1U 
                                                       == 
                                                       ((vlSelfRef.__PVT__idec__DOT__uop[2U] 
                                                         << 0x10U) 
                                                        | (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                                           >> 0x10U))))))) {
                                        if ((0U == 
                                             ((vlSelfRef.__PVT__idec__DOT__uop[2U] 
                                               << 0x10U) 
                                              | (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                                 >> 0x10U)))) {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0x2c000U 
                                                   | (0xfff03fffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        } else if (
                                                   (1U 
                                                    == 
                                                    ((vlSelfRef.__PVT__idec__DOT__uop[2U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                                        >> 0x10U)))) {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0xc000U 
                                                   | (0xfff03fffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        }
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x3000U 
                                               | (0xffffc3ffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x2000000U 
                                               | (0xfffffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                            = (0xfffffff0U 
                                               & vlSelfRef.__PVT__idec__DOT__uop[1U]);
                                        vlSelfRef.__PVT__idec__DOT__decBranch 
                                            = (3U | 
                                               (0x3fcU 
                                                & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    } else if ((IData)(
                                                       (0x200000U 
                                                        == 
                                                        (0x1ff8f80U 
                                                         & __PVT__idec__DOT__instr)))) {
                                        if ((8U == 
                                             (__PVT__idec__DOT__instr 
                                              >> 0x19U))) {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0x1ec00U 
                                                   | (0xfff003ffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                            vlSelfRef.__PVT__idec__DOT__decBranch 
                                                = (3U 
                                                   | (0x3fcU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        } else if (
                                                   (0x18U 
                                                    == 
                                                    (__PVT__idec__DOT__instr 
                                                     >> 0x19U))) {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0x22c00U 
                                                   | (0xfff003ffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                            vlSelfRef.__PVT__idec__DOT__decBranch 
                                                = (3U 
                                                   | (0x3fcU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        }
                                    } else if ((IData)(
                                                       (0x10500000U 
                                                        == 
                                                        (0xffff8f80U 
                                                         & __PVT__idec__DOT__instr)))) {
                                        if (((3U == (IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__priv)) 
                                             | ((~ 
                                                 (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mstatus 
                                                  >> 0x15U)) 
                                                & (1U 
                                                   == (IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__priv))))) {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0x2400U 
                                                   | (0xffffc3ffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                            vlSelfRef.__PVT__idec__DOT__decBranch 
                                                = (3U 
                                                   | (0x3fcU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        }
                                    } else if ((IData)(
                                                       (0x12000000U 
                                                        == 
                                                        (0xfe000f80U 
                                                         & __PVT__idec__DOT__instr)))) {
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = ((0xfff003ffU 
                                                & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                               | (0xfffffc00U 
                                                  & (0x3000U 
                                                     | (((0x100000U 
                                                          & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mstatus)
                                                          ? 2U
                                                          : 0xfU) 
                                                        << 0xeU))));
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        vlSelfRef.__PVT__idec__DOT__decBranch 
                                            = (3U | 
                                               (0x3fcU 
                                                & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    } else if ((IData)(
                                                       (0x16000000U 
                                                        == 
                                                        (0xfe000f80U 
                                                         & __PVT__idec__DOT__instr)))) {
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = ((0x3ffffffU 
                                                & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                               | (0xfc000000U 
                                                  & ((0x80000000U 
                                                      & (__PVT__idec__DOT__instr 
                                                         << 0x10U)) 
                                                     | (0x7c000000U 
                                                        & (__PVT__idec__DOT__instr 
                                                           << 6U)))));
                                        vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                            = ((0xfffffff0U 
                                                & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                               | (0xfU 
                                                  & (__PVT__idec__DOT__instr 
                                                     >> 0x10U)));
                                    }
                                } else if ((1U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x2c00U 
                                           | (0xffffc3ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0x7fffffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x80000000U 
                                              & (__PVT__idec__DOT__instr 
                                                 << 0x10U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xfffffff0U 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xfU 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 0x10U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfe003fffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0xffffc000U 
                                              & (0x4000U 
                                                 | (0x1f00000U 
                                                    & (__PVT__idec__DOT__instr 
                                                       << 0xdU)))));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xfff0000U 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 4U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                                } else if ((2U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x2c00U 
                                           | (0xffffc3ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0x7fffffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x80000000U 
                                              & (__PVT__idec__DOT__instr 
                                                 << 0x10U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xfffffff0U 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xfU 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 0x10U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfe0fffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x1f00000U 
                                              & (__PVT__idec__DOT__instr 
                                                 << 0xdU)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfff03fffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 2U) 
                                              << 0xeU));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xfff0000U 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 4U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                                } else if ((3U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x2c00U 
                                           | (0xffffc3ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0x7fffffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x80000000U 
                                              & (__PVT__idec__DOT__instr 
                                                 << 0x10U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xfffffff0U 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xfU 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 0x10U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfe0fffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x1f00000U 
                                              & (__PVT__idec__DOT__instr 
                                                 << 0xdU)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfff03fffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 3U) 
                                              << 0xeU));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xfff0000U 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 4U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                                } else if ((5U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfe0003ffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0xfffffc00U 
                                              & (0x12c00U 
                                                 | (0x1f00000U 
                                                    & (__PVT__idec__DOT__instr 
                                                       << 0xdU)))));
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xffff0000U 
                                              & ((0xf0000000U 
                                                  & (__PVT__idec__DOT__instr 
                                                     << 0xdU)) 
                                                 | (0xfff0000U 
                                                    & (__PVT__idec__DOT__instr 
                                                       >> 4U)))));
                                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                                        = (1U & (__PVT__idec__DOT__instr 
                                                 >> 0x13U));
                                } else if ((6U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x2c00U 
                                           | (0xffffc3ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfe0fffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x1f00000U 
                                              & (__PVT__idec__DOT__instr 
                                                 << 0xdU)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfff03fffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 5U) 
                                              << 0xeU));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xffff0000U 
                                              & ((0xf0000000U 
                                                  & (__PVT__idec__DOT__instr 
                                                     << 0xdU)) 
                                                 | (0xfff0000U 
                                                    & (__PVT__idec__DOT__instr 
                                                       >> 4U)))));
                                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                                        = (1U & (__PVT__idec__DOT__instr 
                                                 >> 0x13U));
                                } else if ((7U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x2c00U 
                                           | (0xffffc3ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfe0fffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x1f00000U 
                                              & (__PVT__idec__DOT__instr 
                                                 << 0xdU)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfff03fffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 6U) 
                                              << 0xeU));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xffff0000U 
                                              & ((0xf0000000U 
                                                  & (__PVT__idec__DOT__instr 
                                                     << 0xdU)) 
                                                 | (0xfff0000U 
                                                    & (__PVT__idec__DOT__instr 
                                                       >> 4U)))));
                                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                                        = (1U & (__PVT__idec__DOT__instr 
                                                 >> 0x13U));
                                }
                            } else {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else if ((8U & __PVT__idec__DOT__instr)) {
                        if ((4U & __PVT__idec__DOT__instr)) {
                            if ((2U & __PVT__idec__DOT__instr)) {
                                if ((1U & __PVT__idec__DOT__instr)) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x400U | 
                                           (0xffffc3ffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0x3fffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0xffffc000U 
                                              & (0x2004000U 
                                                 | (0x1f00000U 
                                                    & (__PVT__idec__DOT__instr 
                                                       << 0xdU)))));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = (0xfffffff0U 
                                           & vlSelfRef.__PVT__idec__DOT__uop[1U]);
                                    if ((0U == (0x1fU 
                                                & (vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                   >> 0x14U)))) {
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x2400U 
                                               | (0xffffc3ffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    }
                                } else {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                }
                            } else {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else if ((4U & __PVT__idec__DOT__instr)) {
                        if ((2U & __PVT__idec__DOT__instr)) {
                            if ((1U & __PVT__idec__DOT__instr)) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x400U | (0xffffc3ffU 
                                                 & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = ((0x7fffffffU 
                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                       | (0x80000000U 
                                          & (__PVT__idec__DOT__instr 
                                             << 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0xfU & (__PVT__idec__DOT__instr 
                                                  >> 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = ((0xfc0fffffU 
                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                       | (0xfff00000U 
                                          & (0x2000000U 
                                             | (0x1f00000U 
                                                & (__PVT__idec__DOT__instr 
                                                   << 0xdU)))));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xffff000fU 
                                        & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0xfff0U & 
                                          (__PVT__idec__DOT__instr 
                                           >> 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = ((0xfff03fffU 
                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                       | ((((1U == 
                                             (0x1fU 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 7U))) 
                                            | (5U == 
                                               (0x1fU 
                                                & (__PVT__idec__DOT__instr 
                                                   >> 7U))))
                                            ? (((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (__PVT__idec__DOT__instr 
                                                     >> 0xfU))) 
                                                | (5U 
                                                   == 
                                                   (0x1fU 
                                                    & (__PVT__idec__DOT__instr 
                                                       >> 0xfU))))
                                                ? (
                                                   ((0x1fU 
                                                     & (__PVT__idec__DOT__instr 
                                                        >> 7U)) 
                                                    == 
                                                    (0x1fU 
                                                     & (__PVT__idec__DOT__instr 
                                                        >> 0xfU)))
                                                    ? 9U
                                                    : 0xaU)
                                                : 9U)
                                            : (((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (__PVT__idec__DOT__instr 
                                                     >> 0xfU))) 
                                                | (5U 
                                                   == 
                                                   (0x1fU 
                                                    & (__PVT__idec__DOT__instr 
                                                       >> 0xfU))))
                                                ? 8U
                                                : 0xaU)) 
                                          << 0xeU));
                                __Vtemp_1 = ((0x200U 
                                              & vlSelfRef.PD_instrs
                                              [3U][0U])
                                              ? (0xfffffffeU 
                                                 & ((vlSelfRef.PD_instrs
                                                     [3U][1U] 
                                                     << 0x17U) 
                                                    | (0x7ffffeU 
                                                       & (vlSelfRef.PD_instrs
                                                          [3U][0U] 
                                                          >> 9U))))
                                              : (((
                                                   (vlSelfRef.PD_instrs
                                                    [3U][2U] 
                                                    << 0x11U) 
                                                   | (vlSelfRef.PD_instrs
                                                      [3U][1U] 
                                                      >> 0xfU)) 
                                                  + 
                                                  ((2U 
                                                    & vlSelfRef.__PVT__idec__DOT__uop[0U])
                                                    ? 1U
                                                    : 2U)) 
                                                 << 1U));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (((0x200U 
                                            & vlSelfRef.PD_instrs
                                            [3U][0U])
                                            ? (0xfffffffeU 
                                               & ((vlSelfRef.PD_instrs
                                                   [3U][1U] 
                                                   << 0x17U) 
                                                  | (0x7ffffeU 
                                                     & (vlSelfRef.PD_instrs
                                                        [3U][0U] 
                                                        >> 9U))))
                                            : ((((vlSelfRef.PD_instrs
                                                  [3U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelfRef.PD_instrs
                                                    [3U][1U] 
                                                    >> 0xfU)) 
                                                + (
                                                   (2U 
                                                    & vlSelfRef.__PVT__idec__DOT__uop[0U])
                                                    ? 1U
                                                    : 2U)) 
                                               << 1U)) 
                                          << 0x10U));
                                vlSelfRef.__PVT__idec__DOT__uop[2U] 
                                    = (__Vtemp_1 >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else if ((2U & __PVT__idec__DOT__instr)) {
                        if ((1U & __PVT__idec__DOT__instr)) {
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = ((0x1ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                   | (0xfe000000U & 
                                      ((0x80000000U 
                                        & (__PVT__idec__DOT__instr 
                                           << 0x10U)) 
                                       | (0x7c000000U 
                                          & (__PVT__idec__DOT__instr 
                                             << 6U)))));
                            vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                   | (0xfU & (__PVT__idec__DOT__instr 
                                              >> 0x10U)));
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0x400U | (0xffffc3ffU 
                                             & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            vlSelfRef.__PVT__idec__DOT__invalidEnc 
                                = ((2U == (0x3fU & 
                                           (vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            >> 0xeU))) 
                                   | (3U == (0x3fU 
                                             & (vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                >> 0xeU))));
                            if ((0U == (7U & (__PVT__idec__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x8000U | (0xfff03fffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((1U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0xc000U | (0xfff03fffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((4U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x10000U | (0xfff03fffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((5U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x14000U | (0xfff03fffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((6U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x18000U | (0xfff03fffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((7U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x1c000U | (0xfff03fffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                }
            } else if ((0x20U & __PVT__idec__DOT__instr)) {
                if ((0x10U & __PVT__idec__DOT__instr)) {
                    if ((8U & __PVT__idec__DOT__instr)) {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    } else if ((4U & __PVT__idec__DOT__instr)) {
                        if ((2U & __PVT__idec__DOT__instr)) {
                            if ((1U & __PVT__idec__DOT__instr)) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0xffffc3ffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = ((0x3fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                       | (0xffffc000U 
                                          & (0x2028000U 
                                             | (0x1f00000U 
                                                & (__PVT__idec__DOT__instr 
                                                   << 0xdU)))));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = (0xfffffff0U 
                                       & vlSelfRef.__PVT__idec__DOT__uop[1U]);
                            } else {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else if ((2U & __PVT__idec__DOT__instr)) {
                        if ((1U & __PVT__idec__DOT__instr)) {
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = ((0x1ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                   | (0xfe000000U & 
                                      ((0x80000000U 
                                        & (__PVT__idec__DOT__instr 
                                           << 0x10U)) 
                                       | (0x7c000000U 
                                          & (__PVT__idec__DOT__instr 
                                             << 6U)))));
                            vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                   | (0xfU & (__PVT__idec__DOT__instr 
                                              >> 0x10U)));
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                   | (0x1f00000U & 
                                      (__PVT__idec__DOT__instr 
                                       << 0xdU)));
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0xffffc3ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                            if ((0U == (__PVT__idec__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                if (((((((((0U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU))) 
                                           | (1U == 
                                              (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) 
                                          | (2U == 
                                             (7U & 
                                              (__PVT__idec__DOT__instr 
                                               >> 0xcU)))) 
                                         | (3U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) 
                                        | (4U == (7U 
                                                  & (__PVT__idec__DOT__instr 
                                                     >> 0xcU)))) 
                                       | (5U == (7U 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xcU)))) 
                                      | (6U == (7U 
                                                & (__PVT__idec__DOT__instr 
                                                   >> 0xcU)))) 
                                     | (7U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU))))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfff03fffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (((0U 
                                                == 
                                                (7U 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xcU)))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__idec__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (__PVT__idec__DOT__instr 
                                                         >> 0xcU)))
                                                     ? 6U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (__PVT__idec__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__idec__DOT__instr 
                                                           >> 0xcU)))
                                                       ? 1U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (__PVT__idec__DOT__instr 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (__PVT__idec__DOT__instr 
                                                             >> 0xcU)))
                                                         ? 2U
                                                         : 3U))))))) 
                                              << 0xeU));
                                }
                            } else if ((1U == (__PVT__idec__DOT__instr 
                                               >> 0x19U))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = ((0xffffc3ffU 
                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                       | (((4U > (7U 
                                                  & (__PVT__idec__DOT__instr 
                                                     >> 0xcU)))
                                            ? 4U : 5U) 
                                          << 0xaU));
                                if (((((((((0U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU))) 
                                           | (1U == 
                                              (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) 
                                          | (2U == 
                                             (7U & 
                                              (__PVT__idec__DOT__instr 
                                               >> 0xcU)))) 
                                         | (3U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) 
                                        | (4U == (7U 
                                                  & (__PVT__idec__DOT__instr 
                                                     >> 0xcU)))) 
                                       | (5U == (7U 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xcU)))) 
                                      | (6U == (7U 
                                                & (__PVT__idec__DOT__instr 
                                                   >> 0xcU)))) 
                                     | (7U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU))))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfff03fffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (((0U 
                                                == 
                                                (7U 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xcU)))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__idec__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (__PVT__idec__DOT__instr 
                                                         >> 0xcU)))
                                                     ? 2U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (__PVT__idec__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 3U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__idec__DOT__instr 
                                                           >> 0xcU)))
                                                       ? 0U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (__PVT__idec__DOT__instr 
                                                            >> 0xcU)))
                                                        ? 1U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (__PVT__idec__DOT__instr 
                                                             >> 0xcU)))
                                                         ? 2U
                                                         : 3U))))))) 
                                              << 0xeU));
                                }
                            } else if ((0x20U == (__PVT__idec__DOT__instr 
                                                  >> 0x19U))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc 
                                    = ((0U != (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU))) 
                                       & (5U != (7U 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0xcU))));
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0xffffc3ffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                                if ((0U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x20000U 
                                           | (0xfff03fffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((5U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x24000U 
                                           | (0xfff03fffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                }
                            }
                            if ((0x10U == (__PVT__idec__DOT__instr 
                                           >> 0x19U))) {
                                if ((2U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x30000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((4U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x34000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((6U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x38000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                }
                            } else if ((0x20U == (__PVT__idec__DOT__instr 
                                                  >> 0x19U))) {
                                if ((7U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x40000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((6U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x44000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((4U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x3c000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                }
                            } else if ((5U == (__PVT__idec__DOT__instr 
                                               >> 0x19U))) {
                                if ((6U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x48000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((7U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x4c000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((4U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x50000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((5U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x54000U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                }
                            } else if ((IData)((0x8004000U 
                                                == 
                                                (0xfff07000U 
                                                 & __PVT__idec__DOT__instr)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x83ffffffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x60000U | (0xfff03fffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((0x30U == (__PVT__idec__DOT__instr 
                                                  >> 0x19U))) {
                                if ((1U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0xc800U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((5U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x10800U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                }
                            } else if ((0x24U == (__PVT__idec__DOT__instr 
                                                  >> 0x19U))) {
                                if ((1U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x1c800U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                } else if ((5U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x20800U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                }
                            } else if ((0x34U == (__PVT__idec__DOT__instr 
                                                  >> 0x19U))) {
                                if ((1U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x24800U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                }
                            } else if ((0x14U == (__PVT__idec__DOT__instr 
                                                  >> 0x19U))) {
                                if ((1U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x28800U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                }
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    }
                } else if ((8U & __PVT__idec__DOT__instr)) {
                    if ((4U & __PVT__idec__DOT__instr)) {
                        if ((2U & __PVT__idec__DOT__instr)) {
                            if ((1U & __PVT__idec__DOT__instr)) {
                                if ((2U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0xfe0fffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0x1f00000U 
                                              & (__PVT__idec__DOT__instr 
                                                 << 0xdU)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = ((0x3ffffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                           | (0xfc000000U 
                                              & ((0x80000000U 
                                                  & (__PVT__idec__DOT__instr 
                                                     << 0x10U)) 
                                                 | (0x7c000000U 
                                                    & (__PVT__idec__DOT__instr 
                                                       << 6U)))));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xfffffff0U 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0xfU 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 0x10U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x2800U 
                                           | (0xffffc3ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    if ((__PVT__idec__DOT__instr 
                                         >> 0x1fU)) {
                                        if ((0x40000000U 
                                             & __PVT__idec__DOT__instr)) {
                                            if ((0x20000000U 
                                                 & __PVT__idec__DOT__instr)) {
                                                if (
                                                    (0x10000000U 
                                                     & __PVT__idec__DOT__instr)) {
                                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                                } else if (
                                                           (0x8000000U 
                                                            & __PVT__idec__DOT__instr)) {
                                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                                } else {
                                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                        = 
                                                        (0xfc000U 
                                                         | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                                }
                                            } else if (
                                                       (0x10000000U 
                                                        & __PVT__idec__DOT__instr)) {
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                            } else if (
                                                       (0x8000000U 
                                                        & __PVT__idec__DOT__instr)) {
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                            } else {
                                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                    = 
                                                    (0xf8000U 
                                                     | (0xfff03fffU 
                                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                            }
                                        } else if (
                                                   (0x20000000U 
                                                    & __PVT__idec__DOT__instr)) {
                                            if ((0x10000000U 
                                                 & __PVT__idec__DOT__instr)) {
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                            } else if (
                                                       (0x8000000U 
                                                        & __PVT__idec__DOT__instr)) {
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                            } else {
                                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                    = 
                                                    (0xf4000U 
                                                     | (0xfff03fffU 
                                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                            }
                                        } else if (
                                                   (0x10000000U 
                                                    & __PVT__idec__DOT__instr)) {
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                        } else if (
                                                   (0x8000000U 
                                                    & __PVT__idec__DOT__instr)) {
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                        } else {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0xf0000U 
                                                   | (0xfff03fffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        }
                                    } else if ((0x40000000U 
                                                & __PVT__idec__DOT__instr)) {
                                        if ((0x20000000U 
                                             & __PVT__idec__DOT__instr)) {
                                            if ((0x10000000U 
                                                 & __PVT__idec__DOT__instr)) {
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                            } else if (
                                                       (0x8000000U 
                                                        & __PVT__idec__DOT__instr)) {
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                            } else {
                                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                    = 
                                                    (0xe8000U 
                                                     | (0xfff03fffU 
                                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                            }
                                        } else if (
                                                   (0x10000000U 
                                                    & __PVT__idec__DOT__instr)) {
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                        } else if (
                                                   (0x8000000U 
                                                    & __PVT__idec__DOT__instr)) {
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                        } else {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0xec000U 
                                                   | (0xfff03fffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        }
                                    } else if ((0x20000000U 
                                                & __PVT__idec__DOT__instr)) {
                                        if ((0x10000000U 
                                             & __PVT__idec__DOT__instr)) {
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                        } else if (
                                                   (0x8000000U 
                                                    & __PVT__idec__DOT__instr)) {
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                                        } else {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0xe4000U 
                                                   | (0xfff03fffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        }
                                    } else if ((0x10000000U 
                                                & __PVT__idec__DOT__instr)) {
                                        if ((0x8000000U 
                                             & __PVT__idec__DOT__instr)) {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0x18c00U 
                                                   | (0xfff003ffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0x2000000U 
                                                   | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                                        } else if (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (__PVT__idec__DOT__instr 
                                                        >> 0x14U)))) {
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0x14c00U 
                                                   | (0xfff003ffU 
                                                      & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                = (0x81ffffffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                                        }
                                    } else if ((0x8000000U 
                                                & __PVT__idec__DOT__instr)) {
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0xdc000U 
                                               | (0xfff03fffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    } else {
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0xe0000U 
                                               | (0xfff03fffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    }
                } else if ((4U & __PVT__idec__DOT__instr)) {
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                } else if ((2U & __PVT__idec__DOT__instr)) {
                    if ((1U & __PVT__idec__DOT__instr)) {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = ((0x1ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                               | (0xfe000000U & (0x2000000U 
                                                 | ((0x80000000U 
                                                     & (__PVT__idec__DOT__instr 
                                                        << 0x10U)) 
                                                    | (0x7c000000U 
                                                       & (__PVT__idec__DOT__instr 
                                                          << 6U))))));
                        vlSelfRef.__PVT__idec__DOT__uop[1U] 
                            = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                               | (0xfU & (__PVT__idec__DOT__instr 
                                          >> 0x10U)));
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0xc00U | (0xffffc3ffU 
                                         & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                        if ((0U == (7U & (__PVT__idec__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0x1c000U | (0xfff03fffU 
                                               & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                        } else if ((1U == (7U & (__PVT__idec__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0x20000U | (0xfff03fffU 
                                               & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                        } else if ((2U == (7U & (__PVT__idec__DOT__instr 
                                                 >> 0xcU)))) {
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0x24000U | (0xfff03fffU 
                                               & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                }
            } else if ((0x10U & __PVT__idec__DOT__instr)) {
                if ((8U & __PVT__idec__DOT__instr)) {
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                } else if ((4U & __PVT__idec__DOT__instr)) {
                    if ((2U & __PVT__idec__DOT__instr)) {
                        if ((1U & __PVT__idec__DOT__instr)) {
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0x400U | (0xffffc3ffU 
                                             & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                            vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                = (0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]);
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = ((0xfe003fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                   | (0x1f00000U & 
                                      (__PVT__idec__DOT__instr 
                                       << 0xdU)));
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    }
                } else if ((2U & __PVT__idec__DOT__instr)) {
                    if ((1U & __PVT__idec__DOT__instr)) {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = ((0xfffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                               | (0xfff00000U & (0x2000000U 
                                                 | ((0x80000000U 
                                                     & (__PVT__idec__DOT__instr 
                                                        << 0x10U)) 
                                                    | (0x1f00000U 
                                                       & (__PVT__idec__DOT__instr 
                                                          << 0xdU))))));
                        vlSelfRef.__PVT__idec__DOT__uop[1U] 
                            = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                               | (0xfU & (__PVT__idec__DOT__instr 
                                          >> 0x10U)));
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0xffffc3ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                        if (((IData)(((0x1000U == (0x7000U 
                                                   & __PVT__idec__DOT__instr)) 
                                      & (0U != (__PVT__idec__DOT__instr 
                                                >> 0x19U)))) 
                             | ((IData)(((0x5000U == 
                                          (0x7000U 
                                           & __PVT__idec__DOT__instr)) 
                                         & (0x20U != 
                                            (__PVT__idec__DOT__instr 
                                             >> 0x19U)))) 
                                & (0U != (__PVT__idec__DOT__instr 
                                          >> 0x19U))))) {
                            if ((0x30U == (__PVT__idec__DOT__instr 
                                           >> 0x19U))) {
                                if ((1U == (7U & (__PVT__idec__DOT__instr 
                                                  >> 0xcU)))) {
                                    if ((0U == (0x1fU 
                                                & (__PVT__idec__DOT__instr 
                                                   >> 0x14U)))) {
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x800U 
                                               | (0xfff003ffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    } else if ((1U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0x14U)))) {
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x4800U 
                                               | (0xfff003ffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    } else if ((2U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0x14U)))) {
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x8800U 
                                               | (0xfff003ffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    } else if ((4U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0x14U)))) {
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x58000U 
                                               | (0xfff03fffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    } else if ((5U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0x14U)))) {
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x5c000U 
                                               | (0xfff03fffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    } else if ((5U 
                                                == 
                                                (0x1fU 
                                                 & (__PVT__idec__DOT__instr 
                                                    >> 0x14U)))) {
                                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                            = (0x60000U 
                                               | (0xfff03fffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    }
                                } else if ((5U == (7U 
                                                   & (__PVT__idec__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                        = (0x10800U 
                                           | (0xfff003ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        = ((0xffffU 
                                            & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                           | (0x1f0000U 
                                              & (__PVT__idec__DOT__instr 
                                                 >> 4U)));
                                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                                }
                            } else if ((IData)((0x28705000U 
                                                == 
                                                (0xfff07000U 
                                                 & __PVT__idec__DOT__instr)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x14800U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((IData)((0x69805000U 
                                                == 
                                                (0xfff07000U 
                                                 & __PVT__idec__DOT__instr)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x18800U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = ((0xfff03fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                   | (((0x4000U & __PVT__idec__DOT__instr)
                                        ? ((0x2000U 
                                            & __PVT__idec__DOT__instr)
                                            ? ((0x1000U 
                                                & __PVT__idec__DOT__instr)
                                                ? 3U
                                                : 2U)
                                            : ((0x1000U 
                                                & __PVT__idec__DOT__instr)
                                                ? (
                                                   (0x20U 
                                                    == 
                                                    (__PVT__idec__DOT__instr 
                                                     >> 0x19U))
                                                    ? 9U
                                                    : 5U)
                                                : 1U))
                                        : ((0x2000U 
                                            & __PVT__idec__DOT__instr)
                                            ? ((0x1000U 
                                                & __PVT__idec__DOT__instr)
                                                ? 7U
                                                : 6U)
                                            : ((0x1000U 
                                                & __PVT__idec__DOT__instr)
                                                ? 4U
                                                : 0U))) 
                                      << 0xeU));
                        }
                        if ((0x24U == (__PVT__idec__DOT__instr 
                                       >> 0x19U))) {
                            if ((1U == (7U & (__PVT__idec__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x1c800U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0x1f0000U 
                                          & (__PVT__idec__DOT__instr 
                                             >> 4U)));
                                vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                            } else if ((5U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x20800U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0x1f0000U 
                                          & (__PVT__idec__DOT__instr 
                                             >> 4U)));
                                vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                            }
                        } else if ((0x34U == (__PVT__idec__DOT__instr 
                                              >> 0x19U))) {
                            if ((1U == (7U & (__PVT__idec__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x24800U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0x1f0000U 
                                          & (__PVT__idec__DOT__instr 
                                             >> 4U)));
                                vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                            }
                        } else if ((0x14U == (__PVT__idec__DOT__instr 
                                              >> 0x19U))) {
                            if ((1U == (7U & (__PVT__idec__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x28800U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0x1f0000U 
                                          & (__PVT__idec__DOT__instr 
                                             >> 4U)));
                                vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                            }
                        }
                        if (((((((((IData)((0U == (0xffc00U 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]))) 
                                   & (0U == (0x1fU 
                                             & ((vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                                 << 1U) 
                                                | (vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                                   >> 0x1fU))))) 
                                  & ((1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                            >> 0x1bU)) 
                                     == (1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                               >> 0x1aU)))) 
                                 & ((1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                           >> 0x1bU)) 
                                    == (1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                              >> 0x19U)))) 
                                & ((1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                          >> 0x1bU)) 
                                   == (1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                             >> 0x18U)))) 
                               & ((1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                         >> 0x1bU)) 
                                  == (1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                            >> 0x17U)))) 
                              & ((1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                        >> 0x1bU)) 
                                 == (1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                           >> 0x16U)))) 
                             & ((1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                       >> 0x1bU)) == 
                                (1U & (vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                       >> 0x15U))))) {
                            vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                = (0x2400U | (0xffffc3ffU 
                                              & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                        }
                    } else {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                }
            } else if ((8U & __PVT__idec__DOT__instr)) {
                if ((4U & __PVT__idec__DOT__instr)) {
                    if ((2U & __PVT__idec__DOT__instr)) {
                        if ((1U & __PVT__idec__DOT__instr)) {
                            if ((0U == (7U & (__PVT__idec__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x2400U | (0xffffc3ffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                            } else if ((1U == (7U & 
                                               (__PVT__idec__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x2c000U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = (0x40000U | (0xffffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[1U]));
                                vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                                vlSelfRef.__PVT__idec__DOT__decBranch 
                                    = (3U | (0x3fcU 
                                             & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((IData)((0x2000U 
                                                == 
                                                (0xfff07f80U 
                                                 & __PVT__idec__DOT__instr)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x2cc00U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                       | (0x80000000U 
                                          & (__PVT__idec__DOT__instr 
                                             << 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0xfU & (__PVT__idec__DOT__instr 
                                                  >> 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__decBranch 
                                    = (3U | (0x3fcU 
                                             & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((IData)((0x102000U 
                                                == 
                                                (0xfff07f80U 
                                                 & __PVT__idec__DOT__instr)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x28c00U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                       | (0x80000000U 
                                          & (__PVT__idec__DOT__instr 
                                             << 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0xfU & (__PVT__idec__DOT__instr 
                                                  >> 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__decBranch 
                                    = (3U | (0x3fcU 
                                             & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            } else if ((IData)((0x202000U 
                                                == 
                                                (0xfff07f80U 
                                                 & __PVT__idec__DOT__instr)))) {
                                vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = (0x30c00U | (0xfff003ffU 
                                                   & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                                vlSelfRef.__PVT__idec__DOT__uop[0U] 
                                    = ((0x3ffffffU 
                                        & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                                       | (0x80000000U 
                                          & (__PVT__idec__DOT__instr 
                                             << 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__uop[1U] 
                                    = ((0xfffffff0U 
                                        & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                                       | (0xfU & (__PVT__idec__DOT__instr 
                                                  >> 0x10U)));
                                vlSelfRef.__PVT__idec__DOT__decBranch 
                                    = (3U | (0x3fcU 
                                             & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                            }
                        } else {
                            vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    }
                } else if ((2U & __PVT__idec__DOT__instr)) {
                    if ((1U & (~ __PVT__idec__DOT__instr))) {
                        vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                }
            } else if ((4U & __PVT__idec__DOT__instr)) {
                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
            } else if ((2U & __PVT__idec__DOT__instr)) {
                if ((1U & __PVT__idec__DOT__instr)) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x2000000U 
                                             | ((0x80000000U 
                                                 & (__PVT__idec__DOT__instr 
                                                    << 0x10U)) 
                                                | (0x1f00000U 
                                                   & (__PVT__idec__DOT__instr 
                                                      << 0xdU))))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xfU & (__PVT__idec__DOT__instr 
                                      >> 0x10U)));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xc00U | (0xffffc3ffU & 
                                     vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    if ((0U == (7U & (__PVT__idec__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0xfff03fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    } else if ((1U == (7U & (__PVT__idec__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0x4000U | (0xfff03fffU 
                                          & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    } else if ((2U == (7U & (__PVT__idec__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0x8000U | (0xfff03fffU 
                                          & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    } else if ((4U == (7U & (__PVT__idec__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0xc000U | (0xfff03fffU 
                                          & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    } else if ((5U == (7U & (__PVT__idec__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0x10000U | (0xfff03fffU 
                                           & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    }
                    vlSelfRef.__PVT__idec__DOT__invalidEnc 
                        = (((((0U != (7U & (__PVT__idec__DOT__instr 
                                            >> 0xcU))) 
                              & (1U != (7U & (__PVT__idec__DOT__instr 
                                              >> 0xcU)))) 
                             & (2U != (7U & (__PVT__idec__DOT__instr 
                                             >> 0xcU)))) 
                            & (4U != (7U & (__PVT__idec__DOT__instr 
                                            >> 0xcU)))) 
                           & (5U != (7U & (__PVT__idec__DOT__instr 
                                           >> 0xcU))));
                } else {
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
                }
            } else {
                vlSelfRef.__PVT__idec__DOT__invalidEnc = 1U;
            }
        } else {
            vlSelfRef.__PVT__idec__DOT__uop[0U] = (2U 
                                                   | vlSelfRef.__PVT__idec__DOT__uop[0U]);
            if ((0U == (3U & (IData)(__PVT__idec__DOT__i16)))) {
                if ((2U == (7U & ((IData)(__PVT__idec__DOT__i16) 
                                  >> 0xdU)))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x8c00U | (0xfff003ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffc0ffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & ((0x380000U 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 << 9U)) 
                                             | (0x40000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xcU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0x3fffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x400000U & ((IData)(__PVT__idec__DOT__i16) 
                                           << 0x11U)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfc0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x2800000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0x12U)))));
                } else if ((6U == (7U & ((IData)(__PVT__idec__DOT__i16) 
                                         >> 0xdU)))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x24c00U | (0xfff003ffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffc0ffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & ((0x380000U 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 << 9U)) 
                                             | (0x40000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xcU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0x3fffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x400000U & ((IData)(__PVT__idec__DOT__i16) 
                                           << 0x11U)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x81ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfe000000U & (0x22000000U 
                                             | (0x1c000000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0x18U)))));
                } else if ((IData)(((0U == (0xe000U 
                                            & (IData)(__PVT__idec__DOT__i16))) 
                                    & (0U != (0xffU 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 >> 5U)))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xfff003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffc0ffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & (((0x300000U 
                                               & ((IData)(__PVT__idec__DOT__i16) 
                                                  << 9U)) 
                                              | (0x80000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 0xeU))) 
                                             | (0x40000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xcU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0x3fffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x3c00000U & ((IData)(__PVT__idec__DOT__i16) 
                                            << 0xfU)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (1U | (0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfc0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x2800000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0x12U)))));
                } else if ((IData)((0x8000U == (0xfc00U 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x3ffffffU & (4U | (3U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & ((0x20000U 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 << 0xcU)) 
                                             | (0x10000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xaU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x80cc00U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0x12U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                } else if ((IData)((0x8400U == (0xfc40U 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x3ffffffU & (4U | (3U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x20000U & ((IData)(__PVT__idec__DOT__i16) 
                                          << 0xcU)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x810c00U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0x12U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                } else if ((IData)((0x8440U == (0xfc40U 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x3ffffffU & (4U | (3U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x20000U & ((IData)(__PVT__idec__DOT__i16) 
                                          << 0xcU)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x804c00U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0x12U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                } else if ((IData)((0x8800U == (0xfc00U 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfc000000U & (0x20000000U 
                                             | ((0x80000000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 0x18U)) 
                                                | (0x1c000000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0x18U))))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffffcU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (3U & ((IData)(__PVT__idec__DOT__i16) 
                                    >> 8U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (4U | (0xfffffff3U & vlSelfRef.__PVT__idec__DOT__uop[1U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & ((0x20000U 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 << 0xcU)) 
                                             | (0x10000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xaU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x1cc00U | (0xfc0003ffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                }
            } else if ((1U == (3U & (IData)(__PVT__idec__DOT__i16)))) {
                if ((5U == (7U & ((IData)(__PVT__idec__DOT__i16) 
                                  >> 0xdU)))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2400U | (0xffffc3ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                } else if ((1U == (7U & ((IData)(__PVT__idec__DOT__i16) 
                                         >> 0xdU)))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x4400U | (0xfff003ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xf000ffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & ((((0x8000000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xfU)) 
                                               | (0x4000000U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     << 0x12U))) 
                                              | ((0x3000000U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     << 0xfU)) 
                                                 | ((0x800000U 
                                                     & ((IData)(__PVT__idec__DOT__i16) 
                                                        << 0x11U)) 
                                                    | (0x400000U 
                                                       & ((IData)(__PVT__idec__DOT__i16) 
                                                          << 0xfU))))) 
                                             | (((0x200000U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     << 0x13U)) 
                                                 | (0x100000U 
                                                    & ((IData)(__PVT__idec__DOT__i16) 
                                                       << 9U))) 
                                                | (0xe0000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0xeU))))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | ((- (IData)((1U & ((IData)(__PVT__idec__DOT__i16) 
                                                >> 0xcU)))) 
                              << 0x1cU));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                        = (0xffffU & ((- (IData)((1U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 0xcU)))) 
                                      >> 4U));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2100000U | (0xfc0fffffU 
                                         & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                } else if ((6U == (7U & ((IData)(__PVT__idec__DOT__i16) 
                                         >> 0xdU)))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x8400U | (0xfff003ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfe00ffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & (((0x1000000U 
                                               & ((IData)(__PVT__idec__DOT__i16) 
                                                  << 0xcU)) 
                                              | ((0xc00000U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     << 0x11U)) 
                                                 | (0x200000U 
                                                    & ((IData)(__PVT__idec__DOT__i16) 
                                                       << 0x13U)))) 
                                             | ((0x180000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 9U)) 
                                                | (0x60000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0xeU))))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0x1ffffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | ((- (IData)((1U & ((IData)(__PVT__idec__DOT__i16) 
                                                >> 0xcU)))) 
                              << 0x19U));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                        = (0xffffU & ((- (IData)((1U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 0xcU)))) 
                                      >> 7U));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                } else if ((7U == (7U & ((IData)(__PVT__idec__DOT__i16) 
                                         >> 0xdU)))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xc400U | (0xfff003ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfe00ffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & (((0x1000000U 
                                               & ((IData)(__PVT__idec__DOT__i16) 
                                                  << 0xcU)) 
                                              | ((0xc00000U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     << 0x11U)) 
                                                 | (0x200000U 
                                                    & ((IData)(__PVT__idec__DOT__i16) 
                                                       << 0x13U)))) 
                                             | ((0x180000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 9U)) 
                                                | (0x60000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0xeU))))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0x1ffffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | ((- (IData)((1U & ((IData)(__PVT__idec__DOT__i16) 
                                                >> 0xcU)))) 
                              << 0x19U));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                        = (0xffffU & ((- (IData)((1U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 0xcU)))) 
                                      >> 7U));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                } else if ((IData)(((0x4000U == (0xe000U 
                                                 & (IData)(__PVT__idec__DOT__i16))) 
                                    & (0U != (0x1fU 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 >> 7U)))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2400U | (0xffffc3ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & (((- (IData)(
                                                         (1U 
                                                          & ((IData)(__PVT__idec__DOT__i16) 
                                                             >> 0xcU)))) 
                                              << 0x16U) 
                                             | ((0x200000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 9U)) 
                                                | (0x1f0000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0xeU))))));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                        = (0xffffU & ((- (IData)((1U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 0xcU)))) 
                                      >> 0xaU));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfc0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x2000000U 
                                             | (0x1f00000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                } else if (((IData)(((0x6000U == (0xe000U 
                                                  & (IData)(__PVT__idec__DOT__i16))) 
                                     & (0U != (0x1fU 
                                               & ((IData)(__PVT__idec__DOT__i16) 
                                                  >> 7U))))) 
                            & (0U != ((0x20U & ((IData)(__PVT__idec__DOT__i16) 
                                                >> 7U)) 
                                      | (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                                  >> 2U)))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xffffc3ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    if ((2U == (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                         >> 7U)))) {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0xfff03fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                        vlSelfRef.__PVT__idec__DOT__uop[1U] 
                            = (1U | (0xfffffff0U & 
                                     vlSelfRef.__PVT__idec__DOT__uop[1U]));
                        vlSelfRef.__PVT__idec__DOT__uop[1U] 
                            = ((0xfc00ffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                               | (0xffff0000U & (((
                                                   (0x2000000U 
                                                    & ((IData)(__PVT__idec__DOT__i16) 
                                                       << 0xdU)) 
                                                   | (0x1800000U 
                                                      & ((IData)(__PVT__idec__DOT__i16) 
                                                         << 0x14U))) 
                                                  | ((0x400000U 
                                                      & ((IData)(__PVT__idec__DOT__i16) 
                                                         << 0x11U)) 
                                                     | (0x200000U 
                                                        & ((IData)(__PVT__idec__DOT__i16) 
                                                           << 0x13U)))) 
                                                 | (0x100000U 
                                                    & ((IData)(__PVT__idec__DOT__i16) 
                                                       << 0xeU)))));
                        vlSelfRef.__PVT__idec__DOT__uop[1U] 
                            = ((0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                               | ((- (IData)((1U & 
                                              ((IData)(__PVT__idec__DOT__i16) 
                                               >> 0xcU)))) 
                                  << 0x1aU));
                        vlSelfRef.__PVT__idec__DOT__uop[2U] 
                            = (0xffffU & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(__PVT__idec__DOT__i16) 
                                                         >> 0xcU)))) 
                                          >> 6U));
                    } else {
                        vlSelfRef.__PVT__idec__DOT__uop[0U] 
                            = (0x28000U | (0xfff03fffU 
                                           & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                        vlSelfRef.__PVT__idec__DOT__uop[1U] 
                            = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                               | (0xf0000000U & ((IData)(__PVT__idec__DOT__i16) 
                                                 << 0x1aU)));
                        vlSelfRef.__PVT__idec__DOT__uop[2U] 
                            = ((0xfffeU & vlSelfRef.__PVT__idec__DOT__uop[2U]) 
                               | (1U & ((IData)(__PVT__idec__DOT__i16) 
                                        >> 6U)));
                        vlSelfRef.__PVT__idec__DOT__uop[2U] 
                            = ((1U & vlSelfRef.__PVT__idec__DOT__uop[2U]) 
                               | (0xfffeU & ((0xfffcU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(__PVT__idec__DOT__i16) 
                                                                >> 0xcU)))) 
                                                 << 2U)) 
                                             | (2U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   >> 0xbU)))));
                    }
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfc0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x2000000U 
                                             | (0x1f00000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                } else if ((IData)(((0U == (0xe000U 
                                            & (IData)(__PVT__idec__DOT__i16))) 
                                    & (0U != (0x1fU 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 >> 7U)))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xfff003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & (((- (IData)(
                                                         (1U 
                                                          & ((IData)(__PVT__idec__DOT__i16) 
                                                             >> 0xcU)))) 
                                              << 0x16U) 
                                             | ((0x200000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 9U)) 
                                                | (0x1f0000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0xeU))))));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                        = (0xffffU & ((- (IData)((1U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 0xcU)))) 
                                      >> 0xaU));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xfU & ((IData)(__PVT__idec__DOT__i16) 
                                      >> 8U)));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x1f00000U & ((IData)(__PVT__idec__DOT__i16) 
                                            << 0xdU)));
                } else if (((IData)((0x8000U == (0xfc00U 
                                                 & (IData)(__PVT__idec__DOT__i16)))) 
                            & (0U != (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                               >> 2U))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x14000U | (0xfff003ffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x1f0000U & ((IData)(__PVT__idec__DOT__i16) 
                                           << 0xeU)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x800000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                } else if (((IData)((0x8400U == (0xfc00U 
                                                 & (IData)(__PVT__idec__DOT__i16)))) 
                            & (0U != (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                               >> 2U))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x24000U | (0xfff003ffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x1f0000U & ((IData)(__PVT__idec__DOT__i16) 
                                           << 0xeU)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x800000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                } else if ((IData)((0x8800U == (0xec00U 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xc000U | (0xfff003ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & (((- (IData)(
                                                         (1U 
                                                          & ((IData)(__PVT__idec__DOT__i16) 
                                                             >> 0xcU)))) 
                                              << 0x16U) 
                                             | ((0x200000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 9U)) 
                                                | (0x1f0000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0xeU))))));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                        = (0xffffU & ((- (IData)((1U 
                                                  & ((IData)(__PVT__idec__DOT__i16) 
                                                     >> 0xcU)))) 
                                      >> 0xaU));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x800000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                } else if ((0x23U == (0x3fU & ((IData)(__PVT__idec__DOT__i16) 
                                               >> 0xaU)))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfff03fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (((0x40U & (IData)(__PVT__idec__DOT__i16))
                                ? ((0x20U & (IData)(__PVT__idec__DOT__i16))
                                    ? 3U : 2U) : ((0x20U 
                                                   & (IData)(__PVT__idec__DOT__i16))
                                                   ? 1U
                                                   : 8U)) 
                              << 0xeU));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xffffc3ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfc000000U & (0x20000000U 
                                             | ((0x80000000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 0x18U)) 
                                                | (0x1c000000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0x18U))))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffffcU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (3U & ((IData)(__PVT__idec__DOT__i16) 
                                    >> 8U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (4U | (0xfffffff3U & vlSelfRef.__PVT__idec__DOT__uop[1U]));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x800000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                } else if ((IData)((0U == (0xfffcU 
                                           & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2400U | (0xffffc3ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                } else if ((IData)((0x9c60U == (0xfc7cU 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x80c000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (0xff0000U | (0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                } else if ((IData)((0x9c64U == (0xfc7cU 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x858000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xfdffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                } else if ((IData)((0x9c68U == (0xfc7cU 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x860000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xfdffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                } else if ((IData)((0x9c6cU == (0xfc7cU 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x85c000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xfdffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                } else if ((IData)((0x9c74U == (0xfc7cU 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x7fffffffU & (4U | (3U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      >> 8U)))));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x83c000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]);
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                } else if ((IData)((0x9c40U == (0xfc60U 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfc000000U & (0x20000000U 
                                             | ((0x80000000U 
                                                 & ((IData)(__PVT__idec__DOT__i16) 
                                                    << 0x18U)) 
                                                | (0x1c000000U 
                                                   & ((IData)(__PVT__idec__DOT__i16) 
                                                      << 0x18U))))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffffcU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (3U & ((IData)(__PVT__idec__DOT__i16) 
                                    >> 8U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (4U | (0xfffffff3U & vlSelfRef.__PVT__idec__DOT__uop[1U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfffffc00U & (0x801000U 
                                             | (0x700000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xfdffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                }
            } else if ((2U == (3U & (IData)(__PVT__idec__DOT__i16)))) {
                if ((IData)(((0x4000U == (0xe000U & (IData)(__PVT__idec__DOT__i16))) 
                             & (0U != (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                                >> 7U)))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x8c00U | (0xfff003ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffc0ffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & ((0x200000U 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 << 9U)) 
                                             | (0x1c0000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xeU)))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0x3fffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xc00000U & ((IData)(__PVT__idec__DOT__i16) 
                                           << 0x14U)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (1U | (0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfc0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfff00000U & (0x2000000U 
                                             | (0x1f00000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0xdU)))));
                } else if ((6U == (7U & ((IData)(__PVT__idec__DOT__i16) 
                                         >> 0xdU)))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x24c00U | (0xfff003ffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xffff0000U & ((0xc00000U 
                                              & ((IData)(__PVT__idec__DOT__i16) 
                                                 << 0xfU)) 
                                             | (0x3c0000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 9U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x1ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfe000000U & (0x2000000U 
                                             | (0x7c000000U 
                                                & ((IData)(__PVT__idec__DOT__i16) 
                                                   << 0x18U)))));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (1U | (0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]));
                } else if ((IData)(((0x8000U == (0xf000U 
                                                 & (IData)(__PVT__idec__DOT__i16))) 
                                    & (~ (IData)(((0U 
                                                   != 
                                                   (0x7cU 
                                                    & (IData)(__PVT__idec__DOT__i16))) 
                                                  | (0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(__PVT__idec__DOT__i16) 
                                                         >> 7U))))))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x400U | (0xffffc3ffU & 
                                     vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xfU & ((IData)(__PVT__idec__DOT__i16) 
                                      >> 8U)));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfff03fffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (((1U == (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                                >> 7U)))
                                ? 8U : 0xaU) << 0xeU));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (0xffff000fU & vlSelfRef.__PVT__idec__DOT__uop[1U]);
                    __Vtemp_2 = ((0x200U & vlSelfRef.PD_instrs
                                  [3U][0U]) ? (0xfffffffeU 
                                               & ((vlSelfRef.PD_instrs
                                                   [3U][1U] 
                                                   << 0x17U) 
                                                  | (0x7ffffeU 
                                                     & (vlSelfRef.PD_instrs
                                                        [3U][0U] 
                                                        >> 9U))))
                                  : ((((vlSelfRef.PD_instrs
                                        [3U][2U] << 0x11U) 
                                       | (vlSelfRef.PD_instrs
                                          [3U][1U] 
                                          >> 0xfU)) 
                                      + ((2U & vlSelfRef.__PVT__idec__DOT__uop[0U])
                                          ? 1U : 2U)) 
                                     << 1U));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (((0x200U & vlSelfRef.PD_instrs
                                [3U][0U]) ? (0xfffffffeU 
                                             & ((vlSelfRef.PD_instrs
                                                 [3U][1U] 
                                                 << 0x17U) 
                                                | (0x7ffffeU 
                                                   & (vlSelfRef.PD_instrs
                                                      [3U][0U] 
                                                      >> 9U))))
                                : ((((vlSelfRef.PD_instrs
                                      [3U][2U] << 0x11U) 
                                     | (vlSelfRef.PD_instrs
                                        [3U][1U] >> 0xfU)) 
                                    + ((2U & vlSelfRef.__PVT__idec__DOT__uop[0U])
                                        ? 1U : 2U)) 
                                   << 1U)) << 0x10U));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                        = (__Vtemp_2 >> 0x10U);
                } else if ((IData)(((0x9000U == (0xf000U 
                                                 & (IData)(__PVT__idec__DOT__i16))) 
                                    & (~ (IData)(((0U 
                                                   != 
                                                   (0x7cU 
                                                    & (IData)(__PVT__idec__DOT__i16))) 
                                                  | (0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(__PVT__idec__DOT__i16) 
                                                         >> 7U))))))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x400U | (0xffffc3ffU & 
                                     vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xfU & ((IData)(__PVT__idec__DOT__i16) 
                                      >> 8U)));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2124000U | (0xfc003fffU 
                                         & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = (0xffff000fU & vlSelfRef.__PVT__idec__DOT__uop[1U]);
                    __Vtemp_3 = ((0x200U & vlSelfRef.PD_instrs
                                  [3U][0U]) ? (0xfffffffeU 
                                               & ((vlSelfRef.PD_instrs
                                                   [3U][1U] 
                                                   << 0x17U) 
                                                  | (0x7ffffeU 
                                                     & (vlSelfRef.PD_instrs
                                                        [3U][0U] 
                                                        >> 9U))))
                                  : ((((vlSelfRef.PD_instrs
                                        [3U][2U] << 0x11U) 
                                       | (vlSelfRef.PD_instrs
                                          [3U][1U] 
                                          >> 0xfU)) 
                                      + ((2U & vlSelfRef.__PVT__idec__DOT__uop[0U])
                                          ? 1U : 2U)) 
                                     << 1U));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (((0x200U & vlSelfRef.PD_instrs
                                [3U][0U]) ? (0xfffffffeU 
                                             & ((vlSelfRef.PD_instrs
                                                 [3U][1U] 
                                                 << 0x17U) 
                                                | (0x7ffffeU 
                                                   & (vlSelfRef.PD_instrs
                                                      [3U][0U] 
                                                      >> 9U))))
                                : ((((vlSelfRef.PD_instrs
                                      [3U][2U] << 0x11U) 
                                     | (vlSelfRef.PD_instrs
                                        [3U][1U] >> 0xfU)) 
                                    + ((2U & vlSelfRef.__PVT__idec__DOT__uop[0U])
                                        ? 1U : 2U)) 
                                   << 1U)) << 0x10U));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] 
                        = (__Vtemp_3 >> 0x10U);
                } else if (((IData)(((0U == (0xf000U 
                                             & (IData)(__PVT__idec__DOT__i16))) 
                                     & (0U != (0x1fU 
                                               & ((IData)(__PVT__idec__DOT__i16) 
                                                  >> 7U))))) 
                            & (0U != (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                               >> 2U))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x10000U | (0xfff003ffU 
                                       & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xffffU & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0x1f0000U & ((IData)(__PVT__idec__DOT__i16) 
                                           << 0xeU)));
                    vlSelfRef.__PVT__idec__DOT__uop[2U] = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0x2000000U | vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x7fffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x80000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xfU & ((IData)(__PVT__idec__DOT__i16) 
                                      >> 8U)));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x1f00000U & ((IData)(__PVT__idec__DOT__i16) 
                                            << 0xdU)));
                } else if (((IData)(((0x8000U == (0xf000U 
                                                  & (IData)(__PVT__idec__DOT__i16))) 
                                     & (0U != (0x1fU 
                                               & ((IData)(__PVT__idec__DOT__i16) 
                                                  >> 7U))))) 
                            & (0U != (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                               >> 2U))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xfff003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x83ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x7c000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x1f00000U & ((IData)(__PVT__idec__DOT__i16) 
                                            << 0xdU)));
                } else if (((IData)(((0x9000U == (0xf000U 
                                                  & (IData)(__PVT__idec__DOT__i16))) 
                                     & (0U != (0x1fU 
                                               & ((IData)(__PVT__idec__DOT__i16) 
                                                  >> 7U))))) 
                            & (0U != (0x1fU & ((IData)(__PVT__idec__DOT__i16) 
                                               >> 2U))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xfff003ffU & vlSelfRef.__PVT__idec__DOT__uop[0U]);
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0x3ffffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0xfc000000U & ((IData)(__PVT__idec__DOT__i16) 
                                             << 0x18U)));
                    vlSelfRef.__PVT__idec__DOT__uop[1U] 
                        = ((0xfffffff0U & vlSelfRef.__PVT__idec__DOT__uop[1U]) 
                           | (0xfU & ((IData)(__PVT__idec__DOT__i16) 
                                      >> 8U)));
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = ((0xfe0fffffU & vlSelfRef.__PVT__idec__DOT__uop[0U]) 
                           | (0x1f00000U & ((IData)(__PVT__idec__DOT__i16) 
                                            << 0xdU)));
                } else if ((IData)((0x9000U == (0xfffcU 
                                                & (IData)(__PVT__idec__DOT__i16))))) {
                    vlSelfRef.__PVT__idec__DOT__uop[0U] 
                        = (0xf000U | (0xfff003ffU & 
                                      vlSelfRef.__PVT__idec__DOT__uop[0U]));
                    vlSelfRef.__PVT__idec__DOT__invalidEnc = 0U;
                    vlSelfRef.__PVT__idec__DOT__decBranch 
                        = (3U | (0x3fcU & vlSelfRef.__PVT__idec__DOT__uop[0U]));
                }
            }
        }
    }
    if (vlSelfRef.__PVT__idec__DOT__invalidEnc) {
        vlSelfRef.__PVT__idec__DOT__uop[0U] = (0xb000U 
                                               | (0xfe0003ffU 
                                                  & vlSelfRef.__PVT__idec__DOT__uop[0U]));
        if ((1U & vlSelfRef.__PVT__idec__DOT__uop[0U])) {
            vlSelfRef.__PVT__idec__DOT__decBranch = 
                (3U | (0x3fcU & vlSelfRef.__PVT__idec__DOT__uop[0U]));
        }
    }
    vlSelfRef.__PVT__idec__DOT__uopsComb[3U][0U] = 
        vlSelfRef.__PVT__idec__DOT__uop[0U];
    vlSelfRef.__PVT__idec__DOT__uopsComb[3U][1U] = 
        vlSelfRef.__PVT__idec__DOT__uop[1U];
    vlSelfRef.__PVT__idec__DOT__uopsComb[3U][2U] = 
        vlSelfRef.__PVT__idec__DOT__uop[2U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[0U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [0U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[0U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[0U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[1U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [1U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[1U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[1U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[2U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [2U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[2U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[2U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[3U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [3U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[3U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[3U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[4U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [4U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[4U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[4U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[5U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [5U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[5U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[5U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[6U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [6U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[6U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[6U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[7U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                 [7U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[7U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[7U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[0U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [0U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[0U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[0U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[1U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [1U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[1U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[1U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[2U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [2U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[2U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[2U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[3U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [3U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[3U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[3U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[4U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [4U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[4U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[4U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[5U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [5U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[5U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[5U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[6U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [6U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[6U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[6U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[7U] 
        = (3U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                 [7U] >> 0x10U));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[7U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [0U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [0U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [0U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [0U][3U] 
                                                >> 0x17U))));
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
            vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[7U] 
                = (3U & (((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                           [1U][4U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                              [1U][4U] 
                                              >> 0x17U)) 
                         + ((vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                             [1U][3U] << 9U) | (vlSelfRef.__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps
                                                [1U][3U] 
                                                >> 0x17U))));
        }
    }
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
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffff8U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (7U & ((3U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
                    + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                             >> 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                               >> 4U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 6U))) 
                       << 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 8U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0xaU))) 
                        << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 0xcU)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0xeU))) 
                        << 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x7000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                 >> 0x10U)) + (3U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                  >> 0x14U)) + (3U 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x18U)) + (3U 
                                                 & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0x1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x1cU)) + (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0x1eU)) 
                           << 0x15U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffff8U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (7U & ((3U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums) 
                    + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                             >> 2U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xffffc7U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                               >> 4U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 6U))) 
                       << 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfffe3fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 8U)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0xaU))) 
                        << 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                >> 0xcU)) + (3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0xeU))) 
                        << 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xff8fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x7000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                 >> 0x10U)) + (3U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                >> 0x12U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xfc7fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x38000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                  >> 0x14U)) + (3U 
                                                & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                   >> 0x16U))) 
                          << 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0xe3ffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0x1c0000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x18U)) + (3U 
                                                 & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                    >> 0x1aU))) 
                           << 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
        = ((0x1fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
           | (0xe00000U & (((3U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                   >> 0x1cU)) + (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums 
                                                 >> 0x1eU)) 
                           << 0x15U)));
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
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[2U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = ((0x3ffffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]) 
           | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr 
              << 0x12U));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[2U] 
        = (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr 
           >> 0xeU);
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfe000007U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (0xfffffff8U & ((0x1fff800U & (vlSelfRef.LD_uop
                                            [3U][0U] 
                                            << 5U)) 
                             | ((0x700U & (vlSelfRef.LD_uop
                                           [3U][2U] 
                                           >> 0xcU)) 
                                | (0xf8U & (vlSelfRef.LD_uop
                                            [3U][0U] 
                                            >> 0x12U))))));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0x1ffffffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (0xfe000000U & ((vlSelfRef.LD_uop[3U][1U] 
                              << 0x1fU) | (0x7e000000U 
                                           & (vlSelfRef.LD_uop
                                              [3U][0U] 
                                              >> 1U)))));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = ((0xffffff80U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]) 
           | (0x7fU & (vlSelfRef.LD_uop[3U][1U] >> 1U)));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = (0xfffffeffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfffffffdU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (2U & vlSelfRef.LD_uop[3U][0U]));
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (vlSelfRef.LD_uop[3U][0U] & ((3U == (0xfU 
                                                  & (vlSelfRef.LD_uop
                                                     [3U][0U] 
                                                     >> 2U))) 
                                          | (0xaU == 
                                             (0xfU 
                                              & (vlSelfRef.LD_uop
                                                 [3U][0U] 
                                                 >> 2U))))));
    if ((6U > (0x3fU & (vlSelfRef.LD_uop[3U][1U] >> 8U)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x200U | (0xfffff9ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
        if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelfRef.LD_uop[3U][1U])) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [3U][1U] >> 9U)))) {
                            if ((0x100U & vlSelfRef.LD_uop
                                 [3U][1U])) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x100U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x1000U | (0xffffc7ffU 
                                                  & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                            } else {
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x800U | (0xffffc7ffU 
                                                 & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = ((0xffffc7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]) 
                               | (((0x200U & vlSelfRef.LD_uop
                                    [3U][1U]) ? ((0x100U 
                                                  & vlSelfRef.LD_uop
                                                  [3U][1U])
                                                  ? 0U
                                                  : 2U)
                                    : ((0x100U & vlSelfRef.LD_uop
                                        [3U][1U]) ? 5U
                                        : 4U)) << 0xbU));
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x400U | (0xfffff9ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x1000U | (0xffffe7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
        if ((0x2000U & vlSelfRef.LD_uop[3U][1U])) {
            if ((0x1000U & vlSelfRef.LD_uop[3U][1U])) {
                if ((0x800U & vlSelfRef.LD_uop[3U][1U])) {
                    if ((0x37U != (0x3fU & (vlSelfRef.LD_uop
                                            [3U][1U] 
                                            >> 8U)))) {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                            = (4U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
                    }
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x200U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x1000U | (0xffffc7ffU & 
                                      vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                } else if ((0x400U & vlSelfRef.LD_uop
                            [3U][1U])) {
                    if ((0x200U & vlSelfRef.LD_uop[3U][1U])) {
                        if ((0x100U & vlSelfRef.LD_uop
                             [3U][1U])) {
                            if ((0x37U != (0x3fU & 
                                           (vlSelfRef.LD_uop
                                            [3U][1U] 
                                            >> 8U)))) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                    = (4U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]);
                            }
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x200U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x1000U | (0xffffc7ffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                             >> 0xcU)))) {
            if ((0x800U & vlSelfRef.LD_uop[3U][1U])) {
                if ((0x400U & vlSelfRef.LD_uop[3U][1U])) {
                    if ((1U & (~ (vlSelfRef.LD_uop[3U][1U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [3U][1U] >> 8U)))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0xfffc3fffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        }
                    }
                } else if ((0x200U & vlSelfRef.LD_uop
                            [3U][1U])) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0xfffc3fffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                } else if ((0x100U & vlSelfRef.LD_uop
                            [3U][1U])) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                } else {
                    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x800U | (0xffffe7ffU & 
                                     vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    if ((2U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr)) {
                        if ((2U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr)) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x30000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0xc000U | (0xfffc3fffU 
                                          & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    }
                }
            } else if ((0x400U & vlSelfRef.LD_uop[3U][1U])) {
                if ((0x200U & vlSelfRef.LD_uop[3U][1U])) {
                    if ((0x100U & vlSelfRef.LD_uop[3U][1U])) {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0xffffe7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        if ((0U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x4000U | (0xfffc3fffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((1U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x8000U | (0xfffc3fffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((2U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x10000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((3U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x20000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x40U | (0xffffff80U 
                                        & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[2U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = ((0x3ffffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]) 
           | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr 
              << 0x12U));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[2U] 
        = (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr 
           >> 0xeU);
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfe000007U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (0xfffffff8U & ((0x1fff800U & (vlSelfRef.LD_uop
                                            [4U][0U] 
                                            << 5U)) 
                             | ((0x700U & (vlSelfRef.LD_uop
                                           [4U][2U] 
                                           >> 0xcU)) 
                                | (0xf8U & (vlSelfRef.LD_uop
                                            [4U][0U] 
                                            >> 0x12U))))));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0x1ffffffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (0xfe000000U & ((vlSelfRef.LD_uop[4U][1U] 
                              << 0x1fU) | (0x7e000000U 
                                           & (vlSelfRef.LD_uop
                                              [4U][0U] 
                                              >> 1U)))));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = ((0xffffff80U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]) 
           | (0x7fU & (vlSelfRef.LD_uop[4U][1U] >> 1U)));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
        = (0xfffffeffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfffffffdU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (2U & vlSelfRef.LD_uop[4U][0U]));
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
        = ((0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]) 
           | (vlSelfRef.LD_uop[4U][0U] & ((3U == (0xfU 
                                                  & (vlSelfRef.LD_uop
                                                     [4U][0U] 
                                                     >> 2U))) 
                                          | (0xaU == 
                                             (0xfU 
                                              & (vlSelfRef.LD_uop
                                                 [4U][0U] 
                                                 >> 2U))))));
    if ((6U > (0x3fU & (vlSelfRef.LD_uop[4U][1U] >> 8U)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x200U | (0xfffff9ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
        if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                          >> 0xcU)))) {
                if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                              >> 0xbU)))) {
                    if ((0x400U & vlSelfRef.LD_uop[4U][1U])) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [4U][1U] >> 9U)))) {
                            if ((0x100U & vlSelfRef.LD_uop
                                 [4U][1U])) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x100U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x1000U | (0xffffc7ffU 
                                                  & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                            } else {
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                    = (0x800U | (0xffffc7ffU 
                                                 & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                            }
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = ((0xffffc7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]) 
                               | (((0x200U & vlSelfRef.LD_uop
                                    [4U][1U]) ? ((0x100U 
                                                  & vlSelfRef.LD_uop
                                                  [4U][1U])
                                                  ? 0U
                                                  : 2U)
                                    : ((0x100U & vlSelfRef.LD_uop
                                        [4U][1U]) ? 5U
                                        : 4U)) << 0xbU));
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x400U | (0xfffff9ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
            = (0xfffffffbU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
            = (0x1000U | (0xffffe7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
        if ((0x2000U & vlSelfRef.LD_uop[4U][1U])) {
            if ((0x1000U & vlSelfRef.LD_uop[4U][1U])) {
                if ((0x800U & vlSelfRef.LD_uop[4U][1U])) {
                    if ((0x37U != (0x3fU & (vlSelfRef.LD_uop
                                            [4U][1U] 
                                            >> 8U)))) {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                            = (4U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
                    }
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x200U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x1000U | (0xffffc7ffU & 
                                      vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                } else if ((0x400U & vlSelfRef.LD_uop
                            [4U][1U])) {
                    if ((0x200U & vlSelfRef.LD_uop[4U][1U])) {
                        if ((0x100U & vlSelfRef.LD_uop
                             [4U][1U])) {
                            if ((0x37U != (0x3fU & 
                                           (vlSelfRef.LD_uop
                                            [4U][1U] 
                                            >> 8U)))) {
                                vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                    = (4U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]);
                            }
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x200U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x1000U | (0xffffc7ffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                             >> 0xcU)))) {
            if ((0x800U & vlSelfRef.LD_uop[4U][1U])) {
                if ((0x400U & vlSelfRef.LD_uop[4U][1U])) {
                    if ((1U & (~ (vlSelfRef.LD_uop[4U][1U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.LD_uop
                                      [4U][1U] >> 8U)))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0xfffc3fffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        }
                    }
                } else if ((0x200U & vlSelfRef.LD_uop
                            [4U][1U])) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0xfffc3fffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                } else if ((0x100U & vlSelfRef.LD_uop
                            [4U][1U])) {
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                } else {
                    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                        = (0x800U | (0xffffe7ffU & 
                                     vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    if ((2U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr)) {
                        if ((2U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr)) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x30000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0xc000U | (0xfffc3fffU 
                                          & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    }
                }
            } else if ((0x400U & vlSelfRef.LD_uop[4U][1U])) {
                if ((0x200U & vlSelfRef.LD_uop[4U][1U])) {
                    if ((0x100U & vlSelfRef.LD_uop[4U][1U])) {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0xffffe7ffU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        if ((0U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x4000U | (0xfffc3fffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((1U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x8000U | (0xfffc3fffU 
                                              & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((2U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x10000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        } else if ((3U == (3U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr))) {
                            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                                = (0x20000U | (0xfffc3fffU 
                                               & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                        }
                    } else {
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x100U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x3c000U | vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]);
                        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                            = (0x40U | (0xffffff80U 
                                        & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U]));
                    }
                }
            }
        }
    }
    vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
        = ((0U == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                            >> 8U))) ? vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev
            : ((vlSelfRef.LD_uop[0U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [0U][4U] 
                                                   >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
        = ((0U == (0x3fU & (vlSelfRef.LD_uop[1U][1U] 
                            >> 8U))) ? vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev
            : ((vlSelfRef.LD_uop[1U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [1U][4U] 
                                                   >> 0x17U)));
    vlSelfRef.intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
        = ((0U == (0x3fU & (vlSelfRef.LD_uop[2U][1U] 
                            >> 8U))) ? vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev
            : ((vlSelfRef.LD_uop[2U][5U] << 9U) | (
                                                   vlSelfRef.LD_uop
                                                   [2U][4U] 
                                                   >> 0x17U)));
    cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3 = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                          & (IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.cacheLineManager.prefetchExec.ohEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3 
        = (1U & ((IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3) 
                 | (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                           >> 1U) & (IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.cacheLineManager.prefetchExec.ohEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3 
        = (1U & ((IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3) 
                 | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                    >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                           >> 2U) & (IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.cacheLineManager.prefetchExec.ohEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3 
        = (1U & ((IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3) 
                 | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                    >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                           >> 3U) & (IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.cacheLineManager.prefetchExec.ohEnc.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3 
        = ((IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3) 
           | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
              >> 3U));
    vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2 
        = (2U & (IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2));
    vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2 
        = ((2U & (IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2)) 
           | (1U & ((IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2) 
                    | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                       >> 1U))));
    vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2 
        = ((2U & (IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2)) 
           | (1U & ((IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2) 
                    | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                       >> 3U))));
    vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2 
        = (1U & (IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2));
    vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2 
        = ((1U & (IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2)) 
                    | (0x7ffffffeU & ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                                      >> 1U)))));
    vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2 
        = ((1U & (IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2)) 
           | ((IData)((((IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2) 
                        >> 1U) | ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c) 
                                  >> 3U))) << 1U));
    vlSelfRef.__PVT__lsu__DOT__stAssocHit_c = (((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3));
    vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c[0U] = (
                                                   (6U 
                                                    & vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                    [0U]) 
                                                   | (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3));
    vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c[0U] = (
                                                   (1U 
                                                    & vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                    [0U]) 
                                                   | ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2) 
                                                      << 1U));
    vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c[1U] = (
                                                   (6U 
                                                    & vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                    [1U]) 
                                                   | (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3));
    vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c[1U] = (
                                                   (1U 
                                                    & vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                    [1U]) 
                                                   | ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2) 
                                                      << 1U));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfff0U & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xfU & ((7U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
                      + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 3U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xff0fU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf0U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 6U)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 9U))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xf0ffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf00U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                >> 0xcU)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                   >> 0xfU))) 
                        << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf000U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                 >> 0x12U)) + (7U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 0x15U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfff0U & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xfU & ((7U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums) 
                      + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 3U)))));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xff0fU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf0U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                               >> 6U)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 9U))) 
                       << 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xf0ffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf00U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                >> 0xcU)) + (7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                   >> 0xfU))) 
                        << 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums 
        = ((0xfffU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
           | (0xf000U & (((7U & (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                 >> 0x12U)) + (7U & 
                                               (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums 
                                                >> 0x15U))) 
                         << 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
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
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] = 0U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if (((vlSelfRef.LD_uop[0U][0U] & (1U == (0xfU 
                                                 & (vlSelfRef.LD_uop
                                                    [0U][0U] 
                                                    >> 2U)))) 
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
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xf000007fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0xffffff80U & ((0xfe00000U & 
                                      ((vlSelfRef.LD_uop
                                        [0U][1U] << 0x1bU) 
                                       | (0x7e00000U 
                                          & (vlSelfRef.LD_uop
                                             [0U][0U] 
                                             >> 5U)))) 
                                     | (0x1fff80U & 
                                        (vlSelfRef.LD_uop
                                         [0U][0U] << 1U)))));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xffffff80U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0x3eU & (vlSelfRef.LD_uop[0U][0U] 
                               >> 0x14U)));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                = (0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                = ((0x380U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                   | (0xeU & (vlSelfRef.LD_uop[0U][2U] 
                              >> 0x13U)));
            if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch) {
                if ((((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) 
                      != (1U & (vlSelfRef.LD_uop[0U][0U] 
                                >> 0x14U))) & (1U != 
                                               (0x3fU 
                                                & (vlSelfRef.LD_uop
                                                   [0U][1U] 
                                                   >> 8U))))) {
                    if (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
                                  << 0xcU));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
                                  >> 0x14U));
                    }
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [0U][2U] 
                                                     >> 0x17U)))) 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [0U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [0U][2U] 
                                                     >> 0x17U)))) 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                          ? 1U : 2U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0x8fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? 4U : 3U) << 0x1cU));
                }
            } else if ((((8U == (0x3fU & (vlSelfRef.LD_uop
                                          [0U][1U] 
                                          >> 8U))) 
                         | (9U == (0x3fU & (vlSelfRef.LD_uop
                                            [0U][1U] 
                                            >> 8U)))) 
                        | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                             [0U][1U] 
                                             >> 8U))))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect)) 
                           | (~ (vlSelfRef.LD_uop[0U][0U] 
                                 >> 0x14U))))) {
                    if (((9U == (0x3fU & (vlSelfRef.LD_uop
                                          [0U][1U] 
                                          >> 8U))) 
                         | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                              [0U][1U] 
                                              >> 8U))))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & ((vlSelfRef.LD_uop
                                                  [0U][3U] 
                                                  << 0x15U) 
                                                 | (0x1ff000U 
                                                    & (vlSelfRef.LD_uop
                                                       [0U][2U] 
                                                       >> 0xbU)))));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[2U] 
                            = (0xfffU & (vlSelfRef.LD_uop
                                         [0U][3U] >> 0xbU));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (0xe00U & (vlSelfRef.LD_uop
                                            [0U][2U] 
                                            >> 8U)));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xffffff87U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (0xfffffff8U & ((0x70U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      ((vlSelfRef.LD_uop
                                                        [0U][2U] 
                                                        << 0x12U) 
                                                       | (vlSelfRef.LD_uop
                                                          [0U][2U] 
                                                          >> 0xeU))) 
                                                     << 4U)) 
                                                 | (((7U 
                                                      & (vlSelfRef.LD_uop
                                                         [0U][2U] 
                                                         >> 0x18U)) 
                                                     > 
                                                     (7U 
                                                      & (vlSelfRef.LD_uop
                                                         [0U][2U] 
                                                         >> 0xeU))) 
                                                    << 3U))));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                                  << 0xcU));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                                  >> 0x14U));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffffe7fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (((9U == (0x3fU & 
                                           (vlSelfRef.LD_uop
                                            [0U][1U] 
                                            >> 8U)))
                                    ? 1U : 0U) << 7U));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = (1U | ((0xfffffff8U & 
                                      vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                                     | (4U & (vlSelfRef.LD_uop
                                              [0U][0U] 
                                              << 1U))));
                    }
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((8U == (0x3fU 
                                                 & (vlSelfRef.LD_uop
                                                    [0U][1U] 
                                                    >> 8U)))
                                          ? 3U : 4U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    if ((8U == (0x3fU & (vlSelfRef.LD_uop
                                         [0U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x7fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (1U | (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]));
                    }
                    if ((9U == (0x3fU & (vlSelfRef.LD_uop
                                         [0U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]));
                        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]);
                    }
                }
            }
        }
        if (((vlSelfRef.LD_uop[1U][0U] & (1U == (0xfU 
                                                 & (vlSelfRef.LD_uop
                                                    [1U][0U] 
                                                    >> 2U)))) 
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
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xf000007fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0xffffff80U & ((0xfe00000U & 
                                      ((vlSelfRef.LD_uop
                                        [1U][1U] << 0x1bU) 
                                       | (0x7e00000U 
                                          & (vlSelfRef.LD_uop
                                             [1U][0U] 
                                             >> 5U)))) 
                                     | (0x1fff80U & 
                                        (vlSelfRef.LD_uop
                                         [1U][0U] << 1U)))));
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                = ((0xffffff80U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                   | (0x3eU & (vlSelfRef.LD_uop[1U][0U] 
                               >> 0x14U)));
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                = (0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
            vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                = ((0x380U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                   | (0xeU & (vlSelfRef.LD_uop[1U][2U] 
                              >> 0x13U)));
            if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch) {
                if ((((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) 
                      != (1U & (vlSelfRef.LD_uop[1U][0U] 
                                >> 0x14U))) & (1U != 
                                               (0x3fU 
                                                & (vlSelfRef.LD_uop
                                                   [1U][1U] 
                                                   >> 8U))))) {
                    if (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
                                  << 0xcU));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 
                                  >> 0x14U));
                    }
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [1U][2U] 
                                                     >> 0x17U)))) 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0
                                : ((IData)(2U) + ((
                                                   vlSelfRef.LD_uop
                                                   [1U][3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.LD_uop
                                                     [1U][2U] 
                                                     >> 0x17U)))) 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                          ? 1U : 2U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0x8fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken)
                                ? 4U : 3U) << 0x1cU));
                }
            } else if ((((8U == (0x3fU & (vlSelfRef.LD_uop
                                          [1U][1U] 
                                          >> 8U))) 
                         | (9U == (0x3fU & (vlSelfRef.LD_uop
                                            [1U][1U] 
                                            >> 8U)))) 
                        | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                             [1U][1U] 
                                             >> 8U))))) {
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect)) 
                           | (~ (vlSelfRef.LD_uop[1U][0U] 
                                 >> 0x14U))))) {
                    if (((9U == (0x3fU & (vlSelfRef.LD_uop
                                          [1U][1U] 
                                          >> 8U))) 
                         | (0xaU == (0x3fU & (vlSelfRef.LD_uop
                                              [1U][1U] 
                                              >> 8U))))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & ((vlSelfRef.LD_uop
                                                  [1U][3U] 
                                                  << 0x15U) 
                                                 | (0x1ff000U 
                                                    & (vlSelfRef.LD_uop
                                                       [1U][2U] 
                                                       >> 0xbU)))));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[2U] 
                            = (0xfffU & (vlSelfRef.LD_uop
                                         [1U][3U] >> 0xbU));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffff1ffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (0xe00U & (vlSelfRef.LD_uop
                                            [1U][2U] 
                                            >> 8U)));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xffffff87U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (0xfffffff8U & ((0x70U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      ((vlSelfRef.LD_uop
                                                        [1U][2U] 
                                                        << 0x12U) 
                                                       | (vlSelfRef.LD_uop
                                                          [1U][2U] 
                                                          >> 0xeU))) 
                                                     << 4U)) 
                                                 | (((7U 
                                                      & (vlSelfRef.LD_uop
                                                         [1U][2U] 
                                                         >> 0x18U)) 
                                                     > 
                                                     (7U 
                                                      & (vlSelfRef.LD_uop
                                                         [1U][2U] 
                                                         >> 0xeU))) 
                                                    << 3U))));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                                  << 0xcU));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[1U]) 
                               | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                                  >> 0x14U));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = ((0xfffffe7fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                               | (((9U == (0x3fU & 
                                           (vlSelfRef.LD_uop
                                            [1U][1U] 
                                            >> 8U)))
                                    ? 1U : 0U) << 7U));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U] 
                            = (1U | ((0xfffffff8U & 
                                      vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c[0U]) 
                                     | (4U & (vlSelfRef.LD_uop
                                              [1U][0U] 
                                              << 1U))));
                    }
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = ((0xfffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              << 0x1cU));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                        = ((0xf0000000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]) 
                           | (vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst 
                              >> 4U));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                        = ((0x7fU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]) 
                           | (0x3ffU & (((8U == (0x3fU 
                                                 & (vlSelfRef.LD_uop
                                                    [1U][1U] 
                                                    >> 8U)))
                                          ? 3U : 4U) 
                                        << 7U)));
                    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
                        = (1U | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]);
                    if ((8U == (0x3fU & (vlSelfRef.LD_uop
                                         [1U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x7fffffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]);
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (1U | (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]));
                    }
                    if ((9U == (0x3fU & (vlSelfRef.LD_uop
                                         [1U][1U] >> 8U)))) {
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U]));
                        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U] 
                            = (0x3feU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U]);
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
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_dequeue = 0U;
    if ((1U & (~ (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                  & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free)))))) {
        if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U])) {
            vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_dequeue = 1U;
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
        = (0xffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c);
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U]);
    if ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
         & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
            = ((0xfffc0U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c) 
               | ((((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__isIllegalInstr_c)
                     ? 6U : 0U) << 2U) | ((2U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                                 >> 1U)) 
                                          | (1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U]))));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
            = ((0x3fU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c) 
               | (0xfffc0U & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U] 
                               << 0xdU) | (0x1fc0U 
                                           & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                              >> 0x13U)))));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c[2U];
    } else if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U])) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
            = ((0xfffc0U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c) 
               | ((2U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
                         >> 1U)) | (1U & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U])));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c 
            = ((0x3fU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c) 
               | (0xfffc0U & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U] 
                               << 0xdU) | (0x1fc0U 
                                           & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
                                              >> 0x13U)))));
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U];
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_dequeue = 0U;
    if ((1U & (~ (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                  & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free)))))) {
        if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U])) {
            vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_dequeue = 1U;
        }
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
        = (0xffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c);
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] = 0U;
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
        = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U]);
    if ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
         & (0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free)))) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
            = ((0xfffc0U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c) 
               | ((((IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__isIllegalInstr_c)
                     ? 6U : 0U) << 2U) | ((2U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                                 >> 1U)) 
                                          | (1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U]))));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
            = ((0x3fU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c) 
               | (0xfffc0U & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U] 
                               << 0xdU) | (0x1fc0U 
                                           & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U] 
                                              >> 0x13U)))));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c[2U];
    } else if ((1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U])) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
            = ((0xfffc0U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c) 
               | ((2U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
                         >> 1U)) | (1U & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U])));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c 
            = ((0x3fU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c) 
               | (0xfffc0U & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U] 
                               << 0xdU) | (0x1fc0U 
                                           & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
                                              >> 0x13U)))));
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
            = vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U];
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 1U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 5U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 7U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[8U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[9U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xaU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xbU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xbU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xcU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xdU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xdU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xeU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xfU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x10U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x11U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x11U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x12U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x13U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x13U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x14U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x15U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x15U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x16U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x17U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x18U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x19U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x19U)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1bU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1dU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1eU)));
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1fU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0U] 
        = (1U & (~ vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[1U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[1U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 1U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[2U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[2U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 2U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[3U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[3U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 3U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[4U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[4U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 4U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[5U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[5U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 5U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[6U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[6U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 6U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[7U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[7U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 7U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[8U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[8U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 8U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[9U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[9U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 9U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xaU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xaU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xaU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xbU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xbU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xbU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xcU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xcU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xcU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xdU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xdU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xdU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xeU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xeU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xeU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xfU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0xfU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0xfU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x10U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x10U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x10U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x11U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x11U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x11U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x12U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x12U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x12U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x13U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x13U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x13U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x14U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x14U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x14U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x15U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x15U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x15U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x16U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x16U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x16U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x17U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x17U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x17U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x18U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x18U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x18U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x19U] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x19U] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x19U)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1aU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1aU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1bU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1bU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1cU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1cU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1dU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1dU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1eU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1eU)));
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] = 1U;
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[0x1fU] 
        = (1U & (~ (vlSelfRef.intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data 
                    >> 0x1fU)));
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
    __PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHit_c 
        = (((IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2) 
            << 1U) | (IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3));
    vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled = 0U;
    vlSelfRef.__PVT__LSU_setDirty = 0U;
    vlSelfRef.__PVT__lsu__DOT__storeWriteToCache = 0U;
    vlSelfRef.__PVT__lsu__DOT__storeWriteAssoc = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[0U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[0U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] = (0xfffffffeU 
                                               & vlSelfRef.__PVT__lsu__DOT__miss
                                               [0U][0U]);
    vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[1U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[1U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] = (0xfffffffeU 
                                               & vlSelfRef.__PVT__lsu__DOT__miss
                                               [1U][0U]);
    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[2U][2U] = 0U;
    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] = (0xfffffffeU 
                                               & vlSelfRef.__PVT__lsu__DOT__miss
                                               [2U][0U]);
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[0U][1U][0U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[0U][1U][1U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[0U][1U][2U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[0U][1U][3U];
    if ((1U & (~ __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U]))) {
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[0U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[1U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[2U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[3U];
    }
    vlSelfRef.__PVT__lsu__DOT__curLd[0U][0U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U];
    vlSelfRef.__PVT__lsu__DOT__curLd[0U][1U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U];
    vlSelfRef.__PVT__lsu__DOT__curLd[0U][2U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U];
    vlSelfRef.__PVT__lsu__DOT__curLd[0U][3U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U];
    if ((1U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U])) {
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO 
            = (1U & (~ vlSelfRef.__PVT__lsu__DOT__ldOps
                     [0U][1U][0U]));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO 
            = (IData)((3U == (3U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U])));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO 
            = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) 
               | (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict 
            = (1U & (~ ((0x55U >= (0x7fU & ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [0U][2U] 
                                                >> 0x14U))))) 
                        && (1U & (vlSelfRef.__PVT__CLM_ctResult
                                  [0U][(3U & (((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [0U][2U] 
                                                     >> 0x14U))) 
                                              >> 5U))] 
                                  >> (0x1fU & ((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [0U][2U] 
                                                     >> 0x14U)))))))));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 1U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 0U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData = 0U;
        if ((0x10U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U])) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
                    << 0x1bU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                 >> 5U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = vlSelfRef.__PVT__lsu__DOT__BLSU_ldResult;
            vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled = 1U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = vlSymsp->TOP__Top__soc__IF_mmio.__PVT__rdata;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else {
            if ((1U & vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                 [0U])) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 1U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                          [0U] 
                                                          >> 1U)), 5U)))
                         ? 0U : (vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[
                                 (((IData)(0x1fU) + 
                                   (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                              [0U] 
                                                              >> 1U)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (3U 
                                                                  & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                     [0U] 
                                                                     >> 1U)), 5U))))) 
                       | (vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[
                          (3U & (VL_SHIFTL_III(7,32,32, 
                                               (3U 
                                                & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                   [0U] 
                                                   >> 1U)), 5U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (3U 
                                                               & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                  [0U] 
                                                                  >> 1U)), 5U))));
            }
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru 
                = (1U & (([&]() {
                            vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                    << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                                 >> 4U));
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[1U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[3U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[6U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[8U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xbU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xcU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xdU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xeU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xfU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0x10U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0x11U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U] 
                                = vlSelfRef.__PVT__LSU_MC_if[0U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[1U] 
                                = vlSelfRef.__PVT__LSU_MC_if[1U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[2U] 
                                = vlSelfRef.__PVT__LSU_MC_if[2U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[3U] 
                                = vlSelfRef.__PVT__LSU_MC_if[3U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[4U] 
                                = vlSelfRef.__PVT__LSU_MC_if[4U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[5U] 
                                = vlSelfRef.__PVT__LSU_MC_if[5U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[6U] 
                                = vlSelfRef.__PVT__LSU_MC_if[6U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[7U] 
                                = vlSelfRef.__PVT__LSU_MC_if[7U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__rv = 0U;
                            if ((((vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[1U] 
                                   >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U])) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                                      >> 0x18U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                             >> 1U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                                     >> 0x14U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x40000U 
                                          == (0x140000U 
                                              & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                                      >> 0xcU))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U] 
                                             >> 0x15U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                                     >> 8U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x40U == 
                                          (0x140U & 
                                           vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U]))) 
                                 & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[8U]) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                             >> 9U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                                  >> 0x1cU)))) 
                                          << 1U));
                            }
                            if (((IData)((0x4000000U 
                                          == (0x14000000U 
                                              & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xbU] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                                      >> 0x14U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            ((vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                              << 3U) 
                                             | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U] 
                                                >> 0x1dU))) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                                     >> 0x10U))))) 
                                          << 1U));
                            }
                            if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U])) 
                                   | (3U == (0xfU & 
                                             vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U]))) 
                                  & ((0x3ffffffU & 
                                      ((vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[2U] 
                                        << 0x15U) | 
                                       (vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[1U] 
                                        >> 0xbU))) 
                                     == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                         >> 6U))) & 
                                 (~ (vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U] 
                                     >> 4U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv = 1U;
                            }
                            vlSelfRef.__Vfunc_CheckTransfers__7__Vfuncout 
                                = vlSelfRef.__Vfunc_CheckTransfers__7__rv;
                        }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__Vfuncout)) 
                         >> 1U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists 
                = (1U & ([&]() {
                        vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                            = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                             >> 4U));
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[1U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[3U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[6U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[8U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xbU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xcU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xdU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xeU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xfU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0x10U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0x11U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U] 
                            = vlSelfRef.__PVT__LSU_MC_if[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[1U] 
                            = vlSelfRef.__PVT__LSU_MC_if[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[2U] 
                            = vlSelfRef.__PVT__LSU_MC_if[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[3U] 
                            = vlSelfRef.__PVT__LSU_MC_if[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[4U] 
                            = vlSelfRef.__PVT__LSU_MC_if[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[5U] 
                            = vlSelfRef.__PVT__LSU_MC_if[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[6U] 
                            = vlSelfRef.__PVT__LSU_MC_if[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[7U] 
                            = vlSelfRef.__PVT__LSU_MC_if[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__rv = 0U;
                        if ((((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[1U] 
                               >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U])) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                  >> 0x18U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                 >> 1U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                       >> 0x14U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40000U == (0x140000U 
                                                   & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[6U] 
                                                << 0x14U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                                                  >> 0xcU))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U] 
                                                 >> 0x15U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                                                       >> 8U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40U == (0x140U 
                                                & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U]))) 
                             & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[8U]) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                                                 >> 9U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                                                    >> 0x1cU)))) 
                                      << 1U));
                        }
                        if (((IData)((0x4000000U == 
                                      (0x14000000U 
                                       & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xbU] 
                                                << 0xcU) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                  >> 0x14U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                  << 3U) 
                                                 | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U] 
                                                    >> 0x1dU))) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                       >> 0x10U))))) 
                                      << 1U));
                        }
                        if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U])) 
                               | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U]))) 
                              & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[2U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[1U] 
                                                   >> 0xbU))) 
                                 == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                     >> 6U))) & (~ 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U] 
                                                  >> 4U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv = 1U;
                        }
                        vlSelfRef.__Vfunc_CheckTransfers__8__Vfuncout 
                            = vlSelfRef.__Vfunc_CheckTransfers__8__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__Vfuncout)));
            if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit 
                    = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit) 
                       & (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru));
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
            }
            if (((~ ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) 
                     | (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO))) 
                 & (0xfU == (0xfU & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                             [0U] >> 2U)))))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 1U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
            }
        }
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (2U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                   >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffffffbU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (4U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U]));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffffc07U & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0x3f8U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                       >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffe03ffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0x1fc00U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                         >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xfffbffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0x40000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                         << 0xfU)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0xffe7ffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0x180000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                          << 0x12U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
            = ((0x1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][0U]) | (0xffe00000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                            << 0x11U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
            = ((0xffe00000U & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [0U][1U]) | (0x1fffffU & ((0x1e0000U 
                                           & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                              << 0x11U)) 
                                          | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                             >> 0xfU))));
        vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
            = ((((0x55U >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [0U][2U] 
                                                >> 0x14U))))))
                  ? (0xfffffU & (((0U == (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x15U) 
                                                       * 
                                                       (3U 
                                                        & (vlSelfRef.__PVT__CLM_ctResult
                                                           [0U][2U] 
                                                           >> 0x14U)))))))
                                   ? 0U : (vlSelfRef.__PVT__CLM_ctResult
                                           [0U][(((IData)(0x14U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x15U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__CLM_ctResult
                                                          [0U][2U] 
                                                          >> 0x14U))))) 
                                                 >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.__PVT__CLM_ctResult
                                                             [0U][2U] 
                                                             >> 0x14U))))))))) 
                                 | (vlSelfRef.__PVT__CLM_ctResult
                                    [0U][(((IData)(1U) 
                                           + (0x7fU 
                                              & ((IData)(0x15U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [0U][2U] 
                                                     >> 0x14U))))) 
                                          >> 5U)] >> 
                                    (0x1fU & ((IData)(1U) 
                                              + (0x7fU 
                                                 & ((IData)(0x15U) 
                                                    * 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__CLM_ctResult
                                                        [0U][2U] 
                                                        >> 0x14U)))))))))
                  : 0U) << 0xcU) | (0xfffU & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                              >> 4U)));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][1U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][1U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
                                                      << 7U));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][2U] = (vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
                                                   >> 0x19U);
        vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
            = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                             >> 4U));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][0U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
                                                      << 7U));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][1U] = (
                                                   (0xffffff80U 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][1U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
                                                      >> 0x19U));
        vlSelfRef.lsu__DOT____Vlvbound_h7c9bfc74__0 
            = (3U & (vlSelfRef.__PVT__CLM_ctResult[0U][2U] 
                     >> 0x14U));
        vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] = (
                                                   (0xffffff9fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][0U]) 
                                                   | ((IData)(vlSelfRef.lsu__DOT____Vlvbound_h7c9bfc74__0) 
                                                      << 5U));
        if (((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO)) 
             & vlSelfRef.__PVT__lsu__DOT__loadWasExtIOBusy
             [0U])) {
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [0U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO)) 
                          & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                     [0U] >> 1U))))) {
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [0U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO)) 
                           & (~ (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                 >> 4U))) & (vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                                             [0U] >> 1U)))) {
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [0U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad) {
            vlSelfRef.lsu__DOT____Vlvbound_h45f08287__3 
                = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict)
                    ? 1U : 0U);
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = ((0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                    [0U][0U]) | ((IData)(vlSelfRef.lsu__DOT____Vlvbound_h45f08287__3) 
                                 << 1U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (0xfffdffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0xfe1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | (0x1e00000U & ((IData)(
                                                       (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                        [0U] 
                                                        >> 2U)) 
                                               << 0x15U)));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                          [0U] >> 6U)) 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] 
                = ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                            [0U] >> 6U)) >> 7U);
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO) {
            if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO) {
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                    = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [0U][0U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                    = (0x20000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [0U][0U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                    = (0x1e00000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [0U][1U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                    = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                        [0U][1U]) | (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                                     << 0x19U));
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] 
                    = (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                       >> 7U);
            }
        } else if ((1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit) 
                          | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                             >> 4U)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [0U] >> 2U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffffff00U & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xffU & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                           [0U] >> 6U))));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [0U] >> 3U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffff00ffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xff00U & ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                              [0U] 
                                              >> 0xeU)) 
                                     << 8U)));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [0U] >> 4U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xff00ffffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xff0000U & ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                                [0U] 
                                                >> 0x16U)) 
                                       << 0x10U)));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [0U] >> 5U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffffffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                   [0U] >> 0x1eU)) 
                          << 0x18U));
            }
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (0x20000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = (0x1e00000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][1U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] 
                = (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                   >> 7U);
        } else {
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (4U | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                         [0U][0U]));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][0U] 
                = (0xfffdffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [0U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0xfe1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | (0x1e00000U & ((IData)(
                                                       (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                        [0U] 
                                                        >> 2U)) 
                                               << 0x15U)));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [0U][1U]) | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                          [0U] >> 6U)) 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[0U][2U] 
                = ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                            [0U] >> 6U)) >> 7U);
        }
    }
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[1U][1U][0U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[1U][1U][1U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[1U][1U][2U];
    __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
        = vlSelfRef.__PVT__lsu__DOT__ldOps[1U][1U][3U];
    if ((1U & ((~ __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U]) 
               & (~ (IData)(vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled))))) {
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[0U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[1U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[2U];
        __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
            = vlSelfRef.__PVT__lsu__DOT__BLSU_uopLd[3U];
    }
    vlSelfRef.__PVT__lsu__DOT__curLd[1U][0U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U];
    vlSelfRef.__PVT__lsu__DOT__curLd[1U][1U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U];
    vlSelfRef.__PVT__lsu__DOT__curLd[1U][2U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U];
    vlSelfRef.__PVT__lsu__DOT__curLd[1U][3U] = __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U];
    if ((1U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U])) {
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO 
            = (1U & (~ vlSelfRef.__PVT__lsu__DOT__ldOps
                     [1U][1U][0U]));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO 
            = (IData)((3U == (3U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U])));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO 
            = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) 
               | (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict 
            = (1U & (~ ((0x55U >= (0x7fU & ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [1U][2U] 
                                                >> 0x14U))))) 
                        && (1U & (vlSelfRef.__PVT__CLM_ctResult
                                  [1U][(3U & (((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [1U][2U] 
                                                     >> 0x14U))) 
                                              >> 5U))] 
                                  >> (0x1fU & ((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [1U][2U] 
                                                     >> 0x14U)))))))));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 1U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 0U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData = 0U;
        if ((0x10U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U])) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[3U] 
                    << 0x1bU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                 >> 5U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = vlSelfRef.__PVT__lsu__DOT__BLSU_ldResult;
            vlSelfRef.__PVT__lsu__DOT__blsuLoadHandled = 1U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                = vlSymsp->TOP__Top__soc__IF_mmio.__PVT__rdata;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
        } else {
            if ((1U & vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                 [1U])) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 1U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = (((0U == (0x1fU & ((IData)(0x80U) 
                                         + (0x7fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                              [1U] 
                                                              >> 1U)), 5U)))))
                         ? 0U : (vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[
                                 (((IData)(0x1fU) + 
                                   (0xffU & ((IData)(0x80U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, 
                                                                (3U 
                                                                 & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                    [1U] 
                                                                    >> 1U)), 5U))))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x80U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                         [1U] 
                                                                         >> 1U)), 5U))))))) 
                       | (vlSymsp->TOP__Top__soc__IF_cache.__PVT__rdata[
                          (7U & (((IData)(0x80U) + 
                                  (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                         (3U 
                                                          & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                             [1U] 
                                                             >> 1U)), 5U))) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x80U) 
                                                 + 
                                                 (0x7fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (3U 
                                                                   & (vlSelfRef.__PVT__lsu__DOT__ldAssocHit_c
                                                                      [1U] 
                                                                      >> 1U)), 5U))))));
            }
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru 
                = (1U & (([&]() {
                            vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                    << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                                 >> 4U));
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[1U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[3U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[6U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[8U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xbU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xcU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xdU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xeU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xfU] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0x10U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0x11U] 
                                = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U] 
                                = vlSelfRef.__PVT__LSU_MC_if[0U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[1U] 
                                = vlSelfRef.__PVT__LSU_MC_if[1U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[2U] 
                                = vlSelfRef.__PVT__LSU_MC_if[2U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[3U] 
                                = vlSelfRef.__PVT__LSU_MC_if[3U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[4U] 
                                = vlSelfRef.__PVT__LSU_MC_if[4U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[5U] 
                                = vlSelfRef.__PVT__LSU_MC_if[5U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[6U] 
                                = vlSelfRef.__PVT__LSU_MC_if[6U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[7U] 
                                = vlSelfRef.__PVT__LSU_MC_if[7U];
                            vlSelfRef.__Vfunc_CheckTransfers__7__rv = 0U;
                            if ((((vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[1U] 
                                   >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U])) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                                      >> 0x18U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                             >> 1U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[2U] 
                                                     >> 0x14U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x40000U 
                                          == (0x140000U 
                                              & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                                      >> 0xcU))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[4U] 
                                             >> 0x15U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[5U] 
                                                     >> 8U))))) 
                                          << 1U));
                            }
                            if (((IData)((0x40U == 
                                          (0x140U & 
                                           vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U]))) 
                                 & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[8U]) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                             >> 9U)) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[7U] 
                                                  >> 0x1cU)))) 
                                          << 1U));
                            }
                            if (((IData)((0x4000000U 
                                          == (0x14000000U 
                                              & vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U]))) 
                                 & ((0x3ffffffU & (
                                                   (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xbU] 
                                                    << 0xcU) 
                                                   | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                                      >> 0x14U))) 
                                    == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                        >> 6U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv));
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv 
                                    = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__rv)) 
                                       | (((0x1fU & 
                                            ((vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                              << 3U) 
                                             | (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[9U] 
                                                >> 0x1dU))) 
                                           > (0x1fU 
                                              & ((0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                                     >> 2U)) 
                                                 - 
                                                 (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__7__memcRes[0xaU] 
                                                     >> 0x10U))))) 
                                          << 1U));
                            }
                            if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U])) 
                                   | (3U == (0xfU & 
                                             vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U]))) 
                                  & ((0x3ffffffU & 
                                      ((vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[2U] 
                                        << 0x15U) | 
                                       (vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[1U] 
                                        >> 0xbU))) 
                                     == (vlSelfRef.__Vfunc_CheckTransfers__7__addr 
                                         >> 6U))) & 
                                 (~ (vlSelfRef.__Vfunc_CheckTransfers__7__memcReq[0U] 
                                     >> 4U)))) {
                                vlSelfRef.__Vfunc_CheckTransfers__7__rv = 1U;
                            }
                            vlSelfRef.__Vfunc_CheckTransfers__7__Vfuncout 
                                = vlSelfRef.__Vfunc_CheckTransfers__7__rv;
                        }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__7__Vfuncout)) 
                         >> 1U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists 
                = (1U & ([&]() {
                        vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                            = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                             >> 4U));
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[1U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[3U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[6U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[8U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xbU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xcU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xdU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xeU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xfU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0x10U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0x11U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U] 
                            = vlSelfRef.__PVT__LSU_MC_if[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[1U] 
                            = vlSelfRef.__PVT__LSU_MC_if[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[2U] 
                            = vlSelfRef.__PVT__LSU_MC_if[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[3U] 
                            = vlSelfRef.__PVT__LSU_MC_if[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[4U] 
                            = vlSelfRef.__PVT__LSU_MC_if[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[5U] 
                            = vlSelfRef.__PVT__LSU_MC_if[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[6U] 
                            = vlSelfRef.__PVT__LSU_MC_if[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[7U] 
                            = vlSelfRef.__PVT__LSU_MC_if[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__8__rv = 0U;
                        if ((((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[1U] 
                               >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U])) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                  >> 0x18U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                 >> 1U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[2U] 
                                                       >> 0x14U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40000U == (0x140000U 
                                                   & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[6U] 
                                                << 0x14U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                                                  >> 0xcU))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[4U] 
                                                 >> 0x15U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[5U] 
                                                       >> 8U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40U == (0x140U 
                                                & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U]))) 
                             & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[8U]) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                                                 >> 9U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[7U] 
                                                    >> 0x1cU)))) 
                                      << 1U));
                        }
                        if (((IData)((0x4000000U == 
                                      (0x14000000U 
                                       & vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xbU] 
                                                << 0xcU) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                  >> 0x14U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__rv)) 
                                   | (((0x1fU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                  << 3U) 
                                                 | (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[9U] 
                                                    >> 0x1dU))) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__8__memcRes[0xaU] 
                                                       >> 0x10U))))) 
                                      << 1U));
                        }
                        if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U])) 
                               | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U]))) 
                              & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[2U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[1U] 
                                                   >> 0xbU))) 
                                 == (vlSelfRef.__Vfunc_CheckTransfers__8__addr 
                                     >> 6U))) & (~ 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__8__memcReq[0U] 
                                                  >> 4U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__8__rv = 1U;
                        }
                        vlSelfRef.__Vfunc_CheckTransfers__8__Vfuncout 
                            = vlSelfRef.__Vfunc_CheckTransfers__8__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__8__Vfuncout)));
            if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit 
                    = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit) 
                       & (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru));
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
            }
            if (((~ ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO) 
                     | (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO))) 
                 & (0xfU == (0xfU & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                             [1U] >> 2U)))))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = 1U;
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = 0U;
            }
        }
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffffffdU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (2U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                   >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffffffbU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (4U & __PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U]));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffffc07U & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0x3f8U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                       >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffe03ffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0x1fc00U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[0U] 
                                         >> 2U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xfffbffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0x40000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                         << 0xfU)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0xffe7ffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0x180000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                          << 0x12U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
            = ((0x1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][0U]) | (0xffe00000U & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                            << 0x11U)));
        vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
            = ((0xffe00000U & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                [1U][1U]) | (0x1fffffU & ((0x1e0000U 
                                           & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                              << 0x11U)) 
                                          | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                             >> 0xfU))));
        vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
            = ((((0x55U >= ((IData)(1U) + (0x7fU & 
                                           ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [1U][2U] 
                                                >> 0x14U))))))
                  ? (0xfffffU & (((0U == (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x15U) 
                                                       * 
                                                       (3U 
                                                        & (vlSelfRef.__PVT__CLM_ctResult
                                                           [1U][2U] 
                                                           >> 0x14U)))))))
                                   ? 0U : (vlSelfRef.__PVT__CLM_ctResult
                                           [1U][(((IData)(0x14U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x15U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__CLM_ctResult
                                                          [1U][2U] 
                                                          >> 0x14U))))) 
                                                 >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.__PVT__CLM_ctResult
                                                             [1U][2U] 
                                                             >> 0x14U))))))))) 
                                 | (vlSelfRef.__PVT__CLM_ctResult
                                    [1U][(((IData)(1U) 
                                           + (0x7fU 
                                              & ((IData)(0x15U) 
                                                 * 
                                                 (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [1U][2U] 
                                                     >> 0x14U))))) 
                                          >> 5U)] >> 
                                    (0x1fU & ((IData)(1U) 
                                              + (0x7fU 
                                                 & ((IData)(0x15U) 
                                                    * 
                                                    (3U 
                                                     & (vlSelfRef.__PVT__CLM_ctResult
                                                        [1U][2U] 
                                                        >> 0x14U)))))))))
                  : 0U) << 0xcU) | (0xfffU & (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                                              >> 4U)));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][1U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [1U][1U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
                                                      << 7U));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][2U] = (vlSelfRef.lsu__DOT____Vlvbound_hab0dc2f1__0 
                                                   >> 0x19U);
        vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
            = ((__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                << 0x1cU) | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[1U] 
                             >> 4U));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [1U][0U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
                                                      << 7U));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][1U] = (
                                                   (0xffffff80U 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [1U][1U]) 
                                                   | (vlSelfRef.lsu__DOT____Vlvbound_hab1f5717__0 
                                                      >> 0x19U));
        vlSelfRef.lsu__DOT____Vlvbound_h7c9bfc74__0 
            = (3U & (vlSelfRef.__PVT__CLM_ctResult[1U][2U] 
                     >> 0x14U));
        vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] = (
                                                   (0xffffff9fU 
                                                    & vlSelfRef.__PVT__lsu__DOT__miss
                                                    [1U][0U]) 
                                                   | ((IData)(vlSelfRef.lsu__DOT____Vlvbound_h7c9bfc74__0) 
                                                      << 5U));
        if (((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO)) 
             & vlSelfRef.__PVT__lsu__DOT__loadWasExtIOBusy
             [1U])) {
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [1U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO)) 
                          & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                     [1U] >> 1U))))) {
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [1U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
        } else if ((1U & (((~ (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO)) 
                           & (~ (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                                 >> 4U))) & (vlSelfRef.__PVT__lsu__DOT__loadCacheAccessFailed
                                             [1U] >> 1U)))) {
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (0xcU | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                           [1U][0U]));
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad) {
            vlSelfRef.lsu__DOT____Vlvbound_h45f08287__3 
                = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict)
                    ? 1U : 0U);
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = ((0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                    [1U][0U]) | ((IData)(vlSelfRef.lsu__DOT____Vlvbound_h45f08287__3) 
                                 << 1U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (0xfffdffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0xfe1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | (0x1e00000U & ((IData)(
                                                       (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                        [1U] 
                                                        >> 2U)) 
                                               << 0x15U)));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                          [1U] >> 6U)) 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] 
                = ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                            [1U] >> 6U)) >> 7U);
        } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO) {
            if (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO) {
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                    = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [1U][0U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                    = (0x20000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [1U][0U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                    = (0x1e00000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                       [1U][1U]);
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                    = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                        [1U][1U]) | (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                                     << 0x19U));
                vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] 
                    = (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                       >> 7U);
            }
        } else if ((1U & ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit) 
                          | (__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__ld[2U] 
                             >> 4U)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [1U] >> 2U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffffff00U & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xffU & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                           [1U] >> 6U))));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [1U] >> 3U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffff00ffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xff00U & ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                              [1U] 
                                              >> 0xeU)) 
                                     << 8U)));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [1U] >> 4U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xff00ffffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | (0xff0000U & ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                                [1U] 
                                                >> 0x16U)) 
                                       << 0x10U)));
            }
            if ((1U & (IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                               [1U] >> 5U)))) {
                vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                    = ((0xffffffU & vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData) 
                       | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                   [1U] >> 0x1eU)) 
                          << 0x18U));
            }
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (0x20000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = (0x1e00000U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][1U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] 
                = (vlSelfRef.__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData 
                   >> 7U);
        } else {
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (4U | (0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                         [1U][0U]));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
                = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][0U] 
                = (0xfffdffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                   [1U][0U]);
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0xfe1fffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | (0x1e00000U & ((IData)(
                                                       (vlSelfRef.__PVT__lsu__DOT__stFwd
                                                        [1U] 
                                                        >> 2U)) 
                                               << 0x15U)));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][1U] 
                = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__ldResUOp
                    [1U][1U]) | ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                                          [1U] >> 6U)) 
                                 << 0x19U));
            vlSelfRef.__PVT__lsu__DOT__ldResUOp[1U][2U] 
                = ((IData)((vlSelfRef.__PVT__lsu__DOT__stFwd
                            [1U] >> 6U)) >> 7U);
        }
    }
    __PVT__lsu__DOT__unnamedblk28__DOT__st[0U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][0U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[1U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][1U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[2U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][2U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[3U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][3U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[4U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][4U];
    __PVT__lsu__DOT__unnamedblk28__DOT__st[5U] = vlSelfRef.__PVT__lsu__DOT__stOps
        [1U][5U];
    if ((1U & __PVT__lsu__DOT__unnamedblk28__DOT__st[0U])) {
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit = 0U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit = 1U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = 1U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc = 0U;
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__noEvict 
            = (1U & (~ ((0x55U >= (0x7fU & ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.__PVT__CLM_ctResult
                                                [2U][2U] 
                                                >> 0x14U))))) 
                        && (1U & (vlSelfRef.__PVT__CLM_ctResult
                                  [2U][(3U & (((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [2U][2U] 
                                                     >> 0x14U))) 
                                              >> 5U))] 
                                  >> (0x1fU & ((IData)(0x15U) 
                                               * (3U 
                                                  & (vlSelfRef.__PVT__CLM_ctResult
                                                     [2U][2U] 
                                                     >> 0x14U)))))))));
        if ((1U & (IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHit_c))) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = 0U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit = 1U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc 
                = (3U & ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHit_c) 
                         >> 1U));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit = 1U;
        }
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__allowPassThru 
            = (1U & (([&]() {
                        vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                            = ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                << 8U) | (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                          >> 0x18U));
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[1U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[3U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[4U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[5U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[6U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[7U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[8U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[9U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xaU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xbU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xcU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xdU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xeU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xfU] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0x10U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0x11U] 
                            = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[0U] 
                            = vlSelfRef.__PVT__LSU_MC_if[0U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[1U] 
                            = vlSelfRef.__PVT__LSU_MC_if[1U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[2U] 
                            = vlSelfRef.__PVT__LSU_MC_if[2U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[3U] 
                            = vlSelfRef.__PVT__LSU_MC_if[3U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[4U] 
                            = vlSelfRef.__PVT__LSU_MC_if[4U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[5U] 
                            = vlSelfRef.__PVT__LSU_MC_if[5U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[6U] 
                            = vlSelfRef.__PVT__LSU_MC_if[6U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[7U] 
                            = vlSelfRef.__PVT__LSU_MC_if[7U];
                        vlSelfRef.__Vfunc_CheckTransfers__9__rv = 0U;
                        if ((((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[1U] 
                               >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U])) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[3U] 
                                                << 8U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U] 
                                                  >> 0x18U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U] 
                                                 >> 1U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[2U] 
                                                       >> 0x14U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40000U == (0x140000U 
                                                   & vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[4U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[6U] 
                                                << 0x14U) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[5U] 
                                                  >> 0xcU))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[4U] 
                                                 >> 0x15U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[5U] 
                                                       >> 8U))))) 
                                      << 1U));
                        }
                        if (((IData)((0x40U == (0x140U 
                                                & vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[7U]))) 
                             & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[8U]) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv)) 
                                   | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[7U] 
                                                 >> 9U)) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[7U] 
                                                    >> 0x1cU)))) 
                                      << 1U));
                        }
                        if (((IData)((0x4000000U == 
                                      (0x14000000U 
                                       & vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[9U]))) 
                             & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xbU] 
                                                << 0xcU) 
                                               | (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xaU] 
                                                  >> 0x14U))) 
                                == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                    >> 6U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv));
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv 
                                = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__rv)) 
                                   | (((0x1fU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xaU] 
                                                  << 3U) 
                                                 | (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[9U] 
                                                    >> 0x1dU))) 
                                       > (0x1fU & (
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                                       >> 2U)) 
                                                   - 
                                                   (0xfU 
                                                    & (vlSelfRef.__Vfunc_CheckTransfers__9__memcRes[0xaU] 
                                                       >> 0x10U))))) 
                                      << 1U));
                        }
                        if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[0U])) 
                               | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[0U]))) 
                              & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[2U] 
                                                 << 0x15U) 
                                                | (vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[1U] 
                                                   >> 0xbU))) 
                                 == (vlSelfRef.__Vfunc_CheckTransfers__9__addr 
                                     >> 6U))) & (~ 
                                                 (vlSelfRef.__Vfunc_CheckTransfers__9__memcReq[0U] 
                                                  >> 4U)))) {
                            vlSelfRef.__Vfunc_CheckTransfers__9__rv = 1U;
                        }
                        vlSelfRef.__Vfunc_CheckTransfers__9__Vfuncout 
                            = vlSelfRef.__Vfunc_CheckTransfers__9__rv;
                    }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__9__Vfuncout)) 
                     >> 1U));
        vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__transferExists 
            = (1U & ([&]() {
                    vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                        = ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                            << 8U) | (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                      >> 0x18U));
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[1U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[1U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[2U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[3U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[3U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[4U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[4U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[5U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[5U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[6U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[6U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[7U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[7U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[8U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[8U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[9U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[9U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xaU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xaU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xbU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xbU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xcU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xcU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xdU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xdU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xeU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xeU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xfU] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0xfU];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0x10U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0x10U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0x11U] 
                        = vlSymsp->TOP__Top__soc.MemC_stat[0x11U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[0U] 
                        = vlSelfRef.__PVT__LSU_MC_if[0U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[1U] 
                        = vlSelfRef.__PVT__LSU_MC_if[1U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[2U] 
                        = vlSelfRef.__PVT__LSU_MC_if[2U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[3U] 
                        = vlSelfRef.__PVT__LSU_MC_if[3U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[4U] 
                        = vlSelfRef.__PVT__LSU_MC_if[4U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[5U] 
                        = vlSelfRef.__PVT__LSU_MC_if[5U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[6U] 
                        = vlSelfRef.__PVT__LSU_MC_if[6U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[7U] 
                        = vlSelfRef.__PVT__LSU_MC_if[7U];
                    vlSelfRef.__Vfunc_CheckTransfers__10__rv = 0U;
                    if ((((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[1U] 
                           >> 0x1eU) & (~ vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U])) 
                         & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[3U] 
                                            << 8U) 
                                           | (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U] 
                                              >> 0x18U))) 
                            == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                >> 6U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv));
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv)) 
                               | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U] 
                                             >> 1U)) 
                                   > (0x1fU & ((0xfU 
                                                & (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                                   >> 2U)) 
                                               - (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[2U] 
                                                     >> 0x14U))))) 
                                  << 1U));
                    }
                    if (((IData)((0x40000U == (0x140000U 
                                               & vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[4U]))) 
                         & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[6U] 
                                            << 0x14U) 
                                           | (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[5U] 
                                              >> 0xcU))) 
                            == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                >> 6U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv));
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv)) 
                               | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[4U] 
                                             >> 0x15U)) 
                                   > (0x1fU & ((0xfU 
                                                & (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                                   >> 2U)) 
                                               - (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[5U] 
                                                     >> 8U))))) 
                                  << 1U));
                    }
                    if (((IData)((0x40U == (0x140U 
                                            & vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[7U]))) 
                         & ((0x3ffffffU & vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[8U]) 
                            == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                >> 6U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv));
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv)) 
                               | (((0x1fU & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[7U] 
                                             >> 9U)) 
                                   > (0x1fU & ((0xfU 
                                                & (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                                   >> 2U)) 
                                               - (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[7U] 
                                                  >> 0x1cU)))) 
                                  << 1U));
                    }
                    if (((IData)((0x4000000U == (0x14000000U 
                                                 & vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[9U]))) 
                         & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xbU] 
                                            << 0xcU) 
                                           | (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xaU] 
                                              >> 0x14U))) 
                            == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                >> 6U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = (1U | (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv));
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv 
                            = ((1U & (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__rv)) 
                               | (((0x1fU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xaU] 
                                              << 3U) 
                                             | (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[9U] 
                                                >> 0x1dU))) 
                                   > (0x1fU & ((0xfU 
                                                & (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                                   >> 2U)) 
                                               - (0xfU 
                                                  & (vlSelfRef.__Vfunc_CheckTransfers__10__memcRes[0xaU] 
                                                     >> 0x10U))))) 
                                  << 1U));
                    }
                    if (((((1U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[0U])) 
                           | (3U == (0xfU & vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[0U]))) 
                          & ((0x3ffffffU & ((vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[2U] 
                                             << 0x15U) 
                                            | (vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[1U] 
                                               >> 0xbU))) 
                             == (vlSelfRef.__Vfunc_CheckTransfers__10__addr 
                                 >> 6U))) & (~ (vlSelfRef.__Vfunc_CheckTransfers__10__memcReq[0U] 
                                                >> 4U)))) {
                        vlSelfRef.__Vfunc_CheckTransfers__10__rv = 1U;
                    }
                    vlSelfRef.__Vfunc_CheckTransfers__10__Vfuncout 
                        = vlSelfRef.__Vfunc_CheckTransfers__10__rv;
                }(), (IData)(vlSelfRef.__Vfunc_CheckTransfers__10__Vfuncout)));
        if (vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__transferExists) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit 
                = ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit) 
                   & (IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__allowPassThru));
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit) 
              & (0U != (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U]))) 
             & ((0xffU & (vlSelfRef.__PVT__LSU_MC_if[2U] 
                          >> 9U)) == (((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc) 
                                       << 6U) | (0x3fU 
                                                 & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                                     << 2U) 
                                                    | (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                       >> 0x1eU))))))) {
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit = 0U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc = 0U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit = 1U;
            vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = 0U;
        }
        if ((1U & (~ (__PVT__lsu__DOT__unnamedblk28__DOT__st[0U] 
                      >> 7U)))) {
            if ((0x40U & __PVT__lsu__DOT__unnamedblk28__DOT__st[0U])) {
                if (vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit) {
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                        = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                           [2U][0U]);
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                        = ((0x7fU & vlSelfRef.__PVT__lsu__DOT__miss
                            [2U][1U]) | (0xffffff80U 
                                         & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                             << 0xfU) 
                                            | (0x7f80U 
                                               & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                  >> 0x11U)))));
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][2U] 
                        = (0x7fU & (__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                    >> 0x11U));
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                        = ((0x7fU & vlSelfRef.__PVT__lsu__DOT__miss
                            [2U][0U]) | (0xffffff80U 
                                         & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                             << 0xfU) 
                                            | (0x7f80U 
                                               & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                  >> 0x11U)))));
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__lsu__DOT__miss
                            [2U][1U]) | (0x7fU & (__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                                  >> 0x11U)));
                    vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                        = ((0xffffff9fU & vlSelfRef.__PVT__lsu__DOT__miss
                            [2U][0U]) | ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc) 
                                         << 5U));
                    if ((0U == (3U & (__PVT__lsu__DOT__unnamedblk28__DOT__st[0U] 
                                      >> 0x18U)))) {
                        vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                            = (6U | (0xffffffe1U & 
                                     vlSelfRef.__PVT__lsu__DOT__miss
                                     [2U][0U]));
                    } else if ((1U == (3U & (__PVT__lsu__DOT__unnamedblk28__DOT__st[0U] 
                                             >> 0x18U)))) {
                        vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                            = (8U | (0xffffffe1U & 
                                     vlSelfRef.__PVT__lsu__DOT__miss
                                     [2U][0U]));
                    } else if ((2U == (3U & (__PVT__lsu__DOT__unnamedblk28__DOT__st[0U] 
                                             >> 0x18U)))) {
                        vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                            = (0xaU | (0xffffffe1U 
                                       & vlSelfRef.__PVT__lsu__DOT__miss
                                       [2U][0U]));
                    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOnGet(2, 1)))) {
                        VL_WRITEF_NX("[%0t] %%Error: LoadStoreUnit.sv:604: Assertion failed in %NTop.soc.core.lsu.unnamedblk28.unnamedblk29: 'assert' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("src/LoadStoreUnit.sv", 604, "");
                    }
                }
            } else if (vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit) {
                vlSelfRef.__PVT__lsu__DOT__storeWriteToCache = 1U;
                vlSelfRef.__PVT__lsu__DOT__storeWriteAssoc 
                    = vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc;
                vlSelfRef.__PVT__LSU_setDirty = (1U 
                                                 | (((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc) 
                                                     << 7U) 
                                                    | (0x7eU 
                                                       & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                                           << 3U) 
                                                          | (6U 
                                                             & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                                >> 0x1dU))))));
            } else {
                vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                    = (1U | vlSelfRef.__PVT__lsu__DOT__miss
                       [2U][0U]);
                vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                    = ((0xffffffe1U & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][0U]) | (((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad)
                                       ? ((IData)(vlSelfRef.__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__noEvict)
                                           ? 1U : 0U)
                                       : 2U) << 1U));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                    = ((0xfff8007fU & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][1U]) | (0x7ff80U & ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                                  << 0xfU) 
                                                 | (0x7f80U 
                                                    & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                       >> 0x11U)))));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                    = ((0x7ffffU & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][1U]) | (((0x55U >= ((IData)(1U) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(0x15U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__CLM_ctResult
                                                         [2U][2U] 
                                                         >> 0x14U))))))
                                       ? (0xfffffU 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x15U) 
                                                       * 
                                                       (3U 
                                                        & (vlSelfRef.__PVT__CLM_ctResult
                                                           [2U][2U] 
                                                           >> 0x14U)))))))
                                               ? 0U
                                               : (vlSelfRef.__PVT__CLM_ctResult
                                                  [2U][
                                                  (((IData)(0x14U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x15U) 
                                                        * 
                                                        (3U 
                                                         & (vlSelfRef.__PVT__CLM_ctResult
                                                            [2U][2U] 
                                                            >> 0x14U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x15U) 
                                                           * 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__CLM_ctResult
                                                               [2U][2U] 
                                                               >> 0x14U))))))))) 
                                             | (vlSelfRef.__PVT__CLM_ctResult
                                                [2U][
                                                (((IData)(1U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x15U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelfRef.__PVT__CLM_ctResult
                                                          [2U][2U] 
                                                          >> 0x14U))))) 
                                                 >> 5U)] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x15U) 
                                                        * 
                                                        (3U 
                                                         & (vlSelfRef.__PVT__CLM_ctResult
                                                            [2U][2U] 
                                                            >> 0x14U)))))))))
                                       : 0U) << 0x13U));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][2U] 
                    = (0x7fU & (((0x55U >= ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x15U) 
                                                  * 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__CLM_ctResult
                                                      [2U][2U] 
                                                      >> 0x14U))))))
                                  ? (0xfffffU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x15U) 
                                                           * 
                                                           (3U 
                                                            & (vlSelfRef.__PVT__CLM_ctResult
                                                               [2U][2U] 
                                                               >> 0x14U)))))))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.__PVT__CLM_ctResult
                                                   [2U][
                                                   (((IData)(0x14U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.__PVT__CLM_ctResult
                                                             [2U][2U] 
                                                             >> 0x14U))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x15U) 
                                                            * 
                                                            (3U 
                                                             & (vlSelfRef.__PVT__CLM_ctResult
                                                                [2U][2U] 
                                                                >> 0x14U))))))))) 
                                                 | (vlSelfRef.__PVT__CLM_ctResult
                                                    [2U][
                                                    (((IData)(1U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x15U) 
                                                          * 
                                                          (3U 
                                                           & (vlSelfRef.__PVT__CLM_ctResult
                                                              [2U][2U] 
                                                              >> 0x14U))))) 
                                                     >> 5U)] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x15U) 
                                                            * 
                                                            (3U 
                                                             & (vlSelfRef.__PVT__CLM_ctResult
                                                                [2U][2U] 
                                                                >> 0x14U)))))))))
                                  : 0U) >> 0xdU));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                    = ((0x7fU & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][0U]) | (0xffffff80U & 
                                     ((__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                       << 0xfU) | (0x7f80U 
                                                   & (__PVT__lsu__DOT__unnamedblk28__DOT__st[4U] 
                                                      >> 0x11U)))));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][1U] 
                    = ((0xffffff80U & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][1U]) | (0x7fU & (__PVT__lsu__DOT__unnamedblk28__DOT__st[5U] 
                                              >> 0x11U)));
                vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
                    = ((0xffffff9fU & vlSelfRef.__PVT__lsu__DOT__miss
                        [2U][0U]) | (0x60U & (vlSelfRef.__PVT__CLM_ctResult
                                              [2U][2U] 
                                              >> 0xfU)));
            }
        }
    }
    __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x3e0U & (IData)(__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x1fU & ((0xfU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
                       + (0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 4U)))));
    __PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x1fU & (IData)(__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x3e0U & (((0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 8U)) + (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                              >> 0xcU))) 
                        << 5U)));
    __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x3e0U & (IData)(__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x1fU & ((0xfU & (IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums)) 
                       + (0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 4U)))));
    __PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums 
        = ((0x1fU & (IData)(__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums)) 
           | (0x3e0U & (((0xfU & ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                  >> 8U)) + (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums) 
                                              >> 0xcU))) 
                        << 5U)));
    vlSelfRef.__PVT__branchProvs[0U][0U] = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U];
    vlSelfRef.__PVT__branchProvs[0U][1U] = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U];
    vlSelfRef.__PVT__branchProvs[0U][2U] = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U];
    vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd 
        = ((1ULL & vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd) 
           | (((QData)((IData)(vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC)) 
               << 8U) | ((QData)((IData)((0x7fU & (
                                                   vlSelfRef.LD_uop
                                                   [0U][1U] 
                                                   >> 1U)))) 
                         << 1U)));
    vlSelfRef.__PVT__branchProvs[1U][0U] = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U];
    vlSelfRef.__PVT__branchProvs[1U][1U] = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U];
    vlSelfRef.__PVT__branchProvs[1U][2U] = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U];
    if ((1U & (vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U] 
               & ((~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U]) 
                  | (IData)(vlSelfRef.__PVT__bsel__DOT__priorityPort))))) {
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[0U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U];
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[1U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U];
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[2U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U];
    } else {
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[0U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[0U];
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[1U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[1U];
        vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[2U] 
            = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c[2U];
    }
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
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb 
        = ((0x1ffffeU & vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb) 
           | (IData)((((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                        >> 0x1eU) & (~ (IData)(vlSymsp->TOP.rst))) 
                      & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U])));
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb 
        = ((1U & vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb) 
           | (0x1ffffeU & ((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
                            << 3U) | (6U & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                                            >> 0x1dU)))));
    __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp = 0U;
    __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp 
        = ((0x1ffeU & (IData)(__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp)) 
           | (1U & ((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U]) 
                     & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                        >> 9U)) & ((~ vlSelfRef.branch[0U]) 
                                   | VL_GTES_III(32, 0U, 
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
                                                                       >> 0x15U))))))))));
    if ((1U & (IData)(__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp))) {
        __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp 
            = ((1U & (IData)(__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp)) 
               | (0x1ffeU & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                             >> 0x11U)));
    }
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb 
        = ((0x1ffffeU & vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb) 
           | (IData)((((vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__OUT_vmem 
                        >> 0x1eU) & (~ (IData)(vlSymsp->TOP.rst))) 
                      & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U])));
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb 
        = ((1U & vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb) 
           | (0x1ffffeU & ((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
                            << 3U) | (6U & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                                            >> 0x1dU)))));
    __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp = 0U;
    __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp 
        = ((0x1ffeU & (IData)(__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp)) 
           | (1U & ((((~ (IData)(vlSymsp->TOP.rst)) 
                      & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U]) 
                     & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                        >> 9U)) & ((~ vlSelfRef.branch[0U]) 
                                   | VL_GTES_III(32, 0U, 
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
                                                                       >> 0x15U))))))))));
    if ((1U & (IData)(__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp))) {
        __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp 
            = ((1U & (IData)(__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp)) 
               | (0x1ffeU & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                             >> 0x11U)));
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [9U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [8U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xbU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xaU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xdU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xcU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xfU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xeU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x11U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x10U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x13U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x12U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x15U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x14U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x17U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x16U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x19U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x18U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1bU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1aU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1dU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1cU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1fU];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1eU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [5U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [4U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [7U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [6U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [9U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [8U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xbU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xaU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xdU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xcU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xfU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0xeU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x11U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x10U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x13U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x12U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x15U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x14U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x17U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x16U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x19U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x18U];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1bU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1aU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1dU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1cU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1fU];
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
        [0x1eU];
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
    vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[0U] = 0U;
    vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[1U] = 0U;
    vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[2U] = 0U;
    if ((1U & ((IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                       [1U]) & (~ (IData)(__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHit_c))))) {
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[0U] 
            = (1U | ((0xffffff80U & vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[0U]) 
                     | ((0x60U & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                  >> 0xfU)) | ((((0x55U 
                                                  >= 
                                                  (0x7fU 
                                                   & ((IData)(0x15U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                          >> 0x14U))))) 
                                                 && (1U 
                                                     & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[
                                                        (3U 
                                                         & (((IData)(0x15U) 
                                                             * 
                                                             (3U 
                                                              & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                                 >> 0x14U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x15U) 
                                                            * 
                                                            (3U 
                                                             & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                                >> 0x14U)))))))
                                                 ? 0U
                                                 : 1U) 
                                               << 1U))));
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[0U] 
            = ((0x7fU & vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[0U]) 
               | ((IData)((((QData)((IData)((0xfffU 
                                             & (IData)(
                                                       (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                        [1U] 
                                                        >> 1U))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                         [1U] 
                                                         >> 1U))))) 
                  << 7U));
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[1U] 
            = ((0xfff80000U & vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[1U]) 
               | (((IData)((((QData)((IData)((0xfffU 
                                              & (IData)(
                                                        (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                         [1U] 
                                                         >> 1U))))) 
                             << 0x20U) | (QData)((IData)(
                                                         (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                          [1U] 
                                                          >> 1U))))) 
                   >> 0x19U) | ((IData)(((((QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                                       [1U] 
                                                                       >> 1U))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                             [1U] 
                                                             >> 1U)))) 
                                         >> 0x20U)) 
                                << 7U)));
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[1U] 
            = ((0x7ffffU & vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[1U]) 
               | (((0x55U >= ((IData)(1U) + (0x7fU 
                                             & ((IData)(0x15U) 
                                                * (3U 
                                                   & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                      >> 0x14U))))))
                    ? (0xfffffU & (((0U == (0x1fU & 
                                            ((IData)(1U) 
                                             + (0x7fU 
                                                & ((IData)(0x15U) 
                                                   * 
                                                   (3U 
                                                    & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                       >> 0x14U)))))))
                                     ? 0U : (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[
                                             (((IData)(0x14U) 
                                               + (0x7fU 
                                                  & ((IData)(0x15U) 
                                                     * 
                                                     (3U 
                                                      & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                         >> 0x14U))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                             >> 0x14U))))))))) 
                                   | (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[
                                      (((IData)(1U) 
                                        + (0x7fU & 
                                           ((IData)(0x15U) 
                                            * (3U & 
                                               (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                >> 0x14U))))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x15U) 
                                                          * 
                                                          (3U 
                                                           & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                              >> 0x14U)))))))))
                    : 0U) << 0x13U));
        vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[2U] 
            = (0x7fU & (((0x55U >= ((IData)(1U) + (0x7fU 
                                                   & ((IData)(0x15U) 
                                                      * 
                                                      (3U 
                                                       & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                          >> 0x14U))))))
                          ? (0xfffffU & (((0U == (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                             >> 0x14U)))))))
                                           ? 0U : (
                                                   vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[
                                                   (((IData)(0x14U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x15U) 
                                                         * 
                                                         (3U 
                                                          & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                             >> 0x14U))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x15U) 
                                                            * 
                                                            (3U 
                                                             & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                                >> 0x14U))))))))) 
                                         | (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[
                                            (((IData)(1U) 
                                              + (0x7fU 
                                                 & ((IData)(0x15U) 
                                                    * 
                                                    (3U 
                                                     & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                        >> 0x14U))))) 
                                             >> 5U)] 
                                            >> (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x15U) 
                                                       * 
                                                       (3U 
                                                        & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
                                                           >> 0x14U)))))))))
                          : 0U) >> 0xdU));
    }
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0U] 
        = VTop__ConstPool__CONST_h997e551f_0[0U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[1U] 
        = VTop__ConstPool__CONST_h997e551f_0[1U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[2U] 
        = VTop__ConstPool__CONST_h997e551f_0[2U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[3U] 
        = VTop__ConstPool__CONST_h997e551f_0[3U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[4U] 
        = VTop__ConstPool__CONST_h997e551f_0[4U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[5U] 
        = VTop__ConstPool__CONST_h997e551f_0[5U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[6U] 
        = VTop__ConstPool__CONST_h997e551f_0[6U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[7U] 
        = VTop__ConstPool__CONST_h997e551f_0[7U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[8U] 
        = VTop__ConstPool__CONST_h997e551f_0[8U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[9U] 
        = VTop__ConstPool__CONST_h997e551f_0[9U];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xaU] 
        = VTop__ConstPool__CONST_h997e551f_0[0xaU];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xbU] 
        = VTop__ConstPool__CONST_h997e551f_0[0xbU];
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask = 0ULL;
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc = 0U;
    vlSymsp->TOP__Top__soc__IF_cache.__PVT__we = 7U;
    if (vlSelfRef.__PVT__lsu__DOT__storeWriteToCache) {
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[8U] 
            = ((vlSelfRef.__PVT__lsu__DOT__stOps[1U][1U] 
                << 8U) | (vlSelfRef.__PVT__lsu__DOT__stOps
                          [1U][0U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[9U] 
            = ((vlSelfRef.__PVT__lsu__DOT__stOps[1U][2U] 
                << 8U) | (vlSelfRef.__PVT__lsu__DOT__stOps
                          [1U][1U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xaU] 
            = ((vlSelfRef.__PVT__lsu__DOT__stOps[1U][3U] 
                << 8U) | (vlSelfRef.__PVT__lsu__DOT__stOps
                          [1U][2U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wdata[0xbU] 
            = ((vlSelfRef.__PVT__lsu__DOT__stOps[1U][4U] 
                << 8U) | (vlSelfRef.__PVT__lsu__DOT__stOps
                          [1U][3U] >> 0x18U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask 
            = ((0xffffffffULL & vlSymsp->TOP__Top__soc__IF_cache.__PVT__wmask) 
               | ((QData)((IData)((0xffffU & (vlSelfRef.__PVT__lsu__DOT__stOps
                                              [1U][0U] 
                                              >> 8U)))) 
                  << 0x20U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc 
            = ((0xfU & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__wassoc)) 
               | ((IData)(vlSelfRef.__PVT__lsu__DOT__storeWriteAssoc) 
                  << 4U));
        vlSymsp->TOP__Top__soc__IF_cache.__PVT__we 
            = (3U & (IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__we));
    }
    vlSelfRef.__PVT__lsu__DOT__forwardMiss = 0U;
    vlSelfRef.__PVT__LSU_cacheMiss[0U] = 0U;
    vlSelfRef.__PVT__LSU_cacheMiss[1U] = 0U;
    vlSelfRef.__PVT__LSU_cacheMiss[2U] = 0U;
    if (((vlSelfRef.__PVT__lsu__DOT__miss[0U][0U] & 
          (6U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                          [0U][0U] >> 1U)))) & (2U 
                                                != 
                                                (0xfU 
                                                 & (vlSelfRef.__PVT__lsu__DOT__miss
                                                    [0U][0U] 
                                                    >> 1U))))) {
        vlSelfRef.__PVT__lsu__DOT__forwardMiss = (1U 
                                                  | (IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss));
        vlSelfRef.__PVT__LSU_cacheMiss[0U] = vlSelfRef.__PVT__lsu__DOT__miss
            [0U][0U];
        vlSelfRef.__PVT__LSU_cacheMiss[1U] = vlSelfRef.__PVT__lsu__DOT__miss
            [0U][1U];
        vlSelfRef.__PVT__LSU_cacheMiss[2U] = vlSelfRef.__PVT__lsu__DOT__miss
            [0U][2U];
    }
    if ((1U & (~ vlSelfRef.__PVT__LSU_cacheMiss[0U]))) {
        if (((vlSelfRef.__PVT__lsu__DOT__miss[1U][0U] 
              & (6U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                                [1U][0U] >> 1U)))) 
             & (2U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                               [1U][0U] >> 1U))))) {
            vlSelfRef.__PVT__lsu__DOT__forwardMiss 
                = (2U | (IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss));
            vlSelfRef.__PVT__LSU_cacheMiss[0U] = vlSelfRef.__PVT__lsu__DOT__miss
                [1U][0U];
            vlSelfRef.__PVT__LSU_cacheMiss[1U] = vlSelfRef.__PVT__lsu__DOT__miss
                [1U][1U];
            vlSelfRef.__PVT__LSU_cacheMiss[2U] = vlSelfRef.__PVT__lsu__DOT__miss
                [1U][2U];
        }
    }
    if ((1U & (~ vlSelfRef.__PVT__LSU_cacheMiss[0U]))) {
        if (((vlSelfRef.__PVT__lsu__DOT__miss[2U][0U] 
              & (6U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                                [2U][0U] >> 1U)))) 
             & (2U != (0xfU & (vlSelfRef.__PVT__lsu__DOT__miss
                               [2U][0U] >> 1U))))) {
            vlSelfRef.__PVT__lsu__DOT__forwardMiss 
                = (4U | (IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss));
            vlSelfRef.__PVT__LSU_cacheMiss[0U] = vlSelfRef.__PVT__lsu__DOT__miss
                [2U][0U];
            vlSelfRef.__PVT__LSU_cacheMiss[1U] = vlSelfRef.__PVT__lsu__DOT__miss
                [2U][1U];
            vlSelfRef.__PVT__LSU_cacheMiss[2U] = vlSelfRef.__PVT__lsu__DOT__miss
                [2U][2U];
        }
    }
    vlSelfRef.__PVT__LD_zcFwd[0U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd;
    bsel__DOT____VdfgExtracted_h894d458e__0 = (1U & 
                                               (vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[0U] 
                                                & ((~ 
                                                    vlSelfRef.__Vcellout__lb__OUT_branch[0U]) 
                                                   | VL_GTS_III(32, 0U, 
                                                                VL_EXTENDS_II(32,7, 
                                                                              (0x7fU 
                                                                               & (((vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[0U] 
                                                                                >> 0x15U)) 
                                                                                - 
                                                                                ((vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.__Vcellout__lb__OUT_branch[0U] 
                                                                                >> 0x15U)))))))));
    vlSelfRef.__PVT__LD_zcFwd[1U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd;
    vlSelfRef.__PVT__TLB_rqs[0U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb;
    vlSelfRef.__PVT__AGU_eLdUOp[0U] = __Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_eldOp;
    vlSelfRef.__PVT__TLB_rqs[1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb;
    vlSelfRef.__PVT__AGU_eLdUOp[1U] = __Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_eldOp;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[4U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [8U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [8U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[5U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xaU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xaU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[6U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xcU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xcU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[7U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xeU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xeU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[8U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x10U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x10U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[9U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x12U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x12U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xaU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x14U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x14U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xbU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x16U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x16U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xcU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x18U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x18U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xdU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1aU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1aU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xeU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1cU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1cU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xfU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1eU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1eU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[4U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [8U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [8U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[5U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xaU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xaU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[6U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xcU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xcU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[7U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0xeU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0xeU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[8U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x10U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x10U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[9U] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x12U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x12U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xaU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x14U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x14U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xbU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x16U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x16U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xcU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x18U] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x18U]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xdU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1aU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1aU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xeU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1cU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1cU]))]);
    vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[0xfU] 
        = ((vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
            [0x1eU] << 1U) | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s
                   [0x1eU]))]);
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
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doInsert 
        = (1U & (vlSelfRef.__PVT__LSU_cacheMiss[0U] 
                 & ((~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__fullCond) 
                        & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__equal))) 
                    | (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doExtract))));
    if ((1U & vlSelfRef.__PVT__LSU_cacheMiss[0U])) {
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
            = vlSelfRef.__PVT__LSU_cacheMiss[0U];
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
            = vlSelfRef.__PVT__LSU_cacheMiss[1U];
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
            = vlSelfRef.__PVT__LSU_cacheMiss[2U];
    } else {
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[0U] 
            = vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[0U];
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[1U] 
            = vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[1U];
        vlSelfRef.__PVT__cacheLineManager__DOT__miss[2U] 
            = vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss[2U];
    }
    vlSelfRef.__PVT__bsel__DOT__OUT_PERFC_branchMispr_c = 0U;
    if (bsel__DOT____VdfgExtracted_h894d458e__0) {
        if ((1U & (~ (IData)(vlSelfRef.mispredFlush)))) {
            vlSelfRef.__PVT__bsel__DOT__OUT_PERFC_branchMispr_c = 1U;
        }
    }
    vlSelfRef.__PVT__bsel__DOT__branch_c[0U] = 0U;
    vlSelfRef.__PVT__bsel__DOT__branch_c[1U] = 0U;
    vlSelfRef.__PVT__bsel__DOT__branch_c[2U] = 0U;
    vlSelfRef.__PVT__bsel__DOT__branch_c[0U] = (0xffffffbfU 
                                                & vlSelfRef.__PVT__bsel__DOT__branch_c[0U]);
    vlSelfRef.__PVT__bsel__DOT__branch_c[0U] = (0xfffffffeU 
                                                & vlSelfRef.__PVT__bsel__DOT__branch_c[0U]);
    if (bsel__DOT____VdfgExtracted_h894d458e__0) {
        vlSelfRef.__PVT__bsel__DOT__branch_c[0U] = 
            vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[0U];
        vlSelfRef.__PVT__bsel__DOT__branch_c[1U] = 
            vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[1U];
        vlSelfRef.__PVT__bsel__DOT__branch_c[2U] = 
            vlSelfRef.bsel__DOT____VdfgExtracted_hfc16791f__0[2U];
    } else {
        vlSelfRef.__PVT__bsel__DOT__branch_c[0U] = 
            vlSelfRef.__Vcellout__lb__OUT_branch[0U];
        vlSelfRef.__PVT__bsel__DOT__branch_c[1U] = 
            vlSelfRef.__Vcellout__lb__OUT_branch[1U];
        vlSelfRef.__PVT__bsel__DOT__branch_c[2U] = 
            vlSelfRef.__Vcellout__lb__OUT_branch[2U];
    }
    if ((1U & vlSelfRef.__PVT__branchProvs[3U][0U])) {
        vlSelfRef.__PVT__bsel__DOT__OUT_PERFC_branchMispr_c = 0U;
        vlSelfRef.__PVT__bsel__DOT__branch_c[0U] = 
            vlSelfRef.__PVT__branchProvs[3U][0U];
        vlSelfRef.__PVT__bsel__DOT__branch_c[1U] = 
            vlSelfRef.__PVT__branchProvs[3U][1U];
        vlSelfRef.__PVT__bsel__DOT__branch_c[2U] = 
            vlSelfRef.__PVT__branchProvs[3U][2U];
    }
    vlSelfRef.__PVT__dtlb__DOT__inc = 0U;
    __PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = (1U & (vlSelfRef.__PVT__TLB_rqs[0U] >> 1U));
    vlSelfRef.__PVT__TLB_res[0U] = 0U;
    vlSelfRef.__PVT__TLB_res[0U] = (0xfffff7fU & vlSelfRef.__PVT__TLB_res
                                    [0U]);
    vlSelfRef.__PVT__TLB_res[0U] = (0xfffffbfU & vlSelfRef.__PVT__TLB_res
                                    [0U]);
    vlSelfRef.__PVT__TLB_res[0U] = (0xffffffeU & vlSelfRef.__PVT__TLB_res
                                    [0U]);
    if ((1U & vlSelfRef.__PVT__TLB_rqs[0U])) {
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
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [0U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [0U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [0U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[0U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [0U]);
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
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
                                                          [0U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [0U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((0U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (1U 
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
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [1U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [1U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [1U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[0U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [0U]);
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
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
                                                          [0U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [1U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((1U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (1U 
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
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [2U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [2U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [2U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[0U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [0U]);
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
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
                                                          [0U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [2U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((2U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (1U 
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
                                                [0U] 
                                                >> 0xbU)))
                               : ((0x7ffffU & (IData)(
                                                      (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                       [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                       [3U] 
                                                       >> 0x1dU))) 
                                  == (0x7ffffU & (vlSelfRef.__PVT__TLB_rqs
                                                  [0U] 
                                                  >> 2U)))))) {
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffbfU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x40U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 2U)) 
                                                  << 6U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffff7fU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x80U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 1U)) 
                                                  << 7U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xfffffc7U 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (0x38U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                           [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                           [3U] 
                                                           >> 3U)) 
                                                  << 3U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffdU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (2U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 7U)) 
                                                << 1U)));
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffffffbU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
                                            | (4U & 
                                               ((IData)(
                                                        (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                         [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                         [3U] 
                                                         >> 8U)) 
                                                << 2U)));
            vlSelfRef.__PVT__TLB_res[0U] = (1U | vlSelfRef.__PVT__TLB_res
                                            [0U]);
            vlSelfRef.__PVT__TLB_res[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__TLB_res
                                             [0U]) 
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
                                                          [0U] 
                                                          >> 1U)))
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__dtlb__DOT__tlb
                                                               [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx]
                                                               [3U] 
                                                               >> 9U))) 
                                                  << 8U)));
            if ((3U == vlSelfRef.__PVT__dtlb__DOT__counters
                 [__PVT__dtlb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx])) {
                vlSelfRef.__PVT__dtlb__DOT__inc = (1U 
                                                   | (IData)(vlSelfRef.__PVT__dtlb__DOT__inc));
            }
        }
    }
}
