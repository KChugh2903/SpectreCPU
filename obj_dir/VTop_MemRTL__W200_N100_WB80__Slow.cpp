// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL__W200_N100_WB80.h"
#include "VTop__Syms.h"

void VTop_MemRTL__W200_N100_WB80___ctor_var_reset(VTop_MemRTL__W200_N100_WB80* vlSelf);

VTop_MemRTL__W200_N100_WB80::VTop_MemRTL__W200_N100_WB80(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_MemRTL__W200_N100_WB80___ctor_var_reset(this);
}

void VTop_MemRTL__W200_N100_WB80::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_MemRTL__W200_N100_WB80::~VTop_MemRTL__W200_N100_WB80() {
}

// Savable
void VTop_MemRTL__W200_N100_WB80::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x6a027a5c2c6b84b7ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os<<__PVT__OUT_data1[__Vi0];
    }
    os<<__PVT__ce_reg;
    os<<__PVT__ce1_reg;
    os<<__PVT__we_reg;
    os<<__PVT__addr_reg;
    os<<__PVT__addr1_reg;
    os<<__PVT__wm_reg;
    os<<__VdlyDim0__mem__v0;
    os<<__VdlySet__mem__v0;
    os<<__VdlyDim0__mem__v1;
    os<<__VdlySet__mem__v1;
    os<<__VdlyDim0__mem__v2;
    os<<__VdlySet__mem__v2;
    os<<__VdlyDim0__mem__v3;
    os<<__VdlySet__mem__v3;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os<<__PVT__data_reg[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__VdlyVal__mem__v0[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__VdlyVal__mem__v1[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__VdlyVal__mem__v2[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__VdlyVal__mem__v3[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            os<<mem[__Vi0][__Vi1];
        }
    }
    os<<__PVT__clk;
    os<<__PVT__IN_nce;
    os<<__PVT__IN_nwe;
    os<<__PVT__IN_addr;
    os<<__PVT__IN_wm;
    os<<__PVT__IN_nce1;
    os<<__PVT__IN_addr1;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os<<__PVT__IN_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os<<__PVT__OUT_data[__Vi0];
    }
}
void VTop_MemRTL__W200_N100_WB80::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x6a027a5c2c6b84b7ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os>>__PVT__OUT_data1[__Vi0];
    }
    os>>__PVT__ce_reg;
    os>>__PVT__ce1_reg;
    os>>__PVT__we_reg;
    os>>__PVT__addr_reg;
    os>>__PVT__addr1_reg;
    os>>__PVT__wm_reg;
    os>>__VdlyDim0__mem__v0;
    os>>__VdlySet__mem__v0;
    os>>__VdlyDim0__mem__v1;
    os>>__VdlySet__mem__v1;
    os>>__VdlyDim0__mem__v2;
    os>>__VdlySet__mem__v2;
    os>>__VdlyDim0__mem__v3;
    os>>__VdlySet__mem__v3;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os>>__PVT__data_reg[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__VdlyVal__mem__v0[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__VdlyVal__mem__v1[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__VdlyVal__mem__v2[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__VdlyVal__mem__v3[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            os>>mem[__Vi0][__Vi1];
        }
    }
    os>>__PVT__clk;
    os>>__PVT__IN_nce;
    os>>__PVT__IN_nwe;
    os>>__PVT__IN_addr;
    os>>__PVT__IN_wm;
    os>>__PVT__IN_nce1;
    os>>__PVT__IN_addr1;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os>>__PVT__IN_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        os>>__PVT__OUT_data[__Vi0];
    }
}
