// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTop__pch.h"
#include "VTop.h"
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

void VTop__Syms::__Vserialize(VerilatedSerialize& os) {
    // Internal state
    os << __Vm_didInit;
    // Module instance state
    TOP.__Vserialize(os);
    TOP__Top.__Vserialize(os);
    TOP__Top__extMem.__Vserialize(os);
    TOP__Top__soc.__Vserialize(os);
    TOP__Top__soc__IF_cache.__Vserialize(os);
    TOP__Top__soc__IF_ct.__Vserialize(os);
    TOP__Top__soc__IF_icache.__Vserialize(os);
    TOP__Top__soc__IF_ict.__Vserialize(os);
    TOP__Top__soc__IF_mmio.__Vserialize(os);
    TOP__Top__soc__core.__Vserialize(os);
    TOP__Top__soc__core__ifetch.__Vserialize(os);
    TOP__Top__soc__core__ifetch__bp.__Vserialize(os);
    TOP__Top__soc__core__ifetch__bp__bpFile.__Vserialize(os);
    TOP__Top__soc__core__ifetch__bp__retStack.__Vserialize(os);
    TOP__Top__soc__core__ifetch__ifp.__Vserialize(os);
    TOP__Top__soc__core__ifetch__pcFile.__Vserialize(os);
    TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__Vserialize(os);
    TOP__Top__soc__core__rf.__Vserialize(os);
    TOP__Top__soc__core__rn.__Vserialize(os);
    TOP__Top__soc__core__rn__rt.__Vserialize(os);
    TOP__Top__soc__core__rn__tb.__Vserialize(os);
    TOP__Top__soc__core__rob.__Vserialize(os);
    TOP__Top__soc__core__sq.__Vserialize(os);
    TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__Vserialize(os);
    TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__Vserialize(os);
    TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__Vserialize(os);
    TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__Vserialize(os);
    TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__Vserialize(os);
    TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt.__Vserialize(os);
    TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__Vserialize(os);
    TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt.__Vserialize(os);
    TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__Vserialize(os);
    TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt.__Vserialize(os);
    TOP__Top__soc__icache.__Vserialize(os);
    TOP__Top__soc__ictable.__Vserialize(os);
}
void VTop__Syms::__Vdeserialize(VerilatedDeserialize& os) {
    // Internal state
    os >> __Vm_didInit;
    // Module instance state
    TOP.__Vdeserialize(os);
    TOP__Top.__Vdeserialize(os);
    TOP__Top__extMem.__Vdeserialize(os);
    TOP__Top__soc.__Vdeserialize(os);
    TOP__Top__soc__IF_cache.__Vdeserialize(os);
    TOP__Top__soc__IF_ct.__Vdeserialize(os);
    TOP__Top__soc__IF_icache.__Vdeserialize(os);
    TOP__Top__soc__IF_ict.__Vdeserialize(os);
    TOP__Top__soc__IF_mmio.__Vdeserialize(os);
    TOP__Top__soc__core.__Vdeserialize(os);
    TOP__Top__soc__core__ifetch.__Vdeserialize(os);
    TOP__Top__soc__core__ifetch__bp.__Vdeserialize(os);
    TOP__Top__soc__core__ifetch__bp__bpFile.__Vdeserialize(os);
    TOP__Top__soc__core__ifetch__bp__retStack.__Vdeserialize(os);
    TOP__Top__soc__core__ifetch__ifp.__Vdeserialize(os);
    TOP__Top__soc__core__ifetch__pcFile.__Vdeserialize(os);
    TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__Vdeserialize(os);
    TOP__Top__soc__core__rf.__Vdeserialize(os);
    TOP__Top__soc__core__rn.__Vdeserialize(os);
    TOP__Top__soc__core__rn__rt.__Vdeserialize(os);
    TOP__Top__soc__core__rn__tb.__Vdeserialize(os);
    TOP__Top__soc__core__rob.__Vdeserialize(os);
    TOP__Top__soc__core__sq.__Vdeserialize(os);
    TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__Vdeserialize(os);
    TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__Vdeserialize(os);
    TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__Vdeserialize(os);
    TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__Vdeserialize(os);
    TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__Vdeserialize(os);
    TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt.__Vdeserialize(os);
    TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__Vdeserialize(os);
    TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt.__Vdeserialize(os);
    TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__Vdeserialize(os);
    TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt.__Vdeserialize(os);
    TOP__Top__soc__icache.__Vdeserialize(os);
    TOP__Top__soc__ictable.__Vdeserialize(os);
}

// FUNCTIONS
VTop__Syms::~VTop__Syms()
{
}

VTop__Syms::VTop__Syms(VerilatedContext* contextp, const char* namep, VTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_threadPoolp{static_cast<VlThreadPool*>(contextp->threadPoolp())}
    // Setup module instances
    , TOP{this, namep}
    , TOP__Top{this, Verilated::catName(namep, "Top")}
    , TOP__Top__extMem{this, Verilated::catName(namep, "Top.extMem")}
    , TOP__Top__soc{this, Verilated::catName(namep, "Top.soc")}
    , TOP__Top__soc__IF_cache{this, Verilated::catName(namep, "Top.soc.IF_cache")}
    , TOP__Top__soc__IF_ct{this, Verilated::catName(namep, "Top.soc.IF_ct")}
    , TOP__Top__soc__IF_icache{this, Verilated::catName(namep, "Top.soc.IF_icache")}
    , TOP__Top__soc__IF_ict{this, Verilated::catName(namep, "Top.soc.IF_ict")}
    , TOP__Top__soc__IF_mmio{this, Verilated::catName(namep, "Top.soc.IF_mmio")}
    , TOP__Top__soc__core{this, Verilated::catName(namep, "Top.soc.core")}
    , TOP__Top__soc__core__ifetch{this, Verilated::catName(namep, "Top.soc.core.ifetch")}
    , TOP__Top__soc__core__ifetch__bp{this, Verilated::catName(namep, "Top.soc.core.ifetch.bp")}
    , TOP__Top__soc__core__ifetch__bp__bpFile{this, Verilated::catName(namep, "Top.soc.core.ifetch.bp.bpFile")}
    , TOP__Top__soc__core__ifetch__bp__retStack{this, Verilated::catName(namep, "Top.soc.core.ifetch.bp.retStack")}
    , TOP__Top__soc__core__ifetch__ifp{this, Verilated::catName(namep, "Top.soc.core.ifetch.ifp")}
    , TOP__Top__soc__core__ifetch__pcFile{this, Verilated::catName(namep, "Top.soc.core.ifetch.pcFile")}
    , TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr{this, Verilated::catName(namep, "Top.soc.core.intPortsGen[0].genblk7.csr")}
    , TOP__Top__soc__core__rf{this, Verilated::catName(namep, "Top.soc.core.rf")}
    , TOP__Top__soc__core__rn{this, Verilated::catName(namep, "Top.soc.core.rn")}
    , TOP__Top__soc__core__rn__rt{this, Verilated::catName(namep, "Top.soc.core.rn.rt")}
    , TOP__Top__soc__core__rn__tb{this, Verilated::catName(namep, "Top.soc.core.rn.tb")}
    , TOP__Top__soc__core__rob{this, Verilated::catName(namep, "Top.soc.core.rob")}
    , TOP__Top__soc__core__sq{this, Verilated::catName(namep, "Top.soc.core.sq")}
    , TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache{this, Verilated::catName(namep, "Top.soc.genblk1[0].dcache")}
    , TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache{this, Verilated::catName(namep, "Top.soc.genblk1[1].dcache")}
    , TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache{this, Verilated::catName(namep, "Top.soc.genblk1[2].dcache")}
    , TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache{this, Verilated::catName(namep, "Top.soc.genblk1[3].dcache")}
    , TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable{this, Verilated::catName(namep, "Top.soc.genblk3[0].dctable")}
    , TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt{this, Verilated::catName(namep, "Top.soc.genblk3[0].dctableCnt")}
    , TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable{this, Verilated::catName(namep, "Top.soc.genblk3[1].dctable")}
    , TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt{this, Verilated::catName(namep, "Top.soc.genblk3[1].dctableCnt")}
    , TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable{this, Verilated::catName(namep, "Top.soc.genblk3[2].dctable")}
    , TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt{this, Verilated::catName(namep, "Top.soc.genblk3[2].dctableCnt")}
    , TOP__Top__soc__icache{this, Verilated::catName(namep, "Top.soc.icache")}
    , TOP__Top__soc__ictable{this, Verilated::catName(namep, "Top.soc.ictable")}
{
        // Check resources
        Verilated::stackCheck(11941);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.Top = &TOP__Top;
    TOP__Top.extMem = &TOP__Top__extMem;
    TOP__Top.soc = &TOP__Top__soc;
    TOP__Top__soc.__PVT__IF_cache = &TOP__Top__soc__IF_cache;
    TOP__Top__soc.__PVT__IF_ct = &TOP__Top__soc__IF_ct;
    TOP__Top__soc.__PVT__IF_icache = &TOP__Top__soc__IF_icache;
    TOP__Top__soc.__PVT__IF_ict = &TOP__Top__soc__IF_ict;
    TOP__Top__soc.__PVT__IF_mmio = &TOP__Top__soc__IF_mmio;
    TOP__Top__soc.core = &TOP__Top__soc__core;
    TOP__Top__soc__core.ifetch = &TOP__Top__soc__core__ifetch;
    TOP__Top__soc__core__ifetch.bp = &TOP__Top__soc__core__ifetch__bp;
    TOP__Top__soc__core__ifetch__bp.bpFile = &TOP__Top__soc__core__ifetch__bp__bpFile;
    TOP__Top__soc__core__ifetch__bp.retStack = &TOP__Top__soc__core__ifetch__bp__retStack;
    TOP__Top__soc__core__ifetch.ifp = &TOP__Top__soc__core__ifetch__ifp;
    TOP__Top__soc__core__ifetch.pcFile = &TOP__Top__soc__core__ifetch__pcFile;
    TOP__Top__soc__core.intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr = &TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr;
    TOP__Top__soc__core.rf = &TOP__Top__soc__core__rf;
    TOP__Top__soc__core.rn = &TOP__Top__soc__core__rn;
    TOP__Top__soc__core__rn.rt = &TOP__Top__soc__core__rn__rt;
    TOP__Top__soc__core__rn.tb = &TOP__Top__soc__core__rn__tb;
    TOP__Top__soc__core.rob = &TOP__Top__soc__core__rob;
    TOP__Top__soc__core.sq = &TOP__Top__soc__core__sq;
    TOP__Top__soc.genblk1__BRA__0__KET____DOT__dcache = &TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache;
    TOP__Top__soc.genblk1__BRA__1__KET____DOT__dcache = &TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache;
    TOP__Top__soc.genblk1__BRA__2__KET____DOT__dcache = &TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache;
    TOP__Top__soc.genblk1__BRA__3__KET____DOT__dcache = &TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache;
    TOP__Top__soc.genblk3__BRA__0__KET____DOT__dctable = &TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable;
    TOP__Top__soc.genblk3__BRA__0__KET____DOT__dctableCnt = &TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt;
    TOP__Top__soc.genblk3__BRA__1__KET____DOT__dctable = &TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable;
    TOP__Top__soc.genblk3__BRA__1__KET____DOT__dctableCnt = &TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt;
    TOP__Top__soc.genblk3__BRA__2__KET____DOT__dctable = &TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable;
    TOP__Top__soc.genblk3__BRA__2__KET____DOT__dctableCnt = &TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt;
    TOP__Top__soc.icache = &TOP__Top__soc__icache;
    TOP__Top__soc.ictable = &TOP__Top__soc__ictable;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Top.__Vconfigure(true);
    TOP__Top__extMem.__Vconfigure(true);
    TOP__Top__soc.__Vconfigure(true);
    TOP__Top__soc__IF_cache.__Vconfigure(true);
    TOP__Top__soc__IF_ct.__Vconfigure(true);
    TOP__Top__soc__IF_icache.__Vconfigure(true);
    TOP__Top__soc__IF_ict.__Vconfigure(true);
    TOP__Top__soc__IF_mmio.__Vconfigure(true);
    TOP__Top__soc__core.__Vconfigure(true);
    TOP__Top__soc__core__ifetch.__Vconfigure(true);
    TOP__Top__soc__core__ifetch__bp.__Vconfigure(true);
    TOP__Top__soc__core__ifetch__bp__bpFile.__Vconfigure(true);
    TOP__Top__soc__core__ifetch__bp__retStack.__Vconfigure(true);
    TOP__Top__soc__core__ifetch__ifp.__Vconfigure(true);
    TOP__Top__soc__core__ifetch__pcFile.__Vconfigure(true);
    TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.__Vconfigure(true);
    TOP__Top__soc__core__rf.__Vconfigure(true);
    TOP__Top__soc__core__rn.__Vconfigure(true);
    TOP__Top__soc__core__rn__rt.__Vconfigure(true);
    TOP__Top__soc__core__rn__tb.__Vconfigure(true);
    TOP__Top__soc__core__rob.__Vconfigure(true);
    TOP__Top__soc__core__sq.__Vconfigure(true);
    TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.__Vconfigure(true);
    TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.__Vconfigure(false);
    TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.__Vconfigure(false);
    TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.__Vconfigure(false);
    TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.__Vconfigure(true);
    TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt.__Vconfigure(true);
    TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.__Vconfigure(false);
    TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt.__Vconfigure(false);
    TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.__Vconfigure(false);
    TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt.__Vconfigure(false);
    TOP__Top__soc__icache.__Vconfigure(true);
    TOP__Top__soc__ictable.__Vconfigure(false);
    // Setup scopes
    __Vscope_Top__extMem.configure(this, name(), "Top.extMem", "extMem", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__extMem__GetCurAddr.configure(this, name(), "Top.extMem.GetCurAddr", "GetCurAddr", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__extMem__unnamedblk2.configure(this, name(), "Top.extMem.unnamedblk2", "unnamedblk2", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__extMem__unnamedblk6__unnamedblk7.configure(this, name(), "Top.extMem.unnamedblk6.unnamedblk7", "unnamedblk7", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc.configure(this, name(), "Top.soc", "soc", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core.configure(this, name(), "Top.soc.core", "core", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__aguPortsGen__BRA__0__KET____agu__tmq.configure(this, name(), "Top.soc.core.aguPortsGen[0].agu.tmq", "tmq", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__aguPortsGen__BRA__1__KET____agu__tmq.configure(this, name(), "Top.soc.core.aguPortsGen[1].agu.tmq", "tmq", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__cacheLineManager__prefetchExec__ohEnc.configure(this, name(), "Top.soc.core.cacheLineManager.prefetchExec.ohEnc", "ohEnc", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__cacheLineManager__prefetchExec__ohEnc__genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.cacheLineManager.prefetchExec.ohEnc.genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__idec.configure(this, name(), "Top.soc.core.idec", "idec", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__idec__unnamedblk1.configure(this, name(), "Top.soc.core.idec.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch.configure(this, name(), "Top.soc.core.ifetch", "ifetch", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__bpFile.configure(this, name(), "Top.soc.core.ifetch.bp.bpFile", "bpFile", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__btb.configure(this, name(), "Top.soc.core.ifetch.bp.btb", "btb", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__btb__unnamedblk1.configure(this, name(), "Top.soc.core.ifetch.bp.btb.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__retStack.configure(this, name(), "Top.soc.core.ifetch.bp.retStack", "retStack", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__1__KET____tage.configure(this, name(), "Top.soc.core.ifetch.bp.tagePredictor.genblk1[1].tage", "tage", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__2__KET____tage.configure(this, name(), "Top.soc.core.ifetch.bp.tagePredictor.genblk1[2].tage", "tage", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__3__KET____tage.configure(this, name(), "Top.soc.core.ifetch.bp.tagePredictor.genblk1[3].tage", "tage", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__4__KET____tage.configure(this, name(), "Top.soc.core.ifetch.bp.tagePredictor.genblk1[4].tage", "tage", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__bp__tagePredictor__genblk1__BRA__5__KET____tage.configure(this, name(), "Top.soc.core.ifetch.bp.tagePredictor.genblk1[5].tage", "tage", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__ifp.configure(this, name(), "Top.soc.core.ifetch.ifp", "ifp", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__ifp__assocEnc.configure(this, name(), "Top.soc.core.ifetch.ifp.assocEnc", "assocEnc", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__ifp__assocEnc__genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ifetch.ifp.assocEnc.genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__ifp__branchHandler.configure(this, name(), "Top.soc.core.ifetch.ifp.branchHandler", "branchHandler", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__ifp__branchHandler__unnamedblk11__unnamedblk12.configure(this, name(), "Top.soc.core.ifetch.ifp.branchHandler.unnamedblk11.unnamedblk12", "unnamedblk12", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__ifp__branchHandler__unnamedblk9__unnamedblk10.configure(this, name(), "Top.soc.core.ifetch.ifp.branchHandler.unnamedblk9.unnamedblk10", "unnamedblk10", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ifetch__pcFile.configure(this, name(), "Top.soc.core.ifetch.pcFile", "pcFile", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__intPortsGen__BRA__0__KET____genblk7__csr.configure(this, name(), "Top.soc.core.intPortsGen[0].genblk7.csr", "csr", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__0__KET__.configure(this, name(), "Top.soc.core.ld.lookupEnc[0]", "lookupEnc[0]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__0__KET____genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ld.lookupEnc[0].genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__1__KET__.configure(this, name(), "Top.soc.core.ld.lookupEnc[1]", "lookupEnc[1]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__1__KET____genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ld.lookupEnc[1].genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__2__KET__.configure(this, name(), "Top.soc.core.ld.lookupEnc[2]", "lookupEnc[2]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__2__KET____genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ld.lookupEnc[2].genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__3__KET__.configure(this, name(), "Top.soc.core.ld.lookupEnc[3]", "lookupEnc[3]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__3__KET____genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ld.lookupEnc[3].genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__4__KET__.configure(this, name(), "Top.soc.core.ld.lookupEnc[4]", "lookupEnc[4]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__4__KET____genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ld.lookupEnc[4].genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__5__KET__.configure(this, name(), "Top.soc.core.ld.lookupEnc[5]", "lookupEnc[5]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__5__KET____genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ld.lookupEnc[5].genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__6__KET__.configure(this, name(), "Top.soc.core.ld.lookupEnc[6]", "lookupEnc[6]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__6__KET____genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ld.lookupEnc[6].genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__7__KET__.configure(this, name(), "Top.soc.core.ld.lookupEnc[7]", "lookupEnc[7]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__ld__lookupEnc__BRA__7__KET____genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.ld.lookupEnc[7].genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu.configure(this, name(), "Top.soc.core.lsu", "lsu", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__bypassLSU.configure(this, name(), "Top.soc.core.lsu.bypassLSU", "bypassLSU", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__bypassLSU__unnamedblk1.configure(this, name(), "Top.soc.core.lsu.bypassLSU.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__genblk2__BRA__0__KET____ohEncLd.configure(this, name(), "Top.soc.core.lsu.genblk2[0].ohEncLd", "ohEncLd", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__genblk2__BRA__0__KET____ohEncLd__genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.lsu.genblk2[0].ohEncLd.genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__genblk2__BRA__1__KET____ohEncLd.configure(this, name(), "Top.soc.core.lsu.genblk2[1].ohEncLd", "ohEncLd", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__genblk2__BRA__1__KET____ohEncLd__genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.lsu.genblk2[1].ohEncLd.genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__loadResBuf__BRA__0__KET__.configure(this, name(), "Top.soc.core.lsu.loadResBuf[0]", "loadResBuf[0]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__loadResBuf__BRA__1__KET__.configure(this, name(), "Top.soc.core.lsu.loadResBuf[1]", "loadResBuf[1]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__ohEnc.configure(this, name(), "Top.soc.core.lsu.ohEnc", "ohEnc", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__ohEncSt.configure(this, name(), "Top.soc.core.lsu.ohEncSt", "ohEncSt", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__ohEncSt__genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.lsu.ohEncSt.genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__ohEnc__genblk1__unnamedblk1.configure(this, name(), "Top.soc.core.lsu.ohEnc.genblk1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__unnamedblk11__unnamedblk12.configure(this, name(), "Top.soc.core.lsu.unnamedblk11.unnamedblk12", "unnamedblk12", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__lsu__unnamedblk28__unnamedblk29.configure(this, name(), "Top.soc.core.lsu.unnamedblk28.unnamedblk29", "unnamedblk29", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__rf.configure(this, name(), "Top.soc.core.rf", "rf", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__rn__rt.configure(this, name(), "Top.soc.core.rn.rt", "rt", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__rn__rt__unnamedblk8.configure(this, name(), "Top.soc.core.rn.rt.unnamedblk8", "unnamedblk8", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__rn__tb.configure(this, name(), "Top.soc.core.rn.tb", "tb", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__rn__tb__unnamedblk5.configure(this, name(), "Top.soc.core.rn.tb.unnamedblk5", "unnamedblk5", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__rob.configure(this, name(), "Top.soc.core.rob", "rob", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__rob__unnamedblk22__unnamedblk23.configure(this, name(), "Top.soc.core.rob.unnamedblk22.unnamedblk23", "unnamedblk23", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__sq.configure(this, name(), "Top.soc.core.sq", "sq", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__sq__unnamedblk28__unnamedblk33__unnamedblk34.configure(this, name(), "Top.soc.core.sq.unnamedblk28.unnamedblk33.unnamedblk34", "unnamedblk34", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__sq__unnamedblk28__unnamedblk36__unnamedblk37.configure(this, name(), "Top.soc.core.sq.unnamedblk28.unnamedblk36.unnamedblk37", "unnamedblk37", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__stDataLd.configure(this, name(), "Top.soc.core.stDataLd", "stDataLd", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__stDataLd__genblk1__BRA__0__KET__.configure(this, name(), "Top.soc.core.stDataLd.genblk1[0]", "genblk1[0]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__stDataLd__genblk1__BRA__1__KET__.configure(this, name(), "Top.soc.core.stDataLd.genblk1[1]", "genblk1[1]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__core__trapHandler.configure(this, name(), "Top.soc.core.trapHandler", "trapHandler", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk1__BRA__0__KET____dcache.configure(this, name(), "Top.soc.genblk1[0].dcache", "dcache", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk1__BRA__1__KET____dcache.configure(this, name(), "Top.soc.genblk1[1].dcache", "dcache", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk1__BRA__2__KET____dcache.configure(this, name(), "Top.soc.genblk1[2].dcache", "dcache", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk1__BRA__3__KET____dcache.configure(this, name(), "Top.soc.genblk1[3].dcache", "dcache", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk3__BRA__0__KET____dctable.configure(this, name(), "Top.soc.genblk3[0].dctable", "dctable", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk3__BRA__0__KET____dctableCnt.configure(this, name(), "Top.soc.genblk3[0].dctableCnt", "dctableCnt", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk3__BRA__1__KET____dctable.configure(this, name(), "Top.soc.genblk3[1].dctable", "dctable", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk3__BRA__1__KET____dctableCnt.configure(this, name(), "Top.soc.genblk3[1].dctableCnt", "dctableCnt", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk3__BRA__2__KET____dctable.configure(this, name(), "Top.soc.genblk3[2].dctable", "dctable", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__genblk3__BRA__2__KET____dctableCnt.configure(this, name(), "Top.soc.genblk3[2].dctableCnt", "dctableCnt", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__icache.configure(this, name(), "Top.soc.icache", "icache", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__ictable.configure(this, name(), "Top.soc.ictable", "ictable", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__memc.configure(this, name(), "Top.soc.memc", "memc", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Top__soc__memc__dcacheReadIF.configure(this, name(), "Top.soc.memc.dcacheReadIF", "dcacheReadIF", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_Top__extMem.varInsert(__Vfinal,"inputAvail", &(TOP__Top__extMem.inputAvail), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Top__extMem.varInsert(__Vfinal,"inputByte", &(TOP__Top__extMem.inputByte), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_Top__extMem.varInsert(__Vfinal,"mem", &(TOP__Top__extMem.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,16777215,0 ,127,0);
        __Vscope_Top__soc.varInsert(__Vfinal,"MemC_ctrl", &(TOP__Top__soc.MemC_ctrl), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,2,0 ,224,0);
        __Vscope_Top__soc.varInsert(__Vfinal,"MemC_stat", &(TOP__Top__soc.MemC_stat), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,558,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"CSR_trapControl", &(TOP__Top__soc__core.CSR_trapControl), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,133,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"DE_uop", &(TOP__Top__soc__core.DE_uop), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,3,0 ,79,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"IS_uop", &(TOP__Top__soc__core.IS_uop), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,4,0 ,108,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"LD_uop", &(TOP__Top__soc__core.LD_uop), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,4,0 ,182,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"PD_instrs", &(TOP__Top__soc__core.PD_instrs), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,3,0 ,109,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"RN_stall", &(TOP__Top__soc__core.RN_stall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"RN_uop", &(TOP__Top__soc__core.RN_uop), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,3,0 ,128,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"ROB_curSqN", &(TOP__Top__soc__core.ROB_curSqN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"ROB_perfcInfo", &(TOP__Top__soc__core.ROB_perfcInfo), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,12,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"ROB_trapUOp", &(TOP__Top__soc__core.ROB_trapUOp), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,47,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"branch", &(TOP__Top__soc__core.branch), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,73,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"comUOps", &(TOP__Top__soc__core.comUOps), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,3,0 ,22,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"flagUOps", &(TOP__Top__soc__core.flagUOps), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,6,0 ,19,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"frontendEn", &(TOP__Top__soc__core.frontendEn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"mispredFlush", &(TOP__Top__soc__core.mispredFlush), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"resultUOps", &(TOP__Top__soc__core.resultUOps), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1,1 ,4,0 ,40,0);
        __Vscope_Top__soc__core.varInsert(__Vfinal,"stall", &(TOP__Top__soc__core.stall), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,0 ,4,0);
        __Vscope_Top__soc__core__ifetch.varInsert(__Vfinal,"BPF_writeAddr", &(TOP__Top__soc__core__ifetch.BPF_writeAddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_Top__soc__core__ifetch.varInsert(__Vfinal,"PCF_writeAddr", &(TOP__Top__soc__core__ifetch.PCF_writeAddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_Top__soc__core__ifetch.varInsert(__Vfinal,"ifetchEn", &(TOP__Top__soc__core__ifetch.ifetchEn), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Top__soc__core__ifetch.varInsert(__Vfinal,"predBr", &(TOP__Top__soc__core__ifetch.predBr), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,40,0);
        __Vscope_Top__soc__core__ifetch.varInsert(__Vfinal,"waitForInterrupt", &(TOP__Top__soc__core__ifetch.waitForInterrupt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Top__soc__core__ifetch__bp__bpFile.varInsert(__Vfinal,"mem", &(TOP__Top__soc__core__ifetch__bp__bpFile.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,79,0);
        __Vscope_Top__soc__core__ifetch__bp__retStack.varInsert(__Vfinal,"rstack", &(TOP__Top__soc__core__ifetch__bp__retStack.rstack), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,30,0);
        __Vscope_Top__soc__core__ifetch__ifp.varInsert(__Vfinal,"fetch0", &(TOP__Top__soc__core__ifetch__ifp.fetch0), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,119,0);
        __Vscope_Top__soc__core__ifetch__ifp.varInsert(__Vfinal,"fetch1", &(TOP__Top__soc__core__ifetch__ifp.fetch1), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,119,0);
        __Vscope_Top__soc__core__ifetch__ifp.varInsert(__Vfinal,"fetchID", &(TOP__Top__soc__core__ifetch__ifp.fetchID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_Top__soc__core__ifetch__ifp.varInsert(__Vfinal,"packetRePred", &(TOP__Top__soc__core__ifetch__ifp.packetRePred), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,204,0);
        __Vscope_Top__soc__core__ifetch__pcFile.varInsert(__Vfinal,"mem", &(TOP__Top__soc__core__ifetch__pcFile.mem), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,34,0);
        __Vscope_Top__soc__core__intPortsGen__BRA__0__KET____genblk7__csr.varInsert(__Vfinal,"mcycle", &(TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.mcycle), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_Top__soc__core__intPortsGen__BRA__0__KET____genblk7__csr.varInsert(__Vfinal,"mhpmcounter", &(TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.mhpmcounter), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1,1 ,16,0 ,63,0);
        __Vscope_Top__soc__core__intPortsGen__BRA__0__KET____genblk7__csr.varInsert(__Vfinal,"minstret", &(TOP__Top__soc__core__intPortsGen__BRA__0__KET____DOT__genblk7__DOT__csr.minstret), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_Top__soc__core__rf.varInsert(__Vfinal,"mem", &(TOP__Top__soc__core__rf.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,31,0);
        __Vscope_Top__soc__core__rn__rt.varInsert(__Vfinal,"comTag", &(TOP__Top__soc__core__rn__rt.comTag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,6,0);
        __Vscope_Top__soc__core__rn__rt.varInsert(__Vfinal,"specTag", &(TOP__Top__soc__core__rn__rt.specTag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,31,0 ,6,0);
        __Vscope_Top__soc__core__rn__rt.varInsert(__Vfinal,"tagAvail", &(TOP__Top__soc__core__rn__rt.tagAvail), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_Top__soc__core__rn__tb.varInsert(__Vfinal,"free", &(TOP__Top__soc__core__rn__tb.free), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_Top__soc__core__rn__tb.varInsert(__Vfinal,"freeCom", &(TOP__Top__soc__core__rn__tb.freeCom), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,63,0);
        __Vscope_Top__soc__core__rob.varInsert(__Vfinal,"IN_interruptPending", &(TOP__Top__soc__core__rob.IN_interruptPending), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_Top__soc__core__sq.varInsert(__Vfinal,"baseIndex", &(TOP__Top__soc__core__sq.baseIndex), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_Top__soc__core__sq.varInsert(__Vfinal,"entries", &(TOP__Top__soc__core__sq.entries), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,15,0 ,67,0);
        __Vscope_Top__soc__core__sq.varInsert(__Vfinal,"entryReady_r", &(TOP__Top__soc__core__sq.entryReady_r), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,15,0);
        __Vscope_Top__soc__genblk1__BRA__0__KET____dcache.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk1__BRA__0__KET____DOT__dcache.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,511,0);
        __Vscope_Top__soc__genblk1__BRA__1__KET____dcache.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk1__BRA__1__KET____DOT__dcache.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,511,0);
        __Vscope_Top__soc__genblk1__BRA__2__KET____dcache.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk1__BRA__2__KET____DOT__dcache.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,511,0);
        __Vscope_Top__soc__genblk1__BRA__3__KET____dcache.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk1__BRA__3__KET____DOT__dcache.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,511,0);
        __Vscope_Top__soc__genblk3__BRA__0__KET____dctable.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctable.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,83,0);
        __Vscope_Top__soc__genblk3__BRA__0__KET____dctableCnt.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk3__BRA__0__KET____DOT__dctableCnt.mem), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,1,0);
        __Vscope_Top__soc__genblk3__BRA__1__KET____dctable.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctable.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,83,0);
        __Vscope_Top__soc__genblk3__BRA__1__KET____dctableCnt.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk3__BRA__1__KET____DOT__dctableCnt.mem), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,1,0);
        __Vscope_Top__soc__genblk3__BRA__2__KET____dctable.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctable.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,83,0);
        __Vscope_Top__soc__genblk3__BRA__2__KET____dctableCnt.varInsert(__Vfinal,"mem", &(TOP__Top__soc__genblk3__BRA__2__KET____DOT__dctableCnt.mem), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,1,0);
        __Vscope_Top__soc__icache.varInsert(__Vfinal,"mem", &(TOP__Top__soc__icache.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,255,0 ,511,0);
        __Vscope_Top__soc__ictable.varInsert(__Vfinal,"mem", &(TOP__Top__soc__ictable.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1,1 ,63,0 ,83,0);
    }
}
