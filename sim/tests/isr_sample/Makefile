src_dir := $(dir $(lastword $(MAKEFILE_LIST)))

LDFLAGS := -nostartfiles -nostdlib -march=rv32$(ARCH)_zicsr_zifencei -mabi=$(ABI)
ADD_ASM_MACRO := -DASM

ifeq ($(IPIC) ,1)
    ADD_ASM_MACRO += -DIPIC_ENABLED
endif

ifeq ($(VECT_IRQ) ,1)
    ADD_ASM_MACRO += -DVECT_IRQ_ENABLED
endif
asm_src := int_divide.s

# override ld script
ld_script := int_divide.ld

include $(inc_dir)/common.mk

default: log_requested_tgt $(bld_dir)/int_divide.elf $(bld_dir)/int_divide.hex $(bld_dir)/int_divide.dump

log_requested_tgt:
	echo int_divide.hex >> $(bld_dir)/test_info

clean:
	$(RM)$(asm_objs) $(bld_dir)/int_divide.elf $(bld_dir)/int_divide.hex $(bld_dir)/int_divide.dump
