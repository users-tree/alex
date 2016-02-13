#-*-makefile-*-   ; force emacs to enter makefile-mode
# ----------------------------------------------------
# %CopyrightBegin%
#
# Copyright Ericsson AB 2009-2013. All Rights Reserved.
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

# The version.
#
# Note that it is important that the version is
# explicitly expressed here. Some applications need to
# be able to check this value *before* configure has
# been run and generated otp_ded.mk
DED_MK_VSN = 1
# ----------------------------------------------------
# Variables needed for building Dynamic Erlang Drivers
# ----------------------------------------------------
DED_CC = gcc
DED_GCC = yes
DED_LD = gcc
DED_LDFLAGS = -m64 -bundle -flat_namespace -undefined suppress
DED__NOWARN_NOTHR_CFLAGS = -O0 -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/x86_64-apple-darwin14.5.0   -D_XOPEN_SOURCE -fPIC -fno-common
DED__NOTHR_CFLAGS = -Wall -Wstrict-prototypes -Wmissing-prototypes -Wdeclaration-after-statement -O0 -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/x86_64-apple-darwin14.5.0   -D_XOPEN_SOURCE -fPIC -fno-common
DED__NOWARN_CFLAGS =  -DUSE_THREADS -D_THREAD_SAFE -D_REENTRANT -DPOSIX_THREADS -O0 -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/x86_64-apple-darwin14.5.0   -D_XOPEN_SOURCE -fPIC -fno-common
DED_THR_DEFS = -DUSE_THREADS  -D_THREAD_SAFE -D_REENTRANT -DPOSIX_THREADS
DED_EMU_THR_DEFS =  -DUSE_THREADS -D_THREAD_SAFE -D_REENTRANT -DPOSIX_THREADS
DED_WARN_FLAGS = -Wall -Wstrict-prototypes -Wmissing-prototypes -Wdeclaration-after-statement
DED_CFLAGS = -Werror=return-type  -Wall -Wstrict-prototypes -Wmissing-prototypes -Wdeclaration-after-statement  -DUSE_THREADS -D_THREAD_SAFE -D_REENTRANT -DPOSIX_THREADS -O0 -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/x86_64-apple-darwin14.5.0   -D_XOPEN_SOURCE -fPIC -fno-common
DED_STATIC_CFLAGS = -Werror=return-type  -Wall -Wstrict-prototypes -Wmissing-prototypes -Wdeclaration-after-statement  -DUSE_THREADS -D_THREAD_SAFE -D_REENTRANT -DPOSIX_THREADS -O0 -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/x86_64-apple-darwin14.5.0   -D_XOPEN_SOURCE -fno-common -DSTATIC_ERLANG_NIF -DSTATIC_ERLANG_DRIVER
DED_LIBS = -lutil -ldl -lm 
DED_EXT = so
ERLANG_OSTYPE = unix
PRIVDIR = ../priv
OBJDIR = $(PRIVDIR)/obj/$(TARGET)
LIBDIR = $(PRIVDIR)/lib/$(TARGET)
DED_SYS_INCLUDE = -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/emulator/beam -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/include -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/include/x86_64-apple-darwin14.5.0 -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/include/internal -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/include/internal/x86_64-apple-darwin14.5.0 -I/Users/z/.kerl/builds/otp-18.2.1/otp_src_18.2.1/erts/emulator/sys/unix
DED_INCLUDES = $(DED_SYS_INCLUDE)
