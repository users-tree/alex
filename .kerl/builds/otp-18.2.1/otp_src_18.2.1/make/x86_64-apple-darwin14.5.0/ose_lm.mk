#-*-makefile-*-   ; force emacs to enter makefile-mode
# ----------------------------------------------------
# Template target for generating an OSE5 load module
#
# %CopyrightBegin%
#
# Copyright Ericsson AB 2013. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# %CopyrightEnd%
#
# Author: Petre Pircalabu
# ----------------------------------------------------

# ----------------------------------------------------
# 	build-ose-load-module
#	Creates an OSE5 load module
#	params:
#		$(1) - The output target
#		$(2) - Objects
#		$(3) - Libraries
#		$(4) - LM configuration file
# ----------------------------------------------------

ifeq ($(findstring ose,$(TARGET)),ose)
LDR1FLAGS    = 
LDR2FLAGS    = 
OSEROOT	     = 
LCF	     = 
BEAM_LMCONF  = 
EPMD_LMCONF  = 
RUN_ERL_LMCONF = 
STRIP	     = 
LM_POST_LINK = 
LM_SET_CONF  = 
LM_ELF_SIZE  = 
OSE_CONFD    = 
CRT0_LM      = 
endif

define build-ose-load-module
	@echo " --- Linking $(1)"

	@echo " --- Linking $(1) (pass 1)"
	$(ld_verbose)$(PURIFY) $(LD) -o $(1)_unconfigured_ro -r \
	$(2) --start-group $(3) --end-group --cref --discard-none -M >  $(1)_1.map

	@echo " --- Linking $(1) (pass 2)"
	$(ld_verbose)$(PURIFY) $(LD) -o $(1)_unconfigured \
	$(1)_unconfigured_ro -T $(LCF) -n --emit-relocs -e crt0_lm --cref \
	--discard-none -M >  $(1)_2.map

	@echo " --- Inserting configuration"
	$(ld_verbose) $(LM_SET_CONF) $(1)_unconfigured < $(4)

	@echo " --- Striping $(1)"
#	$(ld_verbose) $(STRIP) $(1)_unconfigured

	@echo " --- Postlinking $(1)"
	$(ld_verbose) $(LM_POST_LINK) $(1)_unconfigured

	@echo " --- Sizing $(1)"
	$(ld_verbose) $(LM_ELF_SIZE) $(1)_unconfigured
	mv $(1)_unconfigured $(1)
endef
