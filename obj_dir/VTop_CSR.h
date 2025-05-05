// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_CSR_H_
#define VERILATED_VTOP_CSR_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_CSR final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT(__PVT__OUT_vmem,30,0);
        CData/*1:0*/ __Vdly__priv;
        CData/*0:0*/ __VdlySet__mhpmcounter__v0;
        CData/*0:0*/ __VdlySet__mhpmcounter__v1;
        CData/*0:0*/ __VdlySet__mhpmcounter__v2;
        CData/*0:0*/ __VdlySet__mhpmcounter__v17;
        CData/*0:0*/ __VdlySet__mhpmcounter__v18;
        CData/*0:0*/ __VdlySet__mhpmcounter__v19;
        CData/*4:0*/ __VdlyDim0__mhpmcounter__v20;
        CData/*0:0*/ __VdlySet__mhpmcounter__v20;
        CData/*4:0*/ __VdlyDim0__mhpmcounter__v21;
        CData/*0:0*/ __VdlySet__mhpmcounter__v21;
        CData/*0:0*/ __VdlySet__mhpmcounter__v22;
        CData/*0:0*/ __VdlySet__mhpmcounter__v23;
        CData/*0:0*/ __VdlySet__mhpmcounter__v24;
        CData/*0:0*/ __VdlySet__mhpmcounter__v25;
        CData/*0:0*/ __VdlySet__mhpmcounter__v26;
        CData/*0:0*/ __VdlySet__mhpmcounter__v27;
        CData/*0:0*/ __VdlySet__mhpmcounter__v28;
        CData/*0:0*/ __VdlySet__mhpmcounter__v29;
        CData/*0:0*/ __VdlySet__mhpmcounter__v30;
        CData/*0:0*/ __VdlySet__mhpmcounter__v31;
        CData/*0:0*/ __VdlySet__mhpmcounter__v32;
        CData/*0:0*/ __VdlySet__mhpmcounter__v33;
        CData/*0:0*/ __VdlySet__mhpmcounter__v34;
        CData/*0:0*/ __VdlySet__mhpmcounter__v35;
        CData/*0:0*/ __VdlySet__mhpmcounter__v36;
        CData/*0:0*/ __VdlySet__mhpmcounter__v37;
        CData/*0:0*/ __VdlySet__mhpmcounter__v38;
        CData/*0:0*/ __VdlySet__mhpmcounter__v39;
        SData/*15:0*/ __Vdly__mideleg;
        IData/*30:0*/ __PVT__retvec;
        IData/*31:0*/ __Vdly__mstatus;
        IData/*31:0*/ __Vdly__mepc;
        IData/*31:0*/ __Vdly__sepc;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v22;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v23;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v24;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v25;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v26;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v27;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v28;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v29;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v30;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v31;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v32;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v33;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v34;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v35;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v36;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v37;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v38;
        IData/*31:0*/ __VdlyVal__mhpmcounter__v39;
        QData/*63:0*/ __Vdly__mcycle;
        QData/*63:0*/ __Vdly__minstret;
        QData/*63:0*/ __VdlyVal__mhpmcounter__v17;
        QData/*63:0*/ __VdlyVal__mhpmcounter__v18;
        QData/*63:0*/ __VdlyVal__mhpmcounter__v19;
        QData/*63:0*/ __VdlyVal__mhpmcounter__v20;
        QData/*63:0*/ __VdlyVal__mhpmcounter__v21;
        CData/*0:0*/ __PVT__interrupt;
        CData/*4:0*/ __PVT__interruptCause;
        CData/*0:0*/ __PVT__interruptDelegate;
        VlUnpacked<CData/*3:0*/, 6> __PVT__unnamedblk1__DOT__mPrio;
    };
    struct {
        VlUnpacked<CData/*3:0*/, 3> __PVT__unnamedblk1__DOT__sPrio;
        IData/*30:0*/ __PVT__vmem_c;
        CData/*2:0*/ __PVT__unnamedblk10__DOT__temp;
        CData/*2:0*/ __PVT__unnamedblk12__DOT__temp;
        IData/*31:0*/ __PVT__unnamedblk9__DOT__tval;
        IData/*31:0*/ __PVT__unnamedblk14__DOT__wdata;
        IData/*31:0*/ __PVT__unnamedblk14__DOT__unnamedblk16__DOT__temp;
        IData/*31:0*/ __PVT__unnamedblk14__DOT__unnamedblk17__DOT__temp;
        IData/*31:0*/ __PVT__unnamedblk14__DOT__unnamedblk18__DOT__temp;
        IData/*31:0*/ __PVT__unnamedblk14__DOT__unnamedblk19__DOT__temp;
        IData/*31:0*/ __Vlvbound_hbaecf5dc__0;
        IData/*31:0*/ __Vlvbound_hbaeae206__0;
        VL_OUT64(__PVT__OUT_uop,51,0);
        QData/*63:0*/ __Vlvbound_h4b2c3bb3__0;
        QData/*63:0*/ __Vlvbound_hab3b1230__0;
        CData/*0:0*/ __PVT__misa_X;
        CData/*0:0*/ __PVT__invalidCSR;
        IData/*31:0*/ __PVT__mscratch;
        IData/*31:0*/ __PVT__mcause;
        IData/*31:0*/ __PVT__mtval;
        IData/*31:0*/ __PVT__mcounteren;
        IData/*31:0*/ __PVT__scounteren;
        IData/*31:0*/ __PVT__sscratch;
        IData/*31:0*/ __PVT__scause;
        IData/*31:0*/ __PVT__stval;
        IData/*31:0*/ __PVT__rdata;
        SData/*15:0*/ __PVT__medeleg;
        SData/*15:0*/ __PVT__mideleg;
        SData/*15:0*/ __PVT__mip;
        SData/*15:0*/ __PVT__mie;
        IData/*31:0*/ __PVT__mtvec;
        IData/*31:0*/ __PVT__stvec;
        IData/*31:0*/ __PVT__mepc;
        IData/*31:0*/ __PVT__mcountinhibit;
        IData/*31:0*/ __PVT__menvcfg;
        IData/*31:0*/ __PVT__senvcfg;
        IData/*31:0*/ __PVT__sepc;
        IData/*31:0*/ __PVT__satp;
        QData/*63:0*/ mcycle;
        QData/*63:0*/ minstret;
        VlUnpacked<QData/*63:0*/, 17> mhpmcounter;
        CData/*1:0*/ __PVT__priv;
        IData/*31:0*/ __PVT__mstatus;
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__en,0,0);
        VL_IN8(__PVT__IN_irq,0,0);
        VL_IN8(__PVT__IN_fpNewFlags,4,0);
        VL_IN8(__PVT__IN_branchMispr,0,0);
        VL_OUT8(__PVT__OUT_fRoundMode,2,0);
        VL_OUT8(__PVT__OUT_dec,2,0);
        VL_IN16(__PVT__IN_perfcInfo,12,0);
        VL_IN(__PVT__IN_tvalState,31,0);
        VL_INW(__PVT__IN_uop,182,0,6);
        VL_INW(__PVT__IN_branch,73,0,3);
        VL_INW(__PVT__IN_trapInfo,71,0,3);
        VL_OUTW(__PVT__OUT_trapControl,133,0,5);
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_CSR(VTop__Syms* symsp, const char* v__name);
    ~VTop_CSR();
    VL_UNCOPYABLE(VTop_CSR);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
