// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop_CSR.h"
#include "VTop__Syms.h"

void VTop_CSR___ctor_var_reset(VTop_CSR* vlSelf);

VTop_CSR::VTop_CSR(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_CSR___ctor_var_reset(this);
}

void VTop_CSR::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTop_CSR::~VTop_CSR() {
}

// Savable
void VTop_CSR::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xa911d6317d4e6de6ULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__OUT_vmem;
    os<<__Vdly__priv;
    os<<__VdlySet__mhpmcounter__v0;
    os<<__VdlySet__mhpmcounter__v1;
    os<<__VdlySet__mhpmcounter__v2;
    os<<__VdlySet__mhpmcounter__v17;
    os<<__VdlySet__mhpmcounter__v18;
    os<<__VdlySet__mhpmcounter__v19;
    os<<__VdlyDim0__mhpmcounter__v20;
    os<<__VdlySet__mhpmcounter__v20;
    os<<__VdlyDim0__mhpmcounter__v21;
    os<<__VdlySet__mhpmcounter__v21;
    os<<__VdlySet__mhpmcounter__v22;
    os<<__VdlySet__mhpmcounter__v23;
    os<<__VdlySet__mhpmcounter__v24;
    os<<__VdlySet__mhpmcounter__v25;
    os<<__VdlySet__mhpmcounter__v26;
    os<<__VdlySet__mhpmcounter__v27;
    os<<__VdlySet__mhpmcounter__v28;
    os<<__VdlySet__mhpmcounter__v29;
    os<<__VdlySet__mhpmcounter__v30;
    os<<__VdlySet__mhpmcounter__v31;
    os<<__VdlySet__mhpmcounter__v32;
    os<<__VdlySet__mhpmcounter__v33;
    os<<__VdlySet__mhpmcounter__v34;
    os<<__VdlySet__mhpmcounter__v35;
    os<<__VdlySet__mhpmcounter__v36;
    os<<__VdlySet__mhpmcounter__v37;
    os<<__VdlySet__mhpmcounter__v38;
    os<<__VdlySet__mhpmcounter__v39;
    os<<__Vdly__mideleg;
    os<<__PVT__retvec;
    os<<__Vdly__mstatus;
    os<<__Vdly__mepc;
    os<<__Vdly__sepc;
    os<<__VdlyVal__mhpmcounter__v22;
    os<<__VdlyVal__mhpmcounter__v23;
    os<<__VdlyVal__mhpmcounter__v24;
    os<<__VdlyVal__mhpmcounter__v25;
    os<<__VdlyVal__mhpmcounter__v26;
    os<<__VdlyVal__mhpmcounter__v27;
    os<<__VdlyVal__mhpmcounter__v28;
    os<<__VdlyVal__mhpmcounter__v29;
    os<<__VdlyVal__mhpmcounter__v30;
    os<<__VdlyVal__mhpmcounter__v31;
    os<<__VdlyVal__mhpmcounter__v32;
    os<<__VdlyVal__mhpmcounter__v33;
    os<<__VdlyVal__mhpmcounter__v34;
    os<<__VdlyVal__mhpmcounter__v35;
    os<<__VdlyVal__mhpmcounter__v36;
    os<<__VdlyVal__mhpmcounter__v37;
    os<<__VdlyVal__mhpmcounter__v38;
    os<<__VdlyVal__mhpmcounter__v39;
    os<<__Vdly__mcycle;
    os<<__Vdly__minstret;
    os<<__VdlyVal__mhpmcounter__v17;
    os<<__VdlyVal__mhpmcounter__v18;
    os<<__VdlyVal__mhpmcounter__v19;
    os<<__VdlyVal__mhpmcounter__v20;
    os<<__VdlyVal__mhpmcounter__v21;
    os<<__PVT__interrupt;
    os<<__PVT__interruptCause;
    os<<__PVT__interruptDelegate;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        os<<__PVT__unnamedblk1__DOT__mPrio[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__unnamedblk1__DOT__sPrio[__Vi0];
    }
    os<<__PVT__vmem_c;
    os<<__PVT__unnamedblk10__DOT__temp;
    os<<__PVT__unnamedblk12__DOT__temp;
    os<<__PVT__unnamedblk9__DOT__tval;
    os<<__PVT__unnamedblk14__DOT__wdata;
    os<<__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp;
    os<<__PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp;
    os<<__PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp;
    os<<__PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp;
    os<<__Vlvbound_hbaecf5dc__0;
    os<<__Vlvbound_hbaeae206__0;
    os<<__PVT__OUT_uop;
    os<<__Vlvbound_h4b2c3bb3__0;
    os<<__Vlvbound_hab3b1230__0;
    os<<__PVT__misa_X;
    os<<__PVT__invalidCSR;
    os<<__PVT__mscratch;
    os<<__PVT__mcause;
    os<<__PVT__mtval;
    os<<__PVT__mcounteren;
    os<<__PVT__scounteren;
    os<<__PVT__sscratch;
    os<<__PVT__scause;
    os<<__PVT__stval;
    os<<__PVT__rdata;
    os<<__PVT__medeleg;
    os<<__PVT__mideleg;
    os<<__PVT__mip;
    os<<__PVT__mie;
    os<<__PVT__mtvec;
    os<<__PVT__stvec;
    os<<__PVT__mepc;
    os<<__PVT__mcountinhibit;
    os<<__PVT__menvcfg;
    os<<__PVT__senvcfg;
    os<<__PVT__sepc;
    os<<__PVT__satp;
    os<<mcycle;
    os<<minstret;
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        os<<mhpmcounter[__Vi0];
    }
    os<<__PVT__priv;
    os<<__PVT__mstatus;
    os<<__PVT__clk;
    os<<__PVT__rst;
    os<<__PVT__en;
    os<<__PVT__IN_irq;
    os<<__PVT__IN_fpNewFlags;
    os<<__PVT__IN_branchMispr;
    os<<__PVT__OUT_fRoundMode;
    os<<__PVT__OUT_dec;
    os<<__PVT__IN_perfcInfo;
    os<<__PVT__IN_tvalState;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        os<<__PVT__IN_uop[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__IN_branch[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os<<__PVT__IN_trapInfo[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os<<__PVT__OUT_trapControl[__Vi0];
    }
}
void VTop_CSR::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xa911d6317d4e6de6ULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__OUT_vmem;
    os>>__Vdly__priv;
    os>>__VdlySet__mhpmcounter__v0;
    os>>__VdlySet__mhpmcounter__v1;
    os>>__VdlySet__mhpmcounter__v2;
    os>>__VdlySet__mhpmcounter__v17;
    os>>__VdlySet__mhpmcounter__v18;
    os>>__VdlySet__mhpmcounter__v19;
    os>>__VdlyDim0__mhpmcounter__v20;
    os>>__VdlySet__mhpmcounter__v20;
    os>>__VdlyDim0__mhpmcounter__v21;
    os>>__VdlySet__mhpmcounter__v21;
    os>>__VdlySet__mhpmcounter__v22;
    os>>__VdlySet__mhpmcounter__v23;
    os>>__VdlySet__mhpmcounter__v24;
    os>>__VdlySet__mhpmcounter__v25;
    os>>__VdlySet__mhpmcounter__v26;
    os>>__VdlySet__mhpmcounter__v27;
    os>>__VdlySet__mhpmcounter__v28;
    os>>__VdlySet__mhpmcounter__v29;
    os>>__VdlySet__mhpmcounter__v30;
    os>>__VdlySet__mhpmcounter__v31;
    os>>__VdlySet__mhpmcounter__v32;
    os>>__VdlySet__mhpmcounter__v33;
    os>>__VdlySet__mhpmcounter__v34;
    os>>__VdlySet__mhpmcounter__v35;
    os>>__VdlySet__mhpmcounter__v36;
    os>>__VdlySet__mhpmcounter__v37;
    os>>__VdlySet__mhpmcounter__v38;
    os>>__VdlySet__mhpmcounter__v39;
    os>>__Vdly__mideleg;
    os>>__PVT__retvec;
    os>>__Vdly__mstatus;
    os>>__Vdly__mepc;
    os>>__Vdly__sepc;
    os>>__VdlyVal__mhpmcounter__v22;
    os>>__VdlyVal__mhpmcounter__v23;
    os>>__VdlyVal__mhpmcounter__v24;
    os>>__VdlyVal__mhpmcounter__v25;
    os>>__VdlyVal__mhpmcounter__v26;
    os>>__VdlyVal__mhpmcounter__v27;
    os>>__VdlyVal__mhpmcounter__v28;
    os>>__VdlyVal__mhpmcounter__v29;
    os>>__VdlyVal__mhpmcounter__v30;
    os>>__VdlyVal__mhpmcounter__v31;
    os>>__VdlyVal__mhpmcounter__v32;
    os>>__VdlyVal__mhpmcounter__v33;
    os>>__VdlyVal__mhpmcounter__v34;
    os>>__VdlyVal__mhpmcounter__v35;
    os>>__VdlyVal__mhpmcounter__v36;
    os>>__VdlyVal__mhpmcounter__v37;
    os>>__VdlyVal__mhpmcounter__v38;
    os>>__VdlyVal__mhpmcounter__v39;
    os>>__Vdly__mcycle;
    os>>__Vdly__minstret;
    os>>__VdlyVal__mhpmcounter__v17;
    os>>__VdlyVal__mhpmcounter__v18;
    os>>__VdlyVal__mhpmcounter__v19;
    os>>__VdlyVal__mhpmcounter__v20;
    os>>__VdlyVal__mhpmcounter__v21;
    os>>__PVT__interrupt;
    os>>__PVT__interruptCause;
    os>>__PVT__interruptDelegate;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        os>>__PVT__unnamedblk1__DOT__mPrio[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__unnamedblk1__DOT__sPrio[__Vi0];
    }
    os>>__PVT__vmem_c;
    os>>__PVT__unnamedblk10__DOT__temp;
    os>>__PVT__unnamedblk12__DOT__temp;
    os>>__PVT__unnamedblk9__DOT__tval;
    os>>__PVT__unnamedblk14__DOT__wdata;
    os>>__PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp;
    os>>__PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp;
    os>>__PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp;
    os>>__PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp;
    os>>__Vlvbound_hbaecf5dc__0;
    os>>__Vlvbound_hbaeae206__0;
    os>>__PVT__OUT_uop;
    os>>__Vlvbound_h4b2c3bb3__0;
    os>>__Vlvbound_hab3b1230__0;
    os>>__PVT__misa_X;
    os>>__PVT__invalidCSR;
    os>>__PVT__mscratch;
    os>>__PVT__mcause;
    os>>__PVT__mtval;
    os>>__PVT__mcounteren;
    os>>__PVT__scounteren;
    os>>__PVT__sscratch;
    os>>__PVT__scause;
    os>>__PVT__stval;
    os>>__PVT__rdata;
    os>>__PVT__medeleg;
    os>>__PVT__mideleg;
    os>>__PVT__mip;
    os>>__PVT__mie;
    os>>__PVT__mtvec;
    os>>__PVT__stvec;
    os>>__PVT__mepc;
    os>>__PVT__mcountinhibit;
    os>>__PVT__menvcfg;
    os>>__PVT__senvcfg;
    os>>__PVT__sepc;
    os>>__PVT__satp;
    os>>mcycle;
    os>>minstret;
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        os>>mhpmcounter[__Vi0];
    }
    os>>__PVT__priv;
    os>>__PVT__mstatus;
    os>>__PVT__clk;
    os>>__PVT__rst;
    os>>__PVT__en;
    os>>__PVT__IN_irq;
    os>>__PVT__IN_fpNewFlags;
    os>>__PVT__IN_branchMispr;
    os>>__PVT__OUT_fRoundMode;
    os>>__PVT__OUT_dec;
    os>>__PVT__IN_perfcInfo;
    os>>__PVT__IN_tvalState;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        os>>__PVT__IN_uop[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__IN_branch[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        os>>__PVT__IN_trapInfo[__Vi0];
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        os>>__PVT__OUT_trapControl[__Vi0];
    }
}
