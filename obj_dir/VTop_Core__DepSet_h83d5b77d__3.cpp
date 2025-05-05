// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Core___ico_sequent__TOP__Top__soc__core__4(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___ico_sequent__TOP__Top__soc__core__4\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __PVT__idec__DOT__instr;
    __PVT__idec__DOT__instr = 0;
    SData/*15:0*/ __PVT__idec__DOT__i16;
    __PVT__idec__DOT__i16 = 0;
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
    vlSelfRef.__PVT__CLM_missReady = ((~ (IData)(__PVT__cacheLineManager__DOT__missEvictConflict)) 
                                      & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__canOutputMiss));
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
}
