// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"

VL_INLINE_OPT void VTop_Core___nba_sequent__TOP__Top__soc__core__42(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___nba_sequent__TOP__Top__soc__core__42\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__PVT__idec__DOT__uopsComb[3U][0U] = 
        vlSelfRef.__PVT__idec__DOT__uop[0U];
    vlSelfRef.__PVT__idec__DOT__uopsComb[3U][1U] = 
        vlSelfRef.__PVT__idec__DOT__uop[1U];
    vlSelfRef.__PVT__idec__DOT__uopsComb[3U][2U] = 
        vlSelfRef.__PVT__idec__DOT__uop[2U];
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
}
