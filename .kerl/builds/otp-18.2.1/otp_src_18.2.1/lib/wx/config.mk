#
# %CopyrightBegin%
# 
# Copyright Ericsson AB 2009. All Rights Reserved.
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
INSIDE_ERLSRC	 = true
SYS_TYPE	 = x86_64-apple-darwin14.5.0
CAN_BUILD_DRIVER = true

VSN = $(WX_VSN)

ifeq ($(INSIDE_ERLSRC), true)

include $(ERL_TOP)/make/target.mk
include $(ERL_TOP)/make/$(TARGET)/otp.mk

RELSYSDIR = $(RELEASE_PATH)/lib/wx-$(VSN)

else
INSTALLDIR=/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/lib
endif

