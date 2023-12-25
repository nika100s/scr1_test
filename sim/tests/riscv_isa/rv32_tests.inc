
ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)


rv32_isa_tests += \
              isa/rv32ui/int_minmax.S   
  

              
ifneq (,$(findstring m,$(ARCH_lowercase)))
rv32_isa_tests += \
              isa/rv32ui/int_minmax.S \
              isa/rv32ui/int_euclid.S \
              isa/rv32ui/int_sqrt.S   \
              isa/rv32ui/int_divide.S \
              isa/rv32ui/addi.S \
              isa/rv32ui/bubblesort_byte.S \
              isa/rv32ui/bubblesort_word.S \
              isa/rv32ui/bubblesort_hword.S 

   
endif ## ifeq (m,$(findstring m,$(ARCH_lowercase)))

ifneq (,$(findstring c,$(ARCH_lowercase)))
rv32_isa_tests += isa/rv32uc/rvc.S
endif ## ifeq (m,$(findstring c,$(ARCH_lowercase)))