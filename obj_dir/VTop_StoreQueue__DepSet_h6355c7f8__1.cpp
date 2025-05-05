// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_StoreQueue.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__0(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__OUT_uop__v0;
    __VdlySet__OUT_uop__v0 = 0;
    VlWide<3>/*69:0*/ __VdlyVal__OUT_uop__v2;
    VL_ZERO_W(70, __VdlyVal__OUT_uop__v2);
    CData/*0:0*/ __VdlySet__OUT_uop__v2;
    __VdlySet__OUT_uop__v2 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v16;
    __VdlyDim0__entries__v16 = 0;
    CData/*0:0*/ __VdlySet__entries__v16;
    __VdlySet__entries__v16 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v17;
    __VdlyDim0__entries__v17 = 0;
    VlWide<3>/*69:0*/ __VdlyVal__OUT_uop__v3;
    VL_ZERO_W(70, __VdlyVal__OUT_uop__v3);
    CData/*0:0*/ __VdlySet__OUT_uop__v3;
    __VdlySet__OUT_uop__v3 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v18;
    __VdlyDim0__entries__v18 = 0;
    CData/*0:0*/ __VdlySet__entries__v18;
    __VdlySet__entries__v18 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v19;
    __VdlyDim0__entries__v19 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v20;
    __VdlyDim0__entries__v20 = 0;
    CData/*0:0*/ __VdlySet__entries__v20;
    __VdlySet__entries__v20 = 0;
    IData/*31:0*/ __VdlyVal__entries__v21;
    __VdlyVal__entries__v21 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v21;
    __VdlyDim0__entries__v21 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v22;
    __VdlyDim0__entries__v22 = 0;
    CData/*0:0*/ __VdlySet__entries__v22;
    __VdlySet__entries__v22 = 0;
    IData/*31:0*/ __VdlyVal__entries__v23;
    __VdlyVal__entries__v23 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v23;
    __VdlyDim0__entries__v23 = 0;
    CData/*0:0*/ __VdlySet__entries__v24;
    __VdlySet__entries__v24 = 0;
    CData/*0:0*/ __VdlySet__entries__v25;
    __VdlySet__entries__v25 = 0;
    CData/*0:0*/ __VdlySet__entries__v26;
    __VdlySet__entries__v26 = 0;
    CData/*0:0*/ __VdlySet__entries__v27;
    __VdlySet__entries__v27 = 0;
    CData/*0:0*/ __VdlySet__entries__v28;
    __VdlySet__entries__v28 = 0;
    CData/*0:0*/ __VdlySet__entries__v29;
    __VdlySet__entries__v29 = 0;
    CData/*0:0*/ __VdlySet__entries__v30;
    __VdlySet__entries__v30 = 0;
    CData/*0:0*/ __VdlySet__entries__v31;
    __VdlySet__entries__v31 = 0;
    CData/*0:0*/ __VdlySet__entries__v32;
    __VdlySet__entries__v32 = 0;
    CData/*0:0*/ __VdlySet__entries__v33;
    __VdlySet__entries__v33 = 0;
    CData/*0:0*/ __VdlySet__entries__v34;
    __VdlySet__entries__v34 = 0;
    CData/*0:0*/ __VdlySet__entries__v35;
    __VdlySet__entries__v35 = 0;
    CData/*0:0*/ __VdlySet__entries__v36;
    __VdlySet__entries__v36 = 0;
    CData/*0:0*/ __VdlySet__entries__v37;
    __VdlySet__entries__v37 = 0;
    CData/*0:0*/ __VdlySet__entries__v38;
    __VdlySet__entries__v38 = 0;
    CData/*0:0*/ __VdlySet__entries__v39;
    __VdlySet__entries__v39 = 0;
    IData/*29:0*/ __VdlyVal__entries__v40;
    __VdlyVal__entries__v40 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v40;
    __VdlyDim0__entries__v40 = 0;
    CData/*0:0*/ __VdlySet__entries__v40;
    __VdlySet__entries__v40 = 0;
    CData/*3:0*/ __VdlyVal__entries__v41;
    __VdlyVal__entries__v41 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v41;
    __VdlyDim0__entries__v41 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v42;
    __VdlyDim0__entries__v42 = 0;
    IData/*29:0*/ __VdlyVal__entries__v43;
    __VdlyVal__entries__v43 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v43;
    __VdlyDim0__entries__v43 = 0;
    CData/*0:0*/ __VdlySet__entries__v43;
    __VdlySet__entries__v43 = 0;
    CData/*3:0*/ __VdlyVal__entries__v44;
    __VdlyVal__entries__v44 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v44;
    __VdlyDim0__entries__v44 = 0;
    CData/*3:0*/ __VdlyDim0__entries__v45;
    __VdlyDim0__entries__v45 = 0;
    // Body
    vlSelfRef.__Vdly__OUT_empty = vlSelfRef.__PVT__OUT_empty;
    __VdlySet__entries__v16 = 0U;
    __VdlySet__entries__v18 = 0U;
    __VdlySet__entries__v20 = 0U;
    __VdlySet__entries__v22 = 0U;
    __VdlySet__entries__v24 = 0U;
    __VdlySet__entries__v25 = 0U;
    __VdlySet__entries__v26 = 0U;
    __VdlySet__entries__v27 = 0U;
    __VdlySet__entries__v28 = 0U;
    __VdlySet__entries__v29 = 0U;
    __VdlySet__entries__v30 = 0U;
    __VdlySet__entries__v31 = 0U;
    __VdlySet__entries__v32 = 0U;
    __VdlySet__entries__v33 = 0U;
    __VdlySet__entries__v34 = 0U;
    __VdlySet__entries__v35 = 0U;
    __VdlySet__entries__v36 = 0U;
    __VdlySet__entries__v37 = 0U;
    __VdlySet__entries__v38 = 0U;
    __VdlySet__entries__v39 = 0U;
    __VdlySet__entries__v40 = 0U;
    __VdlySet__entries__v43 = 0U;
    __VdlySet__OUT_uop__v0 = 0U;
    __VdlySet__OUT_uop__v2 = 0U;
    __VdlySet__OUT_uop__v3 = 0U;
    vlSelfRef.__Vdly__flushing = vlSelfRef.__PVT__flushing;
    vlSelfRef.__VdlySet__OUT_fwd__v4 = 0U;
    vlSelfRef.__VdlySet__OUT_fwd__v8 = 0U;
    vlSelfRef.__VdlySet__OUT_fwd__v0 = 1U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.baseIndex = 0U;
        vlSelfRef.__PVT__OUT_maxStoreSqN = 0xfU;
        vlSelfRef.__Vdly__OUT_empty = 1U;
        vlSelfRef.__Vdly__flushing = 0U;
        __VdlySet__OUT_uop__v0 = 1U;
    } else {
        vlSelfRef.__PVT__unnamedblk28__DOT__modified = 0U;
        vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx 
            = vlSelfRef.__PVT__srcIdx[0U];
        __VdlyVal__OUT_uop__v2[0U] = vlSelfRef.__PVT__outDeqView
            [vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx][0U];
        __VdlyVal__OUT_uop__v2[1U] = vlSelfRef.__PVT__outDeqView
            [vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx][1U];
        __VdlyVal__OUT_uop__v2[2U] = vlSelfRef.__PVT__outDeqView
            [vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx][2U];
        __VdlySet__OUT_uop__v2 = 1U;
        vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr 
            = (0xeU & vlSelfRef.__PVT__deqAddrsSorted
               [0U]);
        vlSelfRef.__PVT__OUT_maxStoreSqN = (0x7fU & 
                                            ((IData)(0xfU) 
                                             + (IData)(vlSelfRef.__PVT__nextBaseIndex)));
        if ((1U & vlSelfRef.__PVT__IN_uopLd[0U][0U])) {
            vlSelfRef.__VdlySet__OUT_fwd__v4 = 1U;
            vlSelfRef.__VdlyVal__OUT_fwd__v5 = vlSelfRef.__PVT__lookupData
                [0U];
            vlSelfRef.__VdlyVal__OUT_fwd__v6 = vlSelfRef.__PVT__lookupMask
                [0U];
            vlSelfRef.__VdlyVal__OUT_fwd__v7 = vlSelfRef.__PVT__lookupConflict
                [0U];
        }
        vlSelfRef.baseIndex = vlSelfRef.__PVT__nextBaseIndex;
        vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx 
            = vlSelfRef.__PVT__srcIdx[1U];
        if ((1U & (IData)(vlSelfRef.__PVT__entryWasDeqd))) {
            __VdlyDim0__entries__v16 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr;
            __VdlySet__entries__v16 = 1U;
            __VdlyDim0__entries__v17 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr;
        }
        if ((1U & vlSelfRef.__PVT__IN_uopLd[1U][0U])) {
            vlSelfRef.__VdlySet__OUT_fwd__v8 = 1U;
            vlSelfRef.__VdlyVal__OUT_fwd__v9 = vlSelfRef.__PVT__lookupData
                [1U];
            vlSelfRef.__VdlyVal__OUT_fwd__v10 = vlSelfRef.__PVT__lookupMask
                [1U];
            vlSelfRef.__VdlyVal__OUT_fwd__v11 = vlSelfRef.__PVT__lookupConflict
                [1U];
        }
        __VdlyVal__OUT_uop__v3[0U] = vlSelfRef.__PVT__outDeqView
            [vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx][0U];
        __VdlyVal__OUT_uop__v3[1U] = vlSelfRef.__PVT__outDeqView
            [vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx][1U];
        __VdlyVal__OUT_uop__v3[2U] = vlSelfRef.__PVT__outDeqView
            [vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__idx][2U];
        __VdlySet__OUT_uop__v3 = 1U;
        vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr 
            = (1U | (0xeU & vlSelfRef.__PVT__deqAddrsSorted
                     [1U]));
        if ((2U & (IData)(vlSelfRef.__PVT__entryWasDeqd))) {
            __VdlyDim0__entries__v18 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr;
            __VdlySet__entries__v18 = 1U;
            __VdlyDim0__entries__v19 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk31__DOT__unnamedblk32__DOT__addr;
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__IN_stDataUOp
                           [0U]) & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                                    | ((~ (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                           >> 6U)) 
                                       & VL_GTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,7, 
                                                                   (0x7fU 
                                                                    & ((IData)(
                                                                               (vlSelfRef.__PVT__IN_stDataUOp
                                                                                [0U] 
                                                                                >> 1U)) 
                                                                       - 
                                                                       ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                         << 0x12U) 
                                                                        | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                           >> 0xeU))))))))))) {
            vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx 
                = (0xfU & (IData)((vlSelfRef.__PVT__IN_stDataUOp
                                   [0U] >> 1U)));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx))))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreQueue.sv:397: Assertion failed in %NTop.soc.core.sq.unnamedblk28.unnamedblk33.unnamedblk34: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreQueue.sv", 397, "");
                }
            }
            vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx 
                = (0xeU & (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx));
            __VdlyDim0__entries__v20 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx;
            __VdlySet__entries__v20 = 1U;
            __VdlyVal__entries__v21 = (IData)((vlSelfRef.__PVT__IN_stDataUOp
                                               [0U] 
                                               >> 8U));
            __VdlyDim0__entries__v21 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx;
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__IN_stDataUOp
                           [1U]) & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                                    | ((~ (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                           >> 6U)) 
                                       & VL_GTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,7, 
                                                                   (0x7fU 
                                                                    & ((IData)(
                                                                               (vlSelfRef.__PVT__IN_stDataUOp
                                                                                [1U] 
                                                                                >> 1U)) 
                                                                       - 
                                                                       ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                         << 0x12U) 
                                                                        | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                           >> 0xeU))))))))))) {
            vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx 
                = (0xfU & (IData)((vlSelfRef.__PVT__IN_stDataUOp
                                   [1U] >> 1U)));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreQueue.sv:397: Assertion failed in %NTop.soc.core.sq.unnamedblk28.unnamedblk33.unnamedblk34: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreQueue.sv", 397, "");
                }
            }
            vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx 
                = (1U | (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx));
            __VdlyDim0__entries__v22 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx;
            __VdlySet__entries__v22 = 1U;
            __VdlyVal__entries__v23 = (IData)((vlSelfRef.__PVT__IN_stDataUOp
                                               [1U] 
                                               >> 8U));
            __VdlyDim0__entries__v23 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk33__DOT__unnamedblk34__DOT__idx;
        }
        if ((1U & vlSymsp->TOP__Top__soc__core.branch[0U])) {
            vlSelfRef.__Vdly__flushing = (1U & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                >> 6U));
            if ((1U & ((IData)(vlSelfRef.__PVT__invalRange_c) 
                       | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                           >> 6U) & (~ (IData)(vlSelfRef.entryReady_r)))))) {
                __VdlySet__entries__v24 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 1U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 1U)))))) {
                __VdlySet__entries__v25 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 2U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 2U)))))) {
                __VdlySet__entries__v26 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 3U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 3U)))))) {
                __VdlySet__entries__v27 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 4U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 4U)))))) {
                __VdlySet__entries__v28 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 5U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 5U)))))) {
                __VdlySet__entries__v29 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 6U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 6U)))))) {
                __VdlySet__entries__v30 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 7U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 7U)))))) {
                __VdlySet__entries__v31 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 8U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 8U)))))) {
                __VdlySet__entries__v32 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 9U) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                   >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                >> 9U)))))) {
                __VdlySet__entries__v33 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 0xaU) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                     >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                  >> 0xaU)))))) {
                __VdlySet__entries__v34 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 0xbU) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                     >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                  >> 0xbU)))))) {
                __VdlySet__entries__v35 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 0xcU) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                     >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                  >> 0xcU)))))) {
                __VdlySet__entries__v36 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 0xdU) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                     >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                  >> 0xdU)))))) {
                __VdlySet__entries__v37 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 0xeU) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                     >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                  >> 0xeU)))))) {
                __VdlySet__entries__v38 = 1U;
            }
            if ((1U & (((IData)(vlSelfRef.__PVT__invalRange_c) 
                        >> 0xfU) | ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                     >> 6U) & (~ ((IData)(vlSelfRef.entryReady_r) 
                                                  >> 0xfU)))))) {
                __VdlySet__entries__v39 = 1U;
            }
        }
        if ((1U & ((vlSelfRef.__PVT__IN_uopSt[0U][0U] 
                    & (vlSelfRef.__PVT__IN_uopSt[0U][1U] 
                       >> 0xaU)) & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                                    | (VL_GTES_III(32, 0U, 
                                                   VL_EXTENDS_II(32,7, 
                                                                 (0x7fU 
                                                                  & (((vlSelfRef.__PVT__IN_uopSt
                                                                       [0U][0U] 
                                                                       << 7U) 
                                                                      | (vlSelfRef.__PVT__IN_uopSt
                                                                         [0U][0U] 
                                                                         >> 0x19U)) 
                                                                     - 
                                                                     ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                       << 0xbU) 
                                                                      | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                         >> 0x15U)))))) 
                                       & (~ (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                             >> 6U))))))) {
            vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index 
                = (0xfU & (vlSelfRef.__PVT__IN_uopSt
                           [0U][0U] >> 0x12U));
            vlSelfRef.__PVT__unnamedblk28__DOT__modified = 1U;
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index))))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreQueue.sv:420: Assertion failed in %NTop.soc.core.sq.unnamedblk28.unnamedblk36.unnamedblk37: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreQueue.sv", 420, "");
                }
            }
            vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index 
                = (0xeU & (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((0x7fU & (vlSelfRef.__PVT__IN_uopSt
                                            [0U][0U] 
                                            >> 0x12U)) 
                                  > ((IData)(0xfU) 
                                     + (IData)(vlSelfRef.__PVT__nextBaseIndex)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreQueue.sv:422: Assertion failed in %NTop.soc.core.sq.unnamedblk28.unnamedblk36.unnamedblk37: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreQueue.sv", 422, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & vlSelfRef.entries
                                  [vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index][0U])))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreQueue.sv:423: Assertion failed in %NTop.soc.core.sq.unnamedblk28.unnamedblk36.unnamedblk37: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreQueue.sv", 423, "");
                }
            }
            __VdlyVal__entries__v40 = (0x3fffffffU 
                                       & ((vlSelfRef.__PVT__IN_uopSt
                                           [0U][2U] 
                                           << 0xcU) 
                                          | (vlSelfRef.__PVT__IN_uopSt
                                             [0U][1U] 
                                             >> 0x14U)));
            __VdlyDim0__entries__v40 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
            __VdlySet__entries__v40 = 1U;
            __VdlyVal__entries__v41 = (0xfU & (vlSelfRef.__PVT__IN_uopSt
                                               [0U][1U] 
                                               >> 0xeU));
            __VdlyDim0__entries__v41 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
            __VdlyDim0__entries__v42 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
        }
        if ((1U & ((vlSelfRef.__PVT__IN_uopSt[1U][0U] 
                    & (vlSelfRef.__PVT__IN_uopSt[1U][1U] 
                       >> 0xaU)) & ((~ vlSymsp->TOP__Top__soc__core.branch[0U]) 
                                    | (VL_GTES_III(32, 0U, 
                                                   VL_EXTENDS_II(32,7, 
                                                                 (0x7fU 
                                                                  & (((vlSelfRef.__PVT__IN_uopSt
                                                                       [1U][0U] 
                                                                       << 7U) 
                                                                      | (vlSelfRef.__PVT__IN_uopSt
                                                                         [1U][0U] 
                                                                         >> 0x19U)) 
                                                                     - 
                                                                     ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                       << 0xbU) 
                                                                      | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                         >> 0x15U)))))) 
                                       & (~ (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                             >> 6U))))))) {
            vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index 
                = (0xfU & (vlSelfRef.__PVT__IN_uopSt
                           [1U][0U] >> 0x12U));
            vlSelfRef.__PVT__unnamedblk28__DOT__modified = 1U;
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreQueue.sv:420: Assertion failed in %NTop.soc.core.sq.unnamedblk28.unnamedblk36.unnamedblk37: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreQueue.sv", 420, "");
                }
            }
            vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index 
                = (1U | (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index));
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY((((0x7fU & (vlSelfRef.__PVT__IN_uopSt
                                            [1U][0U] 
                                            >> 0x12U)) 
                                  > ((IData)(0xfU) 
                                     + (IData)(vlSelfRef.__PVT__nextBaseIndex)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreQueue.sv:422: Assertion failed in %NTop.soc.core.sq.unnamedblk28.unnamedblk36.unnamedblk37: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreQueue.sv", 422, "");
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & vlSelfRef.entries
                                  [vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index][0U])))) {
                    VL_WRITEF_NX("[%0t] %%Error: StoreQueue.sv:423: Assertion failed in %NTop.soc.core.sq.unnamedblk28.unnamedblk36.unnamedblk37: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("src/StoreQueue.sv", 423, "");
                }
            }
            __VdlyVal__entries__v43 = (0x3fffffffU 
                                       & ((vlSelfRef.__PVT__IN_uopSt
                                           [1U][2U] 
                                           << 0xcU) 
                                          | (vlSelfRef.__PVT__IN_uopSt
                                             [1U][1U] 
                                             >> 0x14U)));
            __VdlyDim0__entries__v43 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
            __VdlySet__entries__v43 = 1U;
            __VdlyVal__entries__v44 = (0xfU & (vlSelfRef.__PVT__IN_uopSt
                                               [1U][1U] 
                                               >> 0xeU));
            __VdlyDim0__entries__v44 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
            __VdlyDim0__entries__v45 = vlSelfRef.__PVT__unnamedblk28__DOT__unnamedblk36__DOT__unnamedblk37__DOT__index;
        }
        vlSelfRef.__Vdly__OUT_empty = ((IData)(vlSelfRef.__PVT__empty) 
                                       & (~ (IData)(vlSelfRef.__PVT__unnamedblk28__DOT__modified)));
        if (((IData)(vlSelfRef.__PVT__OUT_empty) & (IData)(vlSelfRef.__PVT__flushing))) {
            vlSelfRef.__Vdly__flushing = 0U;
        }
    }
    vlSelfRef.entryReady_r = ((IData)(vlSymsp->TOP.rst)
                               ? 0U : (IData)(vlSelfRef.__PVT__entryReady_c));
    if (__VdlySet__entries__v16) {
        vlSelfRef.entries[__VdlyDim0__entries__v16][0U] 
            = (0xfffffffdU & vlSelfRef.entries[__VdlyDim0__entries__v16][0U]);
        vlSelfRef.entries[__VdlyDim0__entries__v17][0U] 
            = (0xfffffffeU & vlSelfRef.entries[__VdlyDim0__entries__v17][0U]);
    }
    if (__VdlySet__entries__v18) {
        vlSelfRef.entries[__VdlyDim0__entries__v18][0U] 
            = (0xfffffffdU & vlSelfRef.entries[__VdlyDim0__entries__v18][0U]);
        vlSelfRef.entries[__VdlyDim0__entries__v19][0U] 
            = (0xfffffffeU & vlSelfRef.entries[__VdlyDim0__entries__v19][0U]);
    }
    if (__VdlySet__entries__v20) {
        vlSelfRef.entries[__VdlyDim0__entries__v20][0U] 
            = (2U | vlSelfRef.entries[__VdlyDim0__entries__v20][0U]);
        vlSelfRef.entries[__VdlyDim0__entries__v21][1U] 
            = ((0xfU & vlSelfRef.entries[__VdlyDim0__entries__v21][1U]) 
               | (__VdlyVal__entries__v21 << 4U));
        vlSelfRef.entries[__VdlyDim0__entries__v21][2U] 
            = (__VdlyVal__entries__v21 >> 0x1cU);
    }
    if (__VdlySet__entries__v22) {
        vlSelfRef.entries[__VdlyDim0__entries__v22][0U] 
            = (2U | vlSelfRef.entries[__VdlyDim0__entries__v22][0U]);
        vlSelfRef.entries[__VdlyDim0__entries__v23][1U] 
            = ((0xfU & vlSelfRef.entries[__VdlyDim0__entries__v23][1U]) 
               | (__VdlyVal__entries__v23 << 4U));
        vlSelfRef.entries[__VdlyDim0__entries__v23][2U] 
            = (__VdlyVal__entries__v23 >> 0x1cU);
    }
    if (__VdlySet__entries__v24) {
        vlSelfRef.entries[0U][0U] = 0U;
        vlSelfRef.entries[0U][1U] = 0U;
        vlSelfRef.entries[0U][2U] = 0U;
    }
    if (__VdlySet__entries__v25) {
        vlSelfRef.entries[1U][0U] = 0U;
        vlSelfRef.entries[1U][1U] = 0U;
        vlSelfRef.entries[1U][2U] = 0U;
    }
    if (__VdlySet__entries__v26) {
        vlSelfRef.entries[2U][0U] = 0U;
        vlSelfRef.entries[2U][1U] = 0U;
        vlSelfRef.entries[2U][2U] = 0U;
    }
    if (__VdlySet__entries__v27) {
        vlSelfRef.entries[3U][0U] = 0U;
        vlSelfRef.entries[3U][1U] = 0U;
        vlSelfRef.entries[3U][2U] = 0U;
    }
    if (__VdlySet__entries__v28) {
        vlSelfRef.entries[4U][0U] = 0U;
        vlSelfRef.entries[4U][1U] = 0U;
        vlSelfRef.entries[4U][2U] = 0U;
    }
    if (__VdlySet__entries__v29) {
        vlSelfRef.entries[5U][0U] = 0U;
        vlSelfRef.entries[5U][1U] = 0U;
        vlSelfRef.entries[5U][2U] = 0U;
    }
    if (__VdlySet__entries__v30) {
        vlSelfRef.entries[6U][0U] = 0U;
        vlSelfRef.entries[6U][1U] = 0U;
        vlSelfRef.entries[6U][2U] = 0U;
    }
    if (__VdlySet__entries__v31) {
        vlSelfRef.entries[7U][0U] = 0U;
        vlSelfRef.entries[7U][1U] = 0U;
        vlSelfRef.entries[7U][2U] = 0U;
    }
    if (__VdlySet__entries__v32) {
        vlSelfRef.entries[8U][0U] = 0U;
        vlSelfRef.entries[8U][1U] = 0U;
        vlSelfRef.entries[8U][2U] = 0U;
    }
    if (__VdlySet__entries__v33) {
        vlSelfRef.entries[9U][0U] = 0U;
        vlSelfRef.entries[9U][1U] = 0U;
        vlSelfRef.entries[9U][2U] = 0U;
    }
    if (__VdlySet__entries__v34) {
        vlSelfRef.entries[0xaU][0U] = 0U;
        vlSelfRef.entries[0xaU][1U] = 0U;
        vlSelfRef.entries[0xaU][2U] = 0U;
    }
    if (__VdlySet__entries__v35) {
        vlSelfRef.entries[0xbU][0U] = 0U;
        vlSelfRef.entries[0xbU][1U] = 0U;
        vlSelfRef.entries[0xbU][2U] = 0U;
    }
    if (__VdlySet__entries__v36) {
        vlSelfRef.entries[0xcU][0U] = 0U;
        vlSelfRef.entries[0xcU][1U] = 0U;
        vlSelfRef.entries[0xcU][2U] = 0U;
    }
    if (__VdlySet__entries__v37) {
        vlSelfRef.entries[0xdU][0U] = 0U;
        vlSelfRef.entries[0xdU][1U] = 0U;
        vlSelfRef.entries[0xdU][2U] = 0U;
    }
    if (__VdlySet__entries__v38) {
        vlSelfRef.entries[0xeU][0U] = 0U;
        vlSelfRef.entries[0xeU][1U] = 0U;
        vlSelfRef.entries[0xeU][2U] = 0U;
    }
    if (__VdlySet__entries__v39) {
        vlSelfRef.entries[0xfU][0U] = 0U;
        vlSelfRef.entries[0xfU][1U] = 0U;
        vlSelfRef.entries[0xfU][2U] = 0U;
    }
    if (__VdlySet__entries__v40) {
        vlSelfRef.entries[__VdlyDim0__entries__v40][0U] 
            = ((0x3fU & vlSelfRef.entries[__VdlyDim0__entries__v40][0U]) 
               | (__VdlyVal__entries__v40 << 6U));
        vlSelfRef.entries[__VdlyDim0__entries__v40][1U] 
            = ((0xfffffff0U & vlSelfRef.entries[__VdlyDim0__entries__v40][1U]) 
               | (__VdlyVal__entries__v40 >> 0x1aU));
        vlSelfRef.entries[__VdlyDim0__entries__v41][0U] 
            = ((0xffffffc3U & vlSelfRef.entries[__VdlyDim0__entries__v41][0U]) 
               | ((IData)(__VdlyVal__entries__v41) 
                  << 2U));
        vlSelfRef.entries[__VdlyDim0__entries__v42][0U] 
            = (1U | vlSelfRef.entries[__VdlyDim0__entries__v42][0U]);
    }
    if (__VdlySet__entries__v43) {
        vlSelfRef.entries[__VdlyDim0__entries__v43][0U] 
            = ((0x3fU & vlSelfRef.entries[__VdlyDim0__entries__v43][0U]) 
               | (__VdlyVal__entries__v43 << 6U));
        vlSelfRef.entries[__VdlyDim0__entries__v43][1U] 
            = ((0xfffffff0U & vlSelfRef.entries[__VdlyDim0__entries__v43][1U]) 
               | (__VdlyVal__entries__v43 >> 0x1aU));
        vlSelfRef.entries[__VdlyDim0__entries__v44][0U] 
            = ((0xffffffc3U & vlSelfRef.entries[__VdlyDim0__entries__v44][0U]) 
               | ((IData)(__VdlyVal__entries__v44) 
                  << 2U));
        vlSelfRef.entries[__VdlyDim0__entries__v45][0U] 
            = (1U | vlSelfRef.entries[__VdlyDim0__entries__v45][0U]);
    }
    if (__VdlySet__OUT_uop__v0) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[0U][2U] = 0U;
        vlSelfRef.entries[0U][0U] = 0U;
        vlSelfRef.entries[0U][1U] = 0U;
        vlSelfRef.entries[0U][2U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][0U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][1U] = 0U;
        vlSelfRef.__PVT__OUT_uop[1U][2U] = 0U;
        vlSelfRef.entries[1U][0U] = 0U;
        vlSelfRef.entries[1U][1U] = 0U;
        vlSelfRef.entries[1U][2U] = 0U;
        vlSelfRef.entries[2U][0U] = 0U;
        vlSelfRef.entries[2U][1U] = 0U;
        vlSelfRef.entries[2U][2U] = 0U;
        vlSelfRef.entries[3U][0U] = 0U;
        vlSelfRef.entries[3U][1U] = 0U;
        vlSelfRef.entries[3U][2U] = 0U;
        vlSelfRef.entries[4U][0U] = 0U;
        vlSelfRef.entries[4U][1U] = 0U;
        vlSelfRef.entries[4U][2U] = 0U;
        vlSelfRef.entries[5U][0U] = 0U;
        vlSelfRef.entries[5U][1U] = 0U;
        vlSelfRef.entries[5U][2U] = 0U;
        vlSelfRef.entries[6U][0U] = 0U;
        vlSelfRef.entries[6U][1U] = 0U;
        vlSelfRef.entries[6U][2U] = 0U;
        vlSelfRef.entries[7U][0U] = 0U;
        vlSelfRef.entries[7U][1U] = 0U;
        vlSelfRef.entries[7U][2U] = 0U;
        vlSelfRef.entries[8U][0U] = 0U;
        vlSelfRef.entries[8U][1U] = 0U;
        vlSelfRef.entries[8U][2U] = 0U;
        vlSelfRef.entries[9U][0U] = 0U;
        vlSelfRef.entries[9U][1U] = 0U;
        vlSelfRef.entries[9U][2U] = 0U;
        vlSelfRef.entries[0xaU][0U] = 0U;
        vlSelfRef.entries[0xaU][1U] = 0U;
        vlSelfRef.entries[0xaU][2U] = 0U;
        vlSelfRef.entries[0xbU][0U] = 0U;
        vlSelfRef.entries[0xbU][1U] = 0U;
        vlSelfRef.entries[0xbU][2U] = 0U;
        vlSelfRef.entries[0xcU][0U] = 0U;
        vlSelfRef.entries[0xcU][1U] = 0U;
        vlSelfRef.entries[0xcU][2U] = 0U;
        vlSelfRef.entries[0xdU][0U] = 0U;
        vlSelfRef.entries[0xdU][1U] = 0U;
        vlSelfRef.entries[0xdU][2U] = 0U;
        vlSelfRef.entries[0xeU][0U] = 0U;
        vlSelfRef.entries[0xeU][1U] = 0U;
        vlSelfRef.entries[0xeU][2U] = 0U;
        vlSelfRef.entries[0xfU][0U] = 0U;
        vlSelfRef.entries[0xfU][1U] = 0U;
        vlSelfRef.entries[0xfU][2U] = 0U;
    }
    if (__VdlySet__OUT_uop__v2) {
        vlSelfRef.__PVT__OUT_uop[0U][0U] = __VdlyVal__OUT_uop__v2[0U];
        vlSelfRef.__PVT__OUT_uop[0U][1U] = __VdlyVal__OUT_uop__v2[1U];
        vlSelfRef.__PVT__OUT_uop[0U][2U] = __VdlyVal__OUT_uop__v2[2U];
    }
    if (__VdlySet__OUT_uop__v3) {
        vlSelfRef.__PVT__OUT_uop[1U][0U] = __VdlyVal__OUT_uop__v3[0U];
        vlSelfRef.__PVT__OUT_uop[1U][1U] = __VdlyVal__OUT_uop__v3[1U];
        vlSelfRef.__PVT__OUT_uop[1U][2U] = __VdlyVal__OUT_uop__v3[2U];
    }
}

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__6(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__6\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__readyRangeGen__IN_allOnes;
    __Vcellinp__readyRangeGen__IN_allOnes = 0;
    CData/*0:0*/ __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active;
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
    // Body
    __Vcellinp__readyRangeGen__IN_allOnes = ((0x7fU 
                                              & ((IData)(0x10U) 
                                                 + (IData)(vlSelfRef.baseIndex))) 
                                             == (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active 
        = ((0xfU & (IData)(vlSelfRef.baseIndex)) > 
           (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN)));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfffeU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | ((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                        | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 1U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 1U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfffdU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 1U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 2U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 2U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfffbU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 2U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 3U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 3U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfff7U & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 3U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 4U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 4U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xffefU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 4U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 5U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 5U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xffdfU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 5U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 6U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 6U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xffbfU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 6U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 7U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 7U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xff7fU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 7U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 8U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 8U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfeffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 8U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 9U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 9U));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfdffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 9U));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xaU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xaU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xfbffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xaU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xbU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xbU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xf7ffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xbU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xcU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xcU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xefffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xcU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xdU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xdU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xdfffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xdU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xeU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xeU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0xbfffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xeU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSymsp->TOP__Top__soc__core__rob.__PVT__OUT_lastStoreSqN))) 
                 >> 0xfU));
    __PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xfU));
    if (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__readyRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__readyRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__entryReady_c = ((0x7fffU & (IData)(vlSelfRef.__PVT__entryReady_c)) 
                                     | (((IData)(__PVT__readyRangeGen__DOT__unnamedblk1__DOT__active) 
                                         | (IData)(__Vcellinp__readyRangeGen__IN_allOnes)) 
                                        << 0xfU));
}

VL_INLINE_OPT void VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__8(VTop_StoreQueue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_StoreQueue___nba_sequent__TOP__Top__soc__core__sq__8\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vcellinp__invalRangeGen__IN_enable;
    __Vcellinp__invalRangeGen__IN_enable = 0;
    CData/*0:0*/ __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active;
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0;
    CData/*0:0*/ __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd;
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd = 0;
    CData/*0:0*/ __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart;
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart = 0;
    // Body
    __Vcellinp__invalRangeGen__IN_enable = VL_GTS_III(32, 0xfU, 
                                                      VL_EXTENDS_II(32,7, 
                                                                    (0x7fU 
                                                                     & (((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                          << 0x12U) 
                                                                         | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                                            >> 0xeU)) 
                                                                        - (IData)(vlSelfRef.baseIndex)))));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active 
        = ((0xfU & ((IData)(1U) + ((vlSymsp->TOP__Top__soc__core.branch[0U] 
                                    << 0x12U) | (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                                 >> 0xeU)))) 
           >= (0xfU & (IData)(vlSelfRef.baseIndex)));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & ((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xfU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfffeU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | ((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                        & (IData)(__Vcellinp__invalRangeGen__IN_enable)));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 1U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & ((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                         >> 0xeU))));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfffdU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 1U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 2U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 1U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfffbU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 2U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 3U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 2U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfff7U & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 3U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 4U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 3U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xffefU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 4U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 5U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 4U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xffdfU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 5U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 6U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 5U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xffbfU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 6U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 7U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 6U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xff7fU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 7U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 8U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 7U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfeffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 8U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 9U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 8U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfdffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 9U));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xaU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 9U));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xfbffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xaU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xbU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xaU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xf7ffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xbU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xcU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xbU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xefffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xcU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xdU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xcU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xdfffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xdU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xeU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xdU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0xbfffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xeU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd 
        = (1U & (((IData)(1U) << (0xfU & (IData)(vlSelfRef.baseIndex))) 
                 >> 0xfU));
    __PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart 
        = (1U & (((IData)(1U) << (0xfU & (vlSymsp->TOP__Top__soc__core.branch[0U] 
                                          >> 0xeU))) 
                 >> 0xeU));
    if (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) 
         & (IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd))) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doStart) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 1U;
    } else if (__PVT__invalRangeGen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__doEnd) {
        __PVT__invalRangeGen__DOT__unnamedblk1__DOT__active = 0U;
    }
    vlSelfRef.__PVT__invalRange_c = ((0x7fffU & (IData)(vlSelfRef.__PVT__invalRange_c)) 
                                     | (((IData)(__PVT__invalRangeGen__DOT__unnamedblk1__DOT__active) 
                                         & (IData)(__Vcellinp__invalRangeGen__IN_enable)) 
                                        << 0xfU));
}
