#
# %CopyrightBegin%
# 
# Copyright Ericsson AB 1997-2012. All Rights Reserved.
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
#
include $(ERL_TOP)/make/target.mk
include $(ERL_TOP)/make/$(TARGET)/otp.mk

CXX = c++
CC = gcc
LIBS = -lutil -ldl -lm 

OBJDIR = ../priv/obj/$(TARGET)

# ----------------------------------------------------
# Application version
# ----------------------------------------------------
include ../vsn.mk
VSN=$(ORBER_VSN)

# ----------------------------------------------------
# Release directory specification
# ----------------------------------------------------
RELSYSDIR = $(RELEASE_PATH)/lib/orber-$(VSN)

# ----------------------------------------------------
# Target Specs
# ----------------------------------------------------
CC_FILES = \
	InitialReference.cc

HH_FILES = \
	InitialReference.hh

ALL_CFLAGS = -Werror=return-type  -O0 -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/x86_64-apple-darwin14.5.0   -D_XOPEN_SOURCE -DHAVE_CONFIG_H $(CFLAGS) 

# ----------------------------------------------------
# Targets
# ----------------------------------------------------

debug opt: $(OBJDIR) orber

ifeq ($(findstring win32,$(TARGET)),win32)
orber: 
	$(V_colon)echo "Nothing to build on NT"
else
orber: 
	$(V_colon)echo "Nothing to build"
endif

clean:

docs:

# ----------------------------------------------------
# Special Build Targets
# ----------------------------------------------------

$(OBJDIR):
	-mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c
	$(V_CC) -c -o $@ $(ALL_CFLAGS) $<

# ----------------------------------------------------
# Release Target
# ---------------------------------------------------- 
include $(ERL_TOP)/make/otp_release_targets.mk

ifeq ($(findstring win32,$(TARGET)),win32)
release_spec: opt
	$(INSTALL_DIR) "$(RELSYSDIR)/priv/src"
	$(INSTALL_DIR) "$(RELSYSDIR)/priv/include"
	$(INSTALL_PROGRAM) $(CC_FILES) "$(RELSYSDIR)/priv/src"
	$(INSTALL_PROGRAM) $(HH_FILES) "$(RELSYSDIR)/priv/include"
else
release_spec: opt
	$(INSTALL_DIR) "$(RELSYSDIR)/priv/src"
	$(INSTALL_DIR) "$(RELSYSDIR)/priv/include"
	$(INSTALL_DATA) $(CC_FILES) "$(RELSYSDIR)/priv/src"
	$(INSTALL_DATA) $(HH_FILES) "$(RELSYSDIR)/priv/include"
endif


release_docs_spec:
