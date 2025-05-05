// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_MemRTL1RW__W2_N40_WB2.h"
#include "VTop__Syms.h"

void VTop_MemRTL1RW__W2_N40_WB2___ctor_var_reset(VTop_MemRTL1RW__W2_N40_WB2* vlSelf);

VTop_MemRTL1RW__W2_N40_WB2::VTop_MemRTL1RW__W2_N40_WB2(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_MemRTL1RW__W2_N40_WB2___ctor_var_reset(this);
}

void VTop_MemRTL1RW__W2_N40_WB2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_MemRTL1RW__W2_N40_WB2::~VTop_MemRTL1RW__W2_N40_WB2() {
}

// Savable
void VTop_MemRTL1RW__W2_N40_WB2::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xb59bf69aa3c10ae1ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__wm_reg;
    os<<__VdlyVal__mem__v0;
    os<<__VdlyDim0__mem__v0;
    os<<__VdlySet__mem__v0;
    os<<__PVT__addr_reg;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        os<<mem[__Vi0];
    }
    os<<__PVT__OUT_data;
    os<<__PVT__ce_reg;
    os<<__PVT__we_reg;
    os<<__PVT__data_reg;
    os<<__PVT__clk;
    os<<__PVT__IN_nce;
    os<<__PVT__IN_nwe;
    os<<__PVT__IN_addr;
    os<<__PVT__IN_data;
    os<<__PVT__IN_wm;
}
void VTop_MemRTL1RW__W2_N40_WB2::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xb59bf69aa3c10ae1ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__wm_reg;
    os>>__VdlyVal__mem__v0;
    os>>__VdlyDim0__mem__v0;
    os>>__VdlySet__mem__v0;
    os>>__PVT__addr_reg;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        os>>mem[__Vi0];
    }
    os>>__PVT__OUT_data;
    os>>__PVT__ce_reg;
    os>>__PVT__we_reg;
    os>>__PVT__data_reg;
    os>>__PVT__clk;
    os>>__PVT__IN_nce;
    os>>__PVT__IN_nwe;
    os>>__PVT__IN_addr;
    os>>__PVT__IN_data;
    os>>__PVT__IN_wm;
}
