// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_EXTERNALAXISIM_H_
#define VERILATED_VTOP_EXTERNALAXISIM_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_ExternalAXISim final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ __PVT__fifoAWInsIdx;
        CData/*0:0*/ __PVT__buf_wvalid;
        CData/*3:0*/ __PVT__writeDone;
        CData/*1:0*/ __PVT__writeIdx;
        CData/*1:0*/ __VdlyDim0__fifoAWValid__v0;
        CData/*0:0*/ __VdlySet__fifoAWValid__v0;
        CData/*1:0*/ __VdlyVal__fifoAW__v0;
        CData/*1:0*/ __VdlyDim0__fifoAW__v0;
        CData/*1:0*/ __VdlyVal__fifoAW__v1;
        CData/*0:0*/ __VdlySet__fifoAW__v1;
        CData/*0:0*/ __VdlyVal__fifoAWValid__v1;
        CData/*1:0*/ __VdlyVal__fifoAW__v2;
        CData/*0:0*/ __VdlySet__fifoAW__v2;
        CData/*0:0*/ __VdlyVal__fifoAWValid__v2;
        CData/*0:0*/ __VdlySet__fifoAWValid__v2;
        CData/*1:0*/ __VdlyVal__fifoAW__v3;
        CData/*0:0*/ __VdlySet__fifoAW__v3;
        CData/*0:0*/ __VdlyVal__fifoAWValid__v3;
        CData/*0:0*/ __VdlySet__fifoAWValid__v3;
        CData/*1:0*/ __VdlyDim0__fifoAWValid__v5;
        CData/*0:0*/ __VdlySet__fifoAWValid__v5;
        CData/*1:0*/ __VdlyVal__fifoAW__v5;
        CData/*1:0*/ __VdlyDim0__fifoAW__v5;
        VlWide<5>/*144:0*/ __Vcellout__wFIFO__OUT_data;
        VlUnpacked<CData/*1:0*/, 4> __PVT__fifoAW;
        VlUnpacked<CData/*0:0*/, 4> __PVT__fifoAWValid;
        CData/*0:0*/ __PVT__writeIdxValid;
        VL_OUT8(__PVT__s_axi_wready,0,0);
        CData/*0:0*/ __PVT__wFIFO__DOT__fullCond;
        CData/*0:0*/ __PVT__wFIFO__DOT__equal;
        CData/*0:0*/ __PVT__wFIFO__DOT__empty;
        CData/*0:0*/ __PVT__wFIFO__DOT__outputReady;
        CData/*0:0*/ __PVT__wFIFO__DOT__doExtract;
        CData/*0:0*/ __PVT__wFIFO__DOT__doInsert;
        CData/*0:0*/ __PVT__wFIFO__DOT__outValidReg;
        CData/*0:0*/ __PVT__wFIFO__DOT__combPassthru;
        VlWide<5>/*144:0*/ __Vcellinp__wFIFO__IN_data;
        VlWide<5>/*144:0*/ __PVT__wFIFO__DOT__outDataReg;
        CData/*0:0*/ __PVT__wFIFO__DOT__indexIn;
        CData/*0:0*/ __PVT__wFIFO__DOT__indexOut;
        VlUnpacked<VlWide<5>/*144:0*/, 2> __PVT__wFIFO__DOT__mem;
        VL_OUT8(__PVT__s_axi_awready,0,0);
        CData/*0:0*/ __PVT__readDataIdxValid;
        CData/*1:0*/ __PVT__readDataIdx;
        CData/*7:0*/ __VdlyVal__tfs__v0;
        CData/*0:0*/ __VdlySet__tfs__v0;
        CData/*7:0*/ __VdlyLsb__tfs__v1;
        CData/*0:0*/ __VdlySet__tfs__v1;
        CData/*0:0*/ __VdlyVal__tfs__v2;
        CData/*0:0*/ __VdlySet__tfs__v2;
        IData/*31:0*/ __VdlyLsb__tfs__v0;
        IData/*31:0*/ __VdlyLsb__tfs__v2;
        VlWide<7>/*203:0*/ __PVT__reads;
        QData/*50:0*/ __VdlyVal__tfs__v1;
        VlUnpacked<VlWide<4>/*127:0*/, 16777216> mem;
        VL_OUT8(__PVT__s_axi_rlast,0,0);
        CData/*7:0*/ inputByte;
        CData/*0:0*/ __PVT__unnamedblk2__DOT__last;
        CData/*7:0*/ __Vlvbound_ha4e0d76b__0;
        CData/*0:0*/ __Vlvbound_ha2e9d5ac__0;
        IData/*31:0*/ __PVT__unnamedblk2__DOT__addr;
        QData/*50:0*/ __Vlvbound_hcd8e2c99__0;
        CData/*0:0*/ inputAvail;
        CData/*0:0*/ __Vdly__inputAvail;
    };
    struct {
        VL_OUT8(__PVT__s_axi_rid,1,0);
        VL_OUTW(__PVT__s_axi_rdata,127,0,4);
        VL_OUT8(__PVT__s_axi_rvalid,0,0);
        VlUnpacked<VlWide<7>/*203:0*/, 2> __PVT__tfs;
        VL_OUT8(__PVT__s_axi_arready,0,0);
        CData/*0:0*/ __PVT__buf_awvalid;
        CData/*0:0*/ __PVT__buf_awready;
        CData/*0:0*/ __PVT__buf_arvalid;
        CData/*0:0*/ __PVT__buf_arready;
        CData/*0:0*/ __PVT__awFIFO__DOT__fullCond;
        CData/*0:0*/ __PVT__awFIFO__DOT__equal;
        CData/*0:0*/ __PVT__awFIFO__DOT__empty;
        CData/*0:0*/ __PVT__awFIFO__DOT__outputReady;
        CData/*0:0*/ __PVT__awFIFO__DOT__doExtract;
        CData/*0:0*/ __PVT__awFIFO__DOT__doInsert;
        CData/*0:0*/ __PVT__awFIFO__DOT__outValidReg;
        CData/*0:0*/ __PVT__awFIFO__DOT__combPassthru;
        CData/*0:0*/ __PVT__arFIFO__DOT__fullCond;
        CData/*0:0*/ __PVT__arFIFO__DOT__equal;
        CData/*0:0*/ __PVT__arFIFO__DOT__empty;
        CData/*0:0*/ __PVT__arFIFO__DOT__outputReady;
        CData/*0:0*/ __PVT__arFIFO__DOT__doExtract;
        CData/*0:0*/ __PVT__arFIFO__DOT__doInsert;
        CData/*0:0*/ __PVT__arFIFO__DOT__outValidReg;
        CData/*7:0*/ __VdlyVal__mem__v0;
        CData/*0:0*/ __VdlySet__mem__v0;
        CData/*7:0*/ __VdlyVal__mem__v1;
        CData/*0:0*/ __VdlySet__mem__v1;
        CData/*7:0*/ __VdlyVal__mem__v2;
        CData/*0:0*/ __VdlySet__mem__v2;
        CData/*7:0*/ __VdlyVal__mem__v3;
        CData/*0:0*/ __VdlySet__mem__v3;
        CData/*7:0*/ __VdlyVal__mem__v4;
        CData/*0:0*/ __VdlySet__mem__v4;
        CData/*7:0*/ __VdlyVal__mem__v5;
        CData/*0:0*/ __VdlySet__mem__v5;
        CData/*7:0*/ __VdlyVal__mem__v6;
        CData/*0:0*/ __VdlySet__mem__v6;
        CData/*7:0*/ __VdlyVal__mem__v7;
        CData/*0:0*/ __VdlySet__mem__v7;
        CData/*7:0*/ __VdlyVal__mem__v8;
        CData/*0:0*/ __VdlySet__mem__v8;
        CData/*7:0*/ __VdlyVal__mem__v9;
        CData/*0:0*/ __VdlySet__mem__v9;
        CData/*7:0*/ __VdlyVal__mem__v10;
        CData/*0:0*/ __VdlySet__mem__v10;
        CData/*7:0*/ __VdlyVal__mem__v11;
        CData/*0:0*/ __VdlySet__mem__v11;
        CData/*7:0*/ __VdlyVal__mem__v12;
        CData/*0:0*/ __VdlySet__mem__v12;
        CData/*7:0*/ __VdlyVal__mem__v13;
        CData/*0:0*/ __VdlySet__mem__v13;
        CData/*7:0*/ __VdlyVal__mem__v14;
        CData/*0:0*/ __VdlySet__mem__v14;
        CData/*7:0*/ __VdlyVal__mem__v15;
        CData/*0:0*/ __VdlySet__mem__v15;
        CData/*7:0*/ __VdlyVal__tfs__v3;
        CData/*0:0*/ __VdlySet__tfs__v3;
        CData/*7:0*/ __VdlyVal__tfs__v4;
        CData/*0:0*/ __VdlySet__tfs__v4;
        CData/*7:0*/ __VdlyLsb__tfs__v5;
        CData/*0:0*/ __VdlySet__tfs__v5;
        CData/*0:0*/ __VdlyVal__tfs__v6;
        CData/*0:0*/ __VdlySet__tfs__v6;
    };
    struct {
        CData/*0:0*/ __VdlyVal__tfs__v7;
        CData/*0:0*/ __VdlySet__tfs__v7;
        CData/*0:0*/ __VdlySet__tfs__v8;
        CData/*1:0*/ __VdlyVal__tfs__v9;
        CData/*0:0*/ __VdlySet__tfs__v9;
        CData/*7:0*/ __VdlyVal__tfs__v10;
        CData/*0:0*/ __VdlySet__tfs__v10;
        CData/*7:0*/ __VdlyVal__tfs__v11;
        CData/*0:0*/ __VdlySet__tfs__v11;
        CData/*0:0*/ __VdlyVal__tfs__v12;
        CData/*0:0*/ __VdlySet__tfs__v12;
        CData/*0:0*/ __VdlySet__tfs__v13;
        CData/*1:0*/ __VdlyVal__tfs__v14;
        CData/*0:0*/ __VdlySet__tfs__v14;
        CData/*7:0*/ __VdlyVal__tfs__v15;
        CData/*0:0*/ __VdlySet__tfs__v15;
        CData/*7:0*/ __VdlyVal__tfs__v16;
        CData/*0:0*/ __VdlySet__tfs__v16;
        IData/*23:0*/ __VdlyDim0__mem__v0;
        IData/*23:0*/ __VdlyDim0__mem__v1;
        IData/*23:0*/ __VdlyDim0__mem__v2;
        IData/*23:0*/ __VdlyDim0__mem__v3;
        IData/*23:0*/ __VdlyDim0__mem__v4;
        IData/*23:0*/ __VdlyDim0__mem__v5;
        IData/*23:0*/ __VdlyDim0__mem__v6;
        IData/*23:0*/ __VdlyDim0__mem__v7;
        IData/*23:0*/ __VdlyDim0__mem__v8;
        IData/*23:0*/ __VdlyDim0__mem__v9;
        IData/*23:0*/ __VdlyDim0__mem__v10;
        IData/*23:0*/ __VdlyDim0__mem__v11;
        IData/*23:0*/ __VdlyDim0__mem__v12;
        IData/*23:0*/ __VdlyDim0__mem__v13;
        IData/*23:0*/ __VdlyDim0__mem__v14;
        IData/*23:0*/ __VdlyDim0__mem__v15;
        IData/*31:0*/ __VdlyLsb__tfs__v3;
        IData/*31:0*/ __VdlyLsb__tfs__v4;
        IData/*31:0*/ __VdlyLsb__tfs__v6;
        IData/*31:0*/ __VdlyLsb__tfs__v7;
        IData/*31:0*/ __VdlyVal__tfs__v8;
        IData/*31:0*/ __VdlyLsb__tfs__v8;
        IData/*31:0*/ __VdlyLsb__tfs__v9;
        IData/*31:0*/ __VdlyLsb__tfs__v10;
        IData/*31:0*/ __VdlyLsb__tfs__v11;
        IData/*31:0*/ __VdlyLsb__tfs__v12;
        IData/*31:0*/ __VdlyVal__tfs__v13;
        IData/*31:0*/ __VdlyLsb__tfs__v13;
        IData/*31:0*/ __VdlyLsb__tfs__v14;
        IData/*31:0*/ __VdlyLsb__tfs__v15;
        IData/*31:0*/ __VdlyLsb__tfs__v16;
        VlWide<7>/*203:0*/ __PVT__writes;
        QData/*51:0*/ __Vcellout__awFIFO__OUT_data;
        QData/*51:0*/ __Vcellinp__awFIFO__IN_data;
        QData/*51:0*/ __Vcellout__arFIFO__OUT_data;
        QData/*51:0*/ __PVT__awFIFO__DOT__outDataReg;
        QData/*50:0*/ __VdlyVal__tfs__v5;
        CData/*0:0*/ __PVT__unnamedblk6__DOT__unnamedblk7__DOT__last;
        CData/*7:0*/ __Vlvbound_hf5f86567__0;
        CData/*7:0*/ __Vlvbound_hf5f86567__1;
        CData/*0:0*/ __Vlvbound_he15ecf53__0;
        CData/*0:0*/ __Vlvbound_h027d800f__0;
        CData/*1:0*/ __Vlvbound_hf688ff49__0;
        CData/*7:0*/ __Vlvbound_h49134e48__0;
        CData/*7:0*/ __Vlvbound_hfacb3be2__0;
        CData/*0:0*/ __Vlvbound_ha918a1d3__0;
    };
    struct {
        CData/*1:0*/ __Vlvbound_hb87e5c88__0;
        CData/*7:0*/ __Vlvbound_hcaa89f34__0;
        CData/*7:0*/ __Vlvbound_hca0c47d2__0;
        CData/*0:0*/ __PVT__awFIFO__DOT__indexIn;
        CData/*0:0*/ __PVT__awFIFO__DOT__indexOut;
        CData/*0:0*/ __PVT__arFIFO__DOT__indexIn;
        CData/*0:0*/ __PVT__arFIFO__DOT__indexOut;
        CData/*0:0*/ __PVT__arFIFO__DOT__combPassthru;
        IData/*31:0*/ __PVT__unnamedblk6__DOT__unnamedblk7__DOT__addr;
        IData/*31:0*/ __Vlvbound_h5eac4bcf__0;
        IData/*31:0*/ __Vlvbound_h8aa2503f__0;
        QData/*51:0*/ __Vcellinp__arFIFO__IN_data;
        QData/*50:0*/ __PVT__unnamedblk6__DOT__unnamedblk7__DOT__w;
        QData/*50:0*/ __Vlvbound_h355f9656__0;
        QData/*51:0*/ __PVT__arFIFO__DOT__outDataReg;
        VlUnpacked<QData/*51:0*/, 2> __PVT__awFIFO__DOT__mem;
        VlUnpacked<QData/*51:0*/, 2> __PVT__arFIFO__DOT__mem;
        VL_OUT8(__PVT__s_axi_bid,1,0);
        VL_OUT8(__PVT__s_axi_bvalid,0,0);
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__s_axi_awid,1,0);
        VL_IN8(__PVT__s_axi_awlen,7,0);
        VL_IN8(__PVT__s_axi_awsize,2,0);
        VL_IN8(__PVT__s_axi_awburst,1,0);
        VL_IN8(__PVT__s_axi_awlock,0,0);
        VL_IN8(__PVT__s_axi_awcache,3,0);
        VL_IN8(__PVT__s_axi_awvalid,0,0);
        VL_IN8(__PVT__s_axi_wlast,0,0);
        VL_IN8(__PVT__s_axi_wvalid,0,0);
        VL_IN8(__PVT__s_axi_bready,0,0);
        VL_IN8(__PVT__s_axi_arid,1,0);
        VL_IN8(__PVT__s_axi_arlen,7,0);
        VL_IN8(__PVT__s_axi_arsize,2,0);
        VL_IN8(__PVT__s_axi_arburst,1,0);
        VL_IN8(__PVT__s_axi_arlock,0,0);
        VL_IN8(__PVT__s_axi_arcache,3,0);
        VL_IN8(__PVT__s_axi_arvalid,0,0);
        VL_IN8(__PVT__s_axi_rready,0,0);
        VL_IN16(__PVT__s_axi_wstrb,15,0);
        VL_IN(__PVT__s_axi_awaddr,31,0);
        VL_INW(__PVT__s_axi_wdata,127,0,4);
        VL_IN(__PVT__s_axi_araddr,31,0);
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_ExternalAXISim(VTop__Syms* symsp, const char* v__name);
    ~VTop_ExternalAXISim();
    VL_UNCOPYABLE(VTop_ExternalAXISim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
