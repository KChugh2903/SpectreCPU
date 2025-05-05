// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ReturnStack.h"

VL_ATTR_COLD void VTop_ReturnStack___ctor_var_reset(VTop_ReturnStack* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VTop_ReturnStack___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_fetchID = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_comFetchID = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_lastPC = VL_RAND_RESET_I(31);
    vlSelf->__PVT__IN_branch = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__OUT_curRetAddr = VL_RAND_RESET_I(31);
    vlSelf->__PVT__OUT_lateRetAddr = VL_RAND_RESET_I(31);
    vlSelf->__PVT__IN_recoveryIdx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__IN_mispr = VL_RAND_RESET_Q(49);
    vlSelf->__PVT__OUT_curIdx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__OUT_predBr = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__IN_returnUpd = VL_RAND_RESET_Q(37);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rstack[__Vi0] = VL_RAND_RESET_I(31);
    }
    vlSelf->__PVT__qindex_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__qindexEnd_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__qindex = VL_RAND_RESET_I(3);
    vlSelf->__PVT__qindexEnd = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__rrqueue[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->__PVT__forwardRindex = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addrToPush = VL_RAND_RESET_I(31);
    vlSelf->__PVT__rindexReg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rindex = VL_RAND_RESET_I(5);
    vlSelf->__PVT__recoveryInProgress = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recoveryID = VL_RAND_RESET_I(5);
    vlSelf->__PVT__recoveryBase = VL_RAND_RESET_I(5);
    vlSelf->__PVT__recoveryOffs = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lastInvalComFetchID = VL_RAND_RESET_I(5);
    vlSelf->__PVT__recoveryOverwOwn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lastValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__postRecSave = VL_RAND_RESET_Q(45);
    vlSelf->__PVT__queueEmpty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queueFull = VL_RAND_RESET_I(1);
    vlSelf->__PVT__recoveryContinue_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk4__DOT__doPostRecSave = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk4__DOT__startRecovery = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__qindex_r = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__qindexEnd_r = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__recoveryInProgress = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__lastInvalComFetchID = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__lastValid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__postRecSave = VL_RAND_RESET_Q(45);
    vlSelf->__VdlySet__rstack__v0 = 0;
    vlSelf->__VdlySet__rstack__v1 = 0;
    vlSelf->__VdlyVal__rstack__v32 = VL_RAND_RESET_I(31);
    vlSelf->__VdlyDim0__rstack__v32 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__rstack__v32 = 0;
    vlSelf->__VdlyDim0__rrqueue__v0 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__rrqueue__v1 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyDim0__rrqueue__v1 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__rrqueue__v1 = 0;
    vlSelf->__VdlyVal__rrqueue__v2 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyDim0__rrqueue__v2 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__rrqueue__v3 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyDim0__rrqueue__v3 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__rrqueue__v4 = VL_RAND_RESET_I(31);
    vlSelf->__VdlyDim0__rrqueue__v4 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__rstack__v33 = VL_RAND_RESET_I(31);
    vlSelf->__VdlyDim0__rstack__v33 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyVal__rrqueue__v5 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyDim0__rrqueue__v5 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__rrqueue__v5 = 0;
    vlSelf->__VdlyVal__rrqueue__v6 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyDim0__rrqueue__v6 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__rrqueue__v7 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyDim0__rrqueue__v7 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__rrqueue__v8 = VL_RAND_RESET_I(31);
    vlSelf->__VdlyDim0__rrqueue__v8 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyVal__rstack__v34 = VL_RAND_RESET_I(31);
    vlSelf->__VdlyDim0__rstack__v34 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__rstack__v34 = 0;
    vlSelf->__VdlyDim0__rrqueue__v9 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__rrqueue__v9 = 0;
}
