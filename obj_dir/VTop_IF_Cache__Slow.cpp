// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_Cache.h"
#include "VTop__Syms.h"

void VTop_IF_Cache___ctor_var_reset(VTop_IF_Cache* vlSelf);

VTop_IF_Cache::VTop_IF_Cache(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_IF_Cache___ctor_var_reset(this);
}

void VTop_IF_Cache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_IF_Cache::~VTop_IF_Cache() {
}

// Savable
void VTop_IF_Cache::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x2891be38e660993ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__rdata[__Vi0];
    }
    os<<__PVT__re;
    os<<__PVT__we;
    os<<__PVT__wassoc;
    os<<__PVT__wmask;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        os<<__PVT__wdata[__Vi0];
    }
    os<<__PVT__addr;
    os<<__PVT__busy;
}
void VTop_IF_Cache::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x2891be38e660993ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__rdata[__Vi0];
    }
    os>>__PVT__re;
    os>>__PVT__we;
    os>>__PVT__wassoc;
    os>>__PVT__wmask;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        os>>__PVT__wdata[__Vi0];
    }
    os>>__PVT__addr;
    os>>__PVT__busy;
}
