// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_SoC.h"

extern const VlWide<8>/*255:0*/ VTop__ConstPool__CONST_hbd3d39cf_0;

VL_INLINE_OPT void VTop_SoC___ico_sequent__TOP__Top__soc__0(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___ico_sequent__TOP__Top__soc__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl;
    __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl = 0;
    CData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    CData/*31:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    // Body
    __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl = 0U;
    vlSelfRef.MemC_stat[0U] = (0xeU | vlSelfRef.MemC_stat[0U]);
    vlSelfRef.__PVT__memc__DOT__selReq[0U] = VTop__ConstPool__CONST_hbd3d39cf_0[0U];
    vlSelfRef.__PVT__memc__DOT__selReq[1U] = VTop__ConstPool__CONST_hbd3d39cf_0[1U];
    vlSelfRef.__PVT__memc__DOT__selReq[2U] = VTop__ConstPool__CONST_hbd3d39cf_0[2U];
    vlSelfRef.__PVT__memc__DOT__selReq[3U] = VTop__ConstPool__CONST_hbd3d39cf_0[3U];
    vlSelfRef.__PVT__memc__DOT__selReq[4U] = VTop__ConstPool__CONST_hbd3d39cf_0[4U];
    vlSelfRef.__PVT__memc__DOT__selReq[5U] = VTop__ConstPool__CONST_hbd3d39cf_0[5U];
    vlSelfRef.__PVT__memc__DOT__selReq[6U] = VTop__ConstPool__CONST_hbd3d39cf_0[6U];
    vlSelfRef.__PVT__memc__DOT__selReq[7U] = VTop__ConstPool__CONST_hbd3d39cf_0[7U];
    vlSelfRef.__PVT__memc__DOT__selReq[0U] = (0xfffffff0U 
                                              & vlSelfRef.__PVT__memc__DOT__selReq[0U]);
    if (vlSelfRef.__PVT__memc__DOT__enqIdxValid) {
        if (((0U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U])) 
             & (0U != (0xfU & vlSelfRef.MemC_ctrl[0U][0U])))) {
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = ((((vlSelfRef.__PVT__memc__DOT__transfers
                      [0U][0U] & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                        = (0xfU & vlSelfRef.MemC_ctrl
                                           [0U][0U]);
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                     & ([&]() {
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                    = (0xfU & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [0U][0U] 
                                               >> 1U));
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                    = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                        | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                       | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                            }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                    & ((1U & (vlSelfRef.MemC_ctrl[0U][0U] 
                              >> 4U)) == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                [0U][0U] 
                                                >> 5U)))) 
                   & ((0xffU & (vlSelfRef.MemC_ctrl
                                [0U][2U] >> 9U)) == 
                      (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                [0U][2U] >> 0xfU))));
            __Vtemp_1 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [1U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [0U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [1U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [0U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [1U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [0U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [1U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_1;
            __Vtemp_2 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [2U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [0U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [2U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [0U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [2U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [0U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [2U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_2;
            __Vtemp_3 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [3U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [0U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [3U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [0U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [3U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [0U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [3U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_3;
            if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl)))) {
                vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                    = vlSelfRef.MemC_ctrl[0U][0U];
                vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                    = vlSelfRef.MemC_ctrl[0U][1U];
                vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                    = vlSelfRef.MemC_ctrl[0U][2U];
                vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                    = vlSelfRef.MemC_ctrl[0U][3U];
                vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                    = vlSelfRef.MemC_ctrl[0U][4U];
                vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                    = vlSelfRef.MemC_ctrl[0U][5U];
                vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                    = vlSelfRef.MemC_ctrl[0U][6U];
                vlSelfRef.__PVT__memc__DOT__selReq[7U] 
                    = vlSelfRef.MemC_ctrl[0U][7U];
                vlSelfRef.MemC_stat[0U] = (0xcU | (0xfffffff1U 
                                                   & vlSelfRef.MemC_stat[0U]));
            }
        }
        if (((0U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U])) 
             & (0U != (0xfU & vlSelfRef.MemC_ctrl[1U][0U])))) {
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = ((((vlSelfRef.__PVT__memc__DOT__transfers
                      [0U][0U] & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                        = (0xfU & vlSelfRef.MemC_ctrl
                                           [1U][0U]);
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                     & ([&]() {
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                    = (0xfU & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [0U][0U] 
                                               >> 1U));
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                    = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                        | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                       | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                            }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                    & ((1U & (vlSelfRef.MemC_ctrl[1U][0U] 
                              >> 4U)) == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                [0U][0U] 
                                                >> 5U)))) 
                   & ((0xffU & (vlSelfRef.MemC_ctrl
                                [1U][2U] >> 9U)) == 
                      (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                [0U][2U] >> 0xfU))));
            __Vtemp_4 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [1U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [1U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [1U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [1U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [1U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [1U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [1U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_4;
            __Vtemp_5 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [2U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [1U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [2U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [1U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [2U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [1U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [2U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_5;
            __Vtemp_6 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [3U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [1U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [3U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [1U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [3U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [1U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [3U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_6;
            if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl)))) {
                vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                    = vlSelfRef.MemC_ctrl[1U][0U];
                vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                    = vlSelfRef.MemC_ctrl[1U][1U];
                vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                    = vlSelfRef.MemC_ctrl[1U][2U];
                vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                    = vlSelfRef.MemC_ctrl[1U][3U];
                vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                    = vlSelfRef.MemC_ctrl[1U][4U];
                vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                    = vlSelfRef.MemC_ctrl[1U][5U];
                vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                    = vlSelfRef.MemC_ctrl[1U][6U];
                vlSelfRef.__PVT__memc__DOT__selReq[7U] 
                    = vlSelfRef.MemC_ctrl[1U][7U];
                vlSelfRef.MemC_stat[0U] = (0xaU | (0xfffffff1U 
                                                   & vlSelfRef.MemC_stat[0U]));
            }
        }
        if (((0U == (0xfU & vlSelfRef.__PVT__memc__DOT__selReq[0U])) 
             & (0U != (0xfU & vlSelfRef.MemC_ctrl[2U][0U])))) {
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = ((((vlSelfRef.__PVT__memc__DOT__transfers
                      [0U][0U] & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                        = (0xfU & vlSelfRef.MemC_ctrl
                                           [2U][0U]);
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                     & ([&]() {
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                    = (0xfU & (vlSelfRef.__PVT__memc__DOT__transfers
                                               [0U][0U] 
                                               >> 1U));
                                vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                    = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                        | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                       | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                            }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                    & ((1U & (vlSelfRef.MemC_ctrl[2U][0U] 
                              >> 4U)) == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                                [0U][0U] 
                                                >> 5U)))) 
                   & ((0xffU & (vlSelfRef.MemC_ctrl
                                [2U][2U] >> 9U)) == 
                      (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                [0U][2U] >> 0xfU))));
            __Vtemp_7 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [1U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [2U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [1U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [2U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [1U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [2U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [1U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_7;
            __Vtemp_8 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [2U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [2U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [2U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [2U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [2U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [2U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [2U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_8;
            __Vtemp_9 = ((IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl) 
                         | ((((vlSelfRef.__PVT__memc__DOT__transfers
                               [3U][0U] & ([&]() {
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd 
                                            = (0xfU 
                                               & vlSelfRef.MemC_ctrl
                                               [2U][0U]);
                                        vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout 
                                            = (((1U 
                                                 == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd))) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__cmd)));
                                    }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout))) 
                              & ([&]() {
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd 
                                        = (0xfU & (
                                                   vlSelfRef.__PVT__memc__DOT__transfers
                                                   [3U][0U] 
                                                   >> 1U));
                                    vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout 
                                        = (((1U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)) 
                                            | (2U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd))) 
                                           | (3U == (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__cmd)));
                                }(), (IData)(vlSelfRef.__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout))) 
                             & ((1U & (vlSelfRef.MemC_ctrl
                                       [2U][0U] >> 4U)) 
                                == (1U & (vlSelfRef.__PVT__memc__DOT__transfers
                                          [3U][0U] 
                                          >> 5U)))) 
                            & ((0xffU & (vlSelfRef.MemC_ctrl
                                         [2U][2U] >> 9U)) 
                               == (0xffU & (vlSelfRef.__PVT__memc__DOT__transfers
                                            [3U][2U] 
                                            >> 0xfU)))));
            __PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl 
                = __Vtemp_9;
            if ((1U & (~ (IData)(__PVT__memc__DOT__unnamedblk3__DOT__cacheAddrColl)))) {
                vlSelfRef.__PVT__memc__DOT__selReq[0U] 
                    = vlSelfRef.MemC_ctrl[2U][0U];
                vlSelfRef.__PVT__memc__DOT__selReq[1U] 
                    = vlSelfRef.MemC_ctrl[2U][1U];
                vlSelfRef.__PVT__memc__DOT__selReq[2U] 
                    = vlSelfRef.MemC_ctrl[2U][2U];
                vlSelfRef.__PVT__memc__DOT__selReq[3U] 
                    = vlSelfRef.MemC_ctrl[2U][3U];
                vlSelfRef.__PVT__memc__DOT__selReq[4U] 
                    = vlSelfRef.MemC_ctrl[2U][4U];
                vlSelfRef.__PVT__memc__DOT__selReq[5U] 
                    = vlSelfRef.MemC_ctrl[2U][5U];
                vlSelfRef.__PVT__memc__DOT__selReq[6U] 
                    = vlSelfRef.MemC_ctrl[2U][6U];
                vlSelfRef.__PVT__memc__DOT__selReq[7U] 
                    = vlSelfRef.MemC_ctrl[2U][7U];
                vlSelfRef.MemC_stat[0U] = (6U | (0xfffffff1U 
                                                 & vlSelfRef.MemC_stat[0U]));
            }
        }
    }
}

VL_INLINE_OPT void VTop_SoC___nba_sequent__TOP__Top__soc__11(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___nba_sequent__TOP__Top__soc__11\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__memc__DOT__rFIFO__DOT__mem__v0) {
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem[vlSelfRef.__VdlyDim0__memc__DOT__rFIFO__DOT__mem__v0][0U] 
            = vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[0U];
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem[vlSelfRef.__VdlyDim0__memc__DOT__rFIFO__DOT__mem__v0][1U] 
            = vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[1U];
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem[vlSelfRef.__VdlyDim0__memc__DOT__rFIFO__DOT__mem__v0][2U] 
            = vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[2U];
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem[vlSelfRef.__VdlyDim0__memc__DOT__rFIFO__DOT__mem__v0][3U] 
            = vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[3U];
        vlSelfRef.__PVT__memc__DOT__rFIFO__DOT__mem[vlSelfRef.__VdlyDim0__memc__DOT__rFIFO__DOT__mem__v0][4U] 
            = vlSelfRef.__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0[4U];
    }
}
