// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_MMIO.h"
#include "VTop__Syms.h"

void VTop_IF_MMIO___ctor_var_reset(VTop_IF_MMIO* vlSelf);

VTop_IF_MMIO::VTop_IF_MMIO(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_IF_MMIO___ctor_var_reset(this);
}

void VTop_IF_MMIO::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_IF_MMIO::~VTop_IF_MMIO() {
}

// Savable
void VTop_IF_MMIO::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x72cef1eaa65cdcfULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__rdata;
    os<<__PVT__we;
    os<<__PVT__wmask;
    os<<__PVT__re;
    os<<__PVT__waddr;
    os<<__PVT__wdata;
    os<<__PVT__raddr;
}
void VTop_IF_MMIO::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x72cef1eaa65cdcfULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__rdata;
    os>>__PVT__we;
    os>>__PVT__wmask;
    os>>__PVT__re;
    os>>__PVT__waddr;
    os>>__PVT__wdata;
    os>>__PVT__raddr;
}
