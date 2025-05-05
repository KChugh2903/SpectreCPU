// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_RETURNSTACK_H_
#define VERILATED_VTOP_RETURNSTACK_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_ReturnStack final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__forwardRindex;
        CData/*4:0*/ __PVT__rindexReg;
        CData/*4:0*/ __PVT__lastInvalComFetchID;
        CData/*4:0*/ __Vdly__lastInvalComFetchID;
        CData/*0:0*/ __PVT__lastValid;
        CData/*4:0*/ __PVT__rindex;
        VL_OUT64(__PVT__OUT_predBr,40,0);
        VL_OUT(__PVT__OUT_curRetAddr,30,0);
        CData/*3:0*/ __Vdly__qindex_r;
        CData/*3:0*/ __Vdly__qindexEnd_r;
        CData/*0:0*/ __Vdly__recoveryInProgress;
        CData/*0:0*/ __Vdly__lastValid;
        QData/*44:0*/ __Vdly__postRecSave;
        CData/*0:0*/ __PVT__unnamedblk4__DOT__doPostRecSave;
        CData/*0:0*/ __PVT__unnamedblk4__DOT__startRecovery;
        CData/*2:0*/ __PVT__qindex;
        CData/*2:0*/ __PVT__qindexEnd;
        CData/*4:0*/ __PVT__recoveryID;
        CData/*4:0*/ __PVT__recoveryBase;
        CData/*2:0*/ __PVT__recoveryOffs;
        CData/*0:0*/ __PVT__recoveryOverwOwn;
        CData/*0:0*/ __PVT__queueFull;
        CData/*0:0*/ __PVT__recoveryContinue_c;
        CData/*0:0*/ __VdlySet__rstack__v0;
        CData/*0:0*/ __VdlySet__rstack__v1;
        CData/*4:0*/ __VdlyDim0__rstack__v32;
        CData/*0:0*/ __VdlySet__rstack__v32;
        CData/*2:0*/ __VdlyDim0__rrqueue__v0;
        CData/*4:0*/ __VdlyVal__rrqueue__v1;
        CData/*2:0*/ __VdlyDim0__rrqueue__v1;
        CData/*0:0*/ __VdlySet__rrqueue__v1;
        CData/*2:0*/ __VdlyVal__rrqueue__v2;
        CData/*2:0*/ __VdlyDim0__rrqueue__v2;
        CData/*4:0*/ __VdlyVal__rrqueue__v3;
        CData/*2:0*/ __VdlyDim0__rrqueue__v3;
        CData/*2:0*/ __VdlyDim0__rrqueue__v4;
        CData/*4:0*/ __VdlyDim0__rstack__v33;
        CData/*4:0*/ __VdlyVal__rrqueue__v5;
        CData/*2:0*/ __VdlyDim0__rrqueue__v5;
        CData/*0:0*/ __VdlySet__rrqueue__v5;
        CData/*2:0*/ __VdlyVal__rrqueue__v6;
        CData/*2:0*/ __VdlyDim0__rrqueue__v6;
        CData/*4:0*/ __VdlyVal__rrqueue__v7;
        CData/*2:0*/ __VdlyDim0__rrqueue__v7;
        CData/*2:0*/ __VdlyDim0__rrqueue__v8;
        CData/*4:0*/ __VdlyDim0__rstack__v34;
        CData/*0:0*/ __VdlySet__rstack__v34;
        CData/*2:0*/ __VdlyDim0__rrqueue__v9;
        CData/*0:0*/ __VdlySet__rrqueue__v9;
        IData/*30:0*/ __VdlyVal__rstack__v32;
        IData/*30:0*/ __VdlyVal__rrqueue__v4;
        IData/*30:0*/ __VdlyVal__rstack__v33;
        IData/*30:0*/ __VdlyVal__rrqueue__v8;
        IData/*30:0*/ __VdlyVal__rstack__v34;
        VlUnpacked<QData/*43:0*/, 8> __PVT__rrqueue;
        VL_OUT8(__PVT__OUT_curIdx,4,0);
        CData/*3:0*/ __PVT__qindex_r;
        CData/*3:0*/ __PVT__qindexEnd_r;
        CData/*0:0*/ __PVT__recoveryInProgress;
        CData/*0:0*/ __PVT__queueEmpty;
        QData/*44:0*/ __PVT__postRecSave;
        IData/*30:0*/ __PVT__addrToPush;
        VlUnpacked<IData/*30:0*/, 32> rstack;
        VL_IN8(__PVT__clk,0,0);
    };
    struct {
        VL_IN8(__PVT__rst,0,0);
        VL_OUT8(__PVT__OUT_stall,0,0);
        VL_IN8(__PVT__IN_valid,0,0);
        VL_IN8(__PVT__IN_fetchID,4,0);
        VL_IN8(__PVT__IN_comFetchID,4,0);
        VL_IN8(__PVT__IN_recoveryIdx,4,0);
        VL_IN(__PVT__IN_lastPC,30,0);
        VL_OUT(__PVT__OUT_lateRetAddr,30,0);
        VL_IN64(__PVT__IN_branch,40,0);
        VL_IN64(__PVT__IN_mispr,48,0);
        VL_IN64(__PVT__IN_returnUpd,36,0);
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_ReturnStack(VTop__Syms* symsp, const char* v__name);
    ~VTop_ReturnStack();
    VL_UNCOPYABLE(VTop_ReturnStack);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
