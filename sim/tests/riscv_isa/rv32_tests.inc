
ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)


rv32_isa_tests += \
            isa/rv32ui/add_0000.S \
  

              
ifneq (,$(findstring m,$(ARCH_lowercase)))
            rv32_isa_tests += \
                isa/rv32ui/add_0000.S \
                isa/rv32ui/addi_0000.S \
                isa/rv32ui/and_0000.S \
                isa/rv32ui/andi_0000.S \
                isa/rv32ui/arithmetic_0000.S \
                isa/rv32ui/atomic_0000.S \
                isa/rv32ui/auipc_0000.S \
                isa/rv32ui/beq_0000.S \
                isa/rv32ui/bge_0000.S \
                isa/rv32ui/bgeu_0000.S \
                isa/rv32ui/block_0000.S \
                isa/rv32ui/blt_0000.S \
                isa/rv32ui/bltu_0000.S \
                isa/rv32ui/bne_0000.S \
                isa/rv32ui/boundary_data_0000.S \
                isa/rv32ui/bubblesort_byte_0000.S \
                isa/rv32ui/bubblesort_hword_0000.S \
                isa/rv32ui/bubblesort_word_0000.S \
                isa/rv32ui/debug_rv32m_0000.S \
                isa/rv32ui/div_0000.S \
                isa/rv32ui/divu_0000.S \
                isa/rv32ui/group_0000.S \
                isa/rv32ui/int_divide_0000.S \
                isa/rv32ui/int_euclid_0000.S \
                isa/rv32ui/int_minmax_0000.S \
                isa/rv32ui/int_sqrt_0000.S \
                isa/rv32ui/iterate_0000.S \
                isa/rv32ui/jal_0000.S \
                isa/rv32ui/jalr_0000.S \
                isa/rv32ui/lb_0000.S \
                isa/rv32ui/lbu_0000.S \
                isa/rv32ui/lh_0000.S \
                isa/rv32ui/lhu_0000.S \
                isa/rv32ui/lui_0000.S \
                isa/rv32ui/lw_0000.S \
                isa/rv32ui/mul_0000.S \
                isa/rv32ui/mulh_0000.S \
                isa/rv32ui/mulhsu_0000.S \
                isa/rv32ui/mulhu_0000.S \
                isa/rv32ui/nitems_0000.S \
                isa/rv32ui/numeric_label_0000.S \
                isa/rv32ui/numeric_label_random_0000.S \
                isa/rv32ui/or_0000.S \
                isa/rv32ui/ori_0000.S \
                isa/rv32ui/preparator_0000.S \
                isa/rv32ui/random_0000.S \
                isa/rv32ui/register_0000.S \
                isa/rv32ui/register_allocation_0000.S \
                isa/rv32ui/register_exclude_retain_0000.S \
                isa/rv32ui/rem_0000.S \
                isa/rv32ui/remu_0000.S \
                isa/rv32ui/sb_0000.S \
                isa/rv32ui/selfcheck_0000.S \
                isa/rv32ui/sequence_0000.S \
                isa/rv32ui/sh_0000.S \
                isa/rv32ui/simple_0000.S \
                isa/rv32ui/situation_0000.S \
                isa/rv32ui/sll_0000.S \
                isa/rv32ui/slt_0000.S \
                isa/rv32ui/slti_0000.S \
                isa/rv32ui/sltiu_0000.S \
                isa/rv32ui/sltu_0000.S \
                isa/rv32ui/sra_0000.S \
                isa/rv32ui/srai_0000.S \
                isa/rv32ui/srl_0000.S \
                isa/rv32ui/srli_0000.S \
                isa/rv32ui/sub_0000.S \
                isa/rv32ui/sw_0000.S \
                isa/rv32ui/testdata_0000.S \
                isa/rv32ui/weak_symbol_0000.S \
                isa/rv32ui/xor_0000.S \
                isa/rv32ui/xori_0000.S

              


endif ## ifeq (m,$(findstring m,$(ARCH_lowercase)))

ifneq (,$(findstring c,$(ARCH_lowercase)))
rv32_isa_tests += isa/rv32uc/rvc.S
endif ## ifeq (m,$(findstring c,$(ARCH_lowercase)))