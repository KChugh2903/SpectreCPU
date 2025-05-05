# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTop \
	VTop___024root__DepSet_hc590b6dd__0 \
	VTop___024root__DepSet_h0d2e5939__0 \
	VTop_SoC__DepSet_h493f0958__0 \
	VTop_SoC__DepSet_h6c0a0c2b__0 \
	VTop_SoC__DepSet_h6c0a0c2b__1 \
	VTop_ExternalAXISim__DepSet_hc004b75d__0 \
	VTop_ExternalAXISim__DepSet_h34554569__0 \
	VTop_Core__DepSet_hf5d59f4d__0 \
	VTop_Core__DepSet_hf5d59f4d__1 \
	VTop_Core__DepSet_hf5d59f4d__2 \
	VTop_Core__DepSet_h83d5b77d__0 \
	VTop_Core__DepSet_h83d5b77d__1 \
	VTop_Core__DepSet_h83d5b77d__2 \
	VTop_Core__DepSet_h83d5b77d__3 \
	VTop_Core__DepSet_h83d5b77d__4 \
	VTop_Core__DepSet_h83d5b77d__5 \
	VTop_Core__DepSet_h83d5b77d__6 \
	VTop_Core__DepSet_h83d5b77d__7 \
	VTop_Core__DepSet_h83d5b77d__8 \
	VTop_Core__DepSet_h83d5b77d__9 \
	VTop_Core__DepSet_h83d5b77d__10 \
	VTop_Core__DepSet_h83d5b77d__11 \
	VTop_MemRTL__W200_N40__DepSet_h8a87bafb__0 \
	VTop_MemRTL__W200_N40__DepSet_h0d342060__0 \
	VTop_MemRTL1RW__W54_N40_WB15__DepSet_h5b5a6a3e__0 \
	VTop_MemRTL1RW__W54_N40_WB15__DepSet_hebce7d12__0 \
	VTop_MemRTL1RW__W2_N40_WB2__DepSet_h1aabe05b__0 \
	VTop_MemRTL1RW__W2_N40_WB2__DepSet_h6e6e1ba8__0 \
	VTop_MemRTL__W200_N100_WB80__DepSet_h8b607466__0 \
	VTop_MemRTL__W200_N100_WB80__DepSet_h357857d0__0 \
	VTop_IFetch__DepSet_h30119892__0 \
	VTop_IFetch__DepSet_he39cef53__0 \
	VTop_ROB__DepSet_h54893848__0 \
	VTop_ROB__DepSet_hae1a7567__0 \
	VTop_StoreQueue__DepSet_h3e2b431c__0 \
	VTop_StoreQueue__DepSet_h6355c7f8__0 \
	VTop_StoreQueue__DepSet_h6355c7f8__1 \
	VTop_CSR__DepSet_h7f8cd7b6__0 \
	VTop_CSR__DepSet_hb9b0c73c__0 \
	VTop_Rename__WC5__DepSet_h6d441bd2__0 \
	VTop_Rename__WC5__DepSet_h423ef343__0 \
	VTop_IF_Cache__DepSet_h3a389abd__0 \
	VTop_IF_CTable__DepSet_h5d21eb86__0 \
	VTop_IF_MMIO__DepSet_h7560533e__0 \
	VTop_TagBuffer__DepSet_h8a851999__0 \
	VTop_TagBuffer__DepSet_h8a851999__1 \
	VTop_TagBuffer__DepSet_h0d8f805a__0 \
	VTop_IFetchPipeline__DepSet_h094ac3a5__0 \
	VTop_IFetchPipeline__DepSet_h094ac3a5__1 \
	VTop_IFetchPipeline__DepSet_h094ac3a5__2 \
	VTop_IFetchPipeline__DepSet_h094ac3a5__3 \
	VTop_BranchPredictor__N3__DepSet_h6809881b__0 \
	VTop_BranchPredictor__N3__DepSet_hb78eddf8__0 \
	VTop_BranchPredictor__N3__DepSet_hb78eddf8__1 \
	VTop_RenameTable__ND5__DepSet_hc95a9fca__0 \
	VTop_RenameTable__ND5__DepSet_h857b1845__0 \
	VTop_IF_ICTable__DepSet_h0cf02cdd__0 \
	VTop_IF_ICache__DepSet_he7f07562__0 \
	VTop_ReturnStack__DepSet_hf433c92e__0 \
	VTop_RegFile__NB5_A1__DepSet_hcffb7e93__0 \
	VTop_RegFile__W23_S20_N3_NB1__DepSet_h95553e76__0 \
	VTop_RegFile__W23_S20_N3_NB1__DepSet_ha892e44c__0 \
	VTop_RegFile__W50_S20_N1_NB1__DepSet_hf4ce9052__0 \
	VTop_RegFile__W50_S20_N1_NB1__DepSet_hc73435e3__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTop__ConstPool_0 \
	VTop___024root__Slow \
	VTop___024root__DepSet_hc590b6dd__0__Slow \
	VTop___024root__DepSet_h0d2e5939__0__Slow \
	VTop_Top__Slow \
	VTop_Top__DepSet_h43a701a7__0__Slow \
	VTop___024unit__Slow \
	VTop___024unit__DepSet_h1b4533a7__0__Slow \
	VTop_SoC__Slow \
	VTop_SoC__DepSet_h493f0958__0__Slow \
	VTop_SoC__DepSet_h6c0a0c2b__0__Slow \
	VTop_ExternalAXISim__Slow \
	VTop_ExternalAXISim__DepSet_hc004b75d__0__Slow \
	VTop_ExternalAXISim__DepSet_h34554569__0__Slow \
	VTop_Core__Slow \
	VTop_Core__DepSet_hf5d59f4d__0__Slow \
	VTop_Core__DepSet_hf5d59f4d__1__Slow \
	VTop_Core__DepSet_h83d5b77d__0__Slow \
	VTop_Core__DepSet_h83d5b77d__1__Slow \
	VTop_Core__DepSet_h83d5b77d__2__Slow \
	VTop_Core__DepSet_h83d5b77d__3__Slow \
	VTop_Core__DepSet_h83d5b77d__4__Slow \
	VTop_MemRTL__W200_N40__Slow \
	VTop_MemRTL__W200_N40__DepSet_h8a87bafb__0__Slow \
	VTop_MemRTL1RW__W54_N40_WB15__Slow \
	VTop_MemRTL1RW__W54_N40_WB15__DepSet_h5b5a6a3e__0__Slow \
	VTop_MemRTL1RW__W2_N40_WB2__Slow \
	VTop_MemRTL1RW__W2_N40_WB2__DepSet_h1aabe05b__0__Slow \
	VTop_MemRTL__W200_N100_WB80__Slow \
	VTop_MemRTL__W200_N100_WB80__DepSet_h8b607466__0__Slow \
	VTop_MemRTL__W200_N100_WB80__DepSet_h8b607466__1__Slow \
	VTop_IFetch__Slow \
	VTop_IFetch__DepSet_h30119892__0__Slow \
	VTop_IFetch__DepSet_he39cef53__0__Slow \
	VTop_ROB__Slow \
	VTop_ROB__DepSet_h54893848__0__Slow \
	VTop_StoreQueue__Slow \
	VTop_StoreQueue__DepSet_h3e2b431c__0__Slow \
	VTop_StoreQueue__DepSet_h6355c7f8__0__Slow \
	VTop_CSR__Slow \
	VTop_CSR__DepSet_h7f8cd7b6__0__Slow \
	VTop_Rename__WC5__Slow \
	VTop_Rename__WC5__DepSet_h6d441bd2__0__Slow \
	VTop_Rename__WC5__DepSet_h423ef343__0__Slow \
	VTop_IF_Cache__Slow \
	VTop_IF_Cache__DepSet_h3a389abd__0__Slow \
	VTop_IF_CTable__Slow \
	VTop_IF_CTable__DepSet_h5d21eb86__0__Slow \
	VTop_IF_MMIO__Slow \
	VTop_IF_MMIO__DepSet_h7560533e__0__Slow \
	VTop_TagBuffer__Slow \
	VTop_TagBuffer__DepSet_h8a851999__0__Slow \
	VTop_IFetchPipeline__Slow \
	VTop_IFetchPipeline__DepSet_h11425457__0__Slow \
	VTop_IFetchPipeline__DepSet_h094ac3a5__0__Slow \
	VTop_BranchPredictor__N3__Slow \
	VTop_BranchPredictor__N3__DepSet_h6809881b__0__Slow \
	VTop_BranchPredictor__N3__DepSet_hb78eddf8__0__Slow \
	VTop_RenameTable__ND5__Slow \
	VTop_RenameTable__ND5__DepSet_hc95a9fca__0__Slow \
	VTop_IF_ICTable__Slow \
	VTop_IF_ICTable__DepSet_h0cf02cdd__0__Slow \
	VTop_IF_ICache__Slow \
	VTop_IF_ICache__DepSet_he7f07562__0__Slow \
	VTop_ReturnStack__Slow \
	VTop_ReturnStack__DepSet_hadac4643__0__Slow \
	VTop_ReturnStack__DepSet_hf433c92e__0__Slow \
	VTop_RegFile__NB5_A1__Slow \
	VTop_RegFile__NB5_A1__DepSet_h34ac2592__0__Slow \
	VTop_RegFile__W23_S20_N3_NB1__Slow \
	VTop_RegFile__W23_S20_N3_NB1__DepSet_h95553e76__0__Slow \
	VTop_RegFile__W50_S20_N1_NB1__Slow \
	VTop_RegFile__W50_S20_N1_NB1__DepSet_hf4ce9052__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTop__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTop__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_save \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
