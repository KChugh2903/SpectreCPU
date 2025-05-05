// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_ExternalAXISim.h"
#include "VTop__Syms.h"

void VTop_ExternalAXISim___ctor_var_reset(VTop_ExternalAXISim* vlSelf);

VTop_ExternalAXISim::VTop_ExternalAXISim(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_ExternalAXISim___ctor_var_reset(this);
}

void VTop_ExternalAXISim::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_ExternalAXISim::~VTop_ExternalAXISim() {
}

// Savable
void VTop_ExternalAXISim::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x3f4ccb1751d52d26ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__fifoAWInsIdx;
    os<<__PVT__buf_wvalid;
    os<<__PVT__writeDone;
    os<<__PVT__writeIdx;
    os<<__VdlyDim0__fifoAWValid__v0;
    os<<__VdlySet__fifoAWValid__v0;
    os<<__VdlyVal__fifoAW__v0;
    os<<__VdlyDim0__fifoAW__v0;
    os<<__VdlyVal__fifoAW__v1;
    os<<__VdlySet__fifoAW__v1;
    os<<__VdlyVal__fifoAWValid__v1;
    os<<__VdlyVal__fifoAW__v2;
    os<<__VdlySet__fifoAW__v2;
    os<<__VdlyVal__fifoAWValid__v2;
    os<<__VdlySet__fifoAWValid__v2;
    os<<__VdlyVal__fifoAW__v3;
    os<<__VdlySet__fifoAW__v3;
    os<<__VdlyVal__fifoAWValid__v3;
    os<<__VdlySet__fifoAWValid__v3;
    os<<__VdlyDim0__fifoAWValid__v5;
    os<<__VdlySet__fifoAWValid__v5;
    os<<__VdlyVal__fifoAW__v5;
    os<<__VdlyDim0__fifoAW__v5;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__Vcellout__wFIFO__OUT_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__fifoAW[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__fifoAWValid[__Vi0];
    }
    os<<__PVT__writeIdxValid;
    os<<__PVT__s_axi_wready;
    os<<__PVT__wFIFO__DOT__fullCond;
    os<<__PVT__wFIFO__DOT__equal;
    os<<__PVT__wFIFO__DOT__empty;
    os<<__PVT__wFIFO__DOT__outputReady;
    os<<__PVT__wFIFO__DOT__doExtract;
    os<<__PVT__wFIFO__DOT__doInsert;
    os<<__PVT__wFIFO__DOT__outValidReg;
    os<<__PVT__wFIFO__DOT__combPassthru;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__Vcellinp__wFIFO__IN_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__wFIFO__DOT__outDataReg[__Vi0];
    }
    os<<__PVT__wFIFO__DOT__indexIn;
    os<<__PVT__wFIFO__DOT__indexOut;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os<<__PVT__wFIFO__DOT__mem[__Vi0][__Vi1];
        }
    }
    os<<__PVT__s_axi_awready;
    os<<__PVT__readDataIdxValid;
    os<<__PVT__readDataIdx;
    os<<__VdlyVal__tfs__v0;
    os<<__VdlySet__tfs__v0;
    os<<__VdlyLsb__tfs__v1;
    os<<__VdlySet__tfs__v1;
    os<<__VdlyVal__tfs__v2;
    os<<__VdlySet__tfs__v2;
    os<<__VdlyLsb__tfs__v0;
    os<<__VdlyLsb__tfs__v2;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os<<__PVT__reads[__Vi0];
    }
    os<<__VdlyVal__tfs__v1;
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os<<mem[__Vi0][__Vi1];
        }
    }
    os<<__PVT__s_axi_rlast;
    os<<inputByte;
    os<<__PVT__unnamedblk2__DOT__last;
    os<<__Vlvbound_ha4e0d76b__0;
    os<<__Vlvbound_ha2e9d5ac__0;
    os<<__PVT__unnamedblk2__DOT__addr;
    os<<__Vlvbound_hcd8e2c99__0;
    os<<inputAvail;
    os<<__Vdly__inputAvail;
    os<<__PVT__s_axi_rid;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__s_axi_rdata[__Vi0];
    }
    os<<__PVT__s_axi_rvalid;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 7; ++__Vi1) {
            os<<__PVT__tfs[__Vi0][__Vi1];
        }
    }
    os<<__PVT__s_axi_arready;
    os<<__PVT__buf_awvalid;
    os<<__PVT__buf_awready;
    os<<__PVT__buf_arvalid;
    os<<__PVT__buf_arready;
    os<<__PVT__awFIFO__DOT__fullCond;
    os<<__PVT__awFIFO__DOT__equal;
    os<<__PVT__awFIFO__DOT__empty;
    os<<__PVT__awFIFO__DOT__outputReady;
    os<<__PVT__awFIFO__DOT__doExtract;
    os<<__PVT__awFIFO__DOT__doInsert;
    os<<__PVT__awFIFO__DOT__outValidReg;
    os<<__PVT__awFIFO__DOT__combPassthru;
    os<<__PVT__arFIFO__DOT__fullCond;
    os<<__PVT__arFIFO__DOT__equal;
    os<<__PVT__arFIFO__DOT__empty;
    os<<__PVT__arFIFO__DOT__outputReady;
    os<<__PVT__arFIFO__DOT__doExtract;
    os<<__PVT__arFIFO__DOT__doInsert;
    os<<__PVT__arFIFO__DOT__outValidReg;
    os<<__VdlyVal__mem__v0;
    os<<__VdlySet__mem__v0;
    os<<__VdlyVal__mem__v1;
    os<<__VdlySet__mem__v1;
    os<<__VdlyVal__mem__v2;
    os<<__VdlySet__mem__v2;
    os<<__VdlyVal__mem__v3;
    os<<__VdlySet__mem__v3;
    os<<__VdlyVal__mem__v4;
    os<<__VdlySet__mem__v4;
    os<<__VdlyVal__mem__v5;
    os<<__VdlySet__mem__v5;
    os<<__VdlyVal__mem__v6;
    os<<__VdlySet__mem__v6;
    os<<__VdlyVal__mem__v7;
    os<<__VdlySet__mem__v7;
    os<<__VdlyVal__mem__v8;
    os<<__VdlySet__mem__v8;
    os<<__VdlyVal__mem__v9;
    os<<__VdlySet__mem__v9;
    os<<__VdlyVal__mem__v10;
    os<<__VdlySet__mem__v10;
    os<<__VdlyVal__mem__v11;
    os<<__VdlySet__mem__v11;
    os<<__VdlyVal__mem__v12;
    os<<__VdlySet__mem__v12;
    os<<__VdlyVal__mem__v13;
    os<<__VdlySet__mem__v13;
    os<<__VdlyVal__mem__v14;
    os<<__VdlySet__mem__v14;
    os<<__VdlyVal__mem__v15;
    os<<__VdlySet__mem__v15;
    os<<__VdlyVal__tfs__v3;
    os<<__VdlySet__tfs__v3;
    os<<__VdlyVal__tfs__v4;
    os<<__VdlySet__tfs__v4;
    os<<__VdlyLsb__tfs__v5;
    os<<__VdlySet__tfs__v5;
    os<<__VdlyVal__tfs__v6;
    os<<__VdlySet__tfs__v6;
    os<<__VdlyVal__tfs__v7;
    os<<__VdlySet__tfs__v7;
    os<<__VdlySet__tfs__v8;
    os<<__VdlyVal__tfs__v9;
    os<<__VdlySet__tfs__v9;
    os<<__VdlyVal__tfs__v10;
    os<<__VdlySet__tfs__v10;
    os<<__VdlyVal__tfs__v11;
    os<<__VdlySet__tfs__v11;
    os<<__VdlyVal__tfs__v12;
    os<<__VdlySet__tfs__v12;
    os<<__VdlySet__tfs__v13;
    os<<__VdlyVal__tfs__v14;
    os<<__VdlySet__tfs__v14;
    os<<__VdlyVal__tfs__v15;
    os<<__VdlySet__tfs__v15;
    os<<__VdlyVal__tfs__v16;
    os<<__VdlySet__tfs__v16;
    os<<__VdlyDim0__mem__v0;
    os<<__VdlyDim0__mem__v1;
    os<<__VdlyDim0__mem__v2;
    os<<__VdlyDim0__mem__v3;
    os<<__VdlyDim0__mem__v4;
    os<<__VdlyDim0__mem__v5;
    os<<__VdlyDim0__mem__v6;
    os<<__VdlyDim0__mem__v7;
    os<<__VdlyDim0__mem__v8;
    os<<__VdlyDim0__mem__v9;
    os<<__VdlyDim0__mem__v10;
    os<<__VdlyDim0__mem__v11;
    os<<__VdlyDim0__mem__v12;
    os<<__VdlyDim0__mem__v13;
    os<<__VdlyDim0__mem__v14;
    os<<__VdlyDim0__mem__v15;
    os<<__VdlyLsb__tfs__v3;
    os<<__VdlyLsb__tfs__v4;
    os<<__VdlyLsb__tfs__v6;
    os<<__VdlyLsb__tfs__v7;
    os<<__VdlyVal__tfs__v8;
    os<<__VdlyLsb__tfs__v8;
    os<<__VdlyLsb__tfs__v9;
    os<<__VdlyLsb__tfs__v10;
    os<<__VdlyLsb__tfs__v11;
    os<<__VdlyLsb__tfs__v12;
    os<<__VdlyVal__tfs__v13;
    os<<__VdlyLsb__tfs__v13;
    os<<__VdlyLsb__tfs__v14;
    os<<__VdlyLsb__tfs__v15;
    os<<__VdlyLsb__tfs__v16;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os<<__PVT__writes[__Vi0];
    }
    os<<__Vcellout__awFIFO__OUT_data;
    os<<__Vcellinp__awFIFO__IN_data;
    os<<__Vcellout__arFIFO__OUT_data;
    os<<__PVT__awFIFO__DOT__outDataReg;
    os<<__VdlyVal__tfs__v5;
    os<<__PVT__unnamedblk6__DOT__unnamedblk7__DOT__last;
    os<<__Vlvbound_hf5f86567__0;
    os<<__Vlvbound_hf5f86567__1;
    os<<__Vlvbound_he15ecf53__0;
    os<<__Vlvbound_h027d800f__0;
    os<<__Vlvbound_hf688ff49__0;
    os<<__Vlvbound_h49134e48__0;
    os<<__Vlvbound_hfacb3be2__0;
    os<<__Vlvbound_ha918a1d3__0;
    os<<__Vlvbound_hb87e5c88__0;
    os<<__Vlvbound_hcaa89f34__0;
    os<<__Vlvbound_hca0c47d2__0;
    os<<__PVT__awFIFO__DOT__indexIn;
    os<<__PVT__awFIFO__DOT__indexOut;
    os<<__PVT__arFIFO__DOT__indexIn;
    os<<__PVT__arFIFO__DOT__indexOut;
    os<<__PVT__arFIFO__DOT__combPassthru;
    os<<__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr;
    os<<__Vlvbound_h5eac4bcf__0;
    os<<__Vlvbound_h8aa2503f__0;
    os<<__Vcellinp__arFIFO__IN_data;
    os<<__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w;
    os<<__Vlvbound_h355f9656__0;
    os<<__PVT__arFIFO__DOT__outDataReg;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__awFIFO__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__PVT__arFIFO__DOT__mem[__Vi0];
    }
    os<<__PVT__s_axi_bid;
    os<<__PVT__s_axi_bvalid;
    os<<__PVT__clk;
    os<<__PVT__rst;
    os<<__PVT__s_axi_awid;
    os<<__PVT__s_axi_awlen;
    os<<__PVT__s_axi_awsize;
    os<<__PVT__s_axi_awburst;
    os<<__PVT__s_axi_awlock;
    os<<__PVT__s_axi_awcache;
    os<<__PVT__s_axi_awvalid;
    os<<__PVT__s_axi_wlast;
    os<<__PVT__s_axi_wvalid;
    os<<__PVT__s_axi_bready;
    os<<__PVT__s_axi_arid;
    os<<__PVT__s_axi_arlen;
    os<<__PVT__s_axi_arsize;
    os<<__PVT__s_axi_arburst;
    os<<__PVT__s_axi_arlock;
    os<<__PVT__s_axi_arcache;
    os<<__PVT__s_axi_arvalid;
    os<<__PVT__s_axi_rready;
    os<<__PVT__s_axi_wstrb;
    os<<__PVT__s_axi_awaddr;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__s_axi_wdata[__Vi0];
    }
    os<<__PVT__s_axi_araddr;
}
void VTop_ExternalAXISim::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x3f4ccb1751d52d26ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__fifoAWInsIdx;
    os>>__PVT__buf_wvalid;
    os>>__PVT__writeDone;
    os>>__PVT__writeIdx;
    os>>__VdlyDim0__fifoAWValid__v0;
    os>>__VdlySet__fifoAWValid__v0;
    os>>__VdlyVal__fifoAW__v0;
    os>>__VdlyDim0__fifoAW__v0;
    os>>__VdlyVal__fifoAW__v1;
    os>>__VdlySet__fifoAW__v1;
    os>>__VdlyVal__fifoAWValid__v1;
    os>>__VdlyVal__fifoAW__v2;
    os>>__VdlySet__fifoAW__v2;
    os>>__VdlyVal__fifoAWValid__v2;
    os>>__VdlySet__fifoAWValid__v2;
    os>>__VdlyVal__fifoAW__v3;
    os>>__VdlySet__fifoAW__v3;
    os>>__VdlyVal__fifoAWValid__v3;
    os>>__VdlySet__fifoAWValid__v3;
    os>>__VdlyDim0__fifoAWValid__v5;
    os>>__VdlySet__fifoAWValid__v5;
    os>>__VdlyVal__fifoAW__v5;
    os>>__VdlyDim0__fifoAW__v5;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__Vcellout__wFIFO__OUT_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__fifoAW[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__fifoAWValid[__Vi0];
    }
    os>>__PVT__writeIdxValid;
    os>>__PVT__s_axi_wready;
    os>>__PVT__wFIFO__DOT__fullCond;
    os>>__PVT__wFIFO__DOT__equal;
    os>>__PVT__wFIFO__DOT__empty;
    os>>__PVT__wFIFO__DOT__outputReady;
    os>>__PVT__wFIFO__DOT__doExtract;
    os>>__PVT__wFIFO__DOT__doInsert;
    os>>__PVT__wFIFO__DOT__outValidReg;
    os>>__PVT__wFIFO__DOT__combPassthru;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__Vcellinp__wFIFO__IN_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__wFIFO__DOT__outDataReg[__Vi0];
    }
    os>>__PVT__wFIFO__DOT__indexIn;
    os>>__PVT__wFIFO__DOT__indexOut;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            os>>__PVT__wFIFO__DOT__mem[__Vi0][__Vi1];
        }
    }
    os>>__PVT__s_axi_awready;
    os>>__PVT__readDataIdxValid;
    os>>__PVT__readDataIdx;
    os>>__VdlyVal__tfs__v0;
    os>>__VdlySet__tfs__v0;
    os>>__VdlyLsb__tfs__v1;
    os>>__VdlySet__tfs__v1;
    os>>__VdlyVal__tfs__v2;
    os>>__VdlySet__tfs__v2;
    os>>__VdlyLsb__tfs__v0;
    os>>__VdlyLsb__tfs__v2;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os>>__PVT__reads[__Vi0];
    }
    os>>__VdlyVal__tfs__v1;
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            os>>mem[__Vi0][__Vi1];
        }
    }
    os>>__PVT__s_axi_rlast;
    os>>inputByte;
    os>>__PVT__unnamedblk2__DOT__last;
    os>>__Vlvbound_ha4e0d76b__0;
    os>>__Vlvbound_ha2e9d5ac__0;
    os>>__PVT__unnamedblk2__DOT__addr;
    os>>__Vlvbound_hcd8e2c99__0;
    os>>inputAvail;
    os>>__Vdly__inputAvail;
    os>>__PVT__s_axi_rid;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__s_axi_rdata[__Vi0];
    }
    os>>__PVT__s_axi_rvalid;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 7; ++__Vi1) {
            os>>__PVT__tfs[__Vi0][__Vi1];
        }
    }
    os>>__PVT__s_axi_arready;
    os>>__PVT__buf_awvalid;
    os>>__PVT__buf_awready;
    os>>__PVT__buf_arvalid;
    os>>__PVT__buf_arready;
    os>>__PVT__awFIFO__DOT__fullCond;
    os>>__PVT__awFIFO__DOT__equal;
    os>>__PVT__awFIFO__DOT__empty;
    os>>__PVT__awFIFO__DOT__outputReady;
    os>>__PVT__awFIFO__DOT__doExtract;
    os>>__PVT__awFIFO__DOT__doInsert;
    os>>__PVT__awFIFO__DOT__outValidReg;
    os>>__PVT__awFIFO__DOT__combPassthru;
    os>>__PVT__arFIFO__DOT__fullCond;
    os>>__PVT__arFIFO__DOT__equal;
    os>>__PVT__arFIFO__DOT__empty;
    os>>__PVT__arFIFO__DOT__outputReady;
    os>>__PVT__arFIFO__DOT__doExtract;
    os>>__PVT__arFIFO__DOT__doInsert;
    os>>__PVT__arFIFO__DOT__outValidReg;
    os>>__VdlyVal__mem__v0;
    os>>__VdlySet__mem__v0;
    os>>__VdlyVal__mem__v1;
    os>>__VdlySet__mem__v1;
    os>>__VdlyVal__mem__v2;
    os>>__VdlySet__mem__v2;
    os>>__VdlyVal__mem__v3;
    os>>__VdlySet__mem__v3;
    os>>__VdlyVal__mem__v4;
    os>>__VdlySet__mem__v4;
    os>>__VdlyVal__mem__v5;
    os>>__VdlySet__mem__v5;
    os>>__VdlyVal__mem__v6;
    os>>__VdlySet__mem__v6;
    os>>__VdlyVal__mem__v7;
    os>>__VdlySet__mem__v7;
    os>>__VdlyVal__mem__v8;
    os>>__VdlySet__mem__v8;
    os>>__VdlyVal__mem__v9;
    os>>__VdlySet__mem__v9;
    os>>__VdlyVal__mem__v10;
    os>>__VdlySet__mem__v10;
    os>>__VdlyVal__mem__v11;
    os>>__VdlySet__mem__v11;
    os>>__VdlyVal__mem__v12;
    os>>__VdlySet__mem__v12;
    os>>__VdlyVal__mem__v13;
    os>>__VdlySet__mem__v13;
    os>>__VdlyVal__mem__v14;
    os>>__VdlySet__mem__v14;
    os>>__VdlyVal__mem__v15;
    os>>__VdlySet__mem__v15;
    os>>__VdlyVal__tfs__v3;
    os>>__VdlySet__tfs__v3;
    os>>__VdlyVal__tfs__v4;
    os>>__VdlySet__tfs__v4;
    os>>__VdlyLsb__tfs__v5;
    os>>__VdlySet__tfs__v5;
    os>>__VdlyVal__tfs__v6;
    os>>__VdlySet__tfs__v6;
    os>>__VdlyVal__tfs__v7;
    os>>__VdlySet__tfs__v7;
    os>>__VdlySet__tfs__v8;
    os>>__VdlyVal__tfs__v9;
    os>>__VdlySet__tfs__v9;
    os>>__VdlyVal__tfs__v10;
    os>>__VdlySet__tfs__v10;
    os>>__VdlyVal__tfs__v11;
    os>>__VdlySet__tfs__v11;
    os>>__VdlyVal__tfs__v12;
    os>>__VdlySet__tfs__v12;
    os>>__VdlySet__tfs__v13;
    os>>__VdlyVal__tfs__v14;
    os>>__VdlySet__tfs__v14;
    os>>__VdlyVal__tfs__v15;
    os>>__VdlySet__tfs__v15;
    os>>__VdlyVal__tfs__v16;
    os>>__VdlySet__tfs__v16;
    os>>__VdlyDim0__mem__v0;
    os>>__VdlyDim0__mem__v1;
    os>>__VdlyDim0__mem__v2;
    os>>__VdlyDim0__mem__v3;
    os>>__VdlyDim0__mem__v4;
    os>>__VdlyDim0__mem__v5;
    os>>__VdlyDim0__mem__v6;
    os>>__VdlyDim0__mem__v7;
    os>>__VdlyDim0__mem__v8;
    os>>__VdlyDim0__mem__v9;
    os>>__VdlyDim0__mem__v10;
    os>>__VdlyDim0__mem__v11;
    os>>__VdlyDim0__mem__v12;
    os>>__VdlyDim0__mem__v13;
    os>>__VdlyDim0__mem__v14;
    os>>__VdlyDim0__mem__v15;
    os>>__VdlyLsb__tfs__v3;
    os>>__VdlyLsb__tfs__v4;
    os>>__VdlyLsb__tfs__v6;
    os>>__VdlyLsb__tfs__v7;
    os>>__VdlyVal__tfs__v8;
    os>>__VdlyLsb__tfs__v8;
    os>>__VdlyLsb__tfs__v9;
    os>>__VdlyLsb__tfs__v10;
    os>>__VdlyLsb__tfs__v11;
    os>>__VdlyLsb__tfs__v12;
    os>>__VdlyVal__tfs__v13;
    os>>__VdlyLsb__tfs__v13;
    os>>__VdlyLsb__tfs__v14;
    os>>__VdlyLsb__tfs__v15;
    os>>__VdlyLsb__tfs__v16;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        os>>__PVT__writes[__Vi0];
    }
    os>>__Vcellout__awFIFO__OUT_data;
    os>>__Vcellinp__awFIFO__IN_data;
    os>>__Vcellout__arFIFO__OUT_data;
    os>>__PVT__awFIFO__DOT__outDataReg;
    os>>__VdlyVal__tfs__v5;
    os>>__PVT__unnamedblk6__DOT__unnamedblk7__DOT__last;
    os>>__Vlvbound_hf5f86567__0;
    os>>__Vlvbound_hf5f86567__1;
    os>>__Vlvbound_he15ecf53__0;
    os>>__Vlvbound_h027d800f__0;
    os>>__Vlvbound_hf688ff49__0;
    os>>__Vlvbound_h49134e48__0;
    os>>__Vlvbound_hfacb3be2__0;
    os>>__Vlvbound_ha918a1d3__0;
    os>>__Vlvbound_hb87e5c88__0;
    os>>__Vlvbound_hcaa89f34__0;
    os>>__Vlvbound_hca0c47d2__0;
    os>>__PVT__awFIFO__DOT__indexIn;
    os>>__PVT__awFIFO__DOT__indexOut;
    os>>__PVT__arFIFO__DOT__indexIn;
    os>>__PVT__arFIFO__DOT__indexOut;
    os>>__PVT__arFIFO__DOT__combPassthru;
    os>>__PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr;
    os>>__Vlvbound_h5eac4bcf__0;
    os>>__Vlvbound_h8aa2503f__0;
    os>>__Vcellinp__arFIFO__IN_data;
    os>>__PVT__unnamedblk6__DOT__unnamedblk7__DOT__w;
    os>>__Vlvbound_h355f9656__0;
    os>>__PVT__arFIFO__DOT__outDataReg;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__awFIFO__DOT__mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__PVT__arFIFO__DOT__mem[__Vi0];
    }
    os>>__PVT__s_axi_bid;
    os>>__PVT__s_axi_bvalid;
    os>>__PVT__clk;
    os>>__PVT__rst;
    os>>__PVT__s_axi_awid;
    os>>__PVT__s_axi_awlen;
    os>>__PVT__s_axi_awsize;
    os>>__PVT__s_axi_awburst;
    os>>__PVT__s_axi_awlock;
    os>>__PVT__s_axi_awcache;
    os>>__PVT__s_axi_awvalid;
    os>>__PVT__s_axi_wlast;
    os>>__PVT__s_axi_wvalid;
    os>>__PVT__s_axi_bready;
    os>>__PVT__s_axi_arid;
    os>>__PVT__s_axi_arlen;
    os>>__PVT__s_axi_arsize;
    os>>__PVT__s_axi_arburst;
    os>>__PVT__s_axi_arlock;
    os>>__PVT__s_axi_arcache;
    os>>__PVT__s_axi_arvalid;
    os>>__PVT__s_axi_rready;
    os>>__PVT__s_axi_wstrb;
    os>>__PVT__s_axi_awaddr;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__s_axi_wdata[__Vi0];
    }
    os>>__PVT__s_axi_araddr;
}
