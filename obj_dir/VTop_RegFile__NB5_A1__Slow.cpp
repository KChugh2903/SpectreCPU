// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RegFile__NB5_A1.h"
#include "VTop__Syms.h"

void VTop_RegFile__NB5_A1___ctor_var_reset(VTop_RegFile__NB5_A1* vlSelf);

VTop_RegFile__NB5_A1::VTop_RegFile__NB5_A1(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_RegFile__NB5_A1___ctor_var_reset(this);
}

void VTop_RegFile__NB5_A1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_RegFile__NB5_A1::~VTop_RegFile__NB5_A1() {
}

// Savable
void VTop_RegFile__NB5_A1::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x86288e83a6b03743ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        os<<mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__OUT_rdata[__Vi0];
    }
    os<<__PVT__clk;
    os<<__PVT__IN_re;
    os<<__PVT__IN_raddr;
    os<<__PVT__IN_we;
    os<<__PVT__IN_waddr;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__IN_wdata[__Vi0];
    }
}
void VTop_RegFile__NB5_A1::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x86288e83a6b03743ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        os>>mem[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__OUT_rdata[__Vi0];
    }
    os>>__PVT__clk;
    os>>__PVT__IN_re;
    os>>__PVT__IN_raddr;
    os>>__PVT__IN_we;
    os>>__PVT__IN_waddr;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__IN_wdata[__Vi0];
    }
}
