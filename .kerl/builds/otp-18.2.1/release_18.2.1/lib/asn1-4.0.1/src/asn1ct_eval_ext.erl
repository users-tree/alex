%% Generated by prepare_templates. DO NOT EDIT THIS FILE.
%%
%% Input file: asn1ct_eval_ext.funcs

-module(asn1ct_eval_ext).
-export([transform_to_EXTERNAL1994/1]).

transform_to_EXTERNAL1994({'EXTERNAL',DRef,IndRef,Data_v_desc,Encoding} =
                              V) ->
    Identification =
        case {DRef,IndRef} of
            {DRef,asn1_NOVALUE} ->
                {syntax,DRef};
            {asn1_NOVALUE,IndRef} ->
                {'presentation-context-id',IndRef};
            _ ->
                {'context-negotiation',
                 {'EXTERNAL_identification_context-negotiation',
                  IndRef,
                  DRef}}
        end,
    case Encoding of
        {'octet-aligned',Val} when is_list(Val); is_binary(Val) ->
            {'EXTERNAL',Identification,Data_v_desc,Val};
        _ ->
            V
    end.
