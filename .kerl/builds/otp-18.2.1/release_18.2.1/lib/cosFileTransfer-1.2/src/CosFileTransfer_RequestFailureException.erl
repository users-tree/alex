%%  coding: latin-1
%%------------------------------------------------------------
%%
%% Implementation stub file
%% 
%% Target: CosFileTransfer_RequestFailureException
%% Source: /net/isildur/ldisk/daily_build/18_prebuild_opu_o.2015-12-17_21/otp_src_18/lib/cosFileTransfer/src/CosFileTransfer.idl
%% IC vsn: 4.4
%% 
%% This file is automatically generated. DO NOT EDIT IT.
%%
%%------------------------------------------------------------

-module('CosFileTransfer_RequestFailureException').
-ic_compiled("4_4").


-include("CosFileTransfer.hrl").

-export([tc/0,id/0,name/0]).



%% returns type code
tc() -> {tk_except,"IDL:omg.org/CosFileTransfer/RequestFailureException:1.0",
                   "RequestFailureException",
                   [{"reason",{tk_string,0}}]}.

%% returns id
id() -> "IDL:omg.org/CosFileTransfer/RequestFailureException:1.0".

%% returns name
name() -> "CosFileTransfer_RequestFailureException".



