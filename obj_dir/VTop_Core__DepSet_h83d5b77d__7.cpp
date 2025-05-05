// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__10(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__10\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum;
    __PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__enqCandPSum__DOT__unnamedblk1__DOT__sum = 0;
    // Body
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
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__11(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__11\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v0;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v4;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v4 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v4;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v4 = 0;
    QData/*32:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v5;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v5 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v5;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v5 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v5;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v5 = 0;
    CData/*1:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v6;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v6 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v6;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v6 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v6;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v6 = 0;
    IData/*25:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v7;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v7 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v7;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v7 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v7;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v7 = 0;
    CData/*1:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v8;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v8 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v8;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v8 = 0;
    CData/*1:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v9;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v9 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v9;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v9 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v9;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v9 = 0;
    IData/*25:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v10;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v10 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v10;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v10 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v10;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v10 = 0;
    CData/*1:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v11;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v11 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v11;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v11 = 0;
    CData/*1:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v12;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v12 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v12;
    __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v12 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v12;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v12 = 0;
    CData/*0:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v13;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v13 = 0;
    IData/*31:0*/ __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v13;
    __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v13 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v13;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v13 = 0;
    CData/*0:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v14;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v14 = 0;
    IData/*31:0*/ __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v14;
    __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v14 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v14;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v14 = 0;
    CData/*0:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v15;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v15 = 0;
    IData/*31:0*/ __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v15;
    __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v15 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v15;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v15 = 0;
    CData/*0:0*/ __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v16;
    __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v16 = 0;
    IData/*31:0*/ __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v16;
    __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v16 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v16;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v16 = 0;
    VlWide<6>/*191:0*/ __Vtemp_8;
    // Body
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v0 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v4 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v5 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v6 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v7 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v9 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v10 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v12 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v13 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v14 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v15 = 0U;
    __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v16 = 0U;
    vlSelfRef.__Vdly__SQB_uop[0U] = vlSelfRef.__PVT__SQB_uop[0U];
    vlSelfRef.__Vdly__SQB_uop[1U] = vlSelfRef.__PVT__SQB_uop[1U];
    vlSelfRef.__Vdly__SQB_uop[2U] = vlSelfRef.__PVT__SQB_uop[2U];
    vlSelfRef.__Vdly__SQB_uop[3U] = vlSelfRef.__PVT__SQB_uop[3U];
    vlSelfRef.__Vdly__SQB_uop[4U] = vlSelfRef.__PVT__SQB_uop[4U];
    vlSelfRef.__Vdly__SQB_uop[5U] = vlSelfRef.__PVT__SQB_uop[5U];
    vlSelfRef.__VdlySet__sqb__DOT__evicted__v0 = 0U;
    vlSelfRef.__VdlySet__sqb__DOT__evicted__v1 = 0U;
    vlSelfRef.__VdlySet__sqb__DOT__evicted__v4 = 0U;
    vlSelfRef.__VdlySet__sqb__DOT__evicted__v5 = 0U;
    vlSelfRef.__VdlySet__sqb__DOT__evicted__v6 = 0U;
    vlSelfRef.__VdlySet__sqb__DOT__evicted__v8 = 0U;
    vlSelfRef.__VdlySet__sqb__DOT__evicted__v9 = 0U;
    vlSelfRef.__VdlySet__sqb__DOT__evicted__v16 = 0U;
    vlSelfRef.__PVT__cacheLineManager__DOT__flushQueued 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__flushQueued;
    vlSelfRef.__PVT__cacheLineManager__DOT__flushAssocIdx 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__flushAssocIdx;
    vlSelfRef.__PVT__cacheLineManager__DOT__flushDone 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__flushDone;
    vlSelfRef.__PVT__cacheLineManager__DOT__flushIdx 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__flushIdx;
    vlSelfRef.__PVT__cacheLineManager__DOT__state = vlSelfRef.__Vdly__cacheLineManager__DOT__state;
    vlSelfRef.__PVT__TH_startFence = vlSelfRef.__PVT__trapHandler__DOT__OUT_fence_c;
    if (vlSymsp->TOP.rst) {
        __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v0 = 1U;
    } else {
        if ((1U & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__free_c))) {
            __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v4 
                = (3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__free_c) 
                         >> 1U));
            __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v4 = 1U;
            if ((1U & vlSelfRef.__PVT__dataPrefetch__DOT__pattern)) {
                __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v5 
                    = (((QData)((IData)((3U & (vlSelfRef.__PVT__dataPrefetch__DOT__pattern 
                                               >> 0x1bU)))) 
                        << 0x1dU) | (QData)((IData)(
                                                    (3U 
                                                     | (0x1ffffff8U 
                                                        & (vlSelfRef.__PVT__dataPrefetch__DOT__pattern 
                                                           << 2U))))));
                __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v5 
                    = (3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__free_c) 
                             >> 1U));
                __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v5 = 1U;
            }
        }
        if (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
             & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueReady))) {
            __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v6 
                = (3U & ((IData)(1U) + (IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                [(3U 
                                                  & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
                                                     >> 1U))] 
                                                >> 0x1fU))));
            __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v6 
                = (3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
                         >> 1U));
            __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v6 = 1U;
        }
        if ((1U & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
             [0U])) {
            __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v7 
                = (0x3ffffffU & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                 [0U] >> 3U));
            __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v7 
                = (3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                         [0U] >> 1U));
            __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v7 = 1U;
            __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v8 
                = (((3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                           [0U] >> 0x1dU)) > (3U & (IData)(
                                                           (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                            [
                                                            (3U 
                                                             & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                                                [0U] 
                                                                >> 1U))] 
                                                            >> 0x1fU))))
                    ? 0U : (3U & (((IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                            [(3U & 
                                              (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                               [0U] 
                                               >> 1U))] 
                                            >> 0x1fU)) 
                                   - (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                      [0U] >> 0x1dU)) 
                                  + (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
                                      & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueReady)) 
                                     & ((3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
                                               >> 1U)) 
                                        == (3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                                  [0U] 
                                                  >> 1U)))))));
            __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v8 
                = (3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                         [0U] >> 1U));
            if ((1U & (~ (IData)((3U == (3U & (IData)(
                                                      (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                       [
                                                       (3U 
                                                        & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                                           [0U] 
                                                           >> 1U))] 
                                                       >> 1U)))))))) {
                __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v9 
                    = (3U & ((IData)(1U) + (IData)(
                                                   (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                    [
                                                    (3U 
                                                     & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                                        [0U] 
                                                        >> 1U))] 
                                                    >> 1U))));
                __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v9 
                    = (3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                             [0U] >> 1U));
                __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v9 = 1U;
            }
        }
        if ((1U & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
             [1U])) {
            __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v10 
                = (0x3ffffffU & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                 [1U] >> 3U));
            __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v10 
                = (3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                         [1U] >> 1U));
            __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v10 = 1U;
            __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v11 
                = (((3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                           [1U] >> 0x1dU)) > (3U & (IData)(
                                                           (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                            [
                                                            (3U 
                                                             & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                                                [1U] 
                                                                >> 1U))] 
                                                            >> 0x1fU))))
                    ? 0U : (3U & (((IData)((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                            [(3U & 
                                              (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                               [1U] 
                                               >> 1U))] 
                                            >> 0x1fU)) 
                                   - (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                      [1U] >> 0x1dU)) 
                                  + (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
                                      & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueReady)) 
                                     & ((3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
                                               >> 1U)) 
                                        == (3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                                  [1U] 
                                                  >> 1U)))))));
            __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v11 
                = (3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                         [1U] >> 1U));
            if ((1U & (~ (IData)((3U == (3U & (IData)(
                                                      (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                       [
                                                       (3U 
                                                        & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                                           [1U] 
                                                           >> 1U))] 
                                                       >> 1U)))))))) {
                __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v12 
                    = (3U & ((IData)(1U) + (IData)(
                                                   (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                                                    [
                                                    (3U 
                                                     & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                                                        [1U] 
                                                        >> 1U))] 
                                                    >> 1U))));
                __VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v12 
                    = (3U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__advance_c
                             [1U] >> 1U));
                __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v12 = 1U;
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec))) {
            vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0 = 0U;
            if ((0x20U >= ((IData)(1U) + (1U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec) 
                                                >> 1U))))) {
                __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v13 
                    = vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0;
                __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v13 
                    = ((IData)(1U) + (1U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec) 
                                            >> 1U)));
                __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v13 = 1U;
                vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0 = 0U;
                __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v14 
                    = vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0;
                __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v14 
                    = ((IData)(1U) + (1U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec) 
                                            >> 1U)));
                __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v14 = 1U;
                vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0 = 0U;
                __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v15 
                    = vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0;
                __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v15 
                    = ((IData)(1U) + (1U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec) 
                                            >> 1U)));
                __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v15 = 1U;
                vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0 = 0U;
                __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v16 
                    = vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0;
                __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v16 
                    = ((IData)(1U) + (1U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec) 
                                            >> 1U)));
                __VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v16 = 1U;
            } else {
                vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0 = 0U;
                vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0 = 0U;
                vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0 = 0U;
            }
        }
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v0) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[0U] = 0ULL;
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[1U] = 0ULL;
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[2U] = 0ULL;
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[3U] = 0ULL;
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v4) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v4] = 0ULL;
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v5) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v5] 
            = __VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v5;
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v6) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v6] 
            = ((0x7fffffffULL & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v6]) 
               | ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v6)) 
                  << 0x1fU));
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v7) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v7] 
            = ((0x1e0000007ULL & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v7]) 
               | ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v7)) 
                  << 3U));
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v8] 
            = ((0x7fffffffULL & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v8]) 
               | ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v8)) 
                  << 0x1fU));
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v9) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v9] 
            = ((0x1fffffff9ULL & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v9]) 
               | ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v9)) 
                  << 1U));
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v10) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v10] 
            = ((0x1e0000007ULL & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v10]) 
               | ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v10)) 
                  << 3U));
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v11] 
            = ((0x7fffffffULL & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v11]) 
               | ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v11)) 
                  << 0x1fU));
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v12) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v12] 
            = ((0x1fffffff9ULL & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [__VdlyDim0__dataPrefetch__DOT__issuer__DOT__streams__v12]) 
               | ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v12)) 
                  << 1U));
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v13) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[0U] 
            = (((~ (1ULL << __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v13)) 
                & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [0U]) | (0x1ffffffffULL & ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v13)) 
                                           << __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v13)));
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v14) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[1U] 
            = (((~ (1ULL << __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v14)) 
                & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [1U]) | (0x1ffffffffULL & ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v14)) 
                                           << __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v14)));
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v15) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[2U] 
            = (((~ (1ULL << __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v15)) 
                & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [2U]) | (0x1ffffffffULL & ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v15)) 
                                           << __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v15)));
    }
    if (__VdlySet__dataPrefetch__DOT__issuer__DOT__streams__v16) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams[3U] 
            = (((~ (1ULL << __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v16)) 
                & vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
                [3U]) | (0x1ffffffffULL & ((QData)((IData)(__VdlyVal__dataPrefetch__DOT__issuer__DOT__streams__v16)) 
                                           << __VdlyLsb__dataPrefetch__DOT__issuer__DOT__streams__v16)));
    }
    __Vtemp_8[0U] = (((vlSelfRef.__PVT__lsu__DOT__stOps
                       [1U][1U] << 0x1fU) | (0x7fffff80U 
                                             & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                [1U][0U] 
                                                >> 1U))) 
                     | ((0x7cU & (vlSelfRef.__PVT__lsu__DOT__stOps
                                  [1U][0U] << 1U)) 
                        | ((2U & ((vlSelfRef.__PVT__lsu__DOT__stOps
                                   [1U][0U] & ((1U 
                                                & vlSelfRef.__PVT__lsu__DOT__miss
                                                [2U][0U])
                                                ? (
                                                   ((((0U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lsu__DOT__miss
                                                           [2U][0U] 
                                                           >> 1U))) 
                                                      | (1U 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelfRef.__PVT__lsu__DOT__miss
                                                             [2U][0U] 
                                                             >> 1U)))) 
                                                     | (6U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelfRef.__PVT__lsu__DOT__miss
                                                            [2U][0U] 
                                                            >> 1U)))) 
                                                    | (2U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__lsu__DOT__miss
                                                           [2U][0U] 
                                                           >> 1U)))) 
                                                   | ((((3U 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelfRef.__PVT__lsu__DOT__miss
                                                             [2U][0U] 
                                                             >> 1U))) 
                                                        | (5U 
                                                           == 
                                                           (0xfU 
                                                            & (vlSelfRef.__PVT__lsu__DOT__miss
                                                               [2U][0U] 
                                                               >> 1U)))) 
                                                       | (4U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelfRef.__PVT__lsu__DOT__miss
                                                              [2U][0U] 
                                                              >> 1U)))) 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.__PVT__lsu__DOT__forwardMiss) 
                                                           >> 2U)) 
                                                         | (~ (IData)(vlSelfRef.__PVT__CLM_missReady)))))
                                                : (
                                                   (~ 
                                                    (vlSelfRef.__PVT__lsu__DOT__stOps
                                                     [1U][0U] 
                                                     >> 7U)) 
                                                   & ((IData)(vlSymsp->TOP__Top__soc__IF_cache.__PVT__busy) 
                                                      >> 2U)))) 
                                  << 1U)) | (1U & vlSelfRef.__PVT__lsu__DOT__stOps
                                             [1U][0U]))));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__VdlySet__sqb__DOT__evicted__v0 = 1U;
        vlSelfRef.__Vdly__SQB_uop[0U] = 0U;
        vlSelfRef.__Vdly__SQB_uop[1U] = 0U;
        vlSelfRef.__Vdly__SQB_uop[2U] = 0U;
        vlSelfRef.__Vdly__SQB_uop[3U] = 0U;
        vlSelfRef.__Vdly__SQB_uop[4U] = 0U;
        vlSelfRef.__Vdly__SQB_uop[5U] = 0U;
        vlSelfRef.__VdlySet__sqb__DOT__evicted__v1 = 1U;
        vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__stAck_r[1U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__stAck_r[2U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__stAck_r[3U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__stAck_r[4U] = 0U;
        vlSelfRef.__PVT__sqb__DOT__stAck_r[5U] = 0U;
    } else {
        if ((1U & vlSelfRef.__PVT__SQB_uop[0U])) {
            if (vlSelfRef.__PVT__CC_storeStall) {
                vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v4 
                    = (3U & (vlSelfRef.__PVT__SQB_uop[0U] 
                             >> 1U));
                vlSelfRef.__VdlySet__sqb__DOT__evicted__v4 = 1U;
            }
            vlSelfRef.__Vdly__SQB_uop[0U] = 0U;
            vlSelfRef.__Vdly__SQB_uop[1U] = 0U;
            vlSelfRef.__Vdly__SQB_uop[2U] = 0U;
            vlSelfRef.__Vdly__SQB_uop[3U] = 0U;
            vlSelfRef.__Vdly__SQB_uop[4U] = 0U;
            vlSelfRef.__Vdly__SQB_uop[5U] = 0U;
        }
        if ((vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
             & ((7U & (vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
                       >> 4U)) == (7U & (vlSelfRef.__PVT__sqb__DOT__evicted
                                         [(3U & (vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
                                                 >> 2U))][0U] 
                                         >> 1U))))) {
            if (((7U & (vlSelfRef.__PVT__sqb__DOT__evicted
                        [(3U & (vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
                                >> 2U))][0U] >> 1U)) 
                 == (7U & (vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
                           >> 4U)))) {
                vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v5 
                    = (3U & (vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
                             >> 2U));
                vlSelfRef.__VdlySet__sqb__DOT__evicted__v5 = 1U;
                if ((1U & (~ (vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
                              >> 1U)))) {
                    vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v6 
                        = (3U & (vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
                                 >> 2U));
                    vlSelfRef.__VdlySet__sqb__DOT__evicted__v6 = 1U;
                    vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v7 
                        = (3U & (vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] 
                                 >> 2U));
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__sqb__DOT__reIssue))) {
            vlSelfRef.__Vdly__SQB_uop[0U] = (1U | (
                                                   (0xfffffff8U 
                                                    & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                                   | (6U 
                                                      & (IData)(vlSelfRef.__PVT__sqb__DOT__reIssue))));
            vlSelfRef.__Vdly__SQB_uop[0U] = ((0xffffffc7U 
                                              & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                             | (0x38U 
                                                & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][0U] 
                                                   << 2U)));
            vlSelfRef.__Vdly__SQB_uop[4U] = (0xfcffffffU 
                                             & vlSelfRef.__Vdly__SQB_uop[4U]);
            vlSelfRef.__Vdly__SQB_uop[4U] = ((0x3ffffffU 
                                              & vlSelfRef.__Vdly__SQB_uop[4U]) 
                                             | (0xfc000000U 
                                                & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][0U] 
                                                   << 4U)));
            vlSelfRef.__Vdly__SQB_uop[5U] = (0xffffffU 
                                             & ((0x3fffff0U 
                                                 & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                    [
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                        >> 1U))][1U] 
                                                    << 4U)) 
                                                | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][0U] 
                                                   >> 0x1cU)));
            vlSelfRef.__Vdly__SQB_uop[0U] = ((0xffffffU 
                                              & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                             | (0xff000000U 
                                                & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][1U] 
                                                   << 4U)));
            vlSelfRef.__Vdly__SQB_uop[1U] = (((0xfffff0U 
                                               & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                  [
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                      >> 1U))][2U] 
                                                  << 4U)) 
                                              | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                 [(3U 
                                                   & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                      >> 1U))][1U] 
                                                 >> 0x1cU)) 
                                             | (0xff000000U 
                                                & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][2U] 
                                                   << 4U)));
            vlSelfRef.__Vdly__SQB_uop[2U] = (((0xfffff0U 
                                               & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                  [
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                      >> 1U))][3U] 
                                                  << 4U)) 
                                              | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                 [(3U 
                                                   & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                      >> 1U))][2U] 
                                                 >> 0x1cU)) 
                                             | (0xff000000U 
                                                & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][3U] 
                                                   << 4U)));
            vlSelfRef.__Vdly__SQB_uop[3U] = (((0xfffff0U 
                                               & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                  [
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                      >> 1U))][4U] 
                                                  << 4U)) 
                                              | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                 [(3U 
                                                   & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                      >> 1U))][3U] 
                                                 >> 0x1cU)) 
                                             | (0xff000000U 
                                                & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][4U] 
                                                   << 4U)));
            vlSelfRef.__Vdly__SQB_uop[4U] = ((0xff000000U 
                                              & vlSelfRef.__Vdly__SQB_uop[4U]) 
                                             | ((0xfffff0U 
                                                 & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                    [
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                        >> 1U))][5U] 
                                                    << 4U)) 
                                                | (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][4U] 
                                                   >> 0x1cU)));
            vlSelfRef.__Vdly__SQB_uop[0U] = ((0xff0000ffU 
                                              & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                             | (0xffff00U 
                                                & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][0U] 
                                                   << 2U)));
            vlSelfRef.__Vdly__SQB_uop[0U] = ((0xffffffbfU 
                                              & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                             | (0x40U 
                                                & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                       >> 1U))][0U] 
                                                   << 1U)));
            vlSelfRef.__Vdly__SQB_uop[0U] = ((0xffffff7fU 
                                              & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                             | ((0x80000000U 
                                                 > 
                                                 (0xfffffffcU 
                                                  & ((vlSelfRef.__PVT__sqb__DOT__evicted
                                                      [
                                                      (3U 
                                                       & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                          >> 1U))][1U] 
                                                      << 0xcU) 
                                                     | (0xffcU 
                                                        & (vlSelfRef.__PVT__sqb__DOT__evicted
                                                           [
                                                           (3U 
                                                            & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                                                               >> 1U))][0U] 
                                                           >> 0x14U))))) 
                                                << 7U));
            vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v8 
                = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__reIssue) 
                         >> 1U));
            vlSelfRef.__VdlySet__sqb__DOT__evicted__v8 = 1U;
        }
        if ((1U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                   & (IData)(vlSelfRef.__PVT__sqb__DOT__evInsert)))) {
            vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__newNonce 
                = (7U & ((IData)(1U) + ((vlSelfRef.__PVT__sqb__DOT__evicted
                                         [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                                                 >> 1U))][0U] 
                                         << 0x1fU) 
                                        | (vlSelfRef.__PVT__sqb__DOT__evicted
                                           [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                                                   >> 1U))][0U] 
                                           >> 1U))));
            vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__mask 
                = (0xffffU & (((vlSelfRef.__PVT__sqb__DOT__evicted
                                [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                                        >> 1U))][0U] 
                                << 0x1aU) | (vlSelfRef.__PVT__sqb__DOT__evicted
                                             [(3U & 
                                               ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                                                >> 1U))][0U] 
                                             >> 6U)) 
                              | ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                  << 0x1aU) | (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                               >> 6U))));
            vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U] 
                = ((vlSelfRef.__PVT__sqb__DOT__evicted
                    [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                            >> 1U))][2U] << 0xcU) | 
                   (vlSelfRef.__PVT__sqb__DOT__evicted
                    [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                            >> 1U))][1U] >> 0x14U));
            vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U] 
                = ((vlSelfRef.__PVT__sqb__DOT__evicted
                    [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                            >> 1U))][3U] << 0xcU) | 
                   (vlSelfRef.__PVT__sqb__DOT__evicted
                    [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                            >> 1U))][2U] >> 0x14U));
            vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U] 
                = ((vlSelfRef.__PVT__sqb__DOT__evicted
                    [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                            >> 1U))][4U] << 0xcU) | 
                   (vlSelfRef.__PVT__sqb__DOT__evicted
                    [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                            >> 1U))][3U] >> 0x14U));
            vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U] 
                = ((vlSelfRef.__PVT__sqb__DOT__evicted
                    [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                            >> 1U))][5U] << 0xcU) | 
                   (vlSelfRef.__PVT__sqb__DOT__evicted
                    [(3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                            >> 1U))][4U] >> 0x14U));
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 6U) | (0U == (0xffffU & 
                                         (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                          >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U]) 
                       | (0xffU & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                   >> 0x14U)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 7U) | (0U == (0xffffU & 
                                         (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                          >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U]) 
                       | (0xff00U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U] 
                                      << 0xcU) | (0xf00U 
                                                  & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                                     >> 0x14U)))));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 8U) | (0U == (0xffffU & 
                                         (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                          >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U]) 
                       | (0xff0000U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U] 
                                       << 0xcU)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 9U) | (0U == (0xffffU & 
                                         (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                          >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U] 
                    = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U]) 
                       | (0xff000000U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U] 
                                         << 0xcU)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0xaU) | (0U == (0xffffU 
                                           & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                              >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U]) 
                       | (0xffU & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U] 
                                   >> 0x14U)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0xbU) | (0U == (0xffffU 
                                           & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                              >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U]) 
                       | (0xff00U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U] 
                                      << 0xcU) | (0xf00U 
                                                  & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[2U] 
                                                     >> 0x14U)))));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0xcU) | (0U == (0xffffU 
                                           & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                              >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U]) 
                       | (0xff0000U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U] 
                                       << 0xcU)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0xdU) | (0U == (0xffffU 
                                           & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                              >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U] 
                    = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U]) 
                       | (0xff000000U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U] 
                                         << 0xcU)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0xeU) | (0U == (0xffffU 
                                           & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                              >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U]) 
                       | (0xffU & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U] 
                                   >> 0x14U)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0xfU) | (0U == (0xffffU 
                                           & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                              >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U]) 
                       | (0xff00U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U] 
                                      << 0xcU) | (0xf00U 
                                                  & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[3U] 
                                                     >> 0x14U)))));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0x10U) | (0U == (0xffffU 
                                            & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                               >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U]) 
                       | (0xff0000U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U] 
                                       << 0xcU)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0x11U) | (0U == (0xffffU 
                                            & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                               >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U] 
                    = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U]) 
                       | (0xff000000U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U] 
                                         << 0xcU)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0x12U) | (0U == (0xffffU 
                                            & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                               >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U] 
                    = ((0xffffff00U & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U]) 
                       | (0xffU & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U] 
                                   >> 0x14U)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0x13U) | (0U == (0xffffU 
                                            & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                               >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U] 
                    = ((0xffff00ffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U]) 
                       | (0xff00U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[5U] 
                                      << 0xcU) | (0xf00U 
                                                  & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[4U] 
                                                     >> 0x14U)))));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0x14U) | (0U == (0xffffU 
                                            & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                               >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U] 
                    = ((0xff00ffffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U]) 
                       | (0xff0000U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[5U] 
                                       << 0xcU)));
            }
            if ((1U & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                        >> 0x15U) | (0U == (0xffffU 
                                            & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                               >> 6U)))))) {
                vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U] 
                    = ((0xffffffU & vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U]) 
                       | (0xff000000U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[5U] 
                                         << 0xcU)));
            }
            vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[0U] 
                = vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U];
            vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[1U] 
                = vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U];
            vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[2U] 
                = vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U];
            vlSelfRef.__VdlyVal__sqb__DOT__evicted__v9[3U] 
                = vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U];
            vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v9 
                = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                         >> 1U));
            vlSelfRef.__VdlySet__sqb__DOT__evicted__v9 = 1U;
            vlSelfRef.__VdlyVal__sqb__DOT__evicted__v10 
                = vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__mask;
            vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v10 
                = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                         >> 1U));
            vlSelfRef.__VdlyVal__sqb__DOT__evicted__v11 
                = (0x3fffffffU & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                   << 0xaU) | (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                               >> 0x16U)));
            vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v11 
                = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                         >> 1U));
            vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v12 
                = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                         >> 1U));
            vlSelfRef.__VdlyVal__sqb__DOT__evicted__v13 
                = vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__newNonce;
            vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v13 
                = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                         >> 1U));
            vlSelfRef.__VdlyVal__sqb__DOT__evicted__v14 
                = (1U & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                         >> 5U));
            vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v14 
                = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                         >> 1U));
            vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v15 
                = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                         >> 1U));
            if ((1U & (~ (IData)(vlSelfRef.__PVT__sqb__DOT__reIssue)))) {
                vlSelfRef.__VdlyDim0__sqb__DOT__evicted__v16 
                    = (3U & ((IData)(vlSelfRef.__PVT__sqb__DOT__evInsert) 
                             >> 1U));
                vlSelfRef.__VdlySet__sqb__DOT__evicted__v16 = 1U;
                vlSelfRef.__Vdly__SQB_uop[0U] = (1U 
                                                 | ((0xffffffc0U 
                                                     & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                                    | (((IData)(vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__newNonce) 
                                                        << 3U) 
                                                       | (6U 
                                                          & (IData)(vlSelfRef.__PVT__sqb__DOT__evInsert)))));
                vlSelfRef.__Vdly__SQB_uop[0U] = ((0xffffffU 
                                                  & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                                 | (vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U] 
                                                    << 0x18U));
                vlSelfRef.__Vdly__SQB_uop[1U] = ((vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[0U] 
                                                  >> 8U) 
                                                 | (vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U] 
                                                    << 0x18U));
                vlSelfRef.__Vdly__SQB_uop[2U] = ((vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[1U] 
                                                  >> 8U) 
                                                 | (vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U] 
                                                    << 0x18U));
                vlSelfRef.__Vdly__SQB_uop[3U] = ((vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[2U] 
                                                  >> 8U) 
                                                 | (vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U] 
                                                    << 0x18U));
                vlSelfRef.__Vdly__SQB_uop[4U] = ((vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__data[3U] 
                                                  >> 8U) 
                                                 | (0xfc000000U 
                                                    & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                       << 4U)));
                vlSelfRef.__Vdly__SQB_uop[5U] = (0xffffffU 
                                                 & ((0xfffff0U 
                                                     & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                                        << 4U)) 
                                                    | (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                       >> 0x1cU)));
                vlSelfRef.__Vdly__SQB_uop[0U] = ((0xff0000ffU 
                                                  & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                                 | ((IData)(vlSelfRef.__PVT__sqb__DOT__unnamedblk15__DOT__mask) 
                                                    << 8U));
                vlSelfRef.__Vdly__SQB_uop[0U] = ((0xffffffbfU 
                                                  & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                                 | (0x40U 
                                                    & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                       << 1U)));
                vlSelfRef.__Vdly__SQB_uop[0U] = ((0xffffff7fU 
                                                  & vlSelfRef.__Vdly__SQB_uop[0U]) 
                                                 | ((0x80000000U 
                                                     > 
                                                     (0xfffffffcU 
                                                      & ((vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[1U] 
                                                          << 0xcU) 
                                                         | (0xffcU 
                                                            & (vlSelfRef.__PVT__sqb__DOT__fusedUOp_r[0U] 
                                                               >> 0x14U))))) 
                                                    << 7U));
            }
        }
        vlSelfRef.__PVT__sqb__DOT__stAck_r[0U] = __Vtemp_8[0U];
        vlSelfRef.__PVT__sqb__DOT__stAck_r[1U] = ((0x7fU 
                                                   & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][1U] 
                                                      >> 1U)) 
                                                  | ((vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][2U] 
                                                      << 0x1fU) 
                                                     | (0x7fffff80U 
                                                        & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                           [1U][1U] 
                                                           >> 1U))));
        vlSelfRef.__PVT__sqb__DOT__stAck_r[2U] = ((0x7fU 
                                                   & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][2U] 
                                                      >> 1U)) 
                                                  | ((vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][3U] 
                                                      << 0x1fU) 
                                                     | (0x7fffff80U 
                                                        & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                           [1U][2U] 
                                                           >> 1U))));
        vlSelfRef.__PVT__sqb__DOT__stAck_r[3U] = ((0x7fU 
                                                   & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][3U] 
                                                      >> 1U)) 
                                                  | ((vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][4U] 
                                                      << 0x1fU) 
                                                     | (0x7fffff80U 
                                                        & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                           [1U][3U] 
                                                           >> 1U))));
        vlSelfRef.__PVT__sqb__DOT__stAck_r[4U] = ((0x7fU 
                                                   & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][4U] 
                                                      >> 1U)) 
                                                  | ((vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][5U] 
                                                      << 0x1fU) 
                                                     | (0x7fffff80U 
                                                        & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                           [1U][4U] 
                                                           >> 1U))));
        vlSelfRef.__PVT__sqb__DOT__stAck_r[5U] = ((0x7fU 
                                                   & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                      [1U][5U] 
                                                      >> 1U)) 
                                                  | (0x7fff80U 
                                                     & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                        [1U][5U] 
                                                        >> 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__stOps__v0) {
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][3U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][4U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][5U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][3U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][4U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__stOps__v2) {
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][3U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][4U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][5U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][0U] = 
            (0xfffffffeU & vlSelfRef.__PVT__lsu__DOT__stOps
             [0U][0U]);
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][3U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][4U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][5U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][0U] = 
            (0xfffffffeU & vlSelfRef.__PVT__lsu__DOT__stOps
             [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__stOps__v6) {
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][0U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[0U];
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][1U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[1U];
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][2U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[2U];
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][3U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[3U];
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][4U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[4U];
        vlSelfRef.__PVT__lsu__DOT__stOps[0U][5U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v6[5U];
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__stOps__v7) {
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][0U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[0U];
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][1U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[1U];
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][2U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[2U];
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][3U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[3U];
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][4U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[4U];
        vlSelfRef.__PVT__lsu__DOT__stOps[1U][5U] = 
            vlSelfRef.__VdlyVal__lsu__DOT__stOps__v7[5U];
    }
    vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c = 
        ((0xeU & (IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c)) 
         | (vlSelfRef.__PVT__CLM_ctResult[2U][0U] & 
            ((0xfffffU & (vlSelfRef.__PVT__CLM_ctResult
                          [2U][0U] >> 1U)) == (0xfffffU 
                                               & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                  [1U][5U] 
                                                  >> 4U)))));
    vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c = 
        ((0xdU & (IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c)) 
         | (0xffeU & ((vlSelfRef.__PVT__CLM_ctResult
                       [2U][0U] >> 0x14U) & (((0xfffffU 
                                               & ((vlSelfRef.__PVT__CLM_ctResult
                                                   [2U][1U] 
                                                   << 0xaU) 
                                                  | (vlSelfRef.__PVT__CLM_ctResult
                                                     [2U][0U] 
                                                     >> 0x16U))) 
                                              == (0xfffffU 
                                                  & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                     [1U][5U] 
                                                     >> 4U))) 
                                             << 1U))));
    vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c = 
        ((0xbU & (IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c)) 
         | (0xfffffcU & ((vlSelfRef.__PVT__CLM_ctResult
                          [2U][1U] >> 8U) & (((0xfffffU 
                                               & (vlSelfRef.__PVT__CLM_ctResult
                                                  [2U][1U] 
                                                  >> 0xbU)) 
                                              == (0xfffffU 
                                                  & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                     [1U][5U] 
                                                     >> 4U))) 
                                             << 2U))));
    vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c = 
        ((7U & (IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c)) 
         | (8U & ((vlSelfRef.__PVT__CLM_ctResult[2U][1U] 
                   >> 0x1cU) & (((0xfffffU & vlSelfRef.__PVT__CLM_ctResult
                                  [2U][2U]) == (0xfffffU 
                                                & (vlSelfRef.__PVT__lsu__DOT__stOps
                                                   [1U][5U] 
                                                   >> 4U))) 
                                << 3U))));
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3 = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                          & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.ohEncSt.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3) 
                 | (IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                           >> 1U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.ohEncSt.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3) 
                 | ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                    >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                           >> 2U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.ohEncSt.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3) 
                 | ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                    >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                           >> 3U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.ohEncSt.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3 
        = ((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3) 
           | ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
              >> 3U));
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2 
        = (2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2));
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2 
        = ((2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2)) 
           | (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2) 
                    | ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                       >> 1U))));
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2 
        = ((2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2)) 
           | (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2) 
                    | ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                       >> 3U))));
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2 
        = (1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2));
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2 
        = ((1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2)) 
                    | (0x7ffffffeU & ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                                      >> 1U)))));
    vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2 
        = ((1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2)) 
           | ((IData)((((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2) 
                        >> 1U) | ((IData)(vlSelfRef.__PVT__lsu__DOT__stAssocHitUnary_c) 
                                  >> 3U))) << 1U));
    vlSelfRef.__PVT__lsu__DOT__stAssocHit_c = (((IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber2) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.lsu__DOT____Vcellout__ohEncSt____pinNumber3));
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__12(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__12\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__SQ_fwd[1U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_fwd
        [1U];
    vlSelfRef.__PVT__SQ_fwd[0U] = vlSymsp->TOP__Top__soc__core__sq.__PVT__OUT_fwd
        [0U];
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
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__13(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__13\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__1__Vfuncout;
    __Vfunc_stDataLd__DOT__ShiftData__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__1__raw;
    __Vfunc_stDataLd__DOT__ShiftData__1__raw = 0;
    CData/*1:0*/ __Vfunc_stDataLd__DOT__ShiftData__1__offs;
    __Vfunc_stDataLd__DOT__ShiftData__1__offs = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__1__shifted;
    __Vfunc_stDataLd__DOT__ShiftData__1__shifted = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__3__Vfuncout;
    __Vfunc_stDataLd__DOT__ShiftData__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__3__raw;
    __Vfunc_stDataLd__DOT__ShiftData__3__raw = 0;
    CData/*1:0*/ __Vfunc_stDataLd__DOT__ShiftData__3__offs;
    __Vfunc_stDataLd__DOT__ShiftData__3__offs = 0;
    IData/*31:0*/ __Vfunc_stDataLd__DOT__ShiftData__3__shifted;
    __Vfunc_stDataLd__DOT__ShiftData__3__shifted = 0;
    CData/*0:0*/ __VdlySet__DE_uop__v0;
    __VdlySet__DE_uop__v0 = 0;
    CData/*0:0*/ __VdlySet__DE_uop__v8;
    __VdlySet__DE_uop__v8 = 0;
    VlWide<3>/*79:0*/ __VdlyVal__DE_uop__v16;
    VL_ZERO_W(80, __VdlyVal__DE_uop__v16);
    CData/*0:0*/ __VdlySet__DE_uop__v16;
    __VdlySet__DE_uop__v16 = 0;
    VlWide<3>/*79:0*/ __VdlyVal__DE_uop__v17;
    VL_ZERO_W(80, __VdlyVal__DE_uop__v17);
    VlWide<3>/*79:0*/ __VdlyVal__DE_uop__v18;
    VL_ZERO_W(80, __VdlyVal__DE_uop__v18);
    VlWide<3>/*79:0*/ __VdlyVal__DE_uop__v19;
    VL_ZERO_W(80, __VdlyVal__DE_uop__v19);
    CData/*2:0*/ __VdlyVal__rfMux__DOT__genblk1__DOT__compReadIdx_r__v0;
    __VdlyVal__rfMux__DOT__genblk1__DOT__compReadIdx_r__v0 = 0;
    CData/*2:0*/ __VdlyVal__rfMux__DOT__genblk1__DOT__compReadIdx_r__v1;
    __VdlyVal__rfMux__DOT__genblk1__DOT__compReadIdx_r__v1 = 0;
    // Body
    vlSelfRef.__Vdly__tvalSelect__DOT__invalidateCurTVal 
        = vlSelfRef.__PVT__tvalSelect__DOT__invalidateCurTVal;
    vlSelfRef.__Vdly__tvalSelect__DOT__curTVal = vlSelfRef.__PVT__tvalSelect__DOT__curTVal;
    vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup 
        = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup;
    vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup 
        = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup;
    vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ 
        = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ;
    vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ 
        = vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ;
    __VdlySet__DE_uop__v0 = 0U;
    __VdlySet__DE_uop__v8 = 0U;
    __VdlySet__DE_uop__v16 = 0U;
    vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[0U] 
        = vlSelfRef.__Vdly____Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[1U] 
        = vlSelfRef.__Vdly____Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[2U] 
        = vlSelfRef.__Vdly____Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[3U] 
        = vlSelfRef.__Vdly____Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[0U] 
        = vlSelfRef.__Vdly____Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[1U] 
        = vlSelfRef.__Vdly____Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[2U] 
        = vlSelfRef.__Vdly____Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[3U] 
        = vlSelfRef.__Vdly____Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.__PVT__ld__DOT__operandIsReg = vlSelfRef.__Vdly__ld__DOT__operandIsReg;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs 
        = vlSelfRef.__Vdly__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs 
        = vlSelfRef.__Vdly__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs;
    vlSelfRef.__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex 
        = vlSelfRef.__Vdly__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex;
    vlSelfRef.__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex 
        = vlSelfRef.__Vdly__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex;
    vlSelfRef.__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex 
        = vlSelfRef.__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex;
    __VdlyVal__rfMux__DOT__genblk1__DOT__compReadIdx_r__v0 
        = vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
        [1U];
    __VdlyVal__rfMux__DOT__genblk1__DOT__compReadIdx_r__v1 
        = vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c
        [0U];
    vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_comLimit = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex))) {
        vlSelfRef.__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_comLimit 
            = (1U | (0xfeU & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                              [0U] << 1U)));
    }
    vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_comLimit = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex))) {
        vlSelfRef.__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_comLimit 
            = (1U | (0xfeU & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                              [0U] << 1U)));
    }
    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tvalProv = 0ULL;
    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tvalProv = 0ULL;
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
            if ((6U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags))) {
                if (((0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags)) 
                     & (5U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags)))) {
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tvalProv 
                        = (((QData)((IData)(((vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[2U] 
                                              << 0xeU) 
                                             | (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[1U] 
                                                >> 0x12U)))) 
                            << 8U) | (QData)((IData)(
                                                     (1U 
                                                      | (0xfeU 
                                                         & (vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                            >> 0x18U))))));
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
            if ((6U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags))) {
                if (((0U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags)) 
                     & (5U != (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags)))) {
                    vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tvalProv 
                        = (((QData)((IData)(((vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[2U] 
                                              << 0xeU) 
                                             | (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[1U] 
                                                >> 0x12U)))) 
                            << 8U) | (QData)((IData)(
                                                     (1U 
                                                      | (0xfeU 
                                                         & (vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c[0U] 
                                                            >> 0x18U))))));
                }
            }
        }
    }
    vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup = 0U;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__offs = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__tvalSelect__DOT__curTVal = 0ULL;
        vlSelfRef.__Vdly__tvalSelect__DOT__invalidateCurTVal = 0U;
        vlSelfRef.__Vdly__tvalSelect__DOT__curTVal 
            = (0xfffffffffeULL & vlSelfRef.__Vdly__tvalSelect__DOT__curTVal);
        __VdlySet__DE_uop__v0 = 1U;
    } else {
        vlSelfRef.__Vdly__tvalSelect__DOT__invalidateCurTVal 
            = vlSelfRef.__PVT__tvalSelect__DOT__invalidateCurTVal_c;
        if (vlSelfRef.__PVT__tvalSelect__DOT__invalidateCurTVal) {
            vlSelfRef.__Vdly__tvalSelect__DOT__curTVal 
                = (0xffffffff00ULL & vlSelfRef.__Vdly__tvalSelect__DOT__curTVal);
        }
        if ((1U & (((IData)(vlSelfRef.__PVT__tvalSelect__DOT__earliest) 
                    & ((~ vlSelfRef.branch[0U]) | VL_GTS_III(32, 0U, 
                                                             VL_EXTENDS_II(32,7, 
                                                                           (0x7fU 
                                                                            & ((IData)(
                                                                                (vlSelfRef.__PVT__tvalSelect__DOT__earliest 
                                                                                >> 1U)) 
                                                                               - 
                                                                               ((vlSelfRef.branch[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.branch[0U] 
                                                                                >> 0x15U)))))))) 
                   & ((~ (IData)(vlSelfRef.__PVT__tvalSelect__DOT__curTVal)) 
                      | VL_LTES_III(32, 0U, VL_EXTENDS_II(32,7, 
                                                          (0x7fU 
                                                           & ((IData)(
                                                                      (vlSelfRef.__PVT__tvalSelect__DOT__curTVal 
                                                                       >> 1U)) 
                                                              - (IData)(
                                                                        (vlSelfRef.__PVT__tvalSelect__DOT__earliest 
                                                                         >> 1U)))))))))) {
            vlSelfRef.__Vdly__tvalSelect__DOT__curTVal 
                = (1ULL | (0xfffffffffeULL & vlSelfRef.__PVT__tvalSelect__DOT__earliest));
            vlSelfRef.__Vdly__tvalSelect__DOT__invalidateCurTVal = 0U;
        }
        if ((1U & vlSelfRef.branch[0U])) {
            __VdlySet__DE_uop__v8 = 1U;
        } else if (vlSelfRef.__Vcellinp__idec__en) {
            __VdlyVal__DE_uop__v16[0U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [0U][0U];
            __VdlyVal__DE_uop__v16[1U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [0U][1U];
            __VdlyVal__DE_uop__v16[2U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [0U][2U];
            __VdlySet__DE_uop__v16 = 1U;
            __VdlyVal__DE_uop__v17[0U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [1U][0U];
            __VdlyVal__DE_uop__v17[1U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [1U][1U];
            __VdlyVal__DE_uop__v17[2U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [1U][2U];
            __VdlyVal__DE_uop__v18[0U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [2U][0U];
            __VdlyVal__DE_uop__v18[1U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [2U][1U];
            __VdlyVal__DE_uop__v18[2U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [2U][2U];
            __VdlyVal__DE_uop__v19[0U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [3U][0U];
            __VdlyVal__DE_uop__v19[1U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [3U][1U];
            __VdlyVal__DE_uop__v19[2U] = vlSelfRef.__PVT__idec__DOT__uopsComb
                [3U][2U];
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ = 0ULL;
    } else {
        if (vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreDataLoad.sv:65: Assertion failed in %NTop.soc.core.stDataLd.genblk1[0]: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreDataLoad.sv", 65, "");
                }
            }
            vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ 
                = ((0xffULL & vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ) 
                   | ((QData)((IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__readDataShifted)) 
                      << 8U));
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO)) 
                   | (vlSelfRef.branch[0U] & ((vlSelfRef.branch[0U] 
                                               >> 6U) 
                                              | VL_LTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,7, 
                                                                         (0x7fU 
                                                                          & ((IData)(
                                                                                (vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ 
                                                                                >> 1U)) 
                                                                             - 
                                                                             ((vlSelfRef.branch[0U] 
                                                                               << 0x12U) 
                                                                              | (vlSelfRef.branch[0U] 
                                                                                >> 0xeU))))))))))) {
            vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ = 0ULL;
        }
        if (((vlSelfRef.__PVT__stLookupUOp[0U] & vlSelfRef.__PVT__stLookupUOp_ready
              [0U]) & ((~ vlSelfRef.branch[0U]) | (
                                                   (~ 
                                                    (vlSelfRef.branch[0U] 
                                                     >> 6U)) 
                                                   & VL_GTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,7, 
                                                                               (0x7fU 
                                                                                & ((vlSelfRef.__PVT__stLookupUOp
                                                                                [0U] 
                                                                                >> 1U) 
                                                                                - 
                                                                                ((vlSelfRef.branch[0U] 
                                                                                << 0x12U) 
                                                                                | (vlSelfRef.branch[0U] 
                                                                                >> 0xeU)))))))))) {
            vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ 
                = ((0xffffffff00ULL & vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ) 
                   | (IData)((IData)((1U | (0xfeU & 
                                            vlSelfRef.__PVT__stLookupUOp
                                            [0U])))));
            if ((0x4000U & vlSelfRef.__PVT__stLookupUOp
                 [0U])) {
                __Vfunc_stDataLd__DOT__ShiftData__1__offs 
                    = (3U & (vlSelfRef.__PVT__stLookupUOp
                             [0U] >> 0xfU));
                __Vfunc_stDataLd__DOT__ShiftData__1__raw 
                    = (((- (IData)((1U & (vlSelfRef.__PVT__stLookupUOp
                                          [0U] >> 0xdU)))) 
                        << 6U) | (0x3fU & (vlSelfRef.__PVT__stLookupUOp
                                           [0U] >> 8U)));
                __Vfunc_stDataLd__DOT__ShiftData__1__shifted = 0U;
                if ((0U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__1__offs))) {
                    __Vfunc_stDataLd__DOT__ShiftData__1__shifted 
                        = __Vfunc_stDataLd__DOT__ShiftData__1__raw;
                } else if ((1U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__1__offs))) {
                    __Vfunc_stDataLd__DOT__ShiftData__1__shifted 
                        = ((0xffff00ffU & __Vfunc_stDataLd__DOT__ShiftData__1__shifted) 
                           | (0xff00U & (__Vfunc_stDataLd__DOT__ShiftData__1__raw 
                                         << 8U)));
                } else if ((2U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__1__offs))) {
                    __Vfunc_stDataLd__DOT__ShiftData__1__shifted 
                        = ((0xffffU & __Vfunc_stDataLd__DOT__ShiftData__1__shifted) 
                           | (__Vfunc_stDataLd__DOT__ShiftData__1__raw 
                              << 0x10U));
                } else if ((3U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__1__offs))) {
                    __Vfunc_stDataLd__DOT__ShiftData__1__shifted 
                        = ((0xffffffU & __Vfunc_stDataLd__DOT__ShiftData__1__shifted) 
                           | (__Vfunc_stDataLd__DOT__ShiftData__1__raw 
                              << 0x18U));
                }
                __Vfunc_stDataLd__DOT__ShiftData__1__Vfuncout 
                    = __Vfunc_stDataLd__DOT__ShiftData__1__shifted;
                vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ 
                    = ((0xffULL & vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ) 
                       | ((QData)((IData)(__Vfunc_stDataLd__DOT__ShiftData__1__Vfuncout)) 
                          << 8U));
            } else {
                vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup = 1U;
                vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__offs 
                    = (3U & (vlSelfRef.__PVT__stLookupUOp
                             [0U] >> 0xfU));
            }
        }
    }
    vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup = 0U;
    vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__offs = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ = 0ULL;
    } else {
        if (vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreDataLoad.sv:65: Assertion failed in %NTop.soc.core.stDataLd.genblk1[1]: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreDataLoad.sv", 65, "");
                }
            }
            vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ 
                = ((0xffULL & vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ) 
                   | ((QData)((IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__readDataShifted)) 
                      << 8U));
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO)) 
                   | (vlSelfRef.branch[0U] & ((vlSelfRef.branch[0U] 
                                               >> 6U) 
                                              | VL_LTS_III(32, 0U, 
                                                           VL_EXTENDS_II(32,7, 
                                                                         (0x7fU 
                                                                          & ((IData)(
                                                                                (vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ 
                                                                                >> 1U)) 
                                                                             - 
                                                                             ((vlSelfRef.branch[0U] 
                                                                               << 0x12U) 
                                                                              | (vlSelfRef.branch[0U] 
                                                                                >> 0xeU))))))))))) {
            vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ = 0ULL;
        }
        if (((vlSelfRef.__PVT__stLookupUOp[1U] & vlSelfRef.__PVT__stLookupUOp_ready
              [1U]) & ((~ vlSelfRef.branch[0U]) | (
                                                   (~ 
                                                    (vlSelfRef.branch[0U] 
                                                     >> 6U)) 
                                                   & VL_GTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,7, 
                                                                               (0x7fU 
                                                                                & ((vlSelfRef.__PVT__stLookupUOp
                                                                                [1U] 
                                                                                >> 1U) 
                                                                                - 
                                                                                ((vlSelfRef.branch[0U] 
                                                                                << 0x12U) 
                                                                                | (vlSelfRef.branch[0U] 
                                                                                >> 0xeU)))))))))) {
            vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ 
                = ((0xffffffff00ULL & vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ) 
                   | (IData)((IData)((1U | (0xfeU & 
                                            vlSelfRef.__PVT__stLookupUOp
                                            [1U])))));
            if ((0x4000U & vlSelfRef.__PVT__stLookupUOp
                 [1U])) {
                __Vfunc_stDataLd__DOT__ShiftData__3__offs 
                    = (3U & (vlSelfRef.__PVT__stLookupUOp
                             [1U] >> 0xfU));
                __Vfunc_stDataLd__DOT__ShiftData__3__raw 
                    = (((- (IData)((1U & (vlSelfRef.__PVT__stLookupUOp
                                          [1U] >> 0xdU)))) 
                        << 6U) | (0x3fU & (vlSelfRef.__PVT__stLookupUOp
                                           [1U] >> 8U)));
                __Vfunc_stDataLd__DOT__ShiftData__3__shifted = 0U;
                if ((0U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__3__offs))) {
                    __Vfunc_stDataLd__DOT__ShiftData__3__shifted 
                        = __Vfunc_stDataLd__DOT__ShiftData__3__raw;
                } else if ((1U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__3__offs))) {
                    __Vfunc_stDataLd__DOT__ShiftData__3__shifted 
                        = ((0xffff00ffU & __Vfunc_stDataLd__DOT__ShiftData__3__shifted) 
                           | (0xff00U & (__Vfunc_stDataLd__DOT__ShiftData__3__raw 
                                         << 8U)));
                } else if ((2U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__3__offs))) {
                    __Vfunc_stDataLd__DOT__ShiftData__3__shifted 
                        = ((0xffffU & __Vfunc_stDataLd__DOT__ShiftData__3__shifted) 
                           | (__Vfunc_stDataLd__DOT__ShiftData__3__raw 
                              << 0x10U));
                } else if ((3U == (IData)(__Vfunc_stDataLd__DOT__ShiftData__3__offs))) {
                    __Vfunc_stDataLd__DOT__ShiftData__3__shifted 
                        = ((0xffffffU & __Vfunc_stDataLd__DOT__ShiftData__3__shifted) 
                           | (__Vfunc_stDataLd__DOT__ShiftData__3__raw 
                              << 0x18U));
                }
                __Vfunc_stDataLd__DOT__ShiftData__3__Vfuncout 
                    = __Vfunc_stDataLd__DOT__ShiftData__3__shifted;
                vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ 
                    = ((0xffULL & vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ) 
                       | ((QData)((IData)(__Vfunc_stDataLd__DOT__ShiftData__3__Vfuncout)) 
                          << 8U));
            } else {
                vlSelfRef.__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup = 1U;
                vlSelfRef.__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__offs 
                    = (3U & (vlSelfRef.__PVT__stLookupUOp
                             [1U] >> 0xfU));
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__invert = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d = 0U;
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
        if ((0U == (0x3fU & (vlSelfRef.LD_uop[0U][1U] 
                             >> 8U)))) {
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__invert 
                = (((vlSelfRef.LD_uop[0U][5U] ^ vlSelfRef.LD_uop
                     [0U][4U]) >> 0x16U) & (0U != (
                                                   (vlSelfRef.LD_uop
                                                    [0U][4U] 
                                                    << 9U) 
                                                   | (vlSelfRef.LD_uop
                                                      [0U][3U] 
                                                      >> 0x17U))));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d 
                = ((0x400000U & vlSelfRef.LD_uop[0U][4U])
                    ? (- ((vlSelfRef.LD_uop[0U][4U] 
                           << 9U) | (vlSelfRef.LD_uop
                                     [0U][3U] >> 0x17U)))
                    : ((vlSelfRef.LD_uop[0U][4U] << 9U) 
                       | (vlSelfRef.LD_uop[0U][3U] 
                          >> 0x17U)));
        } else {
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__invert 
                = ((2U == (0x3fU & (vlSelfRef.LD_uop
                                    [0U][1U] >> 8U))) 
                   && (1U & (vlSelfRef.LD_uop[0U][5U] 
                             >> 0x16U)));
            vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d 
                = ((2U == (0x3fU & (vlSelfRef.LD_uop
                                    [0U][1U] >> 8U)))
                    ? ((0x400000U & vlSelfRef.LD_uop
                        [0U][4U]) ? (- ((vlSelfRef.LD_uop
                                         [0U][4U] << 9U) 
                                        | (vlSelfRef.LD_uop
                                           [0U][3U] 
                                           >> 0x17U)))
                        : ((vlSelfRef.LD_uop[0U][4U] 
                            << 9U) | (vlSelfRef.LD_uop
                                      [0U][3U] >> 0x17U)))
                    : ((vlSelfRef.LD_uop[0U][4U] << 9U) 
                       | (vlSelfRef.LD_uop[0U][3U] 
                          >> 0x17U)));
        }
    }
    vlSelfRef.IS_uop[3U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[3U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[3U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[3U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.IS_uop[4U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[4U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[4U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[4U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.IS_uop[1U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[1U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[1U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[1U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.IS_uop[2U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[2U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[2U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[2U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop[3U];
    vlSelfRef.IS_uop[0U][0U] = vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[0U];
    vlSelfRef.IS_uop[0U][1U] = vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[1U];
    vlSelfRef.IS_uop[0U][2U] = vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[2U];
    vlSelfRef.IS_uop[0U][3U] = vlSelfRef.__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop[3U];
    if (__VdlySet__DE_uop__v0) {
        vlSelfRef.DE_uop[0U][0U] = 0U;
        vlSelfRef.DE_uop[0U][1U] = 0U;
        vlSelfRef.DE_uop[0U][2U] = 0U;
        vlSelfRef.DE_uop[0U][0U] = (0xfffffffeU & vlSelfRef.DE_uop
                                    [0U][0U]);
        vlSelfRef.DE_uop[1U][0U] = 0U;
        vlSelfRef.DE_uop[1U][1U] = 0U;
        vlSelfRef.DE_uop[1U][2U] = 0U;
        vlSelfRef.DE_uop[1U][0U] = (0xfffffffeU & vlSelfRef.DE_uop
                                    [1U][0U]);
        vlSelfRef.DE_uop[2U][0U] = 0U;
        vlSelfRef.DE_uop[2U][1U] = 0U;
        vlSelfRef.DE_uop[2U][2U] = 0U;
        vlSelfRef.DE_uop[2U][0U] = (0xfffffffeU & vlSelfRef.DE_uop
                                    [2U][0U]);
        vlSelfRef.DE_uop[3U][0U] = 0U;
        vlSelfRef.DE_uop[3U][1U] = 0U;
        vlSelfRef.DE_uop[3U][2U] = 0U;
        vlSelfRef.DE_uop[3U][0U] = (0xfffffffeU & vlSelfRef.DE_uop
                                    [3U][0U]);
    }
    if (__VdlySet__DE_uop__v8) {
        vlSelfRef.DE_uop[0U][0U] = 0U;
        vlSelfRef.DE_uop[0U][1U] = 0U;
        vlSelfRef.DE_uop[0U][2U] = 0U;
        vlSelfRef.DE_uop[0U][0U] = (0xfffffffeU & vlSelfRef.DE_uop
                                    [0U][0U]);
        vlSelfRef.DE_uop[1U][0U] = 0U;
        vlSelfRef.DE_uop[1U][1U] = 0U;
        vlSelfRef.DE_uop[1U][2U] = 0U;
        vlSelfRef.DE_uop[1U][0U] = (0xfffffffeU & vlSelfRef.DE_uop
                                    [1U][0U]);
        vlSelfRef.DE_uop[2U][0U] = 0U;
        vlSelfRef.DE_uop[2U][1U] = 0U;
        vlSelfRef.DE_uop[2U][2U] = 0U;
        vlSelfRef.DE_uop[2U][0U] = (0xfffffffeU & vlSelfRef.DE_uop
                                    [2U][0U]);
        vlSelfRef.DE_uop[3U][0U] = 0U;
        vlSelfRef.DE_uop[3U][1U] = 0U;
        vlSelfRef.DE_uop[3U][2U] = 0U;
        vlSelfRef.DE_uop[3U][0U] = (0xfffffffeU & vlSelfRef.DE_uop
                                    [3U][0U]);
    }
    if (__VdlySet__DE_uop__v16) {
        vlSelfRef.DE_uop[0U][0U] = __VdlyVal__DE_uop__v16[0U];
        vlSelfRef.DE_uop[0U][1U] = __VdlyVal__DE_uop__v16[1U];
        vlSelfRef.DE_uop[0U][2U] = __VdlyVal__DE_uop__v16[2U];
        vlSelfRef.DE_uop[1U][0U] = __VdlyVal__DE_uop__v17[0U];
        vlSelfRef.DE_uop[1U][1U] = __VdlyVal__DE_uop__v17[1U];
        vlSelfRef.DE_uop[1U][2U] = __VdlyVal__DE_uop__v17[2U];
        vlSelfRef.DE_uop[2U][0U] = __VdlyVal__DE_uop__v18[0U];
        vlSelfRef.DE_uop[2U][1U] = __VdlyVal__DE_uop__v18[1U];
        vlSelfRef.DE_uop[2U][2U] = __VdlyVal__DE_uop__v18[2U];
        vlSelfRef.DE_uop[3U][0U] = __VdlyVal__DE_uop__v19[0U];
        vlSelfRef.DE_uop[3U][1U] = __VdlyVal__DE_uop__v19[1U];
        vlSelfRef.DE_uop[3U][2U] = __VdlyVal__DE_uop__v19[2U];
    }
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r[1U] 
        = __VdlyVal__rfMux__DOT__genblk1__DOT__compReadIdx_r__v0;
    vlSelfRef.__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r[0U] 
        = __VdlyVal__rfMux__DOT__genblk1__DOT__compReadIdx_r__v1;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex 
        = vlSelfRef.__Vdly__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex;
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex 
        = vlSelfRef.__Vdly__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex;
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__14(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__14\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ rfMux__DOT____Vlvbound_h8d481bf9__0;
    rfMux__DOT____Vlvbound_h8d481bf9__0 = 0;
    IData/*31:0*/ rfMux__DOT____Vlvbound_hae76876e__0;
    rfMux__DOT____Vlvbound_hae76876e__0 = 0;
    // Body
    vlSelfRef.__PVT__RN_uopOrdering[3U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uopOrdering
        [3U];
    vlSelfRef.__PVT__RN_uopOrdering[2U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uopOrdering
        [2U];
    vlSelfRef.__PVT__RN_uopOrdering[1U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uopOrdering
        [1U];
    vlSelfRef.__PVT__RN_uopOrdering[0U] = vlSymsp->TOP__Top__soc__core__rn.__PVT__OUT_uopOrdering
        [0U];
    vlSelfRef.PD_instrs[3U][0U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [3U][0U];
    vlSelfRef.PD_instrs[3U][1U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [3U][1U];
    vlSelfRef.PD_instrs[3U][2U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [3U][2U];
    vlSelfRef.PD_instrs[3U][3U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [3U][3U];
    vlSelfRef.PD_instrs[2U][0U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [2U][0U];
    vlSelfRef.PD_instrs[2U][1U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [2U][1U];
    vlSelfRef.PD_instrs[2U][2U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [2U][2U];
    vlSelfRef.PD_instrs[2U][3U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [2U][3U];
    vlSelfRef.PD_instrs[1U][0U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [1U][0U];
    vlSelfRef.PD_instrs[1U][1U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [1U][1U];
    vlSelfRef.PD_instrs[1U][2U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [1U][2U];
    vlSelfRef.PD_instrs[1U][3U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [1U][3U];
    vlSelfRef.PD_instrs[0U][0U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [0U][0U];
    vlSelfRef.PD_instrs[0U][1U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [0U][1U];
    vlSelfRef.PD_instrs[0U][2U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [0U][2U];
    vlSelfRef.PD_instrs[0U][3U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_instrs
        [0U][3U];
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
    vlSelfRef.__PVT__decBranch = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        if ((1U & (~ vlSelfRef.branch[0U]))) {
            if (vlSelfRef.__Vcellinp__idec__en) {
                vlSelfRef.__PVT__decBranch = vlSelfRef.__PVT__idec__DOT__decBranch;
            }
        }
    }
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__15(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__15\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PC_readData[1U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_pcReadData
        [1U];
    vlSelfRef.__PVT__PC_readData[0U] = vlSymsp->TOP__Top__soc__core__ifetch.__PVT__OUT_pcReadData
        [0U];
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__16(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__16\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*12:0*/ cacheLineManager__DOT____Vlvbound_hc9e063bd__0;
    cacheLineManager__DOT____Vlvbound_hc9e063bd__0 = 0;
    CData/*5:0*/ __PVT__dataPrefetch__DOT__patternDetector__DOT__stride;
    __PVT__dataPrefetch__DOT__patternDetector__DOT__stride = 0;
    CData/*2:0*/ __PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ dataPrefetch__DOT__patternDetector__DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    dataPrefetch__DOT__patternDetector__DOT__penc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ dataPrefetch__DOT__patternDetector__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    dataPrefetch__DOT__patternDetector__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    QData/*32:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__issueStream_c;
    __PVT__dataPrefetch__DOT__issuer__DOT__issueStream_c = 0;
    CData/*2:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ dataPrefetch__DOT__issuer__DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0;
    dataPrefetch__DOT__issuer__DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ dataPrefetch__DOT__issuer__DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0;
    dataPrefetch__DOT__issuer__DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*2:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ dataPrefetch__DOT__issuer__DOT__issueEnc__DOT____Vlvbound_h284d0bd7__0;
    dataPrefetch__DOT__issuer__DOT__issueEnc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ dataPrefetch__DOT__issuer__DOT__issueEnc__DOT____Vlvbound_h78b6eef7__0;
    dataPrefetch__DOT__issuer__DOT__issueEnc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*2:0*/ __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter;
    __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter = 0;
    CData/*1:0*/ __Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut;
    __Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut = 0;
    SData/*11:0*/ __Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec;
    __Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec = 0;
    SData/*12:0*/ __VdlyVal__cacheLineManager__DOT__ctRead_r__v0;
    __VdlyVal__cacheLineManager__DOT__ctRead_r__v0 = 0;
    SData/*12:0*/ __VdlyVal__cacheLineManager__DOT__ctRead_r__v1;
    __VdlyVal__cacheLineManager__DOT__ctRead_r__v1 = 0;
    SData/*12:0*/ __VdlyVal__cacheLineManager__DOT__ctRead_r__v2;
    __VdlyVal__cacheLineManager__DOT__ctRead_r__v2 = 0;
    QData/*35:0*/ __VdlyVal__cacheLineManager__DOT__ctWrite_sr__v0;
    __VdlyVal__cacheLineManager__DOT__ctWrite_sr__v0 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v0;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v0 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v1;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v1 = 0;
    IData/*28:0*/ __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v4;
    __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v4 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v4;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v4 = 0;
    IData/*28:0*/ __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v5;
    __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v5 = 0;
    IData/*28:0*/ __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v6;
    __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v6 = 0;
    IData/*28:0*/ __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v7;
    __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v7 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__missSR__v8;
    __VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__missSR__v8 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v8;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v8 = 0;
    CData/*1:0*/ __VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__missSR__v9;
    __VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__missSR__v9 = 0;
    CData/*0:0*/ __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v9;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v9 = 0;
    // Body
    __Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec;
    __Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v0 = 0U;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v1 = 0U;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v4 = 0U;
    __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v8 = 0U;
    __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v9 = 0U;
    vlSelfRef.__PVT__cacheLineManager__DOT__dirty[0U] 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__dirty[0U];
    vlSelfRef.__PVT__cacheLineManager__DOT__dirty[1U] 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__dirty[1U];
    vlSelfRef.__PVT__cacheLineManager__DOT__dirty[2U] 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__dirty[2U];
    vlSelfRef.__PVT__cacheLineManager__DOT__dirty[3U] 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__dirty[3U];
    vlSelfRef.__PVT__cacheLineManager__DOT__dirty[4U] 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__dirty[4U];
    vlSelfRef.__PVT__cacheLineManager__DOT__dirty[5U] 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__dirty[5U];
    vlSelfRef.__PVT__cacheLineManager__DOT__dirty[6U] 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__dirty[6U];
    vlSelfRef.__PVT__cacheLineManager__DOT__dirty[7U] 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__dirty[7U];
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn 
        = vlSelfRef.__Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn;
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[0U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[1U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[2U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[2U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[3U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[3U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[4U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[4U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[5U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop[5U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[1U];
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U] 
        = vlSelfRef.__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[2U];
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
    __VdlyVal__cacheLineManager__DOT__ctWrite_sr__v0 
        = vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_sr
        [0U];
    cacheLineManager__DOT____Vlvbound_hc9e063bd__0 
        = vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
        [0U];
    __VdlyVal__cacheLineManager__DOT__ctRead_r__v0 
        = cacheLineManager__DOT____Vlvbound_hc9e063bd__0;
    cacheLineManager__DOT____Vlvbound_hc9e063bd__0 
        = vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
        [1U];
    __VdlyVal__cacheLineManager__DOT__ctRead_r__v1 
        = cacheLineManager__DOT____Vlvbound_hc9e063bd__0;
    cacheLineManager__DOT____Vlvbound_hc9e063bd__0 
        = vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_c
        [2U];
    __VdlyVal__cacheLineManager__DOT__ctRead_r__v2 
        = cacheLineManager__DOT____Vlvbound_hc9e063bd__0;
    vlSelfRef.__PVT__dataPrefetch__DOT__pattern = 0U;
    if (vlSymsp->TOP.rst) {
        __Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec = 0U;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__fullCond = 0U;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outValidReg = 0U;
        __Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut = 0U;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outDataReg = 0U;
        vlSelfRef.__PVT__prefetch = 0ULL;
        __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter = 6U;
        __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v0 = 1U;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__baseMiss = 0U;
        __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v1 = 1U;
    } else {
        __Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec 
            = ((0xffeU & (IData)(__Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec)) 
               | (1U & (((IData)(1U) + (0x3ffU & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec) 
                                                  >> 2U))) 
                        >> 0xaU)));
        __Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec 
            = ((3U & (IData)(__Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec)) 
               | (0xffcU & (((IData)(1U) + ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec) 
                                            >> 2U)) 
                            << 2U)));
        if ((1U & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec))) {
            __Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec 
                = ((0xffdU & (IData)(__Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec)) 
                   | (2U & ((~ ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec) 
                                >> 1U)) << 1U)));
        }
        if (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doInsert) 
             != (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doExtract))) {
            vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__fullCond 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doInsert;
        }
        if (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missAck) {
            vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outValidReg = 0U;
        }
        if (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outputReady) {
            vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outDataReg = 0U;
        }
        if (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doExtract) {
            vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outValidReg = 1U;
            __Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut)));
            vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outDataReg 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem
                [vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut];
        }
        if (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueReady) {
            vlSelfRef.__PVT__prefetch = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__prefetch_c;
        }
        if ((1U & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter))) {
            __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter 
                = ((1U & (IData)(__Vdly__dataPrefetch__DOT__patternDetector__DOT__iter)) 
                   | (6U & (((IData)(1U) + ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter) 
                                            >> 1U)) 
                            << 1U)));
            if (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_c) 
                 & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEncValid))) {
                __VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__missSR__v8 
                    = (3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter) 
                             >> 1U));
                __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v8 = 1U;
                vlSelfRef.__PVT__dataPrefetch__DOT__pattern 
                    = (1U | (((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEnc) 
                              << 0x1bU) | (0x7fffffeU 
                                           & ((vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr 
                                               + VL_SHIFTR_III(26,26,32, 
                                                               (0x3ffffffU 
                                                                & (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr 
                                                                   - 
                                                                   (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__baseMiss 
                                                                    >> 3U))), 1U)) 
                                              << 1U))));
                __VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__missSR__v9 
                    = (3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_c) 
                             >> 1U));
                __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v9 = 1U;
                __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter = 6U;
            }
            if ((3U == (3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter) 
                              >> 1U)))) {
                __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter = 6U;
            }
            vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr_c;
        }
        if ((vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__miss 
             & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missAck))) {
            __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter = 1U;
            vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr_c;
            __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v4 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__miss;
            __VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v4 = 1U;
            __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v5 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                [0U];
            __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v6 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                [1U];
            __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v7 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                [2U];
            vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__baseMiss 
                = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR
                [3U];
        }
    }
    vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__q 
        = vlSelfRef.__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r[0U];
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
    vlSelfRef.__PVT__cacheLineManager__DOT__ctWrite_sr[1U] 
        = __VdlyVal__cacheLineManager__DOT__ctWrite_sr__v0;
    vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_r[0U] 
        = __VdlyVal__cacheLineManager__DOT__ctRead_r__v0;
    vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_r[1U] 
        = __VdlyVal__cacheLineManager__DOT__ctRead_r__v1;
    vlSelfRef.__PVT__cacheLineManager__DOT__ctRead_r[2U] 
        = __VdlyVal__cacheLineManager__DOT__ctRead_r__v2;
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec 
        = __Vdly__dataPrefetch__DOT__issuer__DOT__usefulDec;
    if (vlSelfRef.__VdlySet__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0) {
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem[vlSelfRef.__VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0;
    }
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut 
        = __Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut;
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter 
        = __Vdly__dataPrefetch__DOT__patternDetector__DOT__iter;
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
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__equal 
        = ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn) 
           == (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut));
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missAck 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter)) 
                 | (3U == (3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__iter) 
                                 >> 1U)))));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__miss 
        = ((vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outDataReg 
            << 1U) | (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outValidReg));
    if (__VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v0) {
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[0U] = 0U;
    }
    if (__VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v1) {
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[1U] = 0U;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[2U] = 0U;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[3U] = 0U;
    }
    if (__VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v4) {
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[0U] 
            = __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v4;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[1U] 
            = __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v5;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[2U] 
            = __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v6;
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[3U] 
            = __VdlyVal__dataPrefetch__DOT__patternDetector__DOT__missSR__v7;
    }
    if (__VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v8) {
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[__VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__missSR__v8] = 0U;
    }
    if (__VdlySet__dataPrefetch__DOT__patternDetector__DOT__missSR__v9) {
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[__VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__missSR__v9] = 0U;
    }
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outputReady 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outValidReg)) 
                 | (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__missAck)));
    __PVT__dataPrefetch__DOT__patternDetector__DOT__stride 
        = (0x3fU & ((vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr 
                     - (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__baseMiss 
                        >> 3U)) >> 1U));
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
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doExtract 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__fullCond)) 
               & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__equal))) 
           & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outputReady));
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEncValid = 1U;
    if ((1U != (IData)(__PVT__dataPrefetch__DOT__patternDetector__DOT__stride))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEncValid = 0U;
    }
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEnc 
        = ((1U == (IData)(__PVT__dataPrefetch__DOT__patternDetector__DOT__stride))
            ? 2U : 0U);
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
    __PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    dataPrefetch__DOT__issuer__DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vcellout__freeEnc____pinNumber2[0U] 
        = dataPrefetch__DOT__issuer__DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0;
    dataPrefetch__DOT__issuer__DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vcellout__freeEnc____pinNumber3[0U] 
        = dataPrefetch__DOT__issuer__DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    dataPrefetch__DOT__issuer__DOT__issueEnc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vcellout__issueEnc____pinNumber2[0U] 
        = dataPrefetch__DOT__issuer__DOT__issueEnc__DOT____Vlvbound_h284d0bd7__0;
    dataPrefetch__DOT__issuer__DOT__issueEnc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vcellout__issueEnc____pinNumber3[0U] 
        = dataPrefetch__DOT__issuer__DOT__issueEnc__DOT____Vlvbound_h78b6eef7__0;
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
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__free_c 
        = ((vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vcellout__freeEnc____pinNumber2
            [0U] << 1U) | vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vcellout__freeEnc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c 
        = ((vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vcellout__issueEnc____pinNumber2
            [0U] << 1U) | vlSelfRef.dataPrefetch__DOT__issuer__DOT____Vcellout__issueEnc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    __PVT__dataPrefetch__DOT__issuer__DOT__issueStream_c 
        = vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streams
        [(3U & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
                >> 1U))];
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__prefetch_c = 0ULL;
    if ((1U & (IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c))) {
        vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__prefetch_c 
            = (1ULL | ((QData)((IData)(VL_SHIFTL_III(32,32,32, 
                                                     ((0x3ffffffU 
                                                       & (IData)(
                                                                 (__PVT__dataPrefetch__DOT__issuer__DOT__issueStream_c 
                                                                  >> 3U))) 
                                                      + 
                                                      ((3U 
                                                        & (IData)(
                                                                  (__PVT__dataPrefetch__DOT__issuer__DOT__issueStream_c 
                                                                   >> 0x1fU))) 
                                                       * 
                                                       vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c
                                                       [
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__dataPrefetch__DOT__issuer__DOT__issue_c) 
                                                           >> 1U))])), 6U))) 
                       << 1U));
    }
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    __PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    dataPrefetch__DOT__patternDetector__DOT__penc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.dataPrefetch__DOT__patternDetector__DOT____Vcellout__penc____pinNumber2[0U] 
        = dataPrefetch__DOT__patternDetector__DOT__penc__DOT____Vlvbound_h284d0bd7__0;
    dataPrefetch__DOT__patternDetector__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.dataPrefetch__DOT__patternDetector__DOT____Vcellout__penc____pinNumber3[0U] 
        = dataPrefetch__DOT__patternDetector__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_c 
        = ((vlSelfRef.dataPrefetch__DOT__patternDetector__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.dataPrefetch__DOT__patternDetector__DOT____Vcellout__penc____pinNumber3
           [0U]);
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__17(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__17\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT____Vlvbound_h284d0bd7__0;
    lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT____Vlvbound_h78b6eef7__0;
    lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*2:0*/ __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0;
    lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0;
    lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*2:0*/ __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT____Vlvbound_h284d0bd7__0;
    lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT____Vlvbound_h78b6eef7__0;
    lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*2:0*/ __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*1:0*/ lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0;
    lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0 = 0;
    CData/*0:0*/ lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0;
    lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*2:0*/ __PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHit_c;
    __PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHit_c = 0;
    CData/*0:0*/ cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3;
    cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3 = 0;
    // Body
    vlSelfRef.__PVT__LSU_MC_if[0U] = vlSelfRef.__Vdly__LSU_MC_if[0U];
    vlSelfRef.__PVT__LSU_MC_if[1U] = vlSelfRef.__Vdly__LSU_MC_if[1U];
    vlSelfRef.__PVT__LSU_MC_if[2U] = vlSelfRef.__Vdly__LSU_MC_if[2U];
    vlSelfRef.__PVT__LSU_MC_if[3U] = vlSelfRef.__Vdly__LSU_MC_if[3U];
    vlSelfRef.__PVT__LSU_MC_if[4U] = vlSelfRef.__Vdly__LSU_MC_if[4U];
    vlSelfRef.__PVT__LSU_MC_if[5U] = vlSelfRef.__Vdly__LSU_MC_if[5U];
    vlSelfRef.__PVT__LSU_MC_if[6U] = vlSelfRef.__Vdly__LSU_MC_if[6U];
    vlSelfRef.__PVT__LSU_MC_if[7U] = vlSelfRef.__Vdly__LSU_MC_if[7U];
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v0) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v4) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][0U] 
            = (0x20000U | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v5) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][1U] 
            = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v5) 
                             << 0x19U));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][2U] 
            = ((0x1fffffeU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [0U][2U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v5) 
                             >> 7U));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v6) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][2U] 
            = ((0x1fffe01U & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [0U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v6) 
                                           << 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v7) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][2U] 
            = ((0x1fe01ffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [0U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v7) 
                                           << 9U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v8) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][2U] 
            = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [0U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v8) 
                                           << 0x11U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v9) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][0U] 
            = (0x20000U | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v10) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][1U] 
            = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v10) 
                             << 0x19U));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][2U] 
            = ((0x1fffffeU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [1U][2U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v10) 
                             >> 7U));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v11) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][2U] 
            = ((0x1fffe01U & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [1U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v11) 
                                           << 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v12) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][2U] 
            = ((0x1fe01ffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [1U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v12) 
                                           << 9U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v13) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][2U] 
            = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [1U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v13) 
                                           << 0x11U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v14) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][0U] 
            = (0x20000U | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
               [2U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v15) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][1U] 
            = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [2U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v15) 
                             << 0x19U));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][2U] 
            = ((0x1fffffeU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [2U][2U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v15) 
                             >> 7U));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v16) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][2U] 
            = ((0x1fffe01U & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [2U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v16) 
                                           << 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v17) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][2U] 
            = ((0x1fe01ffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [2U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v17) 
                                           << 9U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v18) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][2U] 
            = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [2U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v18) 
                                           << 0x11U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v19) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][0U] 
            = (0x20000U | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
               [3U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v20) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][1U] 
            = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [3U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v20) 
                             << 0x19U));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][2U] 
            = ((0x1fffffeU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [3U][2U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v20) 
                             >> 7U));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v21) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][2U] 
            = ((0x1fffe01U & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [3U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v21) 
                                           << 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v22) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][2U] 
            = ((0x1fe01ffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [3U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v22) 
                                           << 9U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v23) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][2U] 
            = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries
                [3U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v23) 
                                           << 0x11U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25][0U] 
            = vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25[0U];
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25][1U] 
            = vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25[1U];
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25][2U] 
            = vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25[2U];
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v26) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[0U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v27) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[1U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v28) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[2U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v29) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[3U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v0) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][2U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v4) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][0U] 
            = (0x20000U | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v5) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][1U] 
            = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [0U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v5) 
                             << 0x19U));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][2U] 
            = ((0x1fffffeU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [0U][2U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v5) 
                             >> 7U));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v6) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][2U] 
            = ((0x1fffe01U & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [0U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v6) 
                                           << 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v7) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][2U] 
            = ((0x1fe01ffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [0U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v7) 
                                           << 9U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v8) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][2U] 
            = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [0U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v8) 
                                           << 0x11U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v9) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][0U] 
            = (0x20000U | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v10) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][1U] 
            = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [1U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v10) 
                             << 0x19U));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][2U] 
            = ((0x1fffffeU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [1U][2U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v10) 
                             >> 7U));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v11) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][2U] 
            = ((0x1fffe01U & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [1U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v11) 
                                           << 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v12) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][2U] 
            = ((0x1fe01ffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [1U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v12) 
                                           << 9U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v13) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][2U] 
            = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [1U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v13) 
                                           << 0x11U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v14) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][0U] 
            = (0x20000U | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
               [2U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v15) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][1U] 
            = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [2U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v15) 
                             << 0x19U));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][2U] 
            = ((0x1fffffeU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [2U][2U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v15) 
                             >> 7U));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v16) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][2U] 
            = ((0x1fffe01U & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [2U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v16) 
                                           << 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v17) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][2U] 
            = ((0x1fe01ffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [2U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v17) 
                                           << 9U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v18) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][2U] 
            = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [2U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v18) 
                                           << 0x11U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v19) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][0U] 
            = (0x20000U | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
               [3U][0U]);
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v20) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][1U] 
            = ((0x1ffffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [3U][1U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v20) 
                             << 0x19U));
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][2U] 
            = ((0x1fffffeU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [3U][2U]) | ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v20) 
                             >> 7U));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v21) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][2U] 
            = ((0x1fffe01U & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [3U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v21) 
                                           << 1U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v22) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][2U] 
            = ((0x1fe01ffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [3U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v22) 
                                           << 9U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v23) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][2U] 
            = ((0x1ffffU & vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries
                [3U][2U]) | (0x1ffffffU & ((IData)(vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v23) 
                                           << 0x11U)));
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25][0U] 
            = vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25[0U];
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25][1U] 
            = vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25[1U];
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[vlSelfRef.__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25][2U] 
            = vlSelfRef.__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25[2U];
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v26) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[0U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v27) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[1U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v28) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[2U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v29) {
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][0U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][1U] = 0U;
        vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[3U][2U] = 0U;
    }
    vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[0U] 
        = vlSelfRef.__PVT__CLM_ctResult[((2U >= vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r
                                          [1U]) ? vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r
                                         [1U] : 0U)][0U];
    vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[1U] 
        = vlSelfRef.__PVT__CLM_ctResult[((2U >= vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r
                                          [1U]) ? vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r
                                         [1U] : 0U)][1U];
    vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U] 
        = vlSelfRef.__PVT__CLM_ctResult[((2U >= vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r
                                          [1U]) ? vlSelfRef.__PVT__cacheLineManager__DOT__readIdx_r
                                         [1U] : 0U)][2U];
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3 = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                          & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.genblk2[0].ohEncLd.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3) 
                 | (IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                           >> 1U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.genblk2[0].ohEncLd.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3) 
                 | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                    >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                           >> 2U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.genblk2[0].ohEncLd.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3) 
                 | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                    >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                           >> 3U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.genblk2[0].ohEncLd.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3 
        = ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3) 
           | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
              >> 3U));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2 
        = (2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2 
        = ((2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2)) 
           | (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2) 
                    | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                       >> 1U))));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2 
        = ((2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2)) 
           | (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2) 
                    | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                       >> 3U))));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2 
        = (1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2 
        = ((1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2)) 
                    | (0x7ffffffeU & ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                                      >> 1U)))));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2 
        = ((1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2)) 
           | ((IData)((((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2) 
                        >> 1U) | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c) 
                                  >> 3U))) << 1U));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3 = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                          & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.genblk2[1].ohEncLd.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3) 
                 | (IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                           >> 1U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.genblk2[1].ohEncLd.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3) 
                 | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                    >> 1U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                           >> 2U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.genblk2[1].ohEncLd.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3 
        = (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3) 
                 | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                    >> 2U)));
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                           >> 3U) & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3))))) {
            VL_WRITEF_NX("[%0t] %%Error: OHEncoder.sv:12: Assertion failed in %NTop.soc.core.lsu.genblk2[1].ohEncLd.genblk1.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("src/lib/OHEncoder.sv", 12, "");
        }
    }
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3 
        = ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3) 
           | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
              >> 3U));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2 
        = (2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2 
        = ((2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2)) 
           | (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2) 
                    | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                       >> 1U))));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2 
        = ((2U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2)) 
           | (1U & ((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2) 
                    | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                       >> 3U))));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2 
        = (1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2 
        = ((1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2)) 
                    | (0x7ffffffeU & ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                                      >> 1U)))));
    vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2 
        = ((1U & (IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2)) 
           | ((IData)((((IData)(vlSelfRef.lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2) 
                        >> 1U) | ((IData)(vlSelfRef.__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c) 
                                  >> 3U))) << 1U));
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
    vlSelfRef.__PVT__OUT_memc[2U][0U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[0U];
    vlSelfRef.__PVT__OUT_memc[2U][1U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[1U];
    vlSelfRef.__PVT__OUT_memc[2U][2U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[2U];
    vlSelfRef.__PVT__OUT_memc[2U][3U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[3U];
    vlSelfRef.__PVT__OUT_memc[2U][4U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[4U];
    vlSelfRef.__PVT__OUT_memc[2U][5U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[5U];
    vlSelfRef.__PVT__OUT_memc[2U][6U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[6U];
    vlSelfRef.__PVT__OUT_memc[2U][7U] = vlSelfRef.__PVT__lsu__DOT__BLSU_memc[7U];
    vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c 
        = ((0xeU & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c)) 
           | (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[0U] 
              & ((0xfffffU & (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[0U] 
                              >> 1U)) == (0xfffffU 
                                          & (IData)(
                                                    (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                     [1U] 
                                                     >> 0xdU))))));
    vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c 
        = ((0xdU & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c)) 
           | (0xffeU & ((vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[0U] 
                         >> 0x14U) & (((0xfffffU & 
                                        ((vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[1U] 
                                          << 0xaU) 
                                         | (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[0U] 
                                            >> 0x16U))) 
                                       == (0xfffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                      [1U] 
                                                      >> 0xdU)))) 
                                      << 1U))));
    vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c 
        = ((0xbU & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c)) 
           | (0xfffffcU & ((vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[1U] 
                            >> 8U) & (((0xfffffU & 
                                        (vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[1U] 
                                         >> 0xbU)) 
                                       == (0xfffffU 
                                           & (IData)(
                                                     (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                      [1U] 
                                                      >> 0xdU)))) 
                                      << 2U))));
    vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c 
        = ((7U & (IData)(vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c)) 
           | (8U & ((vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[1U] 
                     >> 0x1cU) & (((0xfffffU & vlSelfRef.cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult[2U]) 
                                   == (0xfffffU & (IData)(
                                                          (vlSelfRef.__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp
                                                           [1U] 
                                                           >> 0xdU)))) 
                                  << 3U))));
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
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
        [2U];
    __PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHit_c 
        = (((IData)(vlSelfRef.cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2) 
            << 1U) | (IData)(cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber3));
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
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
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__deqEnc____pinNumber2[0U] 
        = lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT____Vlvbound_h284d0bd7__0;
    lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__deqEnc____pinNumber3[0U] 
        = lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__freeEnc____pinNumber2[0U] 
        = lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0;
    lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__freeEnc____pinNumber3[0U] 
        = lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__deqEnc____pinNumber2[0U] 
        = lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT____Vlvbound_h284d0bd7__0;
    lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__deqEnc____pinNumber3[0U] 
        = lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0 
        = (3U & ((IData)(__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__freeEnc____pinNumber2[0U] 
        = lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT____Vlvbound_h284d0bd7__0;
    lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__freeEnc____pinNumber3[0U] 
        = lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c 
        = ((vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__deqEnc____pinNumber2
            [0U] << 1U) | vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__deqEnc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enq 
        = ((vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__freeEnc____pinNumber2
            [0U] << 1U) | vlSelfRef.lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__freeEnc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c 
        = ((vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__deqEnc____pinNumber2
            [0U] << 1U) | vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__deqEnc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enq 
        = ((vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__freeEnc____pinNumber2
            [0U] << 1U) | vlSelfRef.lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__freeEnc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__lsu__DOT__LRB_ready[1U] = (1U 
                                                & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enq));
    vlSelfRef.__PVT__lsu__DOT__LRB_ready[0U] = (1U 
                                                & (IData)(vlSelfRef.__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enq));
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__18(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__18\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cacheLineManager__DOT__canOutputMiss 
        = (1U & ((~ (vlSymsp->TOP__Top__soc.MemC_stat[0U] 
                     >> 2U)) | (0U == (0xfU & vlSelfRef.__PVT__LSU_MC_if[0U]))));
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__19(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__19\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*40:0*/ intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__0__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 = 0;
    QData/*40:0*/ intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__1__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 = 0;
    QData/*40:0*/ intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0;
    intPortsGen__BRA__2__KET____DOT__wbUOpSplit__DOT____Vlvbound_h80edd1ac__0 = 0;
    CData/*6:0*/ __Vfunc_lb__DOT__GetLoadSqN__5__Vfuncout;
    __Vfunc_lb__DOT__GetLoadSqN__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_lb__DOT__GetLoadSqN__5__idx;
    __Vfunc_lb__DOT__GetLoadSqN__5__idx = 0;
    CData/*2:0*/ __Vfunc_lb__DOT__GetLoadSqN__5__hiBits;
    __Vfunc_lb__DOT__GetLoadSqN__5__hiBits = 0;
    CData/*6:0*/ __Vfunc_lb__DOT__GetLoadSqN__5__rv;
    __Vfunc_lb__DOT__GetLoadSqN__5__rv = 0;
    // Body
    vlSelfRef.__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs 
        = vlSelfRef.__Vdly__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs;
    vlSelfRef.__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs 
        = vlSelfRef.__Vdly__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs;
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v0) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[0U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v0) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[0U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v1) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[1U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v2) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[1U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v3) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[2U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v4) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[2U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v5) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[3U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v6) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[3U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v7) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[4U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v8) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[4U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v9) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[5U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [5U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v10) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[5U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [5U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v11) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[6U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [6U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v12) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[6U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [6U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v13) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[7U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [7U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v14) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[7U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [7U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v15) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v16) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[0U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[1U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[2U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[3U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[4U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[5U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[6U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v24) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[0U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v24;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[0U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v25) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[0U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v26) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v27) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[1U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v27;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[1U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v28) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[1U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v29) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v30) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[2U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v30;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[2U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v31) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[2U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v32) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v33) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[3U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v33;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[3U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v34) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[3U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v35) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v36) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[4U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v36;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[4U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v37) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[4U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v38) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v39) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[5U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v39;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[5U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [5U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v40) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[5U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [5U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v41) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v42) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[6U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v42;
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[6U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [6U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v43) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[6U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue
                [6U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v44) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v45) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[vlSelfRef.__VdlyDim0__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v45] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v45;
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v46) {
        vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[vlSelfRef.__VdlyDim0__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v46] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v46;
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v0) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[0U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v0) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[0U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v1) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[1U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v2) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[1U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v3) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[2U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v4) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[2U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v5) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[3U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v6) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[3U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v7) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[4U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v8) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[4U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v9) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[5U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [5U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v10) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[5U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [5U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v11) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[6U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [6U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v12) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[6U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [6U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v13) 
                         << 0x10U));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[7U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [7U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v14) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[7U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [7U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v15) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v16) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[0U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[1U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[2U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[3U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[4U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[5U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[6U] = 0U;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v24) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[0U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v24;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[0U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v25) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[0U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [0U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v26) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v27) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[1U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v27;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[1U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v28) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[1U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [1U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v29) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v30) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[2U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v30;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[2U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v31) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[2U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [2U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v32) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v33) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[3U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v33;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[3U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v34) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[3U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [3U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v35) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v36) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[4U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v36;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[4U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v37) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[4U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [4U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v38) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v39) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[5U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v39;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[5U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [5U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v40) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[5U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [5U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v41) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v42) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[6U] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v42;
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[6U] 
            = ((0x33fffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [6U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v43) 
                         << 0xeU));
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[6U] 
            = ((0xffffU & vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue
                [6U]) | ((IData)(vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v44) 
                         << 0x10U));
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v45) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[vlSelfRef.__VdlyDim0__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v45] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v45;
    }
    if (vlSelfRef.__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v46) {
        vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[vlSelfRef.__VdlyDim0__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v46] 
            = vlSelfRef.__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v46;
    }
    vlSelfRef.mispredFlush = vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_mispredFlush;
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
    vlSelfRef.__PVT__LB_maxLoadSqN = (0x7fU & ((IData)(0xfU) 
                                               + (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)));
    vlSelfRef.__Vcellout__lsu__OUT_resultUOp[1U] = vlSelfRef.lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_resultUOp;
    vlSelfRef.__Vcellout__lsu__OUT_resultUOp[0U] = vlSelfRef.lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_resultUOp;
    vlSelfRef.__PVT__LB_ldComLimit = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rst)))) {
        vlSelfRef.__PVT__LB_ldComLimit = ((0xfeU & (IData)(vlSelfRef.__PVT__LB_ldComLimit)) 
                                          | (1U & (IData)(vlSelfRef.__PVT__lb__DOT__loadRsv)));
        if ((1U & (IData)(vlSelfRef.__PVT__lb__DOT__loadRsv))) {
            __Vfunc_lb__DOT__GetLoadSqN__5__idx = (0xfU 
                                                   & ((IData)(vlSelfRef.__PVT__lb__DOT__loadRsv) 
                                                      >> 1U));
            __Vfunc_lb__DOT__GetLoadSqN__5__hiBits 
                = (7U & ((IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN) 
                         >> 4U));
            __Vfunc_lb__DOT__GetLoadSqN__5__rv = ((0x70U 
                                                   & ((((IData)(__Vfunc_lb__DOT__GetLoadSqN__5__idx) 
                                                        >= 
                                                        (0xfU 
                                                         & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastLoadSqN)))
                                                        ? (IData)(__Vfunc_lb__DOT__GetLoadSqN__5__hiBits)
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vfunc_lb__DOT__GetLoadSqN__5__hiBits))) 
                                                      << 4U)) 
                                                  | (IData)(__Vfunc_lb__DOT__GetLoadSqN__5__idx));
            __Vfunc_lb__DOT__GetLoadSqN__5__Vfuncout 
                = __Vfunc_lb__DOT__GetLoadSqN__5__rv;
            vlSelfRef.__PVT__LB_ldComLimit = ((1U & (IData)(vlSelfRef.__PVT__LB_ldComLimit)) 
                                              | ((IData)(__Vfunc_lb__DOT__GetLoadSqN__5__Vfuncout) 
                                                 << 1U));
        }
    }
    vlSelfRef.resultUOps[0U] = vlSelfRef.__Vcellout__intPortsGen__BRA__0__KET____DOT__wbUOpSplit____pinNumber3;
    vlSelfRef.resultUOps[1U] = vlSelfRef.__Vcellout__intPortsGen__BRA__1__KET____DOT__wbUOpSplit____pinNumber3;
    vlSelfRef.resultUOps[2U] = vlSelfRef.__Vcellout__intPortsGen__BRA__2__KET____DOT__wbUOpSplit____pinNumber3;
    vlSelfRef.resultUOps[4U] = vlSelfRef.__Vcellout__lsu__OUT_resultUOp
        [1U];
    vlSelfRef.resultUOps[3U] = vlSelfRef.__Vcellout__lsu__OUT_resultUOp
        [0U];
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__20(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__20\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    CData/*2:0*/ genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h1226d70d__0 = 0;
    CData/*0:0*/ genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h78b6eef7__0 = 0;
    // Body
    vlSelfRef.CSR_trapControl[0U] = ((0xfe000000U & 
                                      vlSelfRef.CSR_trapControl[0U]) 
                                     | (((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mideleg) 
                                         << 9U) | (
                                                   (((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__priv) 
                                                     << 7U) 
                                                    | ((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__interrupt) 
                                                       << 6U)) 
                                                   | (((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__interruptCause) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__interruptDelegate)))));
    vlSelfRef.CSR_trapControl[0U] = ((0x1ffffffU & 
                                      vlSelfRef.CSR_trapControl[0U]) 
                                     | ((IData)((((QData)((IData)(
                                                                  (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__stvec 
                                                                   >> 2U))) 
                                                  << 0x11U) 
                                                 | (QData)((IData)(
                                                                   ((0x10000U 
                                                                     & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__stvec 
                                                                        << 0x10U)) 
                                                                    | (IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__medeleg)))))) 
                                        << 0x19U));
    vlSelfRef.CSR_trapControl[1U] = (((IData)((((QData)((IData)(
                                                                (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__stvec 
                                                                 >> 2U))) 
                                                << 0x11U) 
                                               | (QData)((IData)(
                                                                 ((0x10000U 
                                                                   & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__stvec 
                                                                      << 0x10U)) 
                                                                  | (IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__medeleg)))))) 
                                      >> 7U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__stvec 
                                                                            >> 2U))) 
                                                           << 0x11U) 
                                                          | (QData)((IData)(
                                                                            ((0x10000U 
                                                                              & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__stvec 
                                                                                << 0x10U)) 
                                                                             | (IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__medeleg))))) 
                                                         >> 0x20U)) 
                                                << 0x19U));
    vlSelfRef.CSR_trapControl[2U] = ((0xffffff00U & 
                                      vlSelfRef.CSR_trapControl[2U]) 
                                     | ((IData)(((((QData)((IData)(
                                                                   (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__stvec 
                                                                    >> 2U))) 
                                                   << 0x11U) 
                                                  | (QData)((IData)(
                                                                    ((0x10000U 
                                                                      & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__stvec 
                                                                         << 0x10U)) 
                                                                     | (IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__medeleg))))) 
                                                 >> 0x20U)) 
                                        >> 7U));
    vlSelfRef.CSR_trapControl[2U] = ((0xffU & vlSelfRef.CSR_trapControl[2U]) 
                                     | ((IData)((((QData)((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__retvec)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   ((0x7ffffffeU 
                                                                     & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mtvec 
                                                                        >> 1U)) 
                                                                    | (1U 
                                                                       & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mtvec)))))) 
                                        << 8U));
    vlSelfRef.CSR_trapControl[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__retvec)) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 ((0x7ffffffeU 
                                                                   & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mtvec 
                                                                      >> 1U)) 
                                                                  | (1U 
                                                                     & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mtvec)))))) 
                                      >> 0x18U) | ((IData)(
                                                           ((((QData)((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__retvec)) 
                                                              << 0x1fU) 
                                                             | (QData)((IData)(
                                                                               ((0x7ffffffeU 
                                                                                & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mtvec 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mtvec))))) 
                                                            >> 0x20U)) 
                                                   << 8U));
    vlSelfRef.CSR_trapControl[4U] = (0x3fU & ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__retvec)) 
                                                         << 0x1fU) 
                                                        | (QData)((IData)(
                                                                          ((0x7ffffffeU 
                                                                            & (vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mtvec 
                                                                               >> 1U)) 
                                                                           | (1U 
                                                                              & vlSymsp->TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__PVT__mtvec))))) 
                                                       >> 0x20U)) 
                                              >> 0x18U));
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
    vlSymsp->TOP__Top__soc__core__rob.IN_interruptPending 
        = (1U & (vlSelfRef.CSR_trapControl[0U] >> 6U));
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
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [0U] << 1U) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [2U] << 1U) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [4U] << 1U) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [4U]))]);
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
            [6U] << 1U) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                   [6U]))]);
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [3U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
        [2U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((4U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [0U] << 2U)) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((4U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                  [2U] << 2U)) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                   [2U]))]);
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [1U];
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((8U & (vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                  [0U] << 3U)) | vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
           [(1U & (~ vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                   [0U]))]);
    __PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    __PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
        [0U];
    genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h1226d70d__0 
        = (7U & ((IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs) 
                 >> 1U));
    vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber2[0U] 
        = genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h1226d70d__0;
    genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h78b6eef7__0 
        = (1U & (~ (IData)(__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs)));
    vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber3[0U] 
        = genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT____Vlvbound_h78b6eef7__0;
    vlSelfRef.__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deq 
        = ((vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk2__BRA__0__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber3
           [0U]);
    vlSelfRef.__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deq 
        = ((vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber2
            [0U] << 1U) | vlSelfRef.genblk2__BRA__1__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber3
           [0U]);
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__21(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__21\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*32:0*/ __Vdly____Vcellout__pageWalker__OUT_ldUOp;
    __Vdly____Vcellout__pageWalker__OUT_ldUOp = 0;
    CData/*0:0*/ __Vdly__dtlb__DOT__ignoreCur;
    __Vdly__dtlb__DOT__ignoreCur = 0;
    CData/*0:0*/ __Vdly__trapHandler__DOT__memoryWait;
    __Vdly__trapHandler__DOT__memoryWait = 0;
    CData/*0:0*/ __VdlySet__dtlb__DOT__counters__v0;
    __VdlySet__dtlb__DOT__counters__v0 = 0;
    CData/*0:0*/ __VdlySet__dtlb__DOT__tlb__v1;
    __VdlySet__dtlb__DOT__tlb__v1 = 0;
    CData/*0:0*/ __VdlySet__dtlb__DOT__tlb__v8;
    __VdlySet__dtlb__DOT__tlb__v8 = 0;
    CData/*0:0*/ __VdlySet__dtlb__DOT__tlb__v9;
    __VdlySet__dtlb__DOT__tlb__v9 = 0;
    CData/*2:0*/ __VdlyVal__dtlb__DOT__tlb__v16;
    __VdlyVal__dtlb__DOT__tlb__v16 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v16;
    __VdlyDim0__dtlb__DOT__tlb__v16 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v16;
    __VdlyDim1__dtlb__DOT__tlb__v16 = 0;
    CData/*0:0*/ __VdlySet__dtlb__DOT__tlb__v16;
    __VdlySet__dtlb__DOT__tlb__v16 = 0;
    CData/*0:0*/ __VdlyVal__dtlb__DOT__tlb__v17;
    __VdlyVal__dtlb__DOT__tlb__v17 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v17;
    __VdlyDim0__dtlb__DOT__tlb__v17 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v17;
    __VdlyDim1__dtlb__DOT__tlb__v17 = 0;
    IData/*19:0*/ __VdlyVal__dtlb__DOT__tlb__v18;
    __VdlyVal__dtlb__DOT__tlb__v18 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v18;
    __VdlyDim0__dtlb__DOT__tlb__v18 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v18;
    __VdlyDim1__dtlb__DOT__tlb__v18 = 0;
    IData/*18:0*/ __VdlyVal__dtlb__DOT__tlb__v19;
    __VdlyVal__dtlb__DOT__tlb__v19 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v19;
    __VdlyDim0__dtlb__DOT__tlb__v19 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v19;
    __VdlyDim1__dtlb__DOT__tlb__v19 = 0;
    CData/*0:0*/ __VdlyVal__dtlb__DOT__tlb__v20;
    __VdlyVal__dtlb__DOT__tlb__v20 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v20;
    __VdlyDim0__dtlb__DOT__tlb__v20 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v20;
    __VdlyDim1__dtlb__DOT__tlb__v20 = 0;
    CData/*0:0*/ __VdlyVal__dtlb__DOT__tlb__v21;
    __VdlyVal__dtlb__DOT__tlb__v21 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v21;
    __VdlyDim0__dtlb__DOT__tlb__v21 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v21;
    __VdlyDim1__dtlb__DOT__tlb__v21 = 0;
    CData/*0:0*/ __VdlyVal__dtlb__DOT__tlb__v22;
    __VdlyVal__dtlb__DOT__tlb__v22 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v22;
    __VdlyDim0__dtlb__DOT__tlb__v22 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v22;
    __VdlyDim1__dtlb__DOT__tlb__v22 = 0;
    CData/*0:0*/ __VdlyVal__dtlb__DOT__tlb__v23;
    __VdlyVal__dtlb__DOT__tlb__v23 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v23;
    __VdlyDim0__dtlb__DOT__tlb__v23 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v23;
    __VdlyDim1__dtlb__DOT__tlb__v23 = 0;
    CData/*1:0*/ __VdlyDim0__dtlb__DOT__tlb__v24;
    __VdlyDim0__dtlb__DOT__tlb__v24 = 0;
    CData/*0:0*/ __VdlyDim1__dtlb__DOT__tlb__v24;
    __VdlyDim1__dtlb__DOT__tlb__v24 = 0;
    CData/*1:0*/ __VdlyVal__dtlb__DOT__counters__v2;
    __VdlyVal__dtlb__DOT__counters__v2 = 0;
    CData/*0:0*/ __VdlySet__dtlb__DOT__counters__v2;
    __VdlySet__dtlb__DOT__counters__v2 = 0;
    CData/*1:0*/ __VdlyVal__dtlb__DOT__counters__v3;
    __VdlyVal__dtlb__DOT__counters__v3 = 0;
    CData/*0:0*/ __VdlySet__dtlb__DOT__counters__v3;
    __VdlySet__dtlb__DOT__counters__v3 = 0;
    // Body
    __Vdly__trapHandler__DOT__memoryWait = vlSelfRef.__PVT__trapHandler__DOT__memoryWait;
    vlSelfRef.__Vdly__pageWalker__DOT__state = vlSelfRef.__PVT__pageWalker__DOT__state;
    vlSelfRef.__Vdly__pageWalker__DOT__pageWalkAddr 
        = vlSelfRef.__PVT__pageWalker__DOT__pageWalkAddr;
    vlSelfRef.__Vdly__pageWalker__DOT__pageWalkIter 
        = vlSelfRef.__PVT__pageWalker__DOT__pageWalkIter;
    __Vdly__dtlb__DOT__ignoreCur = vlSelfRef.__PVT__dtlb__DOT__ignoreCur;
    __VdlySet__dtlb__DOT__counters__v0 = 0U;
    __VdlySet__dtlb__DOT__counters__v2 = 0U;
    __VdlySet__dtlb__DOT__counters__v3 = 0U;
    __VdlySet__dtlb__DOT__tlb__v1 = 0U;
    __VdlySet__dtlb__DOT__tlb__v8 = 0U;
    __VdlySet__dtlb__DOT__tlb__v9 = 0U;
    __VdlySet__dtlb__DOT__tlb__v16 = 0U;
    __Vdly____Vcellout__pageWalker__OUT_ldUOp = vlSelfRef.__Vcellout__pageWalker__OUT_ldUOp;
    vlSelfRef.__PVT__cacheLineManager__DOT__initialFlush 
        = vlSelfRef.__Vdly__cacheLineManager__DOT__initialFlush;
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v0) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[0U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[0U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[0U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v1) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[1U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[1U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[1U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[2U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[2U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[2U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[3U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[3U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[3U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v4) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[0U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[0U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[0U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v6) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[1U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[1U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[1U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v8) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[2U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[2U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[2U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[2U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v10) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[3U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[3U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[3U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[3U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12][0U] 
            = vlSelfRef.__VdlyVal__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12][1U] 
            = vlSelfRef.__VdlyVal__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12][2U] 
            = vlSelfRef.__VdlyVal__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12[2U];
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13) {
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v14][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue
               [vlSelfRef.__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v14][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v0) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[0U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[0U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[0U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v1) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[1U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[1U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[1U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[2U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[2U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[2U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[3U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[3U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[3U][2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v4) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[0U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[0U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[0U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v6) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[1U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[1U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[1U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v8) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[2U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[2U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[2U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[2U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [2U][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v10) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[3U][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[3U][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[3U][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[3U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [3U][0U]);
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12][0U] 
            = vlSelfRef.__VdlyVal__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12[0U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12][1U] 
            = vlSelfRef.__VdlyVal__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12[1U];
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12][2U] 
            = vlSelfRef.__VdlyVal__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12[2U];
    }
    if (vlSelfRef.__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13) {
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13][0U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13][1U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13][2U] = 0U;
        vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v14][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue
               [vlSelfRef.__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v14][0U]);
    }
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U] 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[0U];
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U] 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[1U];
    vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U] 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop[2U];
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U] 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[0U];
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U] 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[1U];
    vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U] 
        = vlSelfRef.__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop[2U];
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_r[0U] 
        = vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[0U];
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_r[1U] 
        = vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[1U];
    vlSelfRef.__PVT__trapHandler__DOT__trapInfo_r[2U] 
        = vlSelfRef.__PVT__trapHandler__DOT__trapInfo_c[2U];
    vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_r 
        = vlSelfRef.__PVT__trapHandler__DOT__trapPCSpec_c;
    vlSelfRef.__PVT__TH_stallPC = vlSelfRef.__PVT__trapHandler__DOT__OUT_dbgStallPC_c;
    vlSelfRef.__PVT__trapHandler__DOT__fetchOffs = 
        (7U & (IData)((vlSelfRef.ROB_trapUOp >> 7U)));
    vlSelfRef.__PVT__TH_clearICache = vlSelfRef.__PVT__trapHandler__DOT__OUT_clearICache_c;
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
    if (vlSymsp->TOP.rst) {
        __Vdly__trapHandler__DOT__memoryWait = 0U;
        vlSelfRef.__PVT__trapHandler__DOT__memoryWait 
            = __Vdly__trapHandler__DOT__memoryWait;
        __VdlySet__dtlb__DOT__counters__v0 = 1U;
        __Vdly__dtlb__DOT__ignoreCur = 0U;
        __VdlySet__dtlb__DOT__tlb__v1 = 1U;
    } else {
        if (vlSelfRef.__PVT__trapHandler__DOT__setMemoryWait) {
            __Vdly__trapHandler__DOT__memoryWait = 1U;
        } else if (((IData)(vlSelfRef.__PVT__trapHandler__DOT__memoryWait) 
                    & (~ (IData)(vlSelfRef.__PVT__MEM_busy)))) {
            __Vdly__trapHandler__DOT__memoryWait = 0U;
        }
        vlSelfRef.__PVT__trapHandler__DOT__memoryWait 
            = __Vdly__trapHandler__DOT__memoryWait;
        if (vlSelfRef.__PVT__TH_flushTLB) {
            __VdlySet__dtlb__DOT__tlb__v8 = 1U;
            __Vdly__dtlb__DOT__ignoreCur = 1U;
            __VdlySet__dtlb__DOT__tlb__v9 = 1U;
        } else {
            if (((IData)(vlSelfRef.__PVT__dtlb__DOT__ignoreCur) 
                 & (~ (IData)((vlSelfRef.__PVT__PW_res 
                               >> 1U))))) {
                __Vdly__dtlb__DOT__ignoreCur = 0U;
            }
            if ((((IData)(vlSelfRef.__PVT__PW_res) 
                  & (~ (IData)(vlSelfRef.__PVT__dtlb__DOT__ignoreCur))) 
                 & (0U != (3U & (IData)((vlSelfRef.__PVT__PW_res 
                                         >> 2U)))))) {
                vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx 
                    = (1U & (IData)((vlSelfRef.__PVT__PW_res 
                                     >> 0x21U)));
                vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx 
                    = vlSelfRef.__PVT__dtlb__DOT__counters
                    [vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx];
                __VdlyVal__dtlb__DOT__tlb__v16 = (7U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 4U)));
                __VdlyDim0__dtlb__DOT__tlb__v16 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v16 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
                __VdlySet__dtlb__DOT__tlb__v16 = 1U;
                __VdlyVal__dtlb__DOT__tlb__v17 = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 9U)));
                __VdlyDim0__dtlb__DOT__tlb__v17 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v17 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__dtlb__DOT__tlb__v18 = (0xfffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0xbU)));
                __VdlyDim0__dtlb__DOT__tlb__v18 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v18 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__dtlb__DOT__tlb__v19 = (0x7ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0x22U)));
                __VdlyDim0__dtlb__DOT__tlb__v19 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v19 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__dtlb__DOT__tlb__v20 = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 8U)));
                __VdlyDim0__dtlb__DOT__tlb__v20 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v20 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__dtlb__DOT__tlb__v21 = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 7U)));
                __VdlyDim0__dtlb__DOT__tlb__v21 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v21 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__dtlb__DOT__tlb__v22 = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__PW_res 
                                                             >> 0xaU)));
                __VdlyDim0__dtlb__DOT__tlb__v22 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v22 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
                __VdlyVal__dtlb__DOT__tlb__v23 = (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__PW_res 
                                                              >> 0x1fU))));
                __VdlyDim0__dtlb__DOT__tlb__v23 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v23 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
                __VdlyDim0__dtlb__DOT__tlb__v24 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx;
                __VdlyDim1__dtlb__DOT__tlb__v24 = vlSelfRef.__PVT__dtlb__DOT__unnamedblk8__DOT__idx;
            }
            if ((1U & (IData)(vlSelfRef.__PVT__dtlb__DOT__inc))) {
                __VdlyVal__dtlb__DOT__counters__v2 
                    = (3U & ((IData)(1U) + vlSelfRef.__PVT__dtlb__DOT__counters
                             [0U]));
                __VdlySet__dtlb__DOT__counters__v2 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__dtlb__DOT__inc))) {
                __VdlyVal__dtlb__DOT__counters__v3 
                    = (3U & ((IData)(1U) + vlSelfRef.__PVT__dtlb__DOT__counters
                             [1U]));
                __VdlySet__dtlb__DOT__counters__v3 = 1U;
            }
        }
    }
    vlSelfRef.__PVT__dtlb__DOT__ignoreCur = __Vdly__dtlb__DOT__ignoreCur;
    if (__VdlySet__dtlb__DOT__counters__v0) {
        vlSelfRef.__PVT__dtlb__DOT__counters[0U] = 0U;
        vlSelfRef.__PVT__dtlb__DOT__tlb[0U][0U] = 0ULL;
    }
    if (__VdlySet__dtlb__DOT__counters__v2) {
        vlSelfRef.__PVT__dtlb__DOT__counters[0U] = __VdlyVal__dtlb__DOT__counters__v2;
    }
    if (__VdlySet__dtlb__DOT__counters__v3) {
        vlSelfRef.__PVT__dtlb__DOT__counters[1U] = __VdlyVal__dtlb__DOT__counters__v3;
    }
    if (__VdlySet__dtlb__DOT__tlb__v1) {
        vlSelfRef.__PVT__dtlb__DOT__tlb[0U][1U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__counters[1U] = 0U;
        vlSelfRef.__PVT__dtlb__DOT__tlb[0U][2U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[0U][3U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[1U][0U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[1U][1U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[1U][2U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[1U][3U] = 0ULL;
    }
    if (__VdlySet__dtlb__DOT__tlb__v8) {
        vlSelfRef.__PVT__dtlb__DOT__tlb[0U][0U] = 0ULL;
    }
    if (__VdlySet__dtlb__DOT__tlb__v9) {
        vlSelfRef.__PVT__dtlb__DOT__tlb[0U][1U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[0U][2U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[0U][3U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[1U][0U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[1U][1U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[1U][2U] = 0ULL;
        vlSelfRef.__PVT__dtlb__DOT__tlb[1U][3U] = 0ULL;
    }
    if (__VdlySet__dtlb__DOT__tlb__v16) {
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v16][__VdlyDim0__dtlb__DOT__tlb__v16] 
            = ((0xffffffffffc7ULL & vlSelfRef.__PVT__dtlb__DOT__tlb
                [__VdlyDim1__dtlb__DOT__tlb__v16][__VdlyDim0__dtlb__DOT__tlb__v16]) 
               | ((QData)((IData)(__VdlyVal__dtlb__DOT__tlb__v16)) 
                  << 3U));
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v17][__VdlyDim0__dtlb__DOT__tlb__v17] 
            = ((0xfffffffffeffULL & vlSelfRef.__PVT__dtlb__DOT__tlb
                [__VdlyDim1__dtlb__DOT__tlb__v17][__VdlyDim0__dtlb__DOT__tlb__v17]) 
               | ((QData)((IData)(__VdlyVal__dtlb__DOT__tlb__v17)) 
                  << 8U));
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v18][__VdlyDim0__dtlb__DOT__tlb__v18] 
            = ((0xffffe00001ffULL & vlSelfRef.__PVT__dtlb__DOT__tlb
                [__VdlyDim1__dtlb__DOT__tlb__v18][__VdlyDim0__dtlb__DOT__tlb__v18]) 
               | ((QData)((IData)(__VdlyVal__dtlb__DOT__tlb__v18)) 
                  << 9U));
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v19][__VdlyDim0__dtlb__DOT__tlb__v19] 
            = ((0x1fffffffULL & vlSelfRef.__PVT__dtlb__DOT__tlb
                [__VdlyDim1__dtlb__DOT__tlb__v19][__VdlyDim0__dtlb__DOT__tlb__v19]) 
               | ((QData)((IData)(__VdlyVal__dtlb__DOT__tlb__v19)) 
                  << 0x1dU));
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v20][__VdlyDim0__dtlb__DOT__tlb__v20] 
            = ((0xffffffffffbfULL & vlSelfRef.__PVT__dtlb__DOT__tlb
                [__VdlyDim1__dtlb__DOT__tlb__v20][__VdlyDim0__dtlb__DOT__tlb__v20]) 
               | ((QData)((IData)(__VdlyVal__dtlb__DOT__tlb__v20)) 
                  << 6U));
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v21][__VdlyDim0__dtlb__DOT__tlb__v21] 
            = ((0xffffffffff7fULL & vlSelfRef.__PVT__dtlb__DOT__tlb
                [__VdlyDim1__dtlb__DOT__tlb__v21][__VdlyDim0__dtlb__DOT__tlb__v21]) 
               | ((QData)((IData)(__VdlyVal__dtlb__DOT__tlb__v21)) 
                  << 7U));
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v22][__VdlyDim0__dtlb__DOT__tlb__v22] 
            = ((0xfffffffffffdULL & vlSelfRef.__PVT__dtlb__DOT__tlb
                [__VdlyDim1__dtlb__DOT__tlb__v22][__VdlyDim0__dtlb__DOT__tlb__v22]) 
               | ((QData)((IData)(__VdlyVal__dtlb__DOT__tlb__v22)) 
                  << 1U));
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v23][__VdlyDim0__dtlb__DOT__tlb__v23] 
            = ((0xfffffffffffbULL & vlSelfRef.__PVT__dtlb__DOT__tlb
                [__VdlyDim1__dtlb__DOT__tlb__v23][__VdlyDim0__dtlb__DOT__tlb__v23]) 
               | ((QData)((IData)(__VdlyVal__dtlb__DOT__tlb__v23)) 
                  << 2U));
        vlSelfRef.__PVT__dtlb__DOT__tlb[__VdlyDim1__dtlb__DOT__tlb__v24][__VdlyDim0__dtlb__DOT__tlb__v24] 
            = (1ULL | vlSelfRef.__PVT__dtlb__DOT__tlb
               [__VdlyDim1__dtlb__DOT__tlb__v24][__VdlyDim0__dtlb__DOT__tlb__v24]);
    }
    vlSelfRef.__PVT__PW_res = (0x1ffffffffffffeULL 
                               & vlSelfRef.__PVT__PW_res);
    if (vlSymsp->TOP.rst) {
        __Vdly____Vcellout__pageWalker__OUT_ldUOp = 0ULL;
        vlSelfRef.__Vdly__pageWalker__DOT__state = 0U;
        vlSelfRef.__PVT__PW_res = 0ULL;
        vlSelfRef.__Vdly__pageWalker__DOT__pageWalkIter = 0U;
        vlSelfRef.__Vdly__pageWalker__DOT__pageWalkAddr = 0U;
    } else if ((1U == (IData)(vlSelfRef.__PVT__pageWalker__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.__Vcellout__pageWalker__OUT_ldUOp))) {
            if ((1U & (~ vlSelfRef.__PVT__CC_PW_LD_stall
                       [0U]))) {
                __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                    = (0x1fffffffeULL & __Vdly____Vcellout__pageWalker__OUT_ldUOp);
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__pageWalker__DOT__pwLdRes))) {
            if ((((IData)((0x200ULL == (0x18000001e00ULL 
                                        & vlSelfRef.__PVT__pageWalker__DOT__pwLdRes))) 
                  & (IData)(vlSelfRef.__PVT__pageWalker__DOT__pageWalkIter)) 
                 & (((0x80000000U <= vlSelfRef.__PVT__pageWalker__DOT__nextLookup) 
                     & (0x90000000U > vlSelfRef.__PVT__pageWalker__DOT__nextLookup)) 
                    | ((0x80000000U > vlSelfRef.__PVT__pageWalker__DOT__nextLookup) 
                       & (0x10000000U <= vlSelfRef.__PVT__pageWalker__DOT__nextLookup))))) {
                __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                    = (1ULL | ((QData)((IData)(vlSelfRef.__PVT__pageWalker__DOT__nextLookup)) 
                               << 1U));
                vlSelfRef.__Vdly__pageWalker__DOT__pageWalkIter = 0U;
                vlSelfRef.__Vdly__pageWalker__DOT__state = 1U;
            } else {
                vlSelfRef.__PVT__PW_res = (1ULL | (0x1ffffffffffffcULL 
                                                   & vlSelfRef.__PVT__PW_res));
                vlSelfRef.__Vdly__pageWalker__DOT__state = 0U;
                vlSelfRef.__PVT__PW_res = ((0x1ffULL 
                                            & vlSelfRef.__PVT__PW_res) 
                                           | (((QData)((IData)(
                                                               (vlSelfRef.__PVT__pageWalker__DOT__pageWalkAddr 
                                                                >> 0xcU))) 
                                               << 0x21U) 
                                              | ((QData)((IData)(
                                                                 ((vlSelfRef.__PVT__pageWalker__DOT__ppn_c 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelfRef.__PVT__pageWalker__DOT__pageFault_c) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelfRef.__PVT__pageWalker__DOT__isSuperPage_c))))) 
                                                 << 9U)));
                vlSelfRef.__PVT__PW_res = ((0x1ffffffffffe0fULL 
                                            & vlSelfRef.__PVT__PW_res) 
                                           | ((QData)((IData)(
                                                              ((0x18U 
                                                                & ((IData)(vlSelfRef.__PVT__pageWalker__DOT__dagu_c) 
                                                                   << 3U)) 
                                                               | (IData)(vlSelfRef.__PVT__pageWalker__DOT__rwx_c)))) 
                                              << 4U));
            }
        } else {
            if ((1U & (((IData)(vlSelfRef.__PVT__LSU_ldAck
                                [0U]) & (IData)((vlSelfRef.__PVT__LSU_ldAck
                                                 [0U] 
                                                 >> 1U))) 
                       & (IData)((vlSelfRef.__PVT__LSU_ldAck
                                  [0U] >> 3U))))) {
                __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                    = (1ULL | __Vdly____Vcellout__pageWalker__OUT_ldUOp);
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__LSU_ldAck
                                [1U]) & (IData)((vlSelfRef.__PVT__LSU_ldAck
                                                 [1U] 
                                                 >> 1U))) 
                       & (IData)((vlSelfRef.__PVT__LSU_ldAck
                                  [1U] >> 3U))))) {
                __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                    = (1ULL | __Vdly____Vcellout__pageWalker__OUT_ldUOp);
            }
        }
    } else {
        vlSelfRef.__PVT__PW_res = (0x1ffffffffffffdULL 
                                   & vlSelfRef.__PVT__PW_res);
        if ((1U & (IData)(vlSelfRef.__PVT__PW_reqs[0U]))) {
            vlSelfRef.__Vdly__pageWalker__DOT__state = 1U;
            vlSelfRef.__Vdly__pageWalker__DOT__pageWalkIter = 1U;
            vlSelfRef.__Vdly__pageWalker__DOT__pageWalkAddr 
                = (IData)((vlSelfRef.__PVT__PW_reqs
                           [0U] >> 0x17U));
            __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                = (1ULL | __Vdly____Vcellout__pageWalker__OUT_ldUOp);
            vlSelfRef.__PVT__PW_res = 0ULL;
            __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                = ((1ULL & __Vdly____Vcellout__pageWalker__OUT_ldUOp) 
                   | ((QData)((IData)((((IData)((vlSelfRef.__PVT__PW_reqs
                                                 [0U] 
                                                 >> 1U)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(
                                                          (vlSelfRef.__PVT__PW_reqs
                                                           [0U] 
                                                           >> 0x2dU)) 
                                                  << 2U))))) 
                      << 1U));
            vlSelfRef.__PVT__PW_res = (2ULL | (0x1ffffffffffff0ULL 
                                               & vlSelfRef.__PVT__PW_res));
        }
        if ((1U & (IData)(vlSelfRef.__PVT__PW_reqs[1U]))) {
            vlSelfRef.__Vdly__pageWalker__DOT__state = 1U;
            vlSelfRef.__Vdly__pageWalker__DOT__pageWalkIter = 1U;
            vlSelfRef.__Vdly__pageWalker__DOT__pageWalkAddr 
                = (IData)((vlSelfRef.__PVT__PW_reqs
                           [1U] >> 0x17U));
            __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                = (1ULL | __Vdly____Vcellout__pageWalker__OUT_ldUOp);
            vlSelfRef.__PVT__PW_res = 0ULL;
            __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                = ((1ULL & __Vdly____Vcellout__pageWalker__OUT_ldUOp) 
                   | ((QData)((IData)((((IData)((vlSelfRef.__PVT__PW_reqs
                                                 [1U] 
                                                 >> 1U)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(
                                                          (vlSelfRef.__PVT__PW_reqs
                                                           [1U] 
                                                           >> 0x2dU)) 
                                                  << 2U))))) 
                      << 1U));
            vlSelfRef.__PVT__PW_res = (6ULL | (0x1ffffffffffff0ULL 
                                               & vlSelfRef.__PVT__PW_res));
        }
        if ((1U & (IData)(vlSelfRef.__PVT__PW_reqs[2U]))) {
            vlSelfRef.__Vdly__pageWalker__DOT__state = 1U;
            vlSelfRef.__Vdly__pageWalker__DOT__pageWalkIter = 1U;
            vlSelfRef.__Vdly__pageWalker__DOT__pageWalkAddr 
                = (IData)((vlSelfRef.__PVT__PW_reqs
                           [2U] >> 0x17U));
            __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                = (1ULL | __Vdly____Vcellout__pageWalker__OUT_ldUOp);
            vlSelfRef.__PVT__PW_res = 0ULL;
            __Vdly____Vcellout__pageWalker__OUT_ldUOp 
                = ((1ULL & __Vdly____Vcellout__pageWalker__OUT_ldUOp) 
                   | ((QData)((IData)((((IData)((vlSelfRef.__PVT__PW_reqs
                                                 [2U] 
                                                 >> 1U)) 
                                        << 0xcU) | 
                                       (0xffcU & ((IData)(
                                                          (vlSelfRef.__PVT__PW_reqs
                                                           [2U] 
                                                           >> 0x2dU)) 
                                                  << 2U))))) 
                      << 1U));
            vlSelfRef.__PVT__PW_res = (0xaULL | (0x1ffffffffffff0ULL 
                                                 & vlSelfRef.__PVT__PW_res));
        }
    }
    vlSelfRef.__PVT__TH_flushTLB = vlSelfRef.__PVT__trapHandler__DOT__OUT_flushTLB_c;
    vlSelfRef.trapHandler__DOT____VdfgExtracted_h35f639f3__0 
        = ((0xfffffff0U & ((vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[1U] 
                            << 0x1dU) | (0x1ffffff0U 
                                         & (vlSymsp->TOP__Top__soc__core__ifetch__pcFile.__PVT__OUT_rdata[0U] 
                                            >> 3U)))) 
           | ((IData)(vlSelfRef.__PVT__trapHandler__DOT__fetchOffs) 
              << 1U));
    vlSelfRef.__Vcellout__pageWalker__OUT_ldUOp = __Vdly____Vcellout__pageWalker__OUT_ldUOp;
    vlSelfRef.__PVT__PW_LD_uop[0U] = vlSelfRef.__Vcellout__pageWalker__OUT_ldUOp;
}

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__22(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__22\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill;
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__kill = 0;
    IData/*25:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff;
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__diff = 0;
    IData/*25:0*/ __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod;
    __PVT__dataPrefetch__DOT__issuer__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__mod = 0;
    // Body
    vlSelfRef.__PVT__tvalSelect__DOT__invalidateCurTVal 
        = vlSelfRef.__Vdly__tvalSelect__DOT__invalidateCurTVal;
    vlSelfRef.__PVT__tvalSelect__DOT__curTVal = vlSelfRef.__Vdly__tvalSelect__DOT__curTVal;
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v0) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][1U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][1U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][2U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][3U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][4U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [1U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][1U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][2U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][3U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][4U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [2U][0U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v6) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (1U | vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xfff01fffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v7) 
                             << 0xdU));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xffffff01U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v8) 
                             << 1U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][1U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = (0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][2U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v10) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0xffdfffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v11 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] 
            = (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v11 
               >> 0xaU);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v12 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v12 
                             >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v13) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xffdfffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v13) 
                             << 0x15U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v14 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] 
            = (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v14 
               >> 0xaU);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v15 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v15 
                             >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v16) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xffdfffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v16) 
                             << 0x15U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v17 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] 
            = (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v17 
               >> 0xaU);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v18 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v18 
                             >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v19) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0xffdfffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v20 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] 
            = (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v20 
               >> 0xaU);
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v21 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v21 
                             >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v22) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xffefffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v22) 
                             << 0x14U));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v23) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[0U];
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][1U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[1U];
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][2U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[2U];
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][3U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[3U];
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][4U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[4U];
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25) 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][1U] 
            = (((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25) 
                >> 0xaU) | ((IData)((vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 
                                     >> 0x20U)) << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][2U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][2U]) | ((IData)((vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 
                                      >> 0x20U)) >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v26) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[0U];
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][1U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[1U];
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][2U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[2U];
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][3U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[3U];
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][4U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[4U];
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [2U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28) 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][1U] 
            = (((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28) 
                >> 0xaU) | ((IData)((vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 
                                     >> 0x20U)) << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][2U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
                [2U][2U]) | ((IData)((vlSelfRef.__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 
                                      >> 0x20U)) >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v29) {
        vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl
               [2U][0U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v0) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][1U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][1U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][2U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][3U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][4U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [1U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][1U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][2U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][3U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][4U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [2U][0U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v6) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (1U | vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xfff01fffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v7) 
                             << 0xdU));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xffffff01U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v8) 
                             << 1U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][1U] = 0U;
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = (0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][2U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v10) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0xffdfffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v11 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] 
            = (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v11 
               >> 0xaU);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v12 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v12 
                             >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v13) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xffdfffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v13) 
                             << 0x15U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v14 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] 
            = (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v14 
               >> 0xaU);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v15 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v15 
                             >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v16) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xffdfffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v16) 
                             << 0x15U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v17 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] 
            = (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v17 
               >> 0xaU);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v18 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v18 
                             >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v19) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0xffdfffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v20 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][4U] 
            = (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v20 
               >> 0xaU);
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][2U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][2U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v21 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][3U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][3U]) | (vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v21 
                             >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v22) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = ((0xffefffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [0U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v22) 
                             << 0x14U));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v23) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[0U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [0U][0U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[0U];
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][1U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[1U];
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][2U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[2U];
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][3U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[3U];
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][4U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24[4U];
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25) 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][1U] 
            = (((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25) 
                >> 0xaU) | ((IData)((vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 
                                     >> 0x20U)) << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][2U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [1U][2U]) | ((IData)((vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 
                                      >> 0x20U)) >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v26) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[1U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [1U][0U]);
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[0U];
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][1U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[1U];
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][2U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[2U];
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][3U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[3U];
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][4U] 
            = vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27[4U];
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] 
            = ((0x3fffffU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [2U][0U]) | ((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28) 
                             << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][1U] 
            = (((IData)(vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28) 
                >> 0xaU) | ((IData)((vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 
                                     >> 0x20U)) << 0x16U));
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][2U] 
            = ((0xffc00000U & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
                [2U][2U]) | ((IData)((vlSelfRef.__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 
                                      >> 0x20U)) >> 0xaU));
    }
    if (vlSelfRef.__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v29) {
        vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[2U][0U] 
            = (0xfffffffeU & vlSelfRef.__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl
               [2U][0U]);
    }
    vlSelfRef.stall[3U] = (0U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free));
    vlSelfRef.stall[4U] = (0U == (IData)(vlSelfRef.__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free));
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
    vlSelfRef.__PVT__TVS_tvalProvs[0U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tvalProv;
    vlSelfRef.__PVT__TVS_tvalProvs[1U] = vlSelfRef.__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tvalProv;
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
    vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 0U;
    if (((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
            & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                       [0U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                        [0U][1U] >> 0xaU)) 
          & vlSelfRef.__PVT__lb__DOT__isBefore[0U]) 
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
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__lb__DOT__entries
                                                                  [0U] 
                                                                  >> 0x27U)))) 
                                                     | ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0U] 
                                                                    >> 8U))) 
                                                        == 
                                                        (1U 
                                                         & (vlSelfRef.__PVT__AGU_uop
                                                            [0U][1U] 
                                                            >> 0x13U)))))) 
            | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                             [0U][1U] >> 0xbU))) & 
               ((0U < (3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                     [0U] >> 0x27U)))) 
                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                  [0U] >> 7U))) == 
                   (3U & (vlSelfRef.__PVT__AGU_uop[0U][1U] 
                          >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 1U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [1U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 1U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [1U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [1U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [1U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [1U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 2U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [2U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 2U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [2U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [2U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [2U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [2U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 3U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [3U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 3U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [3U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [3U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [3U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [3U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 4U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [4U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 4U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [4U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [4U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [4U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [4U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 5U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [5U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 5U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [5U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [5U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [5U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [5U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 6U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [6U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 6U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [6U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [6U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [6U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [6U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 7U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [7U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 7U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [7U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [7U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [7U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [7U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 8U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [8U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 8U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [8U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [8U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [8U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [8U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 9U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [9U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [0U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 9U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [0U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [0U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [9U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [9U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [9U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [9U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 0xaU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xaU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[0U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 0xaU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xaU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xaU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [0U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xaU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xaU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [0U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 0xbU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xbU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[0U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 0xbU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xbU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xbU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [0U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xbU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xbU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [0U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 0xcU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xcU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[0U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 0xcU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xcU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xcU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [0U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xcU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xcU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [0U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 0xdU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xdU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[0U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 0xdU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xdU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xdU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [0U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xdU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xdU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [0U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 0xeU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xeU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[0U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 0xeU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xeU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xeU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [0U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xeU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xeU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [0U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[0U] 
             >> 0xfU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xfU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[0U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[0U] 
             >> 0xfU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [0U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [0U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xfU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xfU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [0U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [0U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xfU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xfU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [0U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[0U] = 1U;
    }
    vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 0U;
    if (((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
            & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                       [0U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                        [1U][1U] >> 0xaU)) 
          & vlSelfRef.__PVT__lb__DOT__isBefore[1U]) 
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
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__lb__DOT__entries
                                                                  [0U] 
                                                                  >> 0x27U)))) 
                                                     | ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                                    [0U] 
                                                                    >> 8U))) 
                                                        == 
                                                        (1U 
                                                         & (vlSelfRef.__PVT__AGU_uop
                                                            [1U][1U] 
                                                            >> 0x13U)))))) 
            | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                             [1U][1U] >> 0xbU))) & 
               ((0U < (3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                     [0U] >> 0x27U)))) 
                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                  [0U] >> 7U))) == 
                   (3U & (vlSelfRef.__PVT__AGU_uop[1U][1U] 
                          >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 1U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [1U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 1U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [1U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [1U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [1U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [1U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 2U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [2U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 2U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [2U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [2U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [2U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [2U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 3U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [3U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 3U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [3U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [3U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [3U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [3U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 4U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [4U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 4U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [4U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [4U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [4U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [4U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 5U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [5U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 5U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [5U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [5U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [5U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [5U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 6U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [6U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 6U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [6U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [6U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [6U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [6U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 7U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [7U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 7U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [7U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [7U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [7U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [7U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 8U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [8U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 8U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [8U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [8U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [8U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [8U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 9U) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                               [9U] >> 2U))) & (vlSelfRef.__PVT__AGU_uop
                                                [1U][1U] 
                                                >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 9U)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                       [1U][1U] >> 0xbU))) 
                         | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                          [1U][1U] 
                                          >> 0xbU))) 
                            & ((1U < (3U & (IData)(
                                                   (vlSelfRef.__PVT__lb__DOT__entries
                                                    [9U] 
                                                    >> 0x27U)))) 
                               | ((1U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                 [9U] 
                                                 >> 8U))) 
                                  == (1U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0x13U)))))) 
                        | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           & ((0U < (3U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [9U] 
                                                   >> 0x27U)))) 
                              | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                [9U] 
                                                >> 7U))) 
                                 == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 0xaU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xaU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[1U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 0xaU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xaU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xaU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [1U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xaU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xaU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 0xbU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xbU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[1U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 0xbU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xbU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xbU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [1U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xbU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xbU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 0xcU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xcU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[1U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 0xcU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xcU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xcU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [1U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xcU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xcU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 0xdU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xdU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[1U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 0xdU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xdU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xdU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [1U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xdU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xdU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 0xeU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xeU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[1U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 0xeU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xeU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xeU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [1U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xeU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xeU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
    if ((((((vlSelfRef.__PVT__lb__DOT__wAddrMatch[1U] 
             >> 0xfU) & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                 [0xfU] >> 2U))) & 
           (vlSelfRef.__PVT__AGU_uop[1U][1U] >> 0xaU)) 
          & (vlSelfRef.__PVT__lb__DOT__isBefore[1U] 
             >> 0xfU)) & (((2U == (3U & (vlSelfRef.__PVT__AGU_uop
                                         [1U][1U] >> 0xbU))) 
                           | ((1U == (3U & (vlSelfRef.__PVT__AGU_uop
                                            [1U][1U] 
                                            >> 0xbU))) 
                              & ((1U < (3U & (IData)(
                                                     (vlSelfRef.__PVT__lb__DOT__entries
                                                      [0xfU] 
                                                      >> 0x27U)))) 
                                 | ((1U & (IData)((
                                                   vlSelfRef.__PVT__lb__DOT__entries
                                                   [0xfU] 
                                                   >> 8U))) 
                                    == (1U & (vlSelfRef.__PVT__AGU_uop
                                              [1U][1U] 
                                              >> 0x13U)))))) 
                          | ((0U == (3U & (vlSelfRef.__PVT__AGU_uop
                                           [1U][1U] 
                                           >> 0xbU))) 
                             & ((0U < (3U & (IData)(
                                                    (vlSelfRef.__PVT__lb__DOT__entries
                                                     [0xfU] 
                                                     >> 0x27U)))) 
                                | ((3U & (IData)((vlSelfRef.__PVT__lb__DOT__entries
                                                  [0xfU] 
                                                  >> 7U))) 
                                   == (3U & (vlSelfRef.__PVT__AGU_uop
                                             [1U][1U] 
                                             >> 0x12U)))))))) {
        vlSelfRef.__PVT__lb__DOT__storeIsConflict[1U] = 1U;
    }
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
}
