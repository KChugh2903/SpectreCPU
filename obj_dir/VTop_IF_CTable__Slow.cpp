// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_IF_CTable.h"
#include "VTop__Syms.h"

void VTop_IF_CTable___ctor_var_reset(VTop_IF_CTable* vlSelf);

VTop_IF_CTable::VTop_IF_CTable(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_IF_CTable___ctor_var_reset(this);
}

void VTop_IF_CTable::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_IF_CTable::~VTop_IF_CTable() {
}

// Savable
void VTop_IF_CTable::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xd72504d2209f2807ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__ridx;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os<<__PVT__rdata[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__raddr[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__re[__Vi0];
    }
}
void VTop_IF_CTable::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xd72504d2209f2807ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__ridx;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        os>>__PVT__rdata[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__raddr[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__re[__Vi0];
    }
}
