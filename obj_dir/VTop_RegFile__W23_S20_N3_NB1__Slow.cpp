// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_RegFile__W23_S20_N3_NB1.h"
#include "VTop__Syms.h"

void VTop_RegFile__W23_S20_N3_NB1___ctor_var_reset(VTop_RegFile__W23_S20_N3_NB1* vlSelf);

VTop_RegFile__W23_S20_N3_NB1::VTop_RegFile__W23_S20_N3_NB1(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_RegFile__W23_S20_N3_NB1___ctor_var_reset(this);
}

void VTop_RegFile__W23_S20_N3_NB1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_RegFile__W23_S20_N3_NB1::~VTop_RegFile__W23_S20_N3_NB1() {
}

// Savable
void VTop_RegFile__W23_S20_N3_NB1::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xebb1564e4687a5c2ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os<<__PVT__OUT_rdata[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os<<mem[__Vi0];
    }
    os<<__VdlyDim0__mem__v0;
    os<<__VdlySet__mem__v0;
    os<<__VdlyVal__mem__v0;
    os<<__PVT__clk;
    os<<__PVT__IN_re;
    os<<__PVT__IN_raddr;
    os<<__PVT__IN_we;
    os<<__PVT__IN_waddr;
    os<<__PVT__IN_wdata;
}
void VTop_RegFile__W23_S20_N3_NB1::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xebb1564e4687a5c2ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        os>>__PVT__OUT_rdata[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        os>>mem[__Vi0];
    }
    os>>__VdlyDim0__mem__v0;
    os>>__VdlySet__mem__v0;
    os>>__VdlyVal__mem__v0;
    os>>__PVT__clk;
    os>>__PVT__IN_re;
    os>>__PVT__IN_raddr;
    os>>__PVT__IN_we;
    os>>__PVT__IN_waddr;
    os>>__PVT__IN_wdata;
}
