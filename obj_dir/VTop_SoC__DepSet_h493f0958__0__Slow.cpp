// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_SoC.h"

VL_ATTR_COLD void VTop_SoC___ctor_var_reset(VTop_SoC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_SoC___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IN_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_powerOff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_reboot = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_awid = VL_RAND_RESET_I(2);
    vlSelf->__PVT__s_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->__PVT__s_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__s_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->__PVT__s_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_awready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__s_axi_wdata);
    vlSelf->__PVT__s_axi_wstrb = VL_RAND_RESET_I(16);
    vlSelf->__PVT__s_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_bid = VL_RAND_RESET_I(2);
    vlSelf->__PVT__s_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_arid = VL_RAND_RESET_I(2);
    vlSelf->__PVT__s_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__s_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->__PVT__s_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__s_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->__PVT__s_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_rid = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->__PVT__s_axi_rdata);
    vlSelf->__PVT__s_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__OUT_dbg = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__OUT_dbgMemC = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(158, vlSelf->__PVT__MC_DC_rd);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(225, vlSelf->MemC_ctrl[__Vi0]);
    }
    VL_RAND_RESET_W(559, vlSelf->MemC_stat);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->__PVT__cacheReadIFs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->__PVT__cacheWriteIFs[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cacheReadReady[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__cacheWriteReady[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__PVT__cacheRData[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            VL_RAND_RESET_W(158, vlSelf->__PVT__bankIFs[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            VL_RAND_RESET_W(512, vlSelf->__PVT__bankRData[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            VL_RAND_RESET_W(512, vlSelf->__Vcellinp__dcacheArb__IN_portRData[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__Vcellout__dcacheArb__OUT_portRData[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__CORE_raddr[__Vi0][__Vi1] = VL_RAND_RESET_I(10);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__MEMC_raddr[__Vi0] = VL_RAND_RESET_I(12);
    }
    VL_RAND_RESET_W(128, vlSelf->__PVT__DC_dataOut);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__PVT__cacheRData_t[__Vi0]);
    }
    vlSelf->__PVT__genblk3__BRA__0__KET____DOT__dctAddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__genblk3__BRA__1__KET____DOT__dctAddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__genblk3__BRA__2__KET____DOT__dctAddr = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(251, vlSelf->__PVT__memc__DOT__transfers[__Vi0]);
    }
    vlSelf->__PVT__memc__DOT__isMMIO = VL_RAND_RESET_I(4);
    vlSelf->__PVT__memc__DOT__sglLdRes = VL_RAND_RESET_Q(45);
    vlSelf->__PVT__memc__DOT__sglStRes = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(161, vlSelf->__PVT__memc__DOT__ldDataFwd);
    vlSelf->__PVT__memc__DOT__enqIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memc__DOT__enqIdxValid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(225, vlSelf->__PVT__memc__DOT__selReq);
    vlSelf->__PVT__memc__DOT__axiAR = VL_RAND_RESET_Q(53);
    vlSelf->__PVT__memc__DOT__arIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memc__DOT__ICW_ackValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__ICW_ackId = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_data);
    vlSelf->memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_addr = VL_RAND_RESET_I(12);
    vlSelf->memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_we = VL_RAND_RESET_I(1);
    vlSelf->memc__DOT____Vcellout__icacheWriteIF__OUT_CACHE_ce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__DCW_ackValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__DCW_ackId = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_data);
    vlSelf->memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_addr = VL_RAND_RESET_I(12);
    vlSelf->memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_we = VL_RAND_RESET_I(1);
    vlSelf->memc__DOT____Vcellout__dcacheWriteIF__OUT_CACHE_ce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__buf_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__buf_rready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131, vlSelf->memc__DOT____Vcellout__rFIFO__OUT_data);
    VL_RAND_RESET_W(131, vlSelf->memc__DOT____Vcellinp__rFIFO__IN_data);
    vlSelf->__PVT__memc__DOT__DCR_reqReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__DCR_reqValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__DCR_reqTId = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memc__DOT__DCR_reqLen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__memc__DOT__DCR_reqAddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__memc__DOT__DCR_reqMMIO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__DCR_reqMMIOData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memc__DOT__DCR_cacheReadValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__DCR_cacheReadId = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memc__DOT__axiAW = VL_RAND_RESET_Q(53);
    vlSelf->__PVT__memc__DOT__awFIFO_outValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__awFIFO_ready = VL_RAND_RESET_I(1);
    vlSelf->memc__DOT____Vcellout__awFIFO__OUT_data = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__memc__DOT__awIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memc__DOT__awIdxValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__unnamedblk9__DOT__cID = VL_RAND_RESET_I(1);
    vlSelf->memc__DOT____Vlvbound_h8d33e052__0 = VL_RAND_RESET_I(1);
    vlSelf->memc__DOT____Vlvbound_hcddad6bd__0 = VL_RAND_RESET_I(5);
    vlSelf->memc__DOT____Vlvbound_h8aeaf560__0 = VL_RAND_RESET_I(12);
    vlSelf->memc__DOT____Vlvbound_h14e0abbb__0 = VL_RAND_RESET_I(32);
    vlSelf->memc__DOT____Vlvbound_h1349bd51__0 = VL_RAND_RESET_I(32);
    vlSelf->memc__DOT____Vlvbound_h8cf1d8c4__0 = VL_RAND_RESET_I(1);
    vlSelf->memc__DOT____Vlvbound_h15ae7a35__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__memc__DOT__arFIFO__DOT__mem[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__indexIn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__indexOut = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__doInsert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__outDataReg = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__memc__DOT__arFIFO__DOT__outValidReg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(145, vlSelf->__PVT__memc__DOT__icacheWriteIF__DOT__cur_r);
    VL_RAND_RESET_W(145, vlSelf->__PVT__memc__DOT__icacheWriteIF__DOT__cur_c);
    vlSelf->__PVT__memc__DOT__icacheWriteIF__DOT__writeLast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__icacheWriteIF__DOT__writeLastId = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(145, vlSelf->__PVT__memc__DOT__dcacheWriteIF__DOT__cur_r);
    VL_RAND_RESET_W(145, vlSelf->__PVT__memc__DOT__dcacheWriteIF__DOT__cur_c);
    vlSelf->__PVT__memc__DOT__dcacheWriteIF__DOT__writeLast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheWriteIF__DOT__writeLastId = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(131, vlSelf->__PVT__memc__DOT__rFIFO__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__indexIn = VL_RAND_RESET_I(5);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__indexOut = VL_RAND_RESET_I(5);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__doInsert = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131, vlSelf->__PVT__memc__DOT__rFIFO__DOT__outDataReg);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__outValidReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__rFIFO__DOT__combPassthru = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__FIFO_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131, vlSelf->memc__DOT__dcacheReadIF__DOT____Vcellinp__fifo__IN_data);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__cur = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__next = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__accIdx_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__doAcc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__readMeta = VL_RAND_RESET_Q(37);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__readSucc = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(74, vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__readMetaSR);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__unnamedblk2__DOT__incoming = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(131, vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexIn = VL_RAND_RESET_I(5);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__indexOut = VL_RAND_RESET_I(5);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__doInsert = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131, vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outDataReg);
    vlSelf->__PVT__memc__DOT__dcacheReadIF__DOT__fifo__DOT__outValidReg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__memc__DOT__awFIFO__DOT__mem[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__indexIn = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__indexOut = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__doInsert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__outDataReg = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__outValidReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memc__DOT__awFIFO__DOT__combPassthru = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__outPortIdx[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__dcacheArb__DOT__reqIdx_r[__Vi0][__Vi1] = VL_RAND_RESET_I(2);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__dcacheArb__DOT__reqIdxValid_r[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->__PVT__dcacheArb__DOT__reqIdx_w[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 1; ++__Vi1) {
            vlSelf->__PVT__dcacheArb__DOT__reqIdxValid_w[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__dcacheArb__DOT__readIdxs[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__reqUnary_w = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_r____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_w____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__0__KET____DOT__penc_w____pinNumber2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__reqUnary_w = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_r____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_w____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__1__KET____DOT__penc_w____pinNumber2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__reqUnary_w = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_r____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_w____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__2__KET____DOT__penc_w____pinNumber2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__reqUnary_w = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_r____pinNumber2[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_w____pinNumber3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dcacheArb__DOT____Vcellout__gen_banks__BRA__3__KET____DOT__penc_w____pinNumber2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->dcacheArb__DOT____Vlvbound_h06fbafee__0 = VL_RAND_RESET_I(1);
    vlSelf->dcacheArb__DOT____Vlvbound_h55a4caa8__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__0__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__1__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__2__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_r__DOT__gen__BRA__2__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__1__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__0__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__s[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__dcacheArb__DOT__gen_banks__BRA__3__KET____DOT__penc_w__DOT__gen__BRA__1__KET____DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__gen2__BRA__0__KET____DOT__mux[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__mmio__DOT__aclintData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mmio__DOT__aclintRValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mmio__DOT__aclint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mmio__DOT__aclint__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_memc__DOT__IsCacheOp__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_memc__DOT__IsCacheOp__0__cmd = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_memc__DOT__IsCacheOp__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_memc__DOT__IsCacheOp__1__cmd = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_memc__DOT__GetCacheRdAddr__2__Vfuncout = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(251, vlSelf->__Vfunc_memc__DOT__GetCacheRdAddr__2__t);
    vlSelf->__Vfunc_memc__DOT__GetCacheRdAddr__3__Vfuncout = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(251, vlSelf->__Vfunc_memc__DOT__GetCacheRdAddr__3__t);
    vlSelf->__Vdly__mmio__DOT__aclint__DOT__mtime = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(131, vlSelf->__VdlyVal__memc__DOT__rFIFO__DOT__mem__v0);
    vlSelf->__VdlyDim0__memc__DOT__rFIFO__DOT__mem__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__memc__DOT__rFIFO__DOT__mem__v0 = 0;
}
