// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_IFETCH_H_
#define VERILATED_VTOP_IFETCH_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"
class VTop_BranchPredictor__N3;
class VTop_IFetchPipeline;
class VTop_RegFile__W23_S20_N3_NB1;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_IFetch final : public VerilatedModule {
  public:
    // CELLS
    VTop_BranchPredictor__N3* bp;
    VTop_IFetchPipeline* ifp;
    VTop_RegFile__W23_S20_N3_NB1* pcFile;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__ifp__IN_mispr;
    CData/*0:0*/ waitForInterrupt;
    CData/*0:0*/ ifetchEn;
    QData/*48:0*/ __PVT__BP_mispr;
    CData/*0:0*/ __Vdly__waitForInterrupt;
    VlWide<4>/*119:0*/ __PVT__ifetchOp;
    VL_INW(__PVT__IN_btUpdates[2],75,0,3);
    VlUnpacked<VlWide<3>/*75:0*/, 3> __Vcellinp__bp__IN_btUpdates;
    CData/*0:0*/ __PVT__unnamedblk1__DOT__wfiDone;
    SData/*11:0*/ __PVT__unnamedblk1__DOT__wfiCount_next;
    VL_OUT64(__PVT__OUT_pcReadData[2],34,0);
    VL_OUTW(__PVT__OUT_instrs[4],109,0,4);
    CData/*5:0*/ __PVT__sharedReq;
    CData/*0:0*/ __PVT__issuedInterrupt;
    CData/*0:0*/ __PVT__resetWait;
    SData/*11:0*/ __PVT__wfiCount;
    SData/*11:0*/ __Vdly__wfiCount;
    VL_IN8(__PVT__IN_pcRead[2],5,0);
    QData/*40:0*/ predBr;
    CData/*4:0*/ BPF_writeAddr;
    CData/*4:0*/ PCF_writeAddr;
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__IN_en,0,0);
    VL_IN8(__PVT__IN_interruptPending,0,0);
    VL_IN8(__PVT__IN_MEM_busy,0,0);
    VL_IN8(__PVT__IN_ROB_curFetchID,4,0);
    VL_IN8(__PVT__IN_clearICache,0,0);
    VL_IN8(__PVT__IN_flushTLB,0,0);
    VL_IN8(__PVT__IN_pcReadTH,6,0);
    VL_IN8(__PVT__IN_ready,0,0);
    VL_IN16(__PVT__IN_decBranch,9,0);
    VL_IN16(__PVT__IN_bpUpdate,9,0);
    VL_IN(__PVT__IN_vmem,30,0);
    VL_INW(__PVT__IN_branch,73,0,3);
    VL_OUT64(__PVT__OUT_pcReadDataTH,34,0);
    VL_OUT64(__PVT__OUT_pw,54,0);
    VL_IN64(__PVT__IN_pw,52,0);
    VL_OUTW(__PVT__OUT_memc,224,0,8);
    VL_INW(__PVT__IN_memc,558,0,18);

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_IFetch(VTop__Syms* symsp, const char* v__name);
    ~VTop_IFetch();
    VL_UNCOPYABLE(VTop_IFetch);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
