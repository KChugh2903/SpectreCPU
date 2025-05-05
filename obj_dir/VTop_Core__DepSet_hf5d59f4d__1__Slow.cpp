// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_Core.h"

VL_ATTR_COLD void VTop_Core___ctor_var_reset(VTop_Core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Core___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_irq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(225, vlSelf->__PVT__OUT_memc[__Vi0]);
    }
    VL_RAND_RESET_W(559, vlSelf->__PVT__IN_memc);
    vlSelf->__PVT__OUT_dbg = VL_RAND_RESET_Q(40);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->comUOps[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(74, vlSelf->__PVT__branchProvs[__Vi0]);
    }
    VL_RAND_RESET_W(74, vlSelf->branch);
    vlSelf->mispredFlush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BS_PERFC_branchMispr = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(109, vlSelf->__Vcellinp__bsel__IN_isUOps[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(76, vlSelf->__PVT__BP_btUpdates[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_readReq[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_readData[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(76, vlSelf->__Vcellinp__ifetch__IN_btUpdates[__Vi0]);
    }
    vlSelf->ROB_curSqN = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(110, vlSelf->PD_instrs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(80, vlSelf->DE_uop[__Vi0]);
    }
    vlSelf->__PVT__decBranch = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__idec__en = VL_RAND_RESET_I(1);
    vlSelf->frontendEn = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->RN_uop[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__RN_uopOrdering[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->RN_stall = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__rn__IN_flagsUOps[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(109, vlSelf->IS_uop[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__IQ_stalls = VL_RAND_RESET_I(28);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__stLookupUOp[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__stLookupUOp_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__stCommitLimit[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__RF_writeEnable = VL_RAND_RESET_I(5);
    vlSelf->__PVT__RF_writeAddress = VL_RAND_RESET_I(30);
    VL_RAND_RESET_W(160, vlSelf->__PVT__RF_writeData);
    vlSelf->__PVT__RFMUX_readReady = VL_RAND_RESET_I(10);
    vlSelf->__Vcellout__rfMux__OUT_readAddress = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(320, vlSelf->__Vcellout__rfMux__OUT_readData);
    VL_RAND_RESET_W(70, vlSelf->__Vcellinp__rfMux__IN_read);
    vlSelf->__PVT__RF_readEnable = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(183, vlSelf->LD_uop[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__LD_zcFwd[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->__Vcellout__ld__OUT_rfReadReq = VL_RAND_RESET_Q(56);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__SDL_amoData[__Vi0] = VL_RAND_RESET_Q(47);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__SDL_stDataUOp[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->__Vcellout__stDataLd__OUT_readReq = VL_RAND_RESET_I(14);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__stDataLd__IN_atomicUOp[__Vi0] = VL_RAND_RESET_Q(47);
    }
    VL_RAND_RESET_W(134, vlSelf->CSR_trapControl);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->resultUOps[__Vi0] = VL_RAND_RESET_Q(41);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->flagUOps[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__TVS_tvalProvs[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PW_reqs[__Vi0] = VL_RAND_RESET_Q(55);
    }
    vlSelf->__PVT__PW_res = VL_RAND_RESET_Q(53);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__CC_PW_LD_stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PW_LD_uop[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellinp__pageWalker__IN_ldResUOp[__Vi0] = VL_RAND_RESET_Q(41);
    }
    vlSelf->__Vcellout__pageWalker__OUT_ldUOp = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__LS_AGULD_uopStall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__LS_uopLd[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__TLB_rqs[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__TLB_res[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(82, vlSelf->__PVT__AGU_uop[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__AGU_eLdUOp[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->__PVT__LB_maxLoadSqN = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__LB_uopLd[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__LB_aguUOpLd[__Vi0]);
    }
    vlSelf->__PVT__LB_ldComLimit = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(74, vlSelf->__Vcellout__lb__OUT_branch);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__SQ_fwd[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__SQB_fwd[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->__PVT__SQ_uops[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__SQ_stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(184, vlSelf->__PVT__SQB_uop);
    vlSelf->__PVT__SQB_busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__CC_loadStall[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__CC_storeStall = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__LSU_AGUStall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__CC_SQ_uopLd[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__LSU_ldAck[__Vi0] = VL_RAND_RESET_Q(43);
    }
    VL_RAND_RESET_W(225, vlSelf->__PVT__LSU_MC_if);
    vlSelf->__PVT__LSU_setDirty = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(71, vlSelf->__PVT__LSU_cacheMiss);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellout__lsu__OUT_flagsUOp[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vcellout__lsu__OUT_resultUOp[__Vi0] = VL_RAND_RESET_Q(41);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__CLM_ctReadReady[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__CLM_ctRead[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(86, vlSelf->__PVT__CLM_ctResult[__Vi0]);
    }
    vlSelf->__PVT__CLM_missReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__prefetch = VL_RAND_RESET_Q(33);
    vlSelf->ROB_perfcInfo = VL_RAND_RESET_I(13);
    vlSelf->ROB_trapUOp = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__STORE_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__MEM_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__TH_flushTLB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__TH_startFence = VL_RAND_RESET_I(1);
    vlSelf->__PVT__TH_clearICache = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->__PVT__TH_trapInfo);
    vlSelf->__PVT__TH_stallPC = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(109, vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_uop);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_flagUOp[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__Vcellinp__genblk1__BRA__0__KET____DOT__iq__IN_doNotIssueDiv = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk1__BRA__0__KET____DOT__iq__OUT_stall = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(109, vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_uop);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__genblk1__BRA__1__KET____DOT__iq__IN_flagUOp[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__Vcellout__genblk1__BRA__1__KET____DOT__iq__OUT_stall = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(109, vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_uop);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__genblk1__BRA__2__KET____DOT__iq__IN_flagUOp[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__Vcellout__genblk1__BRA__2__KET____DOT__iq__OUT_stall = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(109, vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__genblk1__BRA__3__KET____DOT__iq__IN_flagUOp[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_stall = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(109, vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__genblk1__BRA__4__KET____DOT__iq__IN_flagUOp[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_stall = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_uop = VL_RAND_RESET_I(17);
    vlSelf->__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_comLimit = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(183, vlSelf->__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_aguUOps[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__genblk2__BRA__0__KET____DOT__iqStD__IN_flagUOp[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_stall = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_uop = VL_RAND_RESET_I(17);
    vlSelf->__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_comLimit = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(183, vlSelf->__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_aguUOps[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vcellinp__genblk2__BRA__1__KET____DOT__iqStD__IN_flagUOp[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_stall = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(832, vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__resUOps);
    vlSelf->__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_uop = VL_RAND_RESET_Q(52);
    vlSelf->__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_amoData = VL_RAND_RESET_Q(47);
    vlSelf->__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(76, vlSelf->__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__OUT_btUpdate);
    vlSelf->__Vcellout__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__OUT_uop = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__wbUOp = VL_RAND_RESET_Q(52);
    vlSelf->__Vcellout__intPortsGen__BRA__0__KET____DOT__wbUOpSplit____pinNumber3 = VL_RAND_RESET_Q(41);
    vlSelf->__Vcellout__intPortsGen__BRA__0__KET____DOT__wbUOpSplit____pinNumber2 = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(832, vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__resUOps);
    vlSelf->__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_uop = VL_RAND_RESET_Q(52);
    vlSelf->__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_amoData = VL_RAND_RESET_Q(47);
    vlSelf->__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(76, vlSelf->__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__OUT_btUpdate);
    vlSelf->__Vcellout__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__OUT_uop = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__wbUOp = VL_RAND_RESET_Q(52);
    vlSelf->__Vcellout__intPortsGen__BRA__1__KET____DOT__wbUOpSplit____pinNumber3 = VL_RAND_RESET_Q(41);
    vlSelf->__Vcellout__intPortsGen__BRA__1__KET____DOT__wbUOpSplit____pinNumber2 = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(832, vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__resUOps);
    vlSelf->__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_uop = VL_RAND_RESET_Q(52);
    vlSelf->__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_amoData = VL_RAND_RESET_Q(47);
    vlSelf->__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__OUT_zcFwd = VL_RAND_RESET_Q(40);
    vlSelf->__Vcellout__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__OUT_uop = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__wbUOp = VL_RAND_RESET_Q(52);
    vlSelf->__Vcellout__intPortsGen__BRA__2__KET____DOT__wbUOpSplit____pinNumber3 = VL_RAND_RESET_Q(41);
    vlSelf->__Vcellout__intPortsGen__BRA__2__KET____DOT__wbUOpSplit____pinNumber2 = VL_RAND_RESET_I(20);
    vlSelf->__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_uop = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(82, vlSelf->__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_aguOp);
    vlSelf->__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tlb = VL_RAND_RESET_I(21);
    vlSelf->__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_tvalProv = VL_RAND_RESET_Q(40);
    vlSelf->__Vcellout__aguPortsGen__BRA__0__KET____DOT__agu__OUT_pw = VL_RAND_RESET_Q(55);
    vlSelf->__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_uop = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(82, vlSelf->__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_aguOp);
    vlSelf->__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tlb = VL_RAND_RESET_I(21);
    vlSelf->__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_tvalProv = VL_RAND_RESET_Q(40);
    vlSelf->__Vcellout__aguPortsGen__BRA__1__KET____DOT__agu__OUT_pw = VL_RAND_RESET_Q(55);
    vlSelf->__PVT__bsel__DOT__OUT_PERFC_branchMispr_c = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->__PVT__bsel__DOT__branch_c);
    vlSelf->__PVT__bsel__DOT__priorityPort = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->bsel__DOT____VdfgExtracted_hfc16791f__0);
    VL_RAND_RESET_W(80, vlSelf->__PVT__idec__DOT__uop);
    vlSelf->__PVT__idec__DOT__invalidEnc = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(80, vlSelf->__PVT__idec__DOT__uopsComb[__Vi0]);
    }
    vlSelf->__PVT__idec__DOT__decBranch = VL_RAND_RESET_I(10);
    vlSelf->__PVT__rfMux__DOT__staticReadEnable = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_c[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__compReadValid_c[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__compReadIdx_r[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->rfMux__DOT____Vlvbound_h68b1b333__0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rfMux__DOT__genblk1__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__ld__DOT__forwards[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__ld__DOT__match[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__ld__DOT__matchIdx[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__ld__DOT__matchValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_valid = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__7__KET____OUT_idx = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_valid = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__6__KET____OUT_idx = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_valid = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__5__KET____OUT_idx = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_valid = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__4__KET____OUT_idx = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_valid = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__3__KET____OUT_idx = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_valid = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__2__KET____OUT_idx = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_valid = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__1__KET____OUT_idx = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_valid = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vcellout__lookupEnc__BRA__0__KET____OUT_idx = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(183, vlSelf->__PVT__ld__DOT__outUOpReg[__Vi0]);
    }
    vlSelf->__PVT__ld__DOT__operandIsReg = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__ld__DOT__unnamedblk3__DOT__lookups[__Vi0] = VL_RAND_RESET_I(7);
    }
    VL_RAND_RESET_W(183, vlSelf->ld__DOT____Vlvbound_h09810eaf__1);
    vlSelf->ld__DOT____Vlvbound_h51868639__0 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h51acca77__0 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h51828e45__0 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h326e43bc__0 = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vlvbound_h326e7268__0 = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vlvbound_hf5f20e55__1 = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vlvbound_h1714a109__0 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h2f0cfbaf__0 = VL_RAND_RESET_I(12);
    vlSelf->ld__DOT____Vlvbound_h2322f42f__0 = VL_RAND_RESET_I(3);
    vlSelf->ld__DOT____Vlvbound_h56960fc3__0 = VL_RAND_RESET_I(7);
    vlSelf->ld__DOT____Vlvbound_h563aa993__0 = VL_RAND_RESET_I(7);
    vlSelf->ld__DOT____Vlvbound_h5c39aa21__0 = VL_RAND_RESET_I(5);
    vlSelf->ld__DOT____Vlvbound_h5645454c__0 = VL_RAND_RESET_I(7);
    vlSelf->ld__DOT____Vlvbound_h5691d93a__0 = VL_RAND_RESET_I(7);
    vlSelf->ld__DOT____Vlvbound_h5838834f__0 = VL_RAND_RESET_I(1);
    vlSelf->ld__DOT____Vlvbound_h5a2d394b__0 = VL_RAND_RESET_I(6);
    vlSelf->ld__DOT____Vlvbound_he453039c__0 = VL_RAND_RESET_I(4);
    vlSelf->ld__DOT____Vlvbound_h170cab1a__1 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h170cab1a__2 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h170aa3a8__1 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h170aa3a8__2 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h170aa3a8__3 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h170cab1a__3 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT____Vlvbound_h170aa3a8__4 = VL_RAND_RESET_I(32);
    vlSelf->ld__DOT__lookupEnc__BRA__2__KET____DOT____Vlvbound_he7b3e1d0__1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__offs = VL_RAND_RESET_I(2);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopATO = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__readDataShifted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__offs = VL_RAND_RESET_I(2);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopATO = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__readDataShifted = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tvalSelect__DOT__invalidateCurTVal_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tvalSelect__DOT__invalidateCurTVal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tvalSelect__DOT__curTVal = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__tvalSelect__DOT__earliest = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__pageWalker__DOT__pageWalkIter = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pageWalker__DOT__pageWalkAddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pageWalker__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pageWalker__DOT__pwLdRes = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__pageWalker__DOT__nextLookup = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pageWalker__DOT__pageFault_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pageWalker__DOT__isSuperPage_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pageWalker__DOT__ppn_c = VL_RAND_RESET_I(22);
    vlSelf->__PVT__pageWalker__DOT__rwx_c = VL_RAND_RESET_I(3);
    vlSelf->__PVT__pageWalker__DOT__dagu_c = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->__PVT__dtlb__DOT__tlb[__Vi0][__Vi1] = VL_RAND_RESET_Q(48);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dtlb__DOT__counters[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__dtlb__DOT__inc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dtlb__DOT__ignoreCur = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dtlb__DOT__unnamedblk8__DOT__idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dtlb__DOT__unnamedblk8__DOT__assocIdx = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__entries[__Vi0] = VL_RAND_RESET_Q(62);
    }
    vlSelf->__PVT__lb__DOT__lastBaseIndex = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__lb__DOT__lateLoadUOp[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__delayLoad[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__nonSpeculative[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__wAddrToMatch[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__wAddrMatch[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__isBefore[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__storeIsConflict[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__storeHasRsv[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__ltIssue[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__lb__DOT__hasRsvOrInvalid = VL_RAND_RESET_I(32);
    vlSelf->__PVT__lb__DOT__loadRsv = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lb__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lb__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__PVT__lb__DOT__invalMask = VL_RAND_RESET_I(16);
    vlSelf->__PVT__lb__DOT__invalMaskBr = VL_RAND_RESET_I(16);
    vlSelf->__PVT__lb__DOT__specRsv = VL_RAND_RESET_Q(38);
    vlSelf->__PVT__lb__DOT__comRsv = VL_RAND_RESET_Q(38);
    vlSelf->lb__DOT____Vcellout__genblk1__BRA__0__KET____DOT__isBeforeMaskGen__OUT_range = VL_RAND_RESET_I(16);
    vlSelf->lb__DOT____Vcellout__genblk1__BRA__1__KET____DOT__isBeforeMaskGen__OUT_range = VL_RAND_RESET_I(16);
    vlSelf->__PVT__lb__DOT__unnamedblk21__DOT__lateLoadPassthru = VL_RAND_RESET_I(2);
    vlSelf->__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk23__DOT__unnamedblk24__DOT__index = VL_RAND_RESET_I(4);
    vlSelf->__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk28__DOT__unnamedblk29__DOT__e = VL_RAND_RESET_Q(62);
    vlSelf->__PVT__lb__DOT__unnamedblk21__DOT__unnamedblk30__DOT__unnamedblk31__DOT__index = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__4__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__5__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lb__DOT__penc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(180, vlSelf->__PVT__sqb__DOT__evicted[__Vi0]);
    }
    VL_RAND_RESET_W(180, vlSelf->__PVT__sqb__DOT__fusedUOp_r);
    VL_RAND_RESET_W(180, vlSelf->__PVT__sqb__DOT__fusedUOp_c);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(180, vlSelf->__PVT__sqb__DOT__evictedV[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__sqb__DOT__lookupMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__sqb__DOT__lookupData[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__sqb__DOT__evInsert = VL_RAND_RESET_I(3);
    vlSelf->__PVT__sqb__DOT__reIssue = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(183, vlSelf->__PVT__sqb__DOT__stAck_r);
    VL_RAND_RESET_W(128, vlSelf->__PVT__sqb__DOT__unnamedblk15__DOT__data);
    vlSelf->__PVT__sqb__DOT__unnamedblk15__DOT__mask = VL_RAND_RESET_I(16);
    vlSelf->__PVT__sqb__DOT__unnamedblk15__DOT__newNonce = VL_RAND_RESET_I(3);
    vlSelf->sqb__DOT____Vlvbound_hef0a1584__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(89, vlSelf->__PVT__lsu__DOT__ldResUOp[__Vi0]);
    }
    VL_RAND_RESET_W(225, vlSelf->__PVT__lsu__DOT__BLSU_memc);
    vlSelf->__PVT__lsu__DOT__isCacheBypassLdUOp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__lsu__DOT__isCacheBypassStUOp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__blsuLdIdx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__blsuLdIdxValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__BLSU_stStall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__BLSU_ldStall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(101, vlSelf->__PVT__lsu__DOT__BLSU_uopLd);
    vlSelf->__PVT__lsu__DOT__BLSU_ldResult = VL_RAND_RESET_I(32);
    vlSelf->lsu__DOT____Vcellinp__bypassLSU__IN_uopStEn = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(101, vlSelf->lsu__DOT____Vcellinp__bypassLSU__IN_uopLd);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__stFwd[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->__PVT__lsu__DOT__idxs_c = VL_RAND_RESET_I(2);
    vlSelf->__PVT__lsu__DOT__idxs_r = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__selLdSrc_c[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__selLdSrc_r[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__lsu__DOT__selLd[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__lsu__DOT__uopLd[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__lsu__DOT__ldOps_0[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            VL_RAND_RESET_W(101, vlSelf->__PVT__lsu__DOT__ldOps[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(184, vlSelf->__PVT__lsu__DOT__stOps[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadWasExtIOBusy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadCacheAccessFailed[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__ldAssocHit_c[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__lsu__DOT__stAssocHit_c = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lsu__DOT__stAssocHitUnary_c = VL_RAND_RESET_I(4);
    vlSelf->lsu__DOT____Vcellout__ohEncSt____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT____Vcellout__ohEncSt____pinNumber2 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(71, vlSelf->__PVT__lsu__DOT__miss[__Vi0]);
    }
    vlSelf->__PVT__lsu__DOT__storeWriteToCache = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__storeWriteAssoc = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(101, vlSelf->__PVT__lsu__DOT__curLd[__Vi0]);
    }
    vlSelf->__PVT__lsu__DOT__blsuLoadHandled = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__LRB_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(89, vlSelf->__PVT__lsu__DOT__LRB_uop[__Vi0]);
    }
    vlSelf->lsu__DOT____Vcellout__loadResBuf__BRA__1__KET____OUT_resultUOp = VL_RAND_RESET_Q(41);
    vlSelf->lsu__DOT____Vcellout__loadResBuf__BRA__0__KET____OUT_resultUOp = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__lsu__DOT__forwardMiss = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lsu__DOT__genblk1__DOT__startIdx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__genblk2__BRA__0__KET____DOT__ldAssocHitUnary_c = VL_RAND_RESET_I(4);
    vlSelf->lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT____Vcellout__genblk2__BRA__0__KET____DOT__ohEncLd____pinNumber2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__lsu__DOT__genblk2__BRA__1__KET____DOT__ldAssocHitUnary_c = VL_RAND_RESET_I(4);
    vlSelf->lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT____Vcellout__genblk2__BRA__1__KET____DOT__ohEncLd____pinNumber2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isExtMMIO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isIntMMIO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__isMMIO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__noEvict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__doCacheLoad = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__cacheHit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__readData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__transferExists = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__allowPassThru = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheTableHit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__doCacheLoad = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__cacheHitAssoc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__noEvict = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__transferExists = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__allowPassThru = VL_RAND_RESET_I(1);
    vlSelf->lsu__DOT____Vlvbound_h39f7a0f7__0 = VL_RAND_RESET_I(8);
    vlSelf->lsu__DOT____Vlvbound_hab0dc2f1__0 = VL_RAND_RESET_I(32);
    vlSelf->lsu__DOT____Vlvbound_hab1f5717__0 = VL_RAND_RESET_I(32);
    vlSelf->lsu__DOT____Vlvbound_h7c9bfc74__0 = VL_RAND_RESET_I(2);
    vlSelf->lsu__DOT____Vlvbound_h45f08287__3 = VL_RAND_RESET_I(4);
    vlSelf->lsu__DOT____VdfgExtracted_ha53847fe__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(101, vlSelf->__PVT__lsu__DOT__bypassLSU__DOT__activeLd);
    vlSelf->__PVT__lsu__DOT__bypassLSU__DOT__invalidateActiveLd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu__DOT__bypassLSU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lsu__DOT__bypassLSU__DOT__unnamedblk1__DOT__addrLow = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(89, vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries[__Vi0]);
    }
    VL_RAND_RESET_W(89, vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enqLMQ_c);
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deq_c = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryReady = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__deqEnc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__deqEnc____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__enq = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entryFree = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__freeEnc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vcellout__freeEnc____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__resultUOp_c = VL_RAND_RESET_Q(41);
    vlSelf->lsu__DOT__loadResBuf__BRA__1__KET____DOT____Vlvbound_h0340bc92__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__1__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(89, vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries[__Vi0]);
    }
    VL_RAND_RESET_W(89, vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enqLMQ_c);
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deq_c = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryReady = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__deqEnc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__deqEnc____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__enq = VL_RAND_RESET_I(3);
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entryFree = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__freeEnc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vcellout__freeEnc____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__resultUOp_c = VL_RAND_RESET_Q(41);
    vlSelf->lsu__DOT__loadResBuf__BRA__0__KET____DOT____Vlvbound_h0340bc92__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__deqEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__lsu__DOT__loadResBuf__BRA__0__KET____DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__cacheLineManager__DOT__readUnused_c = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__ctRead_c[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__ctRead_r[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cacheLineManager__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__readIdx_r[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__cacheLineManager__DOT__PF_ctRead = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(86, vlSelf->cacheLineManager__DOT____Vcellinp__prefetchExec__IN_ctResult);
    VL_RAND_RESET_W(71, vlSelf->__PVT__cacheLineManager__DOT__miss);
    VL_RAND_RESET_W(256, vlSelf->__PVT__cacheLineManager__DOT__dirty);
    vlSelf->__PVT__cacheLineManager__DOT__initialFlush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cacheLineManager__DOT__flushQueued = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cacheLineManager__DOT__flushDone = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cacheLineManager__DOT__flushIdx = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cacheLineManager__DOT__flushAssocIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cacheLineManager__DOT__ctWrite_c = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__ctWrite_sr[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__readFwds[__Vi0] = VL_RAND_RESET_I(26);
    }
    vlSelf->__PVT__cacheLineManager__DOT__canOutputMiss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cacheLineManager__DOT__forwardMiss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cacheLineManager__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cacheLineManager__DOT__unnamedblk13__DOT__missIdx = VL_RAND_RESET_I(8);
    vlSelf->__PVT__cacheLineManager__DOT__unnamedblk13__DOT__missType = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cacheLineManager__DOT__unnamedblk15__DOT__entry = VL_RAND_RESET_I(21);
    vlSelf->cacheLineManager__DOT____Vlvbound_haa5074a0__1 = VL_RAND_RESET_I(26);
    vlSelf->cacheLineManager__DOT____Vlvbound_hfc7b0ae4__0 = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__cacheLineManager__DOT__prefetchExec__DOT__assocHitUnary_c = VL_RAND_RESET_I(4);
    vlSelf->cacheLineManager__DOT__prefetchExec__DOT____Vcellout__ohEnc____pinNumber2 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(71, vlSelf->__PVT__cacheLineManager__DOT__prefetchExec__DOT__miss);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cacheLineManager__DOT__prefetchExec__DOT__pfOp[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__prefetchAccess[__Vi0] = VL_RAND_RESET_I(29);
    }
    vlSelf->__PVT__dataPrefetch__DOT__pattern = VL_RAND_RESET_I(29);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__miss = VL_RAND_RESET_I(29);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__missAck = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__missSR[__Vi0] = VL_RAND_RESET_I(29);
    }
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__baseMiss = VL_RAND_RESET_I(29);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_oh_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__hit_c = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dataPrefetch__DOT__patternDetector__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dataPrefetch__DOT__patternDetector__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr_c = VL_RAND_RESET_I(26);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEnc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__strideEncValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__predAddr = VL_RAND_RESET_I(26);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__iter = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(28);
    }
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexOut = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__doInsert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outDataReg = VL_RAND_RESET_I(28);
    vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__outValidReg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__patternDetector__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__streams[__Vi0] = VL_RAND_RESET_Q(33);
    }
    vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__freeUnary_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__free_c = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dataPrefetch__DOT__issuer__DOT____Vcellout__freeEnc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dataPrefetch__DOT__issuer__DOT____Vcellout__freeEnc____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issueUnary_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issue_c = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dataPrefetch__DOT__issuer__DOT____Vcellout__issueEnc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dataPrefetch__DOT__issuer__DOT____Vcellout__issueEnc____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__streamStride_c[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__prefetch_c = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__advance_c[__Vi0] = VL_RAND_RESET_I(31);
    }
    vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__usefulDec = VL_RAND_RESET_I(12);
    vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issueReady = VL_RAND_RESET_I(1);
    vlSelf->dataPrefetch__DOT__issuer__DOT____Vlvbound_h47506458__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__freeEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dataPrefetch__DOT__issuer__DOT__issueEnc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__trapHandler__DOT__memoryWait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__trapHandler__DOT__fetchOffs = VL_RAND_RESET_I(3);
    vlSelf->__PVT__trapHandler__DOT__OUT_dbgStallPC_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__trapHandler__DOT__OUT_fence_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__trapHandler__DOT__OUT_clearICache_c = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->__PVT__trapHandler__DOT__trapInfo_r);
    VL_RAND_RESET_W(72, vlSelf->__PVT__trapHandler__DOT__trapInfo_c);
    vlSelf->__PVT__trapHandler__DOT__trapPCSpec_c = VL_RAND_RESET_I(2);
    vlSelf->__PVT__trapHandler__DOT__trapPCSpec_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__trapHandler__DOT__OUT_flushTLB_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__trapHandler__DOT__setMemoryWait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__trapHandler__DOT__unnamedblk1__DOT__trapCause = VL_RAND_RESET_I(5);
    vlSelf->__PVT__trapHandler__DOT__unnamedblk1__DOT__delegate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__trapHandler__DOT__unnamedblk1__DOT__isInterrupt = VL_RAND_RESET_I(1);
    vlSelf->trapHandler__DOT____VdfgExtracted_h35f639f3__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queue[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_c[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__newAvail_r[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__queueAvail_c[__Vi0][__Vi1] = VL_RAND_RESET_I(2);
        }
    }
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__isBaseCand_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__numAllowedEnq_c = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqCandidates[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__0__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deqCandidate_c = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__deq = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__0__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__collapseMask_c = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry);
    VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__isCand_c = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__0__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queue[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_c[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__newAvail_r[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__queueAvail_c[__Vi0][__Vi1] = VL_RAND_RESET_I(2);
        }
    }
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__isBaseCand_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__numAllowedEnq_c = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqCandidates[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__1__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deqCandidate_c = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__deq = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__1__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__collapseMask_c = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry);
    VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__isCand_c = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__1__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queue[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_c[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__newAvail_r[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__queueAvail_c[__Vi0][__Vi1] = VL_RAND_RESET_I(2);
        }
    }
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__isBaseCand_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__numAllowedEnq_c = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqCandidates[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__2__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deqCandidate_c = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__deq = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__2__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__collapseMask_c = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry);
    VL_RAND_RESET_W(100, vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__isCand_c = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__2__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queue[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_c[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__queueAvail_c[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__defer = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__isBaseCand_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__numAllowedEnq_c = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqCandidates[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[__Vi0]);
    }
    vlSelf->genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__3__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deqCandidate_c = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__deq = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__3__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__collapseMask_c = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(68, vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry);
    VL_RAND_RESET_W(68, vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__isCand_c = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__3__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queue[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_c[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__queueAvail_c[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__defer = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__isBaseCand_c = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__numAllowedEnq_c = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqCandidates[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__enqDS__OUT_ops[__Vi0]);
    }
    vlSelf->genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_opValid = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->genblk1__BRA__4__KET____DOT__iq__DOT____Vcellinp__enqDS__IN_ops[__Vi0]);
    }
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deqCandidate_c = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__deq = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk1__BRA__4__KET____DOT__iq__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__collapseMask_c = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(68, vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk18__DOT__deqEntry);
    VL_RAND_RESET_W(68, vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__unnamedblk14__DOT__unnamedblk20__DOT__unnamedblk21__DOT__temp);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__baseCandPSums_c[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__isCand_c = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candIndex_c[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__candValid_c[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__enqDS__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk1__BRA__4__KET____DOT__iq__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newAvail_dl[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__newOffs[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__enqCandidates[__Vi0]);
    }
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deqCandidate_c = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__deq = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk2__BRA__0__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk2__BRA__0__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 = VL_RAND_RESET_I(1);
    vlSelf->genblk2__BRA__0__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk11__DOT__unnamedblk15__DOT__deqEntry = VL_RAND_RESET_I(18);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__unnamedblk11__DOT__unnamedblk17__DOT__unnamedblk18__DOT__temp = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__0__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newAvail_dl[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__newOffs[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(129, vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__enqCandidates[__Vi0]);
    }
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deqCandidate_c = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__deq = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk2__BRA__1__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->genblk2__BRA__1__KET____DOT__iqStD__DOT____Vcellout__penc____pinNumber2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a43703__0 = VL_RAND_RESET_I(1);
    vlSelf->genblk2__BRA__1__KET____DOT__iqStD__DOT____Vconcswap_1_h30a427b7__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk11__DOT__unnamedblk15__DOT__deqEntry = VL_RAND_RESET_I(18);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__unnamedblk11__DOT__unnamedblk17__DOT__unnamedblk18__DOT__temp = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__genblk2__BRA__1__KET____DOT__iqStD__DOT__penc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__resC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__flags = VL_RAND_RESET_I(4);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__isBranch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c);
    VL_RAND_RESET_W(76, vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums = VL_RAND_RESET_I(24);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(183, vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(65, vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__invert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__unnamedblk1__DOT__qRestored = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__unnamedblk1__DOT__remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__firstHalfwPC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__resC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__flags = VL_RAND_RESET_I(4);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__isBranch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__branchTaken = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__branch_c);
    VL_RAND_RESET_W(76, vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__btUpdate_c);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchCorrect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__genblk1__DOT__indBranchDst = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__0 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3aa843e7__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums = VL_RAND_RESET_I(24);
    vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(150, vlSelf->__PVT__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl[__Vi0]);
    }
    VL_RAND_RESET_W(150, vlSelf->intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0);
    vlSelf->intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__srcAbitRev = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idxValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellout__lzc__OUT_idx[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____Vcellinp__lzc__IN_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThan = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lessThanU = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__resC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__flags = VL_RAND_RESET_I(4);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h333573e2__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330afafa__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h3331e8ab__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h330c452c__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h0491ab28__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_hf135d265__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he93e7a54__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_h1e8fe679__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he65932e1__1 = VL_RAND_RESET_I(32);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT____VdfgExtracted_he650740b__1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__8__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__9__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__10__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__11__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__12__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__13__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__14__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__15__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__7__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__3__KET____DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__4__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__lzc__DOT__gen__BRA__5__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__1__KET____DOT__iSums = VL_RAND_RESET_I(32);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__2__KET____DOT__iSums = VL_RAND_RESET_I(24);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__3__KET____DOT__iSums = VL_RAND_RESET_I(16);
    vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__popc__DOT__tree__BRA__4__KET____DOT__iSums = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(150, vlSelf->__PVT__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl[__Vi0]);
    }
    VL_RAND_RESET_W(150, vlSelf->intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_hac278aa9__0);
    vlSelf->intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT____Vlvbound_h33f0bf65__0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__OUT_TMQ_free = VL_RAND_RESET_I(3);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__Vstatic__r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(82, vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__aguUOp_c);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__isIllegalInstr_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_enqueue = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uopReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_dequeue = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(82, vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop);
    VL_RAND_RESET_W(82, vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issUOp_c);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__issResUOp_c = VL_RAND_RESET_I(20);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__phyAddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__exceptFlags = VL_RAND_RESET_I(4);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tlbMiss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__doIssue = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isStore = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isAtomic = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(82, vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue[__Vi0]);
    }
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready = VL_RAND_RESET_I(4);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxIn = VL_RAND_RESET_I(2);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxInValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOut = VL_RAND_RESET_I(2);
    vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__OUT_TMQ_free = VL_RAND_RESET_I(3);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__Vstatic__r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__addr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(82, vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__aguUOp_c);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__isIllegalInstr_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_enqueue = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uopReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_dequeue = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(82, vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop);
    VL_RAND_RESET_W(82, vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issUOp_c);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__issResUOp_c = VL_RAND_RESET_I(20);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__phyAddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__exceptFlags = VL_RAND_RESET_I(4);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tlbMiss = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__doIssue = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isStore = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isAtomic = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(82, vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue[__Vi0]);
    }
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready = VL_RAND_RESET_I(4);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxIn = VL_RAND_RESET_I(2);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxInValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOut = VL_RAND_RESET_I(2);
    vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__idxOutValid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__unnamedblk2__DOT__stage0[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__Vfunc_lb__DOT__GetLoadSqN__4__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_lb__DOT__GetLoadSqN__4__idx = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_lb__DOT__GetLoadSqN__4__hiBits = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_lb__DOT__GetLoadSqN__4__rv = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_CheckTransfers__7__Vfuncout = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(225, vlSelf->__Vfunc_CheckTransfers__7__memcReq);
    VL_RAND_RESET_W(559, vlSelf->__Vfunc_CheckTransfers__7__memcRes);
    vlSelf->__Vfunc_CheckTransfers__7__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CheckTransfers__7__rv = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_CheckTransfers__8__Vfuncout = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(225, vlSelf->__Vfunc_CheckTransfers__8__memcReq);
    VL_RAND_RESET_W(559, vlSelf->__Vfunc_CheckTransfers__8__memcRes);
    vlSelf->__Vfunc_CheckTransfers__8__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CheckTransfers__8__rv = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_CheckTransfers__9__Vfuncout = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(225, vlSelf->__Vfunc_CheckTransfers__9__memcReq);
    VL_RAND_RESET_W(559, vlSelf->__Vfunc_CheckTransfers__9__memcRes);
    vlSelf->__Vfunc_CheckTransfers__9__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CheckTransfers__9__rv = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_CheckTransfers__10__Vfuncout = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(225, vlSelf->__Vfunc_CheckTransfers__10__memcReq);
    VL_RAND_RESET_W(559, vlSelf->__Vfunc_CheckTransfers__10__memcRes);
    vlSelf->__Vfunc_CheckTransfers__10__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_CheckTransfers__10__rv = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__fu = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_genblk1__BRA__0__KET____DOT__iq__DOT__HasFU__11__rv = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__fu = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_genblk1__BRA__1__KET____DOT__iq__DOT__HasFU__21__rv = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__fu = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_genblk1__BRA__2__KET____DOT__iq__DOT__HasFU__31__rv = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__fu = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_genblk1__BRA__3__KET____DOT__iq__DOT__HasFU__41__rv = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__fu = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_genblk1__BRA__4__KET____DOT__iq__DOT__HasFU__47__rv = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__fu = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_intPortsGen__BRA__0__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__53__rv = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__fu = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_intPortsGen__BRA__1__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__61__rv = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__fu = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_intPortsGen__BRA__2__KET____DOT__genblk1__DOT__ialu__DOT__HasFU__69__rv = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_rwx = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__pte_user = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__isLoad = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aguPortsGen__BRA__0__KET____DOT__agu__DOT__IsPermFault__77__isStore = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_rwx = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__pte_user = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__isLoad = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aguPortsGen__BRA__1__KET____DOT__agu__DOT__IsPermFault__78__isStore = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ld__DOT__operandIsReg = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__regFileLookup = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__stDataLd__DOT__genblk1__BRA__0__KET____DOT__uopIQ = VL_RAND_RESET_Q(40);
    vlSelf->__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__regFileLookup = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__stDataLd__DOT__genblk1__BRA__1__KET____DOT__uopIQ = VL_RAND_RESET_Q(40);
    vlSelf->__Vdly__tvalSelect__DOT__curTVal = VL_RAND_RESET_Q(40);
    vlSelf->__Vdly__tvalSelect__DOT__invalidateCurTVal = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pageWalker__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__pageWalker__DOT__pageWalkIter = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pageWalker__DOT__pageWalkAddr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__lb__DOT__specRsv = VL_RAND_RESET_Q(38);
    VL_RAND_RESET_W(184, vlSelf->__Vdly__SQB_uop);
    vlSelf->__Vdly__cacheLineManager__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__cacheLineManager__DOT__flushQueued = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__cacheLineManager__DOT__initialFlush = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(225, vlSelf->__Vdly__LSU_MC_if);
    vlSelf->__Vdly__cacheLineManager__DOT__flushIdx = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__cacheLineManager__DOT__flushAssocIdx = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__cacheLineManager__DOT__flushDone = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__Vdly__cacheLineManager__DOT__dirty);
    vlSelf->__Vdly__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__indexIn = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    vlSelf->__Vdly__genblk1__BRA__0__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__genblk1__BRA__1__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    vlSelf->__Vdly__genblk1__BRA__1__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__genblk1__BRA__2__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    vlSelf->__Vdly__genblk1__BRA__2__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__genblk1__BRA__3__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    vlSelf->__Vdly__genblk1__BRA__3__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(109, vlSelf->__Vdly____Vcellout__genblk1__BRA__3__KET____DOT__iq__OUT_uop);
    vlSelf->__Vdly__genblk1__BRA__4__KET____DOT__iq__DOT__reservedWBs = VL_RAND_RESET_Q(33);
    vlSelf->__Vdly__genblk1__BRA__4__KET____DOT__iq__DOT__insertIndex = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(109, vlSelf->__Vdly____Vcellout__genblk1__BRA__4__KET____DOT__iq__OUT_uop);
    vlSelf->__Vdly__genblk2__BRA__0__KET____DOT__iqStD__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__Vdly____Vcellout__genblk2__BRA__0__KET____DOT__iqStD__OUT_uop = VL_RAND_RESET_I(17);
    vlSelf->__Vdly__genblk2__BRA__1__KET____DOT__iqStD__DOT__insertIndex = VL_RAND_RESET_I(4);
    vlSelf->__Vdly____Vcellout__genblk2__BRA__1__KET____DOT__iqStD__OUT_uop = VL_RAND_RESET_I(17);
    vlSelf->__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__running = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(183, vlSelf->__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__uop);
    vlSelf->__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__cnt = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(65, vlSelf->__Vdly__intPortsGen__BRA__0__KET____DOT__genblk2__DOT__div__DOT__r);
    vlSelf->__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkActive = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAccepted = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__pageWalkAddr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(82, vlSelf->__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__TMQ_uop);
    vlSelf->__Vdly__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__ready = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkActive = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAccepted = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__pageWalkAddr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(82, vlSelf->__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__TMQ_uop);
    vlSelf->__Vdly__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__ready = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v0 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v1 = 0;
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v4 = 0;
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v6 = 0;
    vlSelf->__VdlyDim0__lb__DOT__entries__v16 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v16 = 0;
    vlSelf->__VdlyDim0__lb__DOT__entries__v17 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v17 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v18 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v19 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v20 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v21 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v22 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v23 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v24 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v25 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v26 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v27 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v28 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v29 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v30 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v31 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v32 = 0;
    vlSelf->__VdlySet__lb__DOT__entries__v33 = 0;
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v8 = 0;
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v10 = 0;
    vlSelf->__VdlyDim0__lb__DOT__entries__v34 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v34 = 0;
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v12 = 0;
    vlSelf->__VdlyDim0__lb__DOT__entries__v35 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v14 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v15 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v16 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v17 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v18 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v18 = 0;
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v19 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v20 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v21 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v22 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v24 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v36 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v36 = 0;
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v26 = 0;
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v28 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v29 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v30 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v31 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v32 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v33 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v34 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v35 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v36 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v38 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v37 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v37 = 0;
    vlSelf->__VdlyDim0__lb__DOT__entries__v38 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v38 = 0;
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v42 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v43 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v44 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v45 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v46 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v46 = 0;
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v47 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v48 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v49 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v50 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v52 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__lb__DOT__lateLoadUOp__v54 = 0;
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v56 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v57 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v58 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v59 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v60 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v61 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v62 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v63 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v64 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__lateLoadUOp__v66 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__lb__DOT__entries__v39 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__lb__DOT__entries__v39 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v39 = 0;
    vlSelf->__VdlyVal__lb__DOT__entries__v40 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__lb__DOT__entries__v40 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v41 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__lb__DOT__entries__v41 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v42 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v42 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v43 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v43 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v44 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__lb__DOT__entries__v44 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v45 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__lb__DOT__entries__v45 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v46 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v46 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v47 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v47 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v48 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v48 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v49 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v49 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__lb__DOT__entries__v50 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v51 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__lb__DOT__entries__v51 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__lb__DOT__entries__v51 = 0;
    vlSelf->__VdlyVal__lb__DOT__entries__v52 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__lb__DOT__entries__v52 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v53 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyDim0__lb__DOT__entries__v53 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v54 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v54 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v55 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v55 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v56 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__lb__DOT__entries__v56 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v57 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__lb__DOT__entries__v57 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v58 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v58 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v59 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v59 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v60 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v60 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyVal__lb__DOT__entries__v61 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__lb__DOT__entries__v61 = VL_RAND_RESET_I(4);
    vlSelf->__VdlyDim0__lb__DOT__entries__v62 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__sqb__DOT__evicted__v0 = 0;
    vlSelf->__VdlySet__sqb__DOT__evicted__v1 = 0;
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v4 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__sqb__DOT__evicted__v4 = 0;
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v5 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__sqb__DOT__evicted__v5 = 0;
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v6 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__sqb__DOT__evicted__v6 = 0;
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v7 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v8 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__sqb__DOT__evicted__v8 = 0;
    VL_RAND_RESET_W(128, vlSelf->__VdlyVal__sqb__DOT__evicted__v9);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v9 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__sqb__DOT__evicted__v9 = 0;
    vlSelf->__VdlyVal__sqb__DOT__evicted__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v10 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__sqb__DOT__evicted__v11 = VL_RAND_RESET_I(30);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v11 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v12 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__sqb__DOT__evicted__v13 = VL_RAND_RESET_I(3);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v13 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__sqb__DOT__evicted__v14 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v14 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v15 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__sqb__DOT__evicted__v16 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__sqb__DOT__evicted__v16 = 0;
    vlSelf->__VdlySet__lsu__DOT__stOps__v0 = 0;
    vlSelf->__VdlySet__lsu__DOT__stOps__v2 = 0;
    VL_RAND_RESET_W(184, vlSelf->__VdlyVal__lsu__DOT__stOps__v6);
    vlSelf->__VdlySet__lsu__DOT__stOps__v6 = 0;
    VL_RAND_RESET_W(184, vlSelf->__VdlyVal__lsu__DOT__stOps__v7);
    vlSelf->__VdlySet__lsu__DOT__stOps__v7 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v0 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v4 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v5 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v6 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v7 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v8 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v9 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v10 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v11 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v12 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v13 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v14 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v15 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v16 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v16 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v17 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v17 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v18 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v18 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v19 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v20 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v20 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v21 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v21 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v22 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v22 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v23 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v23 = 0;
    vlSelf->__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v24 = 0;
    VL_RAND_RESET_W(89, vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25);
    vlSelf->__VdlyDim0__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v25 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v26 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v27 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v28 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__1__KET____DOT__entries__v29 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v0 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v4 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v5 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v6 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v7 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v8 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v9 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v10 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v11 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v12 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v13 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v14 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v15 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v16 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v16 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v17 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v17 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v18 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v18 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v19 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v20 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v20 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v21 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v21 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v22 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v22 = 0;
    vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v23 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v23 = 0;
    vlSelf->__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v24 = 0;
    VL_RAND_RESET_W(89, vlSelf->__VdlyVal__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25);
    vlSelf->__VdlyDim0__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v25 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v26 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v27 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v28 = 0;
    vlSelf->__VdlySet__lsu__DOT__loadResBuf__BRA__0__KET____DOT__entries__v29 = 0;
    vlSelf->__VdlyVal__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0 = VL_RAND_RESET_I(28);
    vlSelf->__VdlyDim0__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__dataPrefetch__DOT__patternDetector__DOT__fifo__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v0 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v1 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v1 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v2 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v3 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v3 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v4 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v5 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v5 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v6 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v6 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v7 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v7 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v8 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v8 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v9 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v9 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v10 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v10 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v11 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v11 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v12 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v12 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v13 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v13 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v14 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v14 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v15 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v15 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v16 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v16 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v17 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v17 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v18 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v18 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v19 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v19 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v20 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v20 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v21 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v21 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v22 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v22 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v23 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v23 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v24 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v24 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v25 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v25 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v26 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v26 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v27 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v27 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v28 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v28 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v29 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v29 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v30 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v30 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v31 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v31 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v32 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v32 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v33 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v33 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v34 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v34 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v35 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v35 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v36 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v36 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v37 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v37 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v38 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v38 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v39 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__newAvail_r__v39 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v0 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v1 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v3 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v5 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v6 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v7 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v8 = 0;
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v16);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v16 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v17 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v18);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v18 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v19 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v20);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v20 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v21 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v22);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v22 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v23 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v24);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v24 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v25 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v26);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v26 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v27 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v28);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v28 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v29 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30);
    vlSelf->__VdlyDim0__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v30 = 0;
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31);
    vlSelf->__VdlyDim0__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__genblk1__BRA__3__KET____DOT__iq__DOT__queue__v31 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v0 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v1 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v1 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v2 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v3 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v3 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v4 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v5 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v5 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v6 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v6 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v7 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v7 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v8 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v8 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v9 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v9 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v10 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v10 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v11 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v11 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v12 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v12 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v13 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v13 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v14 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v14 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v15 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v15 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v16 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v16 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v17 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v17 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v18 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v18 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v19 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v19 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v20 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v20 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v21 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v21 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v22 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v22 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v23 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v23 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v24 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v24 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v25 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v25 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v26 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v26 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v27 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v27 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v28 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v28 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v29 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v29 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v30 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v30 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v31 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v31 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v32 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v32 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v33 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v33 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v34 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v34 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v35 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v35 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v36 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v36 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v37 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v37 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v38 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v38 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v39 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__newAvail_r__v39 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v0 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v1 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v3 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v4 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v5 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v6 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v7 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v8 = 0;
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v16);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v16 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v17 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v18);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v18 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v19 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v20);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v20 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v21 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v22);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v22 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v23 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v24);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v24 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v25 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v26);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v26 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v27 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v28);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v28 = 0;
    vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v29 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30);
    vlSelf->__VdlyDim0__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v30 = 0;
    VL_RAND_RESET_W(68, vlSelf->__VdlyVal__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31);
    vlSelf->__VdlyDim0__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__genblk1__BRA__4__KET____DOT__iq__DOT__queue__v31 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v0 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v1 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v2 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v3 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v4 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v5 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v6 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v7 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v8 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v9 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v10 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v11 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v12 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v13 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v14 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v15 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v16 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v24 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v24 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v25 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v26 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v27 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v27 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v28 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v29 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v30 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v30 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v31 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v32 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v33 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v33 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v34 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v35 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v36 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v36 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v37 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v38 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v39 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v39 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v40 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v41 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v42 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v42 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v43 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v44 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v45 = VL_RAND_RESET_I(18);
    vlSelf->__VdlyDim0__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v45 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v45 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v46 = VL_RAND_RESET_I(18);
    vlSelf->__VdlyDim0__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v46 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__genblk2__BRA__0__KET____DOT__iqStD__DOT__queue__v46 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v0 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v1 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v2 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v3 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v4 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v5 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v6 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v7 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v8 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v9 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v10 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v11 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v12 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v13 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v14 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v15 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v16 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v24 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v24 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v25 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v26 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v27 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v27 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v28 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v29 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v30 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v30 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v31 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v32 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v33 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v33 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v34 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v35 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v36 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v36 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v37 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v38 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v39 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v39 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v40 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v41 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v42 = VL_RAND_RESET_I(18);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v42 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v43 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v44 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v45 = VL_RAND_RESET_I(18);
    vlSelf->__VdlyDim0__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v45 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v45 = 0;
    vlSelf->__VdlyVal__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v46 = VL_RAND_RESET_I(18);
    vlSelf->__VdlyDim0__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v46 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__genblk2__BRA__1__KET____DOT__iqStD__DOT__queue__v46 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v0 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v6 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v7 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v8 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v10 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v11 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v12 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v14 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v15 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v17 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v18 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v19 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v20 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v21 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v23 = 0;
    VL_RAND_RESET_W(150, vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v24 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v26 = 0;
    VL_RAND_RESET_W(150, vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v27 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__1__KET____DOT__genblk4__DOT__mul__DOT__pl__v29 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v0 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v6 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v7 = VL_RAND_RESET_I(7);
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v8 = VL_RAND_RESET_I(7);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v10 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v11 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v12 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v13 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v14 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v15 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v16 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v17 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v18 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v19 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v20 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v21 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v22 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v23 = 0;
    VL_RAND_RESET_W(150, vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v24 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v25 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v26 = 0;
    VL_RAND_RESET_W(150, vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v27 = 0;
    vlSelf->__VdlyVal__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 = VL_RAND_RESET_Q(64);
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v28 = 0;
    vlSelf->__VdlySet__intPortsGen__BRA__2__KET____DOT__genblk4__DOT__mul__DOT__pl__v29 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v0 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v1 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v4 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v6 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v8 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v10 = 0;
    VL_RAND_RESET_W(82, vlSelf->__VdlyVal__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12);
    vlSelf->__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v12 = 0;
    vlSelf->__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v13 = 0;
    vlSelf->__VdlyDim0__aguPortsGen__BRA__0__KET____DOT__agu__DOT__tmq__DOT__queue__v14 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v0 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v1 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v4 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v6 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v8 = 0;
    vlSelf->__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v10 = 0;
    VL_RAND_RESET_W(82, vlSelf->__VdlyVal__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12);
    vlSelf->__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v12 = 0;
    vlSelf->__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v13 = 0;
    vlSelf->__VdlyDim0__aguPortsGen__BRA__1__KET____DOT__agu__DOT__tmq__DOT__queue__v14 = VL_RAND_RESET_I(2);
}
