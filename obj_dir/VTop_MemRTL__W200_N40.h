// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_MEMRTL__W200_N40_H_
#define VERILATED_VTOP_MEMRTL__W200_N40_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_save.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_MemRTL__W200_N40 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUTW(__PVT__OUT_data,511,0,16);
        VL_OUTW(__PVT__OUT_data1,511,0,16);
        CData/*0:0*/ __PVT__ce_reg;
        CData/*0:0*/ __PVT__ce1_reg;
        CData/*0:0*/ __PVT__we_reg;
        CData/*5:0*/ __PVT__addr_reg;
        CData/*5:0*/ __PVT__addr1_reg;
        VlWide<16>/*511:0*/ __PVT__data_reg;
        QData/*63:0*/ __PVT__wm_reg;
        CData/*7:0*/ __VdlyVal__mem__v0;
        CData/*5:0*/ __VdlyDim0__mem__v0;
        CData/*0:0*/ __VdlySet__mem__v0;
        CData/*7:0*/ __VdlyVal__mem__v1;
        CData/*5:0*/ __VdlyDim0__mem__v1;
        CData/*0:0*/ __VdlySet__mem__v1;
        CData/*7:0*/ __VdlyVal__mem__v2;
        CData/*5:0*/ __VdlyDim0__mem__v2;
        CData/*0:0*/ __VdlySet__mem__v2;
        CData/*7:0*/ __VdlyVal__mem__v3;
        CData/*5:0*/ __VdlyDim0__mem__v3;
        CData/*0:0*/ __VdlySet__mem__v3;
        CData/*7:0*/ __VdlyVal__mem__v4;
        CData/*5:0*/ __VdlyDim0__mem__v4;
        CData/*0:0*/ __VdlySet__mem__v4;
        CData/*7:0*/ __VdlyVal__mem__v5;
        CData/*5:0*/ __VdlyDim0__mem__v5;
        CData/*0:0*/ __VdlySet__mem__v5;
        CData/*7:0*/ __VdlyVal__mem__v6;
        CData/*5:0*/ __VdlyDim0__mem__v6;
        CData/*0:0*/ __VdlySet__mem__v6;
        CData/*7:0*/ __VdlyVal__mem__v7;
        CData/*5:0*/ __VdlyDim0__mem__v7;
        CData/*0:0*/ __VdlySet__mem__v7;
        CData/*7:0*/ __VdlyVal__mem__v8;
        CData/*5:0*/ __VdlyDim0__mem__v8;
        CData/*0:0*/ __VdlySet__mem__v8;
        CData/*7:0*/ __VdlyVal__mem__v9;
        CData/*5:0*/ __VdlyDim0__mem__v9;
        CData/*0:0*/ __VdlySet__mem__v9;
        CData/*7:0*/ __VdlyVal__mem__v10;
        CData/*5:0*/ __VdlyDim0__mem__v10;
        CData/*0:0*/ __VdlySet__mem__v10;
        CData/*7:0*/ __VdlyVal__mem__v11;
        CData/*5:0*/ __VdlyDim0__mem__v11;
        CData/*0:0*/ __VdlySet__mem__v11;
        CData/*7:0*/ __VdlyVal__mem__v12;
        CData/*5:0*/ __VdlyDim0__mem__v12;
        CData/*0:0*/ __VdlySet__mem__v12;
        CData/*7:0*/ __VdlyVal__mem__v13;
        CData/*5:0*/ __VdlyDim0__mem__v13;
        CData/*0:0*/ __VdlySet__mem__v13;
        CData/*7:0*/ __VdlyVal__mem__v14;
        CData/*5:0*/ __VdlyDim0__mem__v14;
        CData/*0:0*/ __VdlySet__mem__v14;
        CData/*7:0*/ __VdlyVal__mem__v15;
        CData/*5:0*/ __VdlyDim0__mem__v15;
        CData/*0:0*/ __VdlySet__mem__v15;
        CData/*7:0*/ __VdlyVal__mem__v16;
        CData/*5:0*/ __VdlyDim0__mem__v16;
        CData/*0:0*/ __VdlySet__mem__v16;
        CData/*7:0*/ __VdlyVal__mem__v17;
        CData/*5:0*/ __VdlyDim0__mem__v17;
        CData/*0:0*/ __VdlySet__mem__v17;
        CData/*7:0*/ __VdlyVal__mem__v18;
    };
    struct {
        CData/*5:0*/ __VdlyDim0__mem__v18;
        CData/*0:0*/ __VdlySet__mem__v18;
        CData/*7:0*/ __VdlyVal__mem__v19;
        CData/*5:0*/ __VdlyDim0__mem__v19;
        CData/*0:0*/ __VdlySet__mem__v19;
        CData/*7:0*/ __VdlyVal__mem__v20;
        CData/*5:0*/ __VdlyDim0__mem__v20;
        CData/*0:0*/ __VdlySet__mem__v20;
        CData/*7:0*/ __VdlyVal__mem__v21;
        CData/*5:0*/ __VdlyDim0__mem__v21;
        CData/*0:0*/ __VdlySet__mem__v21;
        CData/*7:0*/ __VdlyVal__mem__v22;
        CData/*5:0*/ __VdlyDim0__mem__v22;
        CData/*0:0*/ __VdlySet__mem__v22;
        CData/*7:0*/ __VdlyVal__mem__v23;
        CData/*5:0*/ __VdlyDim0__mem__v23;
        CData/*0:0*/ __VdlySet__mem__v23;
        CData/*7:0*/ __VdlyVal__mem__v24;
        CData/*5:0*/ __VdlyDim0__mem__v24;
        CData/*0:0*/ __VdlySet__mem__v24;
        CData/*7:0*/ __VdlyVal__mem__v25;
        CData/*5:0*/ __VdlyDim0__mem__v25;
        CData/*0:0*/ __VdlySet__mem__v25;
        CData/*7:0*/ __VdlyVal__mem__v26;
        CData/*5:0*/ __VdlyDim0__mem__v26;
        CData/*0:0*/ __VdlySet__mem__v26;
        CData/*7:0*/ __VdlyVal__mem__v27;
        CData/*5:0*/ __VdlyDim0__mem__v27;
        CData/*0:0*/ __VdlySet__mem__v27;
        CData/*7:0*/ __VdlyVal__mem__v28;
        CData/*5:0*/ __VdlyDim0__mem__v28;
        CData/*0:0*/ __VdlySet__mem__v28;
        CData/*7:0*/ __VdlyVal__mem__v29;
        CData/*5:0*/ __VdlyDim0__mem__v29;
        CData/*0:0*/ __VdlySet__mem__v29;
        CData/*7:0*/ __VdlyVal__mem__v30;
        CData/*5:0*/ __VdlyDim0__mem__v30;
        CData/*0:0*/ __VdlySet__mem__v30;
        CData/*7:0*/ __VdlyVal__mem__v31;
        CData/*5:0*/ __VdlyDim0__mem__v31;
        CData/*0:0*/ __VdlySet__mem__v31;
        CData/*7:0*/ __VdlyVal__mem__v32;
        CData/*5:0*/ __VdlyDim0__mem__v32;
        CData/*0:0*/ __VdlySet__mem__v32;
        CData/*7:0*/ __VdlyVal__mem__v33;
        CData/*5:0*/ __VdlyDim0__mem__v33;
        CData/*0:0*/ __VdlySet__mem__v33;
        CData/*7:0*/ __VdlyVal__mem__v34;
        CData/*5:0*/ __VdlyDim0__mem__v34;
        CData/*0:0*/ __VdlySet__mem__v34;
        CData/*7:0*/ __VdlyVal__mem__v35;
        CData/*5:0*/ __VdlyDim0__mem__v35;
        CData/*0:0*/ __VdlySet__mem__v35;
        CData/*7:0*/ __VdlyVal__mem__v36;
        CData/*5:0*/ __VdlyDim0__mem__v36;
        CData/*0:0*/ __VdlySet__mem__v36;
        CData/*7:0*/ __VdlyVal__mem__v37;
        CData/*5:0*/ __VdlyDim0__mem__v37;
        CData/*0:0*/ __VdlySet__mem__v37;
        CData/*7:0*/ __VdlyVal__mem__v38;
        CData/*5:0*/ __VdlyDim0__mem__v38;
        CData/*0:0*/ __VdlySet__mem__v38;
        CData/*7:0*/ __VdlyVal__mem__v39;
        CData/*5:0*/ __VdlyDim0__mem__v39;
    };
    struct {
        CData/*0:0*/ __VdlySet__mem__v39;
        CData/*7:0*/ __VdlyVal__mem__v40;
        CData/*5:0*/ __VdlyDim0__mem__v40;
        CData/*0:0*/ __VdlySet__mem__v40;
        CData/*7:0*/ __VdlyVal__mem__v41;
        CData/*5:0*/ __VdlyDim0__mem__v41;
        CData/*0:0*/ __VdlySet__mem__v41;
        CData/*7:0*/ __VdlyVal__mem__v42;
        CData/*5:0*/ __VdlyDim0__mem__v42;
        CData/*0:0*/ __VdlySet__mem__v42;
        CData/*7:0*/ __VdlyVal__mem__v43;
        CData/*5:0*/ __VdlyDim0__mem__v43;
        CData/*0:0*/ __VdlySet__mem__v43;
        CData/*7:0*/ __VdlyVal__mem__v44;
        CData/*5:0*/ __VdlyDim0__mem__v44;
        CData/*0:0*/ __VdlySet__mem__v44;
        CData/*7:0*/ __VdlyVal__mem__v45;
        CData/*5:0*/ __VdlyDim0__mem__v45;
        CData/*0:0*/ __VdlySet__mem__v45;
        CData/*7:0*/ __VdlyVal__mem__v46;
        CData/*5:0*/ __VdlyDim0__mem__v46;
        CData/*0:0*/ __VdlySet__mem__v46;
        CData/*7:0*/ __VdlyVal__mem__v47;
        CData/*5:0*/ __VdlyDim0__mem__v47;
        CData/*0:0*/ __VdlySet__mem__v47;
        CData/*7:0*/ __VdlyVal__mem__v48;
        CData/*5:0*/ __VdlyDim0__mem__v48;
        CData/*0:0*/ __VdlySet__mem__v48;
        CData/*7:0*/ __VdlyVal__mem__v49;
        CData/*5:0*/ __VdlyDim0__mem__v49;
        CData/*0:0*/ __VdlySet__mem__v49;
        CData/*7:0*/ __VdlyVal__mem__v50;
        CData/*5:0*/ __VdlyDim0__mem__v50;
        CData/*0:0*/ __VdlySet__mem__v50;
        CData/*7:0*/ __VdlyVal__mem__v51;
        CData/*5:0*/ __VdlyDim0__mem__v51;
        CData/*0:0*/ __VdlySet__mem__v51;
        CData/*7:0*/ __VdlyVal__mem__v52;
        CData/*5:0*/ __VdlyDim0__mem__v52;
        CData/*0:0*/ __VdlySet__mem__v52;
        CData/*7:0*/ __VdlyVal__mem__v53;
        CData/*5:0*/ __VdlyDim0__mem__v53;
        CData/*0:0*/ __VdlySet__mem__v53;
        CData/*7:0*/ __VdlyVal__mem__v54;
        CData/*5:0*/ __VdlyDim0__mem__v54;
        CData/*0:0*/ __VdlySet__mem__v54;
        CData/*7:0*/ __VdlyVal__mem__v55;
        CData/*5:0*/ __VdlyDim0__mem__v55;
        CData/*0:0*/ __VdlySet__mem__v55;
        CData/*7:0*/ __VdlyVal__mem__v56;
        CData/*5:0*/ __VdlyDim0__mem__v56;
        CData/*0:0*/ __VdlySet__mem__v56;
        CData/*7:0*/ __VdlyVal__mem__v57;
        CData/*5:0*/ __VdlyDim0__mem__v57;
        CData/*0:0*/ __VdlySet__mem__v57;
        CData/*7:0*/ __VdlyVal__mem__v58;
        CData/*5:0*/ __VdlyDim0__mem__v58;
        CData/*0:0*/ __VdlySet__mem__v58;
        CData/*7:0*/ __VdlyVal__mem__v59;
        CData/*5:0*/ __VdlyDim0__mem__v59;
        CData/*0:0*/ __VdlySet__mem__v59;
        CData/*7:0*/ __VdlyVal__mem__v60;
        CData/*5:0*/ __VdlyDim0__mem__v60;
        CData/*0:0*/ __VdlySet__mem__v60;
    };
    struct {
        CData/*7:0*/ __VdlyVal__mem__v61;
        CData/*5:0*/ __VdlyDim0__mem__v61;
        CData/*0:0*/ __VdlySet__mem__v61;
        CData/*7:0*/ __VdlyVal__mem__v62;
        CData/*5:0*/ __VdlyDim0__mem__v62;
        CData/*0:0*/ __VdlySet__mem__v62;
        CData/*7:0*/ __VdlyVal__mem__v63;
        CData/*5:0*/ __VdlyDim0__mem__v63;
        CData/*0:0*/ __VdlySet__mem__v63;
        VlUnpacked<VlWide<16>/*511:0*/, 64> mem;
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__IN_nce,0,0);
        VL_IN8(__PVT__IN_nwe,0,0);
        VL_IN8(__PVT__IN_addr,5,0);
        VL_IN8(__PVT__IN_nce1,0,0);
        VL_IN8(__PVT__IN_addr1,5,0);
        VL_INW(__PVT__IN_data,511,0,16);
        VL_IN64(__PVT__IN_wm,63,0);
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_MemRTL__W200_N40(VTop__Syms* symsp, const char* v__name);
    ~VTop_MemRTL__W200_N40();
    VL_UNCOPYABLE(VTop_MemRTL__W200_N40);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
