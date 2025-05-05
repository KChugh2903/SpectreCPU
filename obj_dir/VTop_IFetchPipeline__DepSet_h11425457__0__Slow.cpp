// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetchPipeline.h"

VL_ATTR_COLD void VTop_IFetchPipeline___stl_sequent__TOP__Top__soc__core__ifetch__ifp__1(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___stl_sequent__TOP__Top__soc__core__ifetch__ifp__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*100:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr;
    VL_ZERO_W(101, __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr);
    CData/*1:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple = 0;
    CData/*0:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch = 0;
    IData/*30:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC = 0;
    IData/*30:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC = 0;
    CData/*0:0*/ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted;
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted = 0;
    VlWide<7>/*204:0*/ __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst;
    VL_ZERO_W(205, __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst);
    VlWide<7>/*204:0*/ __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp;
    VL_ZERO_W(205, __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp);
    CData/*0:0*/ __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0;
    CData/*4:0*/ __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum = 0;
    CData/*1:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum = 0;
    CData/*2:0*/ __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum;
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = 0;
    IData/*23:0*/ __PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs;
    __PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs = 0;
    VlWide<7>/*223:0*/ __Vtemp_6;
    VlWide<7>/*223:0*/ __Vtemp_11;
    VlWide<7>/*223:0*/ __Vtemp_17;
    VlWide<7>/*223:0*/ __Vtemp_22;
    VlWide<7>/*223:0*/ __Vtemp_28;
    VlWide<7>/*223:0*/ __Vtemp_33;
    VlWide<7>/*223:0*/ __Vtemp_39;
    VlWide<7>/*223:0*/ __Vtemp_44;
    // Body
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [5U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [5U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [5U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [5U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (5U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x5020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((1U & (~ ((5U > (7U & (vlSelfRef.fetch1[2U] 
                                   >> 0xeU))) | (5U 
                                                 < 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x19U))))))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x280000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x280000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x280000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x280000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 6U;
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 5U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [6U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [6U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [6U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [6U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (6U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x6020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((1U & (~ ((6U > (7U & (vlSelfRef.fetch1[2U] 
                                   >> 0xeU))) | (6U 
                                                 < 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[2U] 
                                                     >> 0x19U))))))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x300000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x300000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x300000000000ULL | (0x1c7ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x300000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                vlSelfRef.__PVT__branchHandler__DOT__endOffs = 7U;
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 6U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [7U][0U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [7U][1U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [7U][2U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
        = vlSelfRef.__PVT__branchHandler__DOT__branch
        [7U][3U];
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple 
        = (3U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                 >> 3U));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch 
        = (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
           & (((1U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 2U))) | (3U == (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U)))) 
              | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                              >> 2U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC 
        = (7U | (0x7ffffff8U & ((vlSelfRef.fetch1[3U] 
                                 << 7U) | (0x78U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x19U)))));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC 
        = (0x7fffffffU & ((IData)(1U) + __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC));
    __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted 
        = (IData)((0x7020U == (0x7060U & vlSelfRef.fetch1[1U])));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__decBranch_c)))) {
        if ((7U <= (7U & (vlSelfRef.fetch1[2U] >> 0xeU)))) {
            if (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) 
                 & (vlSelfRef.fetch1[1U] >> 7U))) {
                if ((1U & (((~ __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                            | ((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                               != (3U & (vlSelfRef.fetch1[1U] 
                                         >> 9U)))) 
                           | ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                              & ((0x7fffffffU & ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                  << 0x1aU) 
                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                    >> 6U))) 
                                 != (0x7fffffffU & 
                                     ((vlSelfRef.fetch1[2U] 
                                       << 0x11U) | 
                                      (vlSelfRef.fetch1[1U] 
                                       >> 0xfU)))))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal 
                        = ((8U >= (0xfU & ((IData)(1U) 
                                           + (7U & 
                                              (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))))) 
                           && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (vlSelfRef.fetch1[1U] 
                                                     >> 0xcU)))))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xe00U & (vlSelfRef.fetch1[2U] 
                                        >> 0x10U)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                           | (0xfffff000U & ((0xffff8000U 
                                              & ((vlSelfRef.fetch1[3U] 
                                                  << 0x14U) 
                                                 | (0xf8000U 
                                                    & (vlSelfRef.fetch1[2U] 
                                                       >> 0xcU)))) 
                                             | (0x7000U 
                                                & vlSelfRef.fetch1[1U]))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & (vlSelfRef.fetch1[3U] 
                                     >> 0xcU));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x380000000000ULL | (0x1c1ffffffffffULL 
                                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1dU 
                                                         & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])))
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                         & ((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                          >> 2U))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U)))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                            = (((QData)((IData)((0xfffffffU 
                                                 & ((vlSelfRef.fetch1[3U] 
                                                     << 4U) 
                                                    | (vlSelfRef.fetch1[2U] 
                                                       >> 0x1cU))))) 
                                << 9U) | (QData)((IData)(
                                                         (1U 
                                                          | ((0x1c0U 
                                                              & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                                                             | (0x3eU 
                                                                & vlSelfRef.fetch1[0U]))))));
                    }
                    if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                        if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                           >> 2U))) 
                             || (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                              >> 2U))))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x20000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        } else if ((7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 >> 2U)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                                = (0x40000000000ULL 
                                   | (0x1f9ffffffffffULL 
                                      & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c));
                        }
                    }
                    if ((1U & (((~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal)) 
                                & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]) 
                               & ((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__isIndirBranch)) 
                                  | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                  >> 2U))))))) {
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = (0xfffffffdU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0x7fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                              << 0x1bU) 
                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                >> 5U)))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             ((0x1cU 
                                                               & (vlSelfRef.fetch1[2U] 
                                                                  >> 0x17U)) 
                                                              | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffff000U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (((IData)((((QData)((IData)(
                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                               << 0x1bU) 
                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                 >> 5U)))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              ((0x1cU 
                                                                & (vlSelfRef.fetch1[2U] 
                                                                   >> 0x17U)) 
                                                               | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple)))))) 
                                   >> 0x19U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                               >> 5U)))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            ((0x1cU 
                                                                              & (vlSelfRef.fetch1[2U] 
                                                                                >> 0x17U)) 
                                                                             | (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple))))) 
                                                         >> 0x20U)) 
                                                << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                            = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                               | (0xfffff000U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                            = (0xfffU & ((0xf80U & 
                                          (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                           << 7U)) 
                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 0x19U)));
                        vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                            = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                               | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        << 1U)));
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)((0x7fffffffU 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                           >> 2U)))
                                                       ? 
                                                      ((vlSelfRef.fetch1[1U] 
                                                        << 0x1aU) 
                                                       | (vlSelfRef.fetch1[0U] 
                                                          >> 6U))
                                                       : 
                                                      ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                        << 0x1aU) 
                                                       | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                          >> 6U)))))) 
                                  << 7U));
                    } else if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal) {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & (vlSelfRef.fetch1[1U] 
                                     >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                            = ((0x1ffc00000007fULL 
                                & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                               | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                  << 7U));
                        vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                        vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                        if ((7U != (7U & (vlSelfRef.fetch1[1U] 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                            vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                                = (7U & ((IData)(1U) 
                                         + ((vlSelfRef.fetch1[1U] 
                                             << 0x14U) 
                                            | (vlSelfRef.fetch1[1U] 
                                               >> 0xcU))));
                        }
                    }
                }
            } else if ((1U & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs 
                    = (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                             >> 6U));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly 
                    = (IData)(((0x10U == (0x1cU & __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U])) 
                               & (0x60U == (0x60U & 
                                            vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken 
                    = ((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly) 
                       & (vlSelfRef.fetch1[1U] >> 7U));
                if (((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                     >> 2U))) | (2U 
                                                 == 
                                                 (7U 
                                                  & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                     >> 2U)))) 
                      | (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))) | (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c 
                        = vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x380000000000ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x7fffffffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.fetch1[1U] 
                                                    << 0x1aU) 
                                                   | (vlSelfRef.fetch1[0U] 
                                                      >> 6U))
                                                   : 
                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                    << 0x1aU) 
                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                      >> 6U)))))) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken)
                                                ? 2U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                        >> 2U)))
                                                    ? 2U
                                                    : 0U)))) 
                              << 0x29U));
                } else if (((((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                              & (0x10U == (0x1cU & 
                                           __PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U]))) 
                             & (~ (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken))) 
                            | (3U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                            >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    if ((7U != (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs))) {
                        vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                        vlSelfRef.__PVT__branchHandler__DOT__endOffs 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs)));
                    }
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)((0x1fU 
                                               & (vlSelfRef.fetch1[2U] 
                                                  >> 0x13U)))) 
                              << 2U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x380000000000ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                              << 7U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1f9ffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((3U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x29U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1fe3fffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(((4U 
                                                == 
                                                (7U 
                                                 & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U))) 
                              << 0x26U));
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x13fffffffffffULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                }
                if (((~ (IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted)) 
                     & ((((0U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U))) | 
                          (2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                        >> 2U)))) | 
                         (4U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                       >> 2U)))) | 
                        (7U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                      >> 2U)))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffff7U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                               > (7U & (vlSelfRef.fetch1[1U] 
                                        >> 0xcU))) 
                              << 3U));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffe0fU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (0xfffffff0U & (((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr_btypeSimple) 
                                              << 7U) 
                                             | (0x70U 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSelfRef.fetch1[1U] 
                                                      << 0x14U) 
                                                     | (vlSelfRef.fetch1[1U] 
                                                        >> 0xcU))) 
                                                   << 4U)))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0x1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                           << 0x1bU) 
                                                          | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                             >> 5U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                            << 0x1bU) 
                                                           | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                              >> 5U)))))) 
                               << 0xcU) | (0xe00U & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x10U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                        = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                  << 0x1bU) 
                                                                 | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                    >> 5U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                     >> 5U)))))) 
                                      >> 0x14U)) | 
                           ((0xe00U & ((IData)((((QData)((IData)(
                                                                 ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                   << 0x1bU) 
                                                                  | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                     >> 5U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                    << 0x1bU) 
                                                                   | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                      >> 5U)))))) 
                                       >> 0x14U)) | 
                            ((IData)(((((QData)((IData)(
                                                        ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                          << 0x1bU) 
                                                         | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                            >> 5U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                      << 0x1bU) 
                                                                     | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                        >> 5U))))) 
                                      >> 0x20U)) << 0xcU)));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                        = (0xfffU & ((0x1ffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                             << 0x1bU) 
                                                                            | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                               >> 5U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                              << 0x1bU) 
                                                                             | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                         >> 0x20U)) 
                                                >> 0x14U)) 
                                     | (0xe00U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[1U] 
                                                                               << 0x1bU) 
                                                                              | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                                                >> 5U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[3U] 
                                                                                << 0x1bU) 
                                                                               | (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[2U] 
                                                                                >> 5U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U))));
                    vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                        = ((0xfffffffbU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                           | (4U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                    << 1U)));
                }
                if (((2U == (7U & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                   >> 2U))) | (3U == 
                                               (7U 
                                                & (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curBr[0U] 
                                                   >> 2U))))) {
                    vlSelfRef.__PVT__branchHandler__DOT__retUpd_c 
                        = (((QData)((IData)((0xfffffffU 
                                             & ((vlSelfRef.fetch1[3U] 
                                                 << 4U) 
                                                | (vlSelfRef.fetch1[2U] 
                                                   >> 0x1cU))))) 
                            << 9U) | (QData)((IData)(
                                                     (1U 
                                                      | (((IData)(vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs) 
                                                          << 6U) 
                                                         | (0x3eU 
                                                            & vlSelfRef.fetch1[0U]))))));
                }
            } else if (__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__predicted) {
                vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal 
                    = ((8U >= (0xfU & ((IData)(1U) 
                                       + (7U & (vlSelfRef.fetch1[1U] 
                                                >> 0xcU))))) 
                       && (1U & ((IData)(vlSelfRef.__PVT__branchHandler__DOT__is32bit) 
                                 >> (0xfU & ((IData)(1U) 
                                             + (7U 
                                                & (vlSelfRef.fetch1[1U] 
                                                   >> 0xcU)))))));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (1ULL | vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__newPredTaken_c = 0U;
                vlSelfRef.__PVT__branchHandler__DOT__newPredPos_c = 7U;
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (3U | vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x1ffffffffff83ULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | ((QData)((IData)((0x1fU & 
                                           (vlSelfRef.fetch1[2U] 
                                            >> 0x13U)))) 
                          << 2U));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = (0xffffff87U & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]);
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = ((0x100000000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                       | (0x380000000000ULL | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__nextPC)) 
                                               << 7U)));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U] 
                    = ((0xfffff1ffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[0U]) 
                       | (0xe00U & (vlSelfRef.fetch1[2U] 
                                    >> 0x10U)));
                vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                    = (0x1fffffffffffdULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c);
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U] 
                    = ((0xfffU & vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[1U]) 
                       | (0xfffff000U & ((0xffff8000U 
                                          & ((vlSelfRef.fetch1[3U] 
                                              << 0x14U) 
                                             | (0xf8000U 
                                                & (vlSelfRef.fetch1[2U] 
                                                   >> 0xcU)))) 
                                         | (0x7000U 
                                            & vlSelfRef.fetch1[1U]))));
                vlSelfRef.__PVT__branchHandler__DOT__btUpdate_c[2U] 
                    = (0xfffU & (vlSelfRef.fetch1[3U] 
                                 >> 0xcU));
                if (vlSelfRef.__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal) {
                    vlSelfRef.__PVT__branchHandler__DOT__endOffsValid = 1U;
                    vlSelfRef.__PVT__branchHandler__DOT__endOffs = 7U;
                    vlSelfRef.__PVT__branchHandler__DOT__decBranch_c 
                        = ((0x1ffc00000007fULL & vlSelfRef.__PVT__branchHandler__DOT__decBranch_c) 
                           | ((QData)((IData)(__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__curPC)) 
                              << 7U));
                }
            }
        }
    }
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[1U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [1U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [2U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[2U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [2U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [4U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[3U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [3U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [6U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[4U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [4U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [8U] << 4U)) | (((4U 
                                                 >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                               << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[5U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [5U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xaU] << 4U)) | (((4U 
                                                   >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                 << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[6U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [6U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xcU] << 4U)) | (((4U 
                                                   >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                 << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[7U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [7U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0xeU] << 4U)) | (((4U 
                                                   >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                  && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                 << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[8U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [8U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x10U] << 4U)) | ((
                                                   (4U 
                                                    >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                   && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                  << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[9U] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [9U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                               [0x12U] << 4U)) | ((
                                                   (4U 
                                                    >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                                                   && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                                                  << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xaU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xaU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x14U] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xbU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xbU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x16U] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xcU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xcU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x18U] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xdU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xdU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1aU] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xeU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xeU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1cU] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[0xfU] 
        = ((0x3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
            [0xfU]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s
                                 [0x1eU] << 4U)) | 
                       (((4U >= (IData)(vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__redSum)) 
                         && vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__mux
                         [vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__redSum]) 
                        << 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [8U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xaU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xcU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xeU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [2U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [4U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [6U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [8U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xaU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xcU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xeU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [2U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [4U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [6U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [8U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xaU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xcU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xeU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [1U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [3U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [2U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [5U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [4U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [7U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [6U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [9U] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [9U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [8U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xbU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xbU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xaU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xdU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xdU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xcU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xfU] >> 2U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (3U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
           [0xfU]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (3U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                 [0xeU] >> 6U));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [0U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [2U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [2U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [4U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [4U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [6U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [6U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [8U] >> 2U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                                  [8U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xaU] >> 2U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                               [0xaU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xcU] >> 2U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                               [0xcU]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xeU] >> 2U))) + (1U & 
                                              (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                               [0xeU]))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [2U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [2U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [4U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [4U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [3U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [6U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [6U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [4U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [8U] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [8U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [5U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0xaU] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0xaU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [6U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0xcU] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0xcU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((0xff8U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [7U]) | ((4U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                            [0xeU] << 2U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                             [0xeU]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [2U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [2U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [2U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [4U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [4U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [3U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [6U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [6U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [4U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [8U] << 3U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [8U] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [5U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0xaU] << 3U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xaU] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [6U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0xcU] << 3U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xcU] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((0xfc7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [7U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                               [0xeU] << 3U)) | (((2U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 3U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xeU] >> 4U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [2U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [2U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [2U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [4U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [4U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [3U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [6U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [6U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [4U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [8U] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [8U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [5U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xaU] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xaU] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [6U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xcU] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xcU] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((0xe3fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [7U]) | ((0x100U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xeU] << 4U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                           [0xeU] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[0U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [0U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[1U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [1U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [2U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[2U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [2U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [4U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[3U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [3U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [6U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[4U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [4U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [8U] << 5U)) | (((4U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                  : 0U) 
                                                << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[5U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [5U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xaU] << 5U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[6U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [6U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xcU] << 5U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[7U] 
        = ((0x1ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
            [7U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s
                                [0xeU] << 5U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 9U)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [4U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [6U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [0U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [2U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [4U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [6U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [0U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [2U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [4U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [6U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [1U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [0U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [3U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [2U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [5U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [5U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [4U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 9U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 6U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [7U] >> 3U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (7U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
           [7U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (7U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                 [6U] >> 9U));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [0U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [0U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [2U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [2U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [4U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [4U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [6U] >> 3U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                                  [6U]))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xfff0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [0U] << 3U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((0xfff0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [1U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [2U] << 3U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((0xfff0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [2U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [4U] << 3U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [4U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((0xfff0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [3U]) | ((8U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                            [6U] << 3U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                             [6U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xff0fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [0U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [0U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((0xff0fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [1U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [2U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [2U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((0xff0fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [2U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [4U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [4U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((0xff0fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [3U]) | ((0x80U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                               [6U] << 4U)) | (((2U 
                                                 >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                 ? 
                                                vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                 : 0U) 
                                               << 4U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [6U] >> 6U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xf0ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                [0U] << 5U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 8U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [0U] >> 9U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((0xf0ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [1U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                [2U] << 5U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 8U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [2U] >> 9U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((0xf0ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [2U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                [4U] << 5U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 8U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [4U] >> 9U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((0xf0ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [3U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                [6U] << 5U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                << 8U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                           [6U] >> 9U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[0U] 
        = ((0xfffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [0U]) | ((0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                 [0U] << 6U)) | (((4U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[1U] 
        = ((0xfffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [1U]) | ((0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                 [2U] << 6U)) | (((4U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[2U] 
        = ((0xfffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [2U]) | ((0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                 [4U] << 6U)) | (((4U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[3U] 
        = ((0xfffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
            [3U]) | ((0x8000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s
                                 [6U] << 6U)) | (((4U 
                                                   >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                   ? 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                   : 0U) 
                                                 << 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [2U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [0U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [2U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [0U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [2U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 0xcU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [1U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [0U] >> 0xcU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 0xcU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 8U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [3U] >> 4U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (0xfU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
           [3U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (0xfU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                   [2U] >> 0xcU));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [0U] >> 4U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                                  [0U]))));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [2U] >> 4U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                                  [2U]))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0xfffe0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [0U]) | ((0x10U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                               [0U] << 4U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0xfffe0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [1U]) | ((0x10U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                               [2U] << 4U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                             [2U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0xffc1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [0U]) | ((0x200U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                [0U] << 5U)) | (((2U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                  : 0U) 
                                                << 5U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [0U] >> 8U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0xffc1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [1U]) | ((0x200U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                [2U] << 5U)) | (((2U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                  : 0U) 
                                                << 5U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [2U] >> 8U))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0xf83ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [0U]) | ((0x4000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                 [0U] << 6U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                 << 0xaU)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [0U] >> 0xcU))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0xf83ffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [1U]) | ((0x4000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                 [2U] << 6U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                 << 0xaU)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                           [2U] >> 0xcU))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[0U] 
        = ((0x7fffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [0U]) | ((0x80000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                  [0U] << 7U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 0xfU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[1U] 
        = ((0x7fffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
            [1U]) | ((0x80000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s
                                  [2U] << 7U)) | ((
                                                   (4U 
                                                    >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                    ? 
                                                   vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                   [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                    : 0U) 
                                                  << 0xfU)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[0U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[1U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [0U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[0U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[1U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[2U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [0U] >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[0U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[1U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[2U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[3U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [0U] >> 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[0U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 0xfU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[1U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 0xaU));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[2U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [1U] >> 5U));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[3U] 
        = (0x1fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
           [1U]);
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[4U] 
        = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                    [0U] >> 0xfU));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                           [0U] >> 5U))) + (1U & (~ 
                                                  vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                                                  [0U]))));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0xffffc0U & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
            [0U]) | ((0x20U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                               [0U] << 5U)) | vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux
                     [(1U & (~ vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                             [0U]))]));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0xfff03fU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
            [0U]) | ((0x800U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                                [0U] << 6U)) | (((2U 
                                                  >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum))
                                                  ? 
                                                 vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux
                                                 [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum]
                                                  : 0U) 
                                                << 6U)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum 
        = (3U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                           [0U] >> 0xaU))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0xfc0fffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
            [0U]) | ((0x20000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                                  [0U] << 7U)) | (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux
                                                  [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum] 
                                                  << 0xcU)));
    __PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum 
        = (7U & ((1U & (~ (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                           [0U] >> 0xfU))) + (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__redSum)));
    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[0U] 
        = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
            [0U]) | ((0x800000U & (vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s
                                   [0U] << 8U)) | (
                                                   ((4U 
                                                     >= (IData)(__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum))
                                                     ? 
                                                    vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux
                                                    [__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum]
                                                     : 0U) 
                                                   << 0x12U)));
    __PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
        = vlSelfRef.__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s
        [0U];
    vlSelfRef.__PVT__instrAligner__DOT__pencIdx[0U] 
        = (0x1fU & (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 1U));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid[0U] 
        = (1U & (~ __PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdx[1U] 
        = (0x1fU & (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 7U));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid[1U] 
        = (1U & (~ (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 6U)));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdx[2U] 
        = (0x1fU & (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 0xdU));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid[2U] 
        = (1U & (~ (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 0xcU)));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdx[3U] 
        = (0x1fU & (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 0x13U));
    vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid[3U] 
        = (1U & (~ (__PVT__instrAligner__DOT__penc__DOT__unnamedblk3__DOT__packedIdcs 
                    >> 0x12U)));
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][0U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][1U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][2U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][3U] = 0U;
    if (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
        [0U]) {
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c 
            = ((0x17U >= vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                [0U]) && (1U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                >> vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                [0U])));
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c 
            = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                        [0U] + (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c)));
        __Vtemp_6[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(1U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            (((IData)(0x10U) + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0xddU) 
                                                      * 
                                                      VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_6[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(2U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(1U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_6[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(3U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(2U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_6[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(4U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(3U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_6[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(5U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(4U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_6[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(6U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(5U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_6[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                           + (0x3ffU 
                                              & ((IData)(0xddU) 
                                                 * 
                                                 VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                           ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                   ((IData)(7U) + (
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x3ffU 
                                                     & ((IData)(0xddU) 
                                                        * 
                                                        VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                         | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                            ((IData)(6U) + (((IData)(0x10U) 
                                             + (0x3ffU 
                                                & ((IData)(0xddU) 
                                                   * 
                                                   VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                            >> 5U))] 
                            >> (0x1fU & ((IData)(0x10U) 
                                         + (0x3ffU 
                                            & ((IData)(0xddU) 
                                               * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] 
                = __Vtemp_6[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] 
                = __Vtemp_6[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] 
                = __Vtemp_6[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] 
                = __Vtemp_6[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                = __Vtemp_6[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                = __Vtemp_6[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] 
                = (0x1fffU & __Vtemp_6[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
        }
        __Vtemp_11[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [0U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 3U)))))));
        __Vtemp_11[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [0U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U)))))));
        __Vtemp_11[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [0U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U)))))));
        __Vtemp_11[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [0U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U)))))));
        __Vtemp_11[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [0U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U)))))));
        __Vtemp_11[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [0U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U)))))));
        __Vtemp_11[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [0U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [0U], 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] 
                = __Vtemp_11[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] 
                = __Vtemp_11[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] 
                = __Vtemp_11[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] 
                = __Vtemp_11[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] 
                = __Vtemp_11[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                = __Vtemp_11[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                = (0x1fffU & __Vtemp_11[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
        }
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][0U] 
            = (1U | ((0xfffffc00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                      [0U][0U]) | (((__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                     & ((7U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                               >> 1U)) 
                                        == (7U & (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c)))) 
                                    << 9U) | ((0x1f0U 
                                               & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     >> 8U)) 
                                                 | (2U 
                                                    & ((~ 
                                                        ((0x17U 
                                                          >= 
                                                          vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                          [0U]) 
                                                         && (1U 
                                                             & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                >> 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U])))) 
                                                       << 1U)))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][0U] 
            = ((0x3ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][0U]) | (0xfffffc00U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                            << 9U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][1U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][1U]) | (0x3ffU & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                       >> 0x17U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][1U] 
            = ((0xfffc01ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][1U]) | (0xfffffe00U & ((0x38000U 
                                             & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                [0U] 
                                                << 0xfU)) 
                                            | ((0x7000U 
                                                & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                   >> 6U)) 
                                               | (0xe00U 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     << 8U))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][1U] 
            = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][1U]) | (0xfffc0000U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                            << 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][2U] 
            = ((0xffffc000U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][2U]) | (0x3fffU & ((0x3fffeU & 
                                         (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                                          << 1U)) | 
                                        (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                         >> 0x1fU))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][2U] 
            = ((0xc0003fffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                        [0U], 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U], 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U], 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [0U], 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U], 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U], 4U)))))
                               : 0U) << 0xeU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][2U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [0U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                         [0U]), 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [0U]), 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [0U]), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [0U]), 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [0U]), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U]), 4U)))))
                               : 0U) << 0x1eU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[0U][3U] 
            = (0x3fffU & (((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                              ((IData)(1U) 
                                                               + 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [0U]), 4U)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [0U]), 4U)))
                                            ? 0U : 
                                           (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U]), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [0U]), 4U))))) 
                                          | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [0U]), 4U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [0U]), 4U)))))
                            : 0U) >> 2U));
    }
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][0U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][1U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][2U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][3U] = 0U;
    if (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
        [1U]) {
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c 
            = ((0x17U >= vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                [1U]) && (1U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                >> vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                [1U])));
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c 
            = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                        [1U] + (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c)));
        __Vtemp_17[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_17[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_17[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_17[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_17[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_17[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_17[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] 
                = __Vtemp_17[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] 
                = __Vtemp_17[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] 
                = __Vtemp_17[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] 
                = __Vtemp_17[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                = __Vtemp_17[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                = __Vtemp_17[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] 
                = (0x1fffU & __Vtemp_17[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
        }
        __Vtemp_22[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [1U], 3U)))))));
        __Vtemp_22[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_22[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_22[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_22[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_22[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        __Vtemp_22[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [1U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [1U], 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] 
                = __Vtemp_22[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] 
                = __Vtemp_22[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] 
                = __Vtemp_22[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] 
                = __Vtemp_22[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] 
                = __Vtemp_22[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                = __Vtemp_22[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                = (0x1fffU & __Vtemp_22[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
        }
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][0U] 
            = (1U | ((0xfffffc00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                      [1U][0U]) | (((__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                     & ((7U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                               >> 1U)) 
                                        == (7U & (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c)))) 
                                    << 9U) | ((0x1f0U 
                                               & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     >> 8U)) 
                                                 | (2U 
                                                    & ((~ 
                                                        ((0x17U 
                                                          >= 
                                                          vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                          [1U]) 
                                                         && (1U 
                                                             & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                >> 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U])))) 
                                                       << 1U)))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][0U] 
            = ((0x3ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][0U]) | (0xfffffc00U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                            << 9U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][1U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][1U]) | (0x3ffU & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                       >> 0x17U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][1U] 
            = ((0xfffc01ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][1U]) | (0xfffffe00U & ((0x38000U 
                                             & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                [1U] 
                                                << 0xfU)) 
                                            | ((0x7000U 
                                                & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                   >> 6U)) 
                                               | (0xe00U 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     << 8U))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][1U] 
            = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][1U]) | (0xfffc0000U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                            << 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][2U] 
            = ((0xffffc000U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][2U]) | (0x3fffU & ((0x3fffeU & 
                                         (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                                          << 1U)) | 
                                        (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                         >> 0x1fU))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][2U] 
            = ((0xc0003fffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                        [1U], 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U], 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [1U], 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [1U], 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U], 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [1U], 4U)))))
                               : 0U) << 0xeU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][2U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [1U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                         [1U]), 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [1U]), 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [1U]), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [1U]), 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [1U]), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U]), 4U)))))
                               : 0U) << 0x1eU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[1U][3U] 
            = (0x3fffU & (((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                              ((IData)(1U) 
                                                               + 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [1U]), 4U)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [1U]), 4U)))
                                            ? 0U : 
                                           (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U]), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [1U]), 4U))))) 
                                          | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [1U]), 4U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [1U]), 4U)))))
                            : 0U) >> 2U));
    }
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][0U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][1U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][2U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][3U] = 0U;
    if (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
        [2U]) {
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c 
            = ((0x17U >= vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                [2U]) && (1U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                >> vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                [2U])));
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c 
            = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                        [2U] + (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c)));
        __Vtemp_28[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_28[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_28[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_28[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_28[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_28[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_28[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] 
                = __Vtemp_28[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] 
                = __Vtemp_28[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] 
                = __Vtemp_28[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] 
                = __Vtemp_28[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                = __Vtemp_28[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                = __Vtemp_28[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] 
                = (0x1fffU & __Vtemp_28[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
        }
        __Vtemp_33[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [2U], 3U)))))));
        __Vtemp_33[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_33[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_33[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_33[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_33[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        __Vtemp_33[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [2U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [2U], 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] 
                = __Vtemp_33[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] 
                = __Vtemp_33[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] 
                = __Vtemp_33[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] 
                = __Vtemp_33[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] 
                = __Vtemp_33[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                = __Vtemp_33[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                = (0x1fffU & __Vtemp_33[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
        }
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][0U] 
            = (1U | ((0xfffffc00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                      [2U][0U]) | (((__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                     & ((7U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                               >> 1U)) 
                                        == (7U & (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c)))) 
                                    << 9U) | ((0x1f0U 
                                               & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     >> 8U)) 
                                                 | (2U 
                                                    & ((~ 
                                                        ((0x17U 
                                                          >= 
                                                          vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                          [2U]) 
                                                         && (1U 
                                                             & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                >> 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U])))) 
                                                       << 1U)))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][0U] 
            = ((0x3ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][0U]) | (0xfffffc00U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                            << 9U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][1U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][1U]) | (0x3ffU & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                       >> 0x17U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][1U] 
            = ((0xfffc01ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][1U]) | (0xfffffe00U & ((0x38000U 
                                             & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                [2U] 
                                                << 0xfU)) 
                                            | ((0x7000U 
                                                & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                   >> 6U)) 
                                               | (0xe00U 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     << 8U))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][1U] 
            = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][1U]) | (0xfffc0000U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                            << 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][2U] 
            = ((0xffffc000U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][2U]) | (0x3fffU & ((0x3fffeU & 
                                         (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                                          << 1U)) | 
                                        (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                         >> 0x1fU))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][2U] 
            = ((0xc0003fffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                        [2U], 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U], 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [2U], 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [2U], 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U], 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [2U], 4U)))))
                               : 0U) << 0xeU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][2U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [2U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                         [2U]), 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [2U]), 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [2U]), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [2U]), 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [2U]), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U]), 4U)))))
                               : 0U) << 0x1eU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[2U][3U] 
            = (0x3fffU & (((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                              ((IData)(1U) 
                                                               + 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [2U]), 4U)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [2U]), 4U)))
                                            ? 0U : 
                                           (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U]), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [2U]), 4U))))) 
                                          | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [2U]), 4U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [2U]), 4U)))))
                            : 0U) >> 2U));
    }
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c = 0U;
    __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][0U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][1U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][2U] = 0U;
    vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][3U] = 0U;
    if (vlSelfRef.__PVT__instrAligner__DOT__pencIdxValid
        [3U]) {
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c 
            = ((0x17U >= vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                [3U]) && (1U & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                >> vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                [3U])));
        __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c 
            = (0x1fU & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                        [3U] + (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__is32bit_c)));
        __Vtemp_39[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_39[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_39[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_39[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_39[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_39[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        __Vtemp_39[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c), 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] 
                = __Vtemp_39[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] 
                = __Vtemp_39[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] 
                = __Vtemp_39[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] 
                = __Vtemp_39[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                = __Vtemp_39[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                = __Vtemp_39[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] 
                = (0x1fffU & __Vtemp_39[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[6U] = 0U;
        }
        __Vtemp_44[0U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(1U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             (((IData)(0x10U) + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   (0x3ffU 
                                                    & ((IData)(0xddU) 
                                                       * 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [3U], 3U)))))));
        __Vtemp_44[1U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(2U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(1U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_44[2U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(3U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(2U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_44[3U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(4U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(3U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_44[4U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(5U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(4U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_44[5U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(6U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(5U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        __Vtemp_44[6U] = (((0U == (0x1fU & ((IData)(0x10U) 
                                            + (0x3ffU 
                                               & ((IData)(0xddU) 
                                                  * 
                                                  VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U))))))
                            ? 0U : (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                                    ((IData)(7U) + 
                                     (((IData)(0x10U) 
                                       + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))) 
                                      >> 5U))] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0xddU) 
                                                           * 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                         [3U], 3U)))))))) 
                          | (vlSelfRef.__PVT__instrAligner__DOT__cycles_c[
                             ((IData)(6U) + (((IData)(0x10U) 
                                              + (0x3ffU 
                                                 & ((IData)(0xddU) 
                                                    * 
                                                    VL_SHIFTR_III(32,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 3U)))) 
                                             >> 5U))] 
                             >> (0x1fU & ((IData)(0x10U) 
                                          + (0x3ffU 
                                             & ((IData)(0xddU) 
                                                * VL_SHIFTR_III(32,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 3U)))))));
        if ((0x296U >= ((IData)(0x10U) + (0x3ffU & 
                                          ((IData)(0xddU) 
                                           * VL_SHIFTR_III(32,32,32, 
                                                           vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                           [3U], 3U)))))) {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] 
                = __Vtemp_44[0U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] 
                = __Vtemp_44[1U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] 
                = __Vtemp_44[2U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] 
                = __Vtemp_44[3U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] 
                = __Vtemp_44[4U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                = __Vtemp_44[5U];
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                = (0x1fffU & __Vtemp_44[6U]);
        } else {
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[0U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[1U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[2U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[3U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[4U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] = 0U;
            __PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] = 0U;
        }
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][0U] 
            = (1U | ((0xfffffc00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                      [3U][0U]) | (((__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                     & ((7U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                               >> 1U)) 
                                        == (7U & (IData)(__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__idxLastWord_c)))) 
                                    << 9U) | ((0x1f0U 
                                               & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     >> 8U)) 
                                                 | (2U 
                                                    & ((~ 
                                                        ((0x17U 
                                                          >= 
                                                          vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                          [3U]) 
                                                         && (1U 
                                                             & (vlSelfRef.__PVT__instrAligner__DOT__windowStart32_c 
                                                                >> 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U])))) 
                                                       << 1U)))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][0U] 
            = ((0x3ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][0U]) | (0xfffffc00U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                            << 9U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][1U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][1U]) | (0x3ffU & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[4U] 
                                       >> 0x17U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][1U] 
            = ((0xfffc01ffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][1U]) | (0xfffffe00U & ((0x38000U 
                                             & (vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                [3U] 
                                                << 0xfU)) 
                                            | ((0x7000U 
                                                & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                   >> 6U)) 
                                               | (0xe00U 
                                                  & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOp[5U] 
                                                     << 8U))))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][1U] 
            = ((0x3ffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][1U]) | (0xfffc0000U & (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                            << 1U)));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][2U] 
            = ((0xffffc000U & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][2U]) | (0x3fffU & ((0x3fffeU & 
                                         (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[6U] 
                                          << 1U)) | 
                                        (__PVT__instrAligner__DOT__unnamedblk8__DOT__unnamedblk9__DOT__ifetchOpFirst[5U] 
                                         >> 0x1fU))));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][2U] 
            = ((0xc0003fffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                        [3U], 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U], 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [3U], 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [3U], 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U], 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [3U], 4U)))))
                               : 0U) << 0xeU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][2U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__instrAligner__DOT__instr_c
                [3U][2U]) | (((0x17fU >= (0x1ffU & 
                                          VL_SHIFTL_III(9,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                         [3U]), 4U)))
                               ? (0xffffU & (((0U == 
                                               (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                 [3U]), 4U)))
                                               ? 0U
                                               : (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x1ffU 
                                                     & VL_SHIFTL_III(9,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                      [3U]), 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,32,32, 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                     [3U]), 4U))))) 
                                             | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                                (0xfU 
                                                 & (VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                   [3U]), 4U) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U]), 4U)))))
                               : 0U) << 0x1eU));
        vlSelfRef.__PVT__instrAligner__DOT__instr_c[3U][3U] 
            = (0x3fffU & (((0x17fU >= (0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                              ((IData)(1U) 
                                                               + 
                                                               vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                               [3U]), 4U)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [3U]), 4U)))
                                            ? 0U : 
                                           (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                            (((IData)(0xfU) 
                                              + (0x1ffU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U]), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                    [3U]), 4U))))) 
                                          | (vlSelfRef.__PVT__instrAligner__DOT__window_c[
                                             (0xfU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                [3U]), 4U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__instrAligner__DOT__pencIdx
                                                                  [3U]), 4U)))))
                            : 0U) >> 2U));
    }
}

VL_ATTR_COLD void VTop_IFetchPipeline___ctor_var_reset(VTop_IFetchPipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_IFetchPipeline___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_MEM_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_mispr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_misprFetchID = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_ROB_curFetchID = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_BP_fetchLimit = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(120, vlSelf->__PVT__IN_ifetchOp);
    vlSelf->__PVT__OUT_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_predBranch = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__IN_rIdx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_lastValid = VL_RAND_RESET_I(3);
    vlSelf->__PVT__OUT_bpFileWE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_bpFileAddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__OUT_pcFileWE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_pcFileAddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__OUT_pcFileEntry = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__OUT_fetchBranch = VL_RAND_RESET_Q(49);
    VL_RAND_RESET_W(76, vlSelf->__PVT__OUT_btUpdate);
    vlSelf->__PVT__OUT_retUpdate = VL_RAND_RESET_Q(37);
    vlSelf->__PVT__IN_lateRetAddr = VL_RAND_RESET_I(31);
    vlSelf->__PVT__IN_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->__PVT__OUT_instrs[__Vi0]);
    }
    vlSelf->__PVT__IN_clearICache = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_flushTLB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_vmem = VL_RAND_RESET_I(31);
    vlSelf->__PVT__OUT_pw = VL_RAND_RESET_Q(55);
    vlSelf->__PVT__IN_pw = VL_RAND_RESET_Q(53);
    VL_RAND_RESET_W(225, vlSelf->__PVT__OUT_memc);
    VL_RAND_RESET_W(559, vlSelf->__PVT__IN_memc);
    vlSelf->__PVT__BH_decBranch = VL_RAND_RESET_Q(49);
    vlSelf->__PVT__IA_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__TLB_res = VL_RAND_RESET_I(28);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellout__itlb__OUT_res[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellinp__itlb__IN_rqs[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__Vcellinp__itlb__clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__assocCnt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cacheMiss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__phyPC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pageFault = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tlbMiss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__assocHitUnary_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__assocHit = VL_RAND_RESET_I(3);
    vlSelf->__Vcellout__assocEnc____pinNumber2 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->__PVT__assocHitInstrs);
    VL_RAND_RESET_W(205, vlSelf->__PVT__packet);
    VL_RAND_RESET_W(205, vlSelf->packetRePred);
    vlSelf->__PVT__OUT_pw_c = VL_RAND_RESET_Q(55);
    VL_RAND_RESET_W(225, vlSelf->__PVT__OUT_memc_c);
    vlSelf->__PVT__handlingMiss = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__outFIFO__rst = VL_RAND_RESET_I(1);
    vlSelf->fetchID = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(120, vlSelf->fetch0);
    VL_RAND_RESET_W(120, vlSelf->fetch1);
    vlSelf->__PVT__flushState = VL_RAND_RESET_I(2);
    vlSelf->__PVT__flushAssocIter = VL_RAND_RESET_I(2);
    vlSelf->__PVT__flushAddrIter = VL_RAND_RESET_I(6);
    vlSelf->__PVT__unnamedblk4__DOT__flushDone = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk4__DOT__nextFlushAssoc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__unnamedblk4__DOT__nextFlushAddr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__branchHandler__DOT__lastInstr = VL_RAND_RESET_I(16);
    vlSelf->__PVT__branchHandler__DOT__lastInstrPC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branchHandler__DOT__lastInstrValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(144, vlSelf->__PVT__branchHandler__DOT__instrsView);
    vlSelf->__PVT__branchHandler__DOT__is32bit = VL_RAND_RESET_I(9);
    vlSelf->__PVT__branchHandler__DOT__firstValid = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__PVT__branchHandler__DOT__pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__PVT__branchHandler__DOT__CJ_target[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__PVT__branchHandler__DOT__CB_target[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__branchHandler__DOT__J_target[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__branchHandler__DOT__B_target[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__branchHandler__DOT__branch[__Vi0]);
    }
    vlSelf->__PVT__branchHandler__DOT__decBranch_c = VL_RAND_RESET_Q(49);
    VL_RAND_RESET_W(76, vlSelf->__PVT__branchHandler__DOT__btUpdate_c);
    vlSelf->__PVT__branchHandler__DOT__retUpd_c = VL_RAND_RESET_Q(37);
    vlSelf->__PVT__branchHandler__DOT__endOffsValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branchHandler__DOT__endOffs = VL_RAND_RESET_I(3);
    vlSelf->__PVT__branchHandler__DOT__newPredPos_c = VL_RAND_RESET_I(3);
    vlSelf->__PVT__branchHandler__DOT__newPredTaken_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branchHandler__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i16 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__branchHandler__DOT__unnamedblk11__DOT__unnamedblk12__DOT__i32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__predIllegal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__actualOffs = VL_RAND_RESET_I(3);
    vlSelf->__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnly = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk16__DOT__dirOnlyTaken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branchHandler__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk17__DOT__predIllegal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branchHandler__DOT__unnamedblk18__DOT__lastIdx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__instrAligner__DOT__isInstrStart_c = VL_RAND_RESET_I(8);
    vlSelf->__PVT__instrAligner__DOT__isInstrStart32_c = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(442, vlSelf->__PVT__instrAligner__DOT__prev_r);
    VL_RAND_RESET_W(663, vlSelf->__PVT__instrAligner__DOT__cycles_c);
    VL_RAND_RESET_W(384, vlSelf->__PVT__instrAligner__DOT__window_c);
    vlSelf->__PVT__instrAligner__DOT__windowStart_c = VL_RAND_RESET_I(24);
    vlSelf->__PVT__instrAligner__DOT__windowStart32_c = VL_RAND_RESET_I(24);
    vlSelf->__PVT__instrAligner__DOT__middleIsSplit32 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__pencIdx[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__pencIdxValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->__PVT__instrAligner__DOT__instr_c[__Vi0]);
    }
    vlSelf->__PVT__instrAligner__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instrAligner__DOT__unhandled_c = VL_RAND_RESET_I(24);
    vlSelf->instrAligner__DOT____Vlvbound_hd7591fb5__0 = VL_RAND_RESET_I(8);
    vlSelf->instrAligner__DOT____Vlvbound_h4d56b7ca__0 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(205, vlSelf->instrAligner__DOT____Vlvbound_h3416e45f__0);
    vlSelf->instrAligner__DOT____Vlvbound_hb894d813__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__3__KET____DOT__redSum = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__2__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__instrAligner__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__3__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__itlb__DOT__tlb[__Vi0][__Vi1] = VL_RAND_RESET_Q(48);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__itlb__DOT__counters[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__itlb__DOT__inc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__itlb__DOT__ignoreCur = VL_RAND_RESET_I(1);
    vlSelf->__PVT__itlb__DOT__unnamedblk8__DOT__idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__itlb__DOT__unnamedblk8__DOT__assocIdx = VL_RAND_RESET_I(2);
    vlSelf->itlb__DOT____Vlvbound_hcb230f52__1 = VL_RAND_RESET_I(1);
    vlSelf->itlb__DOT____Vlvbound_hcb223e82__1 = VL_RAND_RESET_I(1);
    vlSelf->itlb__DOT____Vlvbound_hf4ef825e__0 = VL_RAND_RESET_I(3);
    vlSelf->itlb__DOT____Vlvbound_hcb229d0c__0 = VL_RAND_RESET_I(1);
    vlSelf->itlb__DOT____Vlvbound_hcb224d1f__0 = VL_RAND_RESET_I(1);
    vlSelf->itlb__DOT____Vlvbound_hdeabf1e7__0 = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(204, vlSelf->__PVT__outFIFO__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__outFIFO__DOT__indexIn = VL_RAND_RESET_I(2);
    vlSelf->__PVT__outFIFO__DOT__indexOut = VL_RAND_RESET_I(2);
    vlSelf->__PVT__outFIFO__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outFIFO__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outFIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outFIFO__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outFIFO__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outFIFO__DOT__doInsert = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(204, vlSelf->__PVT__outFIFO__DOT__outDataReg);
    vlSelf->__PVT__outFIFO__DOT__outValidReg = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_CheckTransfersIF__0__Vfuncout = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(225, vlSelf->__Vfunc_CheckTransfersIF__0__memcReq);
    VL_RAND_RESET_W(559, vlSelf->__Vfunc_CheckTransfersIF__0__memcRes);
    vlSelf->__Vfunc_CheckTransfersIF__0__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CheckTransfersIF__0__rv = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_CheckTransfersIF__1__Vfuncout = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(225, vlSelf->__Vfunc_CheckTransfersIF__1__memcReq);
    VL_RAND_RESET_W(559, vlSelf->__Vfunc_CheckTransfersIF__1__memcRes);
    vlSelf->__Vfunc_CheckTransfersIF__1__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CheckTransfersIF__1__rv = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(120, vlSelf->__Vdly__fetch1);
    vlSelf->__Vdly__fetchID = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__flushState = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__flushAssocIter = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__flushAddrIter = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__outFIFO__DOT__indexOut = VL_RAND_RESET_I(2);
}
