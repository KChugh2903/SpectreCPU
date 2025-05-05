// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL1RW__W54_N40_WB15.h"
#include "VTop__Syms.h"

void VTop_MemRTL1RW__W54_N40_WB15___ctor_var_reset(VTop_MemRTL1RW__W54_N40_WB15* vlSelf);

VTop_MemRTL1RW__W54_N40_WB15::VTop_MemRTL1RW__W54_N40_WB15(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_MemRTL1RW__W54_N40_WB15___ctor_var_reset(this);
}

void VTop_MemRTL1RW__W54_N40_WB15::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_MemRTL1RW__W54_N40_WB15::~VTop_MemRTL1RW__W54_N40_WB15() {
}

// Savable
void VTop_MemRTL1RW__W54_N40_WB15::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x245d096cea0820d3ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__OUT_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os<<mem[__Vi0][__Vi1];
        }
    }
    os<<__PVT__addr_reg;
    os<<__PVT__ce_reg;
    os<<__PVT__we_reg;
    os<<__PVT__wm_reg;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__data_reg[__Vi0];
    }
    os<<__Vlvbound_h0a746fb9__0;
    os<<__VdlyDim0__mem__v0;
    os<<__VdlySet__mem__v0;
    os<<__VdlyDim0__mem__v1;
    os<<__VdlySet__mem__v1;
    os<<__VdlyDim0__mem__v2;
    os<<__VdlySet__mem__v2;
    os<<__VdlyDim0__mem__v3;
    os<<__VdlySet__mem__v3;
    os<<__VdlyVal__mem__v0;
    os<<__VdlyVal__mem__v1;
    os<<__VdlyVal__mem__v2;
    os<<__VdlyVal__mem__v3;
    os<<__PVT__clk;
    os<<__PVT__IN_nce;
    os<<__PVT__IN_nwe;
    os<<__PVT__IN_addr;
    os<<__PVT__IN_wm;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__IN_data[__Vi0];
    }
}
void VTop_MemRTL1RW__W54_N40_WB15::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x245d096cea0820d3ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__OUT_data[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            os>>mem[__Vi0][__Vi1];
        }
    }
    os>>__PVT__addr_reg;
    os>>__PVT__ce_reg;
    os>>__PVT__we_reg;
    os>>__PVT__wm_reg;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__data_reg[__Vi0];
    }
    os>>__Vlvbound_h0a746fb9__0;
    os>>__VdlyDim0__mem__v0;
    os>>__VdlySet__mem__v0;
    os>>__VdlyDim0__mem__v1;
    os>>__VdlySet__mem__v1;
    os>>__VdlyDim0__mem__v2;
    os>>__VdlySet__mem__v2;
    os>>__VdlyDim0__mem__v3;
    os>>__VdlySet__mem__v3;
    os>>__VdlyVal__mem__v0;
    os>>__VdlyVal__mem__v1;
    os>>__VdlyVal__mem__v2;
    os>>__VdlyVal__mem__v3;
    os>>__PVT__clk;
    os>>__PVT__IN_nce;
    os>>__PVT__IN_nwe;
    os>>__PVT__IN_addr;
    os>>__PVT__IN_wm;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__IN_data[__Vi0];
    }
}
