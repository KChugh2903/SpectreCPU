// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IFetch.h"

VL_ATTR_COLD void VTop_IFetch___ctor_var_reset(VTop_IFetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_IFetch___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_interruptPending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_MEM_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_ROB_curFetchID = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(74, vlSelf->__PVT__IN_branch);
    vlSelf->__PVT__IN_decBranch = VL_RAND_RESET_I(10);
    vlSelf->__PVT__IN_clearICache = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_flushTLB = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(76, vlSelf->__PVT__IN_btUpdates[__Vi0]);
    }
    vlSelf->__PVT__IN_bpUpdate = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__IN_pcRead[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__OUT_pcReadData[__Vi0] = VL_RAND_RESET_Q(35);
    }
    vlSelf->__PVT__IN_pcReadTH = VL_RAND_RESET_I(7);
    vlSelf->__PVT__OUT_pcReadDataTH = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__IN_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->__PVT__OUT_instrs[__Vi0]);
    }
    vlSelf->__PVT__IN_vmem = VL_RAND_RESET_I(31);
    vlSelf->__PVT__OUT_pw = VL_RAND_RESET_Q(55);
    vlSelf->__PVT__IN_pw = VL_RAND_RESET_Q(53);
    VL_RAND_RESET_W(225, vlSelf->__PVT__OUT_memc);
    VL_RAND_RESET_W(559, vlSelf->__PVT__IN_memc);
    vlSelf->predBr = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__BP_mispr = VL_RAND_RESET_Q(49);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(76, vlSelf->__Vcellinp__bp__IN_btUpdates[__Vi0]);
    }
    vlSelf->ifetchEn = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__ifp__IN_mispr = VL_RAND_RESET_I(1);
    vlSelf->BPF_writeAddr = VL_RAND_RESET_I(5);
    vlSelf->PCF_writeAddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__sharedReq = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(120, vlSelf->__PVT__ifetchOp);
    vlSelf->waitForInterrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wfiCount = VL_RAND_RESET_I(12);
    vlSelf->__PVT__issuedInterrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resetWait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT__wfiCount_next = VL_RAND_RESET_I(12);
    vlSelf->__PVT__unnamedblk1__DOT__wfiDone = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__waitForInterrupt = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__wfiCount = VL_RAND_RESET_I(12);
}
