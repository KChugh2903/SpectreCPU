// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTop.h"

// INCLUDE MODULE CLASSES
#include "VTop___024root.h"
#include "VTop_Top.h"
#include "VTop___024unit.h"
#include "VTop_SoC.h"
#include "VTop_ExternalAXISim.h"
#include "VTop_Core.h"
#include "VTop_MemRTL__W200_N40.h"
#include "VTop_MemRTL1RW__W54_N40_WB15.h"
#include "VTop_MemRTL1RW__W2_N40_WB2.h"
#include "VTop_MemRTL__W200_N100_WB80.h"
#include "VTop_IFetch.h"
#include "VTop_ROB.h"
#include "VTop_StoreQueue.h"
#include "VTop_CSR.h"
#include "VTop_Rename__WC5.h"
#include "VTop_IF_Cache.h"
#include "VTop_IF_CTable.h"
#include "VTop_IF_MMIO.h"
#include "VTop_TagBuffer.h"
#include "VTop_IFetchPipeline.h"
#include "VTop_BranchPredictor__N3.h"
#include "VTop_RenameTable__ND5.h"
#include "VTop_IF_ICTable.h"
#include "VTop_IF_ICache.h"
#include "VTop_ReturnStack.h"
#include "VTop_RegFile__NB5_A1.h"
#include "VTop_RegFile__W23_S20_N3_NB1.h"
#include "VTop_RegFile__W50_S20_N1_NB1.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MULTI-THREADING
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle__ico = false;
    bool __Vm_even_cycle__act = false;
    bool __Vm_even_cycle__nba = false;

    // MODULE INSTANCE STATE
    VTop___024root                 TOP;
    VTop_Top                       TOP__Top;
    VTop_ExternalAXISim            TOP__Top__extMem;
    VTop_SoC                       TOP__Top__soc;
    VTop_IF_Cache                  TOP__Top__soc__IF_cache;
    VTop_IF_CTable                 TOP__Top__soc__IF_ct;
    VTop_IF_ICache                 TOP__Top__soc__IF_icache;
    VTop_IF_ICTable                TOP__Top__soc__IF_ict;
    VTop_IF_MMIO                   TOP__Top__soc__IF_mmio;
    VTop_Core                      TOP__Top__soc__core;
    VTop_IFetch                    TOP__Top__soc__core__ifetch;
    VTop_BranchPredictor__N3       TOP__Top__soc__core__ifetch__bp;
    VTop_RegFile__W50_S20_N1_NB1   TOP__Top__soc__core__ifetch__bp__bpFile;
    VTop_ReturnStack               TOP__Top__soc__core__ifetch__bp__retStack;
    VTop_IFetchPipeline            TOP__Top__soc__core__ifetch__ifp;
    VTop_RegFile__W23_S20_N3_NB1   TOP__Top__soc__core__ifetch__pcFile;
    VTop_CSR                       TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr;
    VTop_RegFile__NB5_A1           TOP__Top__soc__core__rf;
    VTop_Rename__WC5               TOP__Top__soc__core__rn;
    VTop_RenameTable__ND5          TOP__Top__soc__core__rn__rt;
    VTop_TagBuffer                 TOP__Top__soc__core__rn__tb;
    VTop_ROB                       TOP__Top__soc__core__rob;
    VTop_StoreQueue                TOP__Top__soc__core__sq;
    VTop_MemRTL__W200_N40          TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache;
    VTop_MemRTL__W200_N40          TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache;
    VTop_MemRTL__W200_N40          TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache;
    VTop_MemRTL__W200_N40          TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache;
    VTop_MemRTL1RW__W54_N40_WB15   TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable;
    VTop_MemRTL1RW__W2_N40_WB2     TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt;
    VTop_MemRTL1RW__W54_N40_WB15   TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable;
    VTop_MemRTL1RW__W2_N40_WB2     TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt;
    VTop_MemRTL1RW__W54_N40_WB15   TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable;
    VTop_MemRTL1RW__W2_N40_WB2     TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt;
    VTop_MemRTL__W200_N100_WB80    TOP__Top__soc__icache;
    VTop_MemRTL1RW__W54_N40_WB15   TOP__Top__soc__ictable;

    // SCOPE NAMES
    VerilatedScope __Vscope_Top__extMem;
    VerilatedScope __Vscope_Top__extMem__GetCurAddr;
    VerilatedScope __Vscope_Top__extMem__unnamedblk2;
    VerilatedScope __Vscope_Top__extMem__unnamedblk6__unnamedblk7;
    VerilatedScope __Vscope_Top__soc;
    VerilatedScope __Vscope_Top__soc__core;
    VerilatedScope __Vscope_Top__soc__core__aguPortsGen__BRA__0__KET____agu__tmq;
    VerilatedScope __Vscope_Top__soc__core__aguPortsGen__BRA__1__KET____agu__tmq;
    VerilatedScope __Vscope_Top__soc__core__cacheLineManager__prefetchExec__ohEnc;
    VerilatedScope __Vscope_Top__soc__core__cacheLineManager__prefetchExec__ohEnc__genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__idec;
    VerilatedScope __Vscope_Top__soc__core__idec__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ifetch;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__bpFile;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__btb;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__btb__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__retStack;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__1__KET____tage;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__2__KET____tage;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__3__KET____tage;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__4__KET____tage;
    VerilatedScope __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__5__KET____tage;
    VerilatedScope __Vscope_Top__soc__core__ifetch__ifp;
    VerilatedScope __Vscope_Top__soc__core__ifetch__ifp__assocEnc;
    VerilatedScope __Vscope_Top__soc__core__ifetch__ifp__assocEnc__genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ifetch__ifp__branchHandler;
    VerilatedScope __Vscope_Top__soc__core__ifetch__ifp__branchHandler__unnamedblk11__unnamedblk12;
    VerilatedScope __Vscope_Top__soc__core__ifetch__ifp__branchHandler__unnamedblk9__unnamedblk10;
    VerilatedScope __Vscope_Top__soc__core__ifetch__pcFile;
    VerilatedScope __Vscope_Top__soc__core__intPortsGen__BRA__0__KET____genblk7__csr;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__0__KET__;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__0__KET____genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__1__KET__;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__1__KET____genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__2__KET__;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__2__KET____genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__3__KET__;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__3__KET____genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__4__KET__;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__4__KET____genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__5__KET__;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__5__KET____genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__6__KET__;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__6__KET____genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__7__KET__;
    VerilatedScope __Vscope_Top__soc__core__ld__lookupEnc__BRA__7__KET____genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__lsu;
    VerilatedScope __Vscope_Top__soc__core__lsu__bypassLSU;
    VerilatedScope __Vscope_Top__soc__core__lsu__bypassLSU__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__lsu__genblk2__BRA__0__KET____ohEncLd;
    VerilatedScope __Vscope_Top__soc__core__lsu__genblk2__BRA__0__KET____ohEncLd__genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__lsu__genblk2__BRA__1__KET____ohEncLd;
    VerilatedScope __Vscope_Top__soc__core__lsu__genblk2__BRA__1__KET____ohEncLd__genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__lsu__loadResBuf__BRA__0__KET__;
    VerilatedScope __Vscope_Top__soc__core__lsu__loadResBuf__BRA__1__KET__;
    VerilatedScope __Vscope_Top__soc__core__lsu__ohEnc;
    VerilatedScope __Vscope_Top__soc__core__lsu__ohEncSt;
    VerilatedScope __Vscope_Top__soc__core__lsu__ohEncSt__genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__lsu__ohEnc__genblk1__unnamedblk1;
    VerilatedScope __Vscope_Top__soc__core__lsu__unnamedblk11__unnamedblk12;
    VerilatedScope __Vscope_Top__soc__core__lsu__unnamedblk28__unnamedblk29;
    VerilatedScope __Vscope_Top__soc__core__rf;
    VerilatedScope __Vscope_Top__soc__core__rn__rt;
    VerilatedScope __Vscope_Top__soc__core__rn__rt__unnamedblk8;
    VerilatedScope __Vscope_Top__soc__core__rn__tb;
    VerilatedScope __Vscope_Top__soc__core__rn__tb__unnamedblk5;
    VerilatedScope __Vscope_Top__soc__core__rob;
    VerilatedScope __Vscope_Top__soc__core__rob__unnamedblk22__unnamedblk23;
    VerilatedScope __Vscope_Top__soc__core__sq;
    VerilatedScope __Vscope_Top__soc__core__sq__unnamedblk28__unnamedblk33__unnamedblk34;
    VerilatedScope __Vscope_Top__soc__core__sq__unnamedblk28__unnamedblk36__unnamedblk37;
    VerilatedScope __Vscope_Top__soc__core__stDataLd;
    VerilatedScope __Vscope_Top__soc__core__stDataLd__genblk1__BRA__0__KET__;
    VerilatedScope __Vscope_Top__soc__core__stDataLd__genblk1__BRA__1__KET__;
    VerilatedScope __Vscope_Top__soc__core__trapHandler;
    VerilatedScope __Vscope_Top__soc__genblk1__BRA__0__KET____dcache;
    VerilatedScope __Vscope_Top__soc__genblk1__BRA__1__KET____dcache;
    VerilatedScope __Vscope_Top__soc__genblk1__BRA__2__KET____dcache;
    VerilatedScope __Vscope_Top__soc__genblk1__BRA__3__KET____dcache;
    VerilatedScope __Vscope_Top__soc__genblk3__BRA__0__KET____dctable;
    VerilatedScope __Vscope_Top__soc__genblk3__BRA__0__KET____dctableCnt;
    VerilatedScope __Vscope_Top__soc__genblk3__BRA__1__KET____dctable;
    VerilatedScope __Vscope_Top__soc__genblk3__BRA__1__KET____dctableCnt;
    VerilatedScope __Vscope_Top__soc__genblk3__BRA__2__KET____dctable;
    VerilatedScope __Vscope_Top__soc__genblk3__BRA__2__KET____dctableCnt;
    VerilatedScope __Vscope_Top__soc__icache;
    VerilatedScope __Vscope_Top__soc__ictable;
    VerilatedScope __Vscope_Top__soc__memc;
    VerilatedScope __Vscope_Top__soc__memc__dcacheReadIF;

    // CONSTRUCTORS
    VTop__Syms(VerilatedContext* contextp, const char* namep, VTop* modelp);
    ~VTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};

#endif  // guard
