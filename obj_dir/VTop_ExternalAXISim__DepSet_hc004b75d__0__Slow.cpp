// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ExternalAXISim.h"

VL_ATTR_COLD void VTop_ExternalAXISim___eval_static__TOP__Top__extMem(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___eval_static__TOP__Top__extMem\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.inputAvail = 0U;
}

VL_ATTR_COLD void VTop_ExternalAXISim___eval_initial__TOP__Top__extMem(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___eval_initial__TOP__Top__extMem\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tfs[0U][0U] = 0U;
    vlSelfRef.__PVT__tfs[0U][1U] = 0U;
    vlSelfRef.__PVT__tfs[0U][2U] = 0U;
    vlSelfRef.__PVT__tfs[0U][3U] = 0U;
    vlSelfRef.__PVT__tfs[0U][4U] = 0U;
    vlSelfRef.__PVT__tfs[0U][5U] = 0U;
    vlSelfRef.__PVT__tfs[0U][6U] = 0U;
    vlSelfRef.__PVT__tfs[1U][0U] = 0U;
    vlSelfRef.__PVT__tfs[1U][1U] = 0U;
    vlSelfRef.__PVT__tfs[1U][2U] = 0U;
    vlSelfRef.__PVT__tfs[1U][3U] = 0U;
    vlSelfRef.__PVT__tfs[1U][4U] = 0U;
    vlSelfRef.__PVT__tfs[1U][5U] = 0U;
    vlSelfRef.__PVT__tfs[1U][6U] = 0U;
    vlSelfRef.__PVT__fifoAW[0U] = 0U;
    vlSelfRef.__PVT__fifoAWValid[0U] = 0U;
    vlSelfRef.__PVT__fifoAW[1U] = 0U;
    vlSelfRef.__PVT__fifoAWValid[1U] = 0U;
    vlSelfRef.__PVT__fifoAW[2U] = 0U;
    vlSelfRef.__PVT__fifoAWValid[2U] = 0U;
    vlSelfRef.__PVT__fifoAW[3U] = 0U;
    vlSelfRef.__PVT__fifoAWValid[3U] = 0U;
}

VL_ATTR_COLD void VTop_ExternalAXISim___ctor_var_reset(VTop_ExternalAXISim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop_ExternalAXISim___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
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
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(204, vlSelf->__PVT__tfs[__Vi0]);
    }
    VL_RAND_RESET_W(204, vlSelf->__PVT__reads);
    VL_RAND_RESET_W(204, vlSelf->__PVT__writes);
    vlSelf->inputAvail = VL_RAND_RESET_I(1);
    vlSelf->inputByte = VL_RAND_RESET_I(8);
    vlSelf->__PVT__readDataIdxValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__readDataIdx = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__fifoAW[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__fifoAWValid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__fifoAWInsIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__buf_wvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(145, vlSelf->__Vcellout__wFIFO__OUT_data);
    VL_RAND_RESET_W(145, vlSelf->__Vcellinp__wFIFO__IN_data);
    vlSelf->__PVT__writeDone = VL_RAND_RESET_I(4);
    vlSelf->__PVT__writeIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__writeIdxValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buf_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buf_awready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__awFIFO__OUT_data = VL_RAND_RESET_Q(52);
    vlSelf->__Vcellinp__awFIFO__IN_data = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__buf_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__buf_arready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__arFIFO__OUT_data = VL_RAND_RESET_Q(52);
    vlSelf->__Vcellinp__arFIFO__IN_data = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__unnamedblk2__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk2__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w = VL_RAND_RESET_Q(51);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_ha4e0d76b__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_hcd8e2c99__0 = VL_RAND_RESET_Q(51);
    vlSelf->__Vlvbound_ha2e9d5ac__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_hf5f86567__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_hf5f86567__1 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h355f9656__0 = VL_RAND_RESET_Q(51);
    vlSelf->__Vlvbound_he15ecf53__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h027d800f__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h5eac4bcf__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_hf688ff49__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vlvbound_h49134e48__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_hfacb3be2__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_ha918a1d3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h8aa2503f__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_hb87e5c88__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vlvbound_hcaa89f34__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_hca0c47d2__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(145, vlSelf->__PVT__wFIFO__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__wFIFO__DOT__indexIn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wFIFO__DOT__indexOut = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wFIFO__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wFIFO__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wFIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wFIFO__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wFIFO__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wFIFO__DOT__doInsert = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(145, vlSelf->__PVT__wFIFO__DOT__outDataReg);
    vlSelf->__PVT__wFIFO__DOT__outValidReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wFIFO__DOT__combPassthru = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__awFIFO__DOT__mem[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->__PVT__awFIFO__DOT__indexIn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__indexOut = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__doInsert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__outDataReg = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__awFIFO__DOT__outValidReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awFIFO__DOT__combPassthru = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__arFIFO__DOT__mem[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->__PVT__arFIFO__DOT__indexIn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__indexOut = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__fullCond = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__outputReady = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__doExtract = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__doInsert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__outDataReg = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__arFIFO__DOT__outValidReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arFIFO__DOT__combPassthru = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__inputAvail = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__tfs__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__tfs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v0 = 0;
    vlSelf->__VdlyVal__tfs__v1 = VL_RAND_RESET_Q(51);
    vlSelf->__VdlyLsb__tfs__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__tfs__v1 = 0;
    vlSelf->__VdlyVal__tfs__v2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyLsb__tfs__v2 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v2 = 0;
    vlSelf->__VdlyVal__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v0 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v0 = 0;
    vlSelf->__VdlyVal__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v1 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v1 = 0;
    vlSelf->__VdlyVal__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v2 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v2 = 0;
    vlSelf->__VdlyVal__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v3 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v3 = 0;
    vlSelf->__VdlyVal__mem__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v4 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v4 = 0;
    vlSelf->__VdlyVal__mem__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v5 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v5 = 0;
    vlSelf->__VdlyVal__mem__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v6 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v6 = 0;
    vlSelf->__VdlyVal__mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v7 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v7 = 0;
    vlSelf->__VdlyVal__mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v8 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v8 = 0;
    vlSelf->__VdlyVal__mem__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v9 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v9 = 0;
    vlSelf->__VdlyVal__mem__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v10 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v10 = 0;
    vlSelf->__VdlyVal__mem__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v11 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v11 = 0;
    vlSelf->__VdlyVal__mem__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v12 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v12 = 0;
    vlSelf->__VdlyVal__mem__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v13 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v13 = 0;
    vlSelf->__VdlyVal__mem__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v14 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v14 = 0;
    vlSelf->__VdlyVal__mem__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__mem__v15 = VL_RAND_RESET_I(24);
    vlSelf->__VdlySet__mem__v15 = 0;
    vlSelf->__VdlyVal__tfs__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__tfs__v3 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v3 = 0;
    vlSelf->__VdlyVal__tfs__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__tfs__v4 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v4 = 0;
    vlSelf->__VdlyDim0__fifoAWValid__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__fifoAWValid__v0 = 0;
    vlSelf->__VdlyVal__fifoAW__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__fifoAW__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__fifoAW__v1 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__fifoAW__v1 = 0;
    vlSelf->__VdlyVal__fifoAWValid__v1 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__fifoAW__v2 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__fifoAW__v2 = 0;
    vlSelf->__VdlyVal__tfs__v5 = VL_RAND_RESET_Q(51);
    vlSelf->__VdlyLsb__tfs__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__tfs__v5 = 0;
    vlSelf->__VdlyVal__fifoAWValid__v2 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__fifoAWValid__v2 = 0;
    vlSelf->__VdlyVal__fifoAW__v3 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__fifoAW__v3 = 0;
    vlSelf->__VdlyVal__tfs__v6 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyLsb__tfs__v6 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v6 = 0;
    vlSelf->__VdlyVal__fifoAWValid__v3 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__fifoAWValid__v3 = 0;
    vlSelf->__VdlyDim0__fifoAWValid__v5 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__fifoAWValid__v5 = 0;
    vlSelf->__VdlyVal__fifoAW__v5 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyDim0__fifoAW__v5 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__tfs__v7 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyLsb__tfs__v7 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v7 = 0;
    vlSelf->__VdlyVal__tfs__v8 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyLsb__tfs__v8 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v8 = 0;
    vlSelf->__VdlyVal__tfs__v9 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyLsb__tfs__v9 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v9 = 0;
    vlSelf->__VdlyVal__tfs__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__tfs__v10 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v10 = 0;
    vlSelf->__VdlyVal__tfs__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__tfs__v11 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v11 = 0;
    vlSelf->__VdlyVal__tfs__v12 = VL_RAND_RESET_I(1);
    vlSelf->__VdlyLsb__tfs__v12 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v12 = 0;
    vlSelf->__VdlyVal__tfs__v13 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyLsb__tfs__v13 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v13 = 0;
    vlSelf->__VdlyVal__tfs__v14 = VL_RAND_RESET_I(2);
    vlSelf->__VdlyLsb__tfs__v14 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v14 = 0;
    vlSelf->__VdlyVal__tfs__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__tfs__v15 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v15 = 0;
    vlSelf->__VdlyVal__tfs__v16 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyLsb__tfs__v16 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__tfs__v16 = 0;
}
