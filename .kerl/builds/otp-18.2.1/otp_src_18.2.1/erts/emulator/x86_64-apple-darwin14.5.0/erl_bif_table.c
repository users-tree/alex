/*
 *  Warning: Do not edit this file.  It was automatically
 *  generated by 'make_tables' on Thu Dec 31 02:09:59 2015.
 */

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif /* HAVE_CONFIG_H */
#include "export.h"
#include "sys.h"
#include "erl_vm.h"
#include "erl_process.h"
#include "bif.h"
#include "erl_bif_table.h"
#include "erl_atom_table.h"


Export* bif_export[BIF_SIZE];
BifEntry bif_table[] = {
  {am_erlang, am_abs, 1, abs_1, abs_1},
  {am_erlang, am_adler32, 1, adler32_1, wrap_adler32_1},
  {am_erlang, am_adler32, 2, adler32_2, wrap_adler32_2},
  {am_erlang, am_adler32_combine, 3, adler32_combine_3, wrap_adler32_combine_3},
  {am_erlang, am_apply, 3, apply_3, wrap_apply_3},
  {am_erlang, am_atom_to_list, 1, atom_to_list_1, wrap_atom_to_list_1},
  {am_erlang, am_binary_to_list, 1, binary_to_list_1, wrap_binary_to_list_1},
  {am_erlang, am_binary_to_list, 3, binary_to_list_3, wrap_binary_to_list_3},
  {am_erlang, am_binary_to_term, 1, binary_to_term_1, wrap_binary_to_term_1},
  {am_erlang, am_crc32, 1, crc32_1, wrap_crc32_1},
  {am_erlang, am_crc32, 2, crc32_2, wrap_crc32_2},
  {am_erlang, am_crc32_combine, 3, crc32_combine_3, wrap_crc32_combine_3},
  {am_erlang, am_date, 0, date_0, wrap_date_0},
  {am_erlang, am_delete_module, 1, delete_module_1, wrap_delete_module_1},
  {am_erlang, am_display, 1, display_1, wrap_display_1},
  {am_erlang, am_display_string, 1, display_string_1, wrap_display_string_1},
  {am_erlang, am_display_nl, 0, display_nl_0, wrap_display_nl_0},
  {am_erlang, am_element, 2, element_2, element_2},
  {am_erlang, am_erase, 0, erase_0, wrap_erase_0},
  {am_erlang, am_erase, 1, erase_1, wrap_erase_1},
  {am_erlang, am_exit, 1, exit_1, wrap_exit_1},
  {am_erlang, am_exit, 2, exit_2, wrap_exit_2},
  {am_erlang, am_external_size, 1, external_size_1, wrap_external_size_1},
  {am_erlang, am_external_size, 2, external_size_2, wrap_external_size_2},
  {am_erlang, am_float, 1, float_1, float_1},
  {am_erlang, am_float_to_list, 1, float_to_list_1, wrap_float_to_list_1},
  {am_erlang, am_float_to_list, 2, float_to_list_2, wrap_float_to_list_2},
  {am_erlang, am_fun_info, 2, fun_info_2, wrap_fun_info_2},
  {am_erlang, am_garbage_collect, 0, garbage_collect_0, wrap_garbage_collect_0},
  {am_erlang, am_get, 0, get_0, wrap_get_0},
  {am_erlang, am_get, 1, get_1, wrap_get_1},
  {am_erlang, am_get_keys, 1, get_keys_1, wrap_get_keys_1},
  {am_erlang, am_group_leader, 0, group_leader_0, wrap_group_leader_0},
  {am_erlang, am_group_leader, 2, group_leader_2, wrap_group_leader_2},
  {am_erlang, am_halt, 0, halt_0, wrap_halt_0},
  {am_erlang, am_halt, 1, halt_1, wrap_halt_1},
  {am_erlang, am_halt, 2, halt_2, wrap_halt_2},
  {am_erlang, am_phash, 2, phash_2, wrap_phash_2},
  {am_erlang, am_phash2, 1, phash2_1, wrap_phash2_1},
  {am_erlang, am_phash2, 2, phash2_2, wrap_phash2_2},
  {am_erlang, am_hd, 1, hd_1, hd_1},
  {am_erlang, am_integer_to_list, 1, integer_to_list_1, wrap_integer_to_list_1},
  {am_erlang, am_is_alive, 0, is_alive_0, wrap_is_alive_0},
  {am_erlang, am_length, 1, length_1, length_1},
  {am_erlang, am_link, 1, link_1, wrap_link_1},
  {am_erlang, am_list_to_atom, 1, list_to_atom_1, wrap_list_to_atom_1},
  {am_erlang, am_list_to_binary, 1, list_to_binary_1, wrap_list_to_binary_1},
  {am_erlang, am_list_to_float, 1, list_to_float_1, wrap_list_to_float_1},
  {am_erlang, am_list_to_integer, 1, list_to_integer_1, wrap_list_to_integer_1},
  {am_erlang, am_list_to_pid, 1, list_to_pid_1, wrap_list_to_pid_1},
  {am_erlang, am_list_to_tuple, 1, list_to_tuple_1, wrap_list_to_tuple_1},
  {am_erlang, am_loaded, 0, loaded_0, wrap_loaded_0},
  {am_erlang, am_localtime, 0, localtime_0, wrap_localtime_0},
  {am_erlang, am_localtime_to_universaltime, 2, localtime_to_universaltime_2, wrap_localtime_to_universaltime_2},
  {am_erlang, am_make_ref, 0, make_ref_0, wrap_make_ref_0},
  {am_erlang, am_unique_integer, 0, unique_integer_0, wrap_unique_integer_0},
  {am_erlang, am_unique_integer, 1, unique_integer_1, wrap_unique_integer_1},
  {am_erlang, am_md5, 1, md5_1, wrap_md5_1},
  {am_erlang, am_md5_init, 0, md5_init_0, wrap_md5_init_0},
  {am_erlang, am_md5_update, 2, md5_update_2, wrap_md5_update_2},
  {am_erlang, am_md5_final, 1, md5_final_1, wrap_md5_final_1},
  {am_erlang, am_module_loaded, 1, module_loaded_1, wrap_module_loaded_1},
  {am_erlang, am_function_exported, 3, function_exported_3, wrap_function_exported_3},
  {am_erlang, am_monitor_node, 2, monitor_node_2, wrap_monitor_node_2},
  {am_erlang, am_monitor_node, 3, monitor_node_3, wrap_monitor_node_3},
  {am_erlang, am_node, 1, node_1, node_1},
  {am_erlang, am_node, 0, node_0, node_0},
  {am_erlang, am_nodes, 1, nodes_1, wrap_nodes_1},
  {am_erlang, am_now, 0, now_0, wrap_now_0},
  {am_erlang, am_monotonic_time, 0, monotonic_time_0, wrap_monotonic_time_0},
  {am_erlang, am_monotonic_time, 1, monotonic_time_1, wrap_monotonic_time_1},
  {am_erlang, am_system_time, 0, system_time_0, wrap_system_time_0},
  {am_erlang, am_system_time, 1, system_time_1, wrap_system_time_1},
  {am_erlang, am_time_offset, 0, time_offset_0, wrap_time_offset_0},
  {am_erlang, am_time_offset, 1, time_offset_1, wrap_time_offset_1},
  {am_erlang, am_timestamp, 0, timestamp_0, wrap_timestamp_0},
  {am_erlang, am_open_port, 2, open_port_2, wrap_open_port_2},
  {am_erlang, am_pid_to_list, 1, pid_to_list_1, wrap_pid_to_list_1},
  {am_erlang, am_ports, 0, ports_0, wrap_ports_0},
  {am_erlang, am_pre_loaded, 0, pre_loaded_0, wrap_pre_loaded_0},
  {am_erlang, am_process_flag, 2, process_flag_2, wrap_process_flag_2},
  {am_erlang, am_process_flag, 3, process_flag_3, wrap_process_flag_3},
  {am_erlang, am_process_info, 1, process_info_1, wrap_process_info_1},
  {am_erlang, am_process_info, 2, process_info_2, wrap_process_info_2},
  {am_erlang, am_processes, 0, processes_0, wrap_processes_0},
  {am_erlang, am_purge_module, 1, purge_module_1, wrap_purge_module_1},
  {am_erlang, am_put, 2, put_2, wrap_put_2},
  {am_erlang, am_register, 2, register_2, wrap_register_2},
  {am_erlang, am_registered, 0, registered_0, wrap_registered_0},
  {am_erlang, am_round, 1, round_1, round_1},
  {am_erlang, am_self, 0, self_0, self_0},
  {am_erlang, am_setelement, 3, setelement_3, wrap_setelement_3},
  {am_erlang, am_size, 1, size_1, size_1},
  {am_erlang, am_spawn, 3, spawn_3, wrap_spawn_3},
  {am_erlang, am_spawn_link, 3, spawn_link_3, wrap_spawn_link_3},
  {am_erlang, am_split_binary, 2, split_binary_2, wrap_split_binary_2},
  {am_erlang, am_statistics, 1, statistics_1, wrap_statistics_1},
  {am_erlang, am_term_to_binary, 1, term_to_binary_1, wrap_term_to_binary_1},
  {am_erlang, am_term_to_binary, 2, term_to_binary_2, wrap_term_to_binary_2},
  {am_erlang, am_throw, 1, throw_1, wrap_throw_1},
  {am_erlang, am_time, 0, time_0, wrap_time_0},
  {am_erlang, am_tl, 1, tl_1, tl_1},
  {am_erlang, am_trunc, 1, trunc_1, trunc_1},
  {am_erlang, am_tuple_to_list, 1, tuple_to_list_1, wrap_tuple_to_list_1},
  {am_erlang, am_universaltime, 0, universaltime_0, wrap_universaltime_0},
  {am_erlang, am_universaltime_to_localtime, 1, universaltime_to_localtime_1, wrap_universaltime_to_localtime_1},
  {am_erlang, am_unlink, 1, unlink_1, wrap_unlink_1},
  {am_erlang, am_unregister, 1, unregister_1, wrap_unregister_1},
  {am_erlang, am_whereis, 1, whereis_1, wrap_whereis_1},
  {am_erlang, am_spawn_opt, 1, spawn_opt_1, wrap_spawn_opt_1},
  {am_erlang, am_setnode, 2, setnode_2, wrap_setnode_2},
  {am_erlang, am_setnode, 3, setnode_3, wrap_setnode_3},
  {am_erlang, am_dist_exit, 3, dist_exit_3, wrap_dist_exit_3},
  {am_erts_internal, am_port_info, 1, erts_internal_port_info_1, wrap_erts_internal_port_info_1},
  {am_erts_internal, am_port_info, 2, erts_internal_port_info_2, wrap_erts_internal_port_info_2},
  {am_erts_internal, am_port_call, 3, erts_internal_port_call_3, wrap_erts_internal_port_call_3},
  {am_erts_internal, am_port_command, 3, erts_internal_port_command_3, wrap_erts_internal_port_command_3},
  {am_erts_internal, am_port_control, 3, erts_internal_port_control_3, wrap_erts_internal_port_control_3},
  {am_erts_internal, am_port_close, 1, erts_internal_port_close_1, wrap_erts_internal_port_close_1},
  {am_erts_internal, am_port_connect, 2, erts_internal_port_connect_2, wrap_erts_internal_port_connect_2},
  {am_erts_internal, am_request_system_task, 3, erts_internal_request_system_task_3, wrap_erts_internal_request_system_task_3},
  {am_erts_internal, am_check_process_code, 2, erts_internal_check_process_code_2, wrap_erts_internal_check_process_code_2},
  {am_erts_internal, am_map_to_tuple_keys, 1, erts_internal_map_to_tuple_keys_1, wrap_erts_internal_map_to_tuple_keys_1},
  {am_erts_internal, am_map_type, 1, erts_internal_map_type_1, wrap_erts_internal_map_type_1},
  {am_erts_internal, am_map_hashmap_children, 1, erts_internal_map_hashmap_children_1, wrap_erts_internal_map_hashmap_children_1},
  {am_erts_internal, am_time_unit, 0, erts_internal_time_unit_0, wrap_erts_internal_time_unit_0},
  {am_erts_internal, am_is_system_process, 1, erts_internal_is_system_process_1, wrap_erts_internal_is_system_process_1},
  {am_erlang, am_port_set_data, 2, port_set_data_2, wrap_port_set_data_2},
  {am_erlang, am_port_get_data, 1, port_get_data_1, wrap_port_get_data_1},
  {am_erlang, am_trace_pattern, 2, trace_pattern_2, wrap_trace_pattern_2},
  {am_erlang, am_trace_pattern, 3, trace_pattern_3, wrap_trace_pattern_3},
  {am_erlang, am_trace, 3, trace_3, wrap_trace_3},
  {am_erlang, am_trace_info, 2, trace_info_2, wrap_trace_info_2},
  {am_erlang, am_trace_delivered, 1, trace_delivered_1, wrap_trace_delivered_1},
  {am_erlang, am_seq_trace, 2, seq_trace_2, wrap_seq_trace_2},
  {am_erlang, am_seq_trace_info, 1, seq_trace_info_1, wrap_seq_trace_info_1},
  {am_erlang, am_seq_trace_print, 1, seq_trace_print_1, wrap_seq_trace_print_1},
  {am_erlang, am_seq_trace_print, 2, seq_trace_print_2, wrap_seq_trace_print_2},
  {am_erlang, am_suspend_process, 2, suspend_process_2, wrap_suspend_process_2},
  {am_erlang, am_resume_process, 1, resume_process_1, wrap_resume_process_1},
  {am_erlang, am_process_display, 2, process_display_2, wrap_process_display_2},
  {am_erlang, am_bump_reductions, 1, bump_reductions_1, wrap_bump_reductions_1},
  {am_math, am_cos, 1, math_cos_1, wrap_math_cos_1},
  {am_math, am_cosh, 1, math_cosh_1, wrap_math_cosh_1},
  {am_math, am_sin, 1, math_sin_1, wrap_math_sin_1},
  {am_math, am_sinh, 1, math_sinh_1, wrap_math_sinh_1},
  {am_math, am_tan, 1, math_tan_1, wrap_math_tan_1},
  {am_math, am_tanh, 1, math_tanh_1, wrap_math_tanh_1},
  {am_math, am_acos, 1, math_acos_1, wrap_math_acos_1},
  {am_math, am_acosh, 1, math_acosh_1, wrap_math_acosh_1},
  {am_math, am_asin, 1, math_asin_1, wrap_math_asin_1},
  {am_math, am_asinh, 1, math_asinh_1, wrap_math_asinh_1},
  {am_math, am_atan, 1, math_atan_1, wrap_math_atan_1},
  {am_math, am_atanh, 1, math_atanh_1, wrap_math_atanh_1},
  {am_math, am_erf, 1, math_erf_1, wrap_math_erf_1},
  {am_math, am_erfc, 1, math_erfc_1, wrap_math_erfc_1},
  {am_math, am_exp, 1, math_exp_1, wrap_math_exp_1},
  {am_math, am_log, 1, math_log_1, wrap_math_log_1},
  {am_math, am_log2, 1, math_log2_1, wrap_math_log2_1},
  {am_math, am_log10, 1, math_log10_1, wrap_math_log10_1},
  {am_math, am_sqrt, 1, math_sqrt_1, wrap_math_sqrt_1},
  {am_math, am_atan2, 2, math_atan2_2, wrap_math_atan2_2},
  {am_math, am_pow, 2, math_pow_2, wrap_math_pow_2},
  {am_erlang, am_start_timer, 3, start_timer_3, wrap_start_timer_3},
  {am_erlang, am_start_timer, 4, start_timer_4, wrap_start_timer_4},
  {am_erlang, am_send_after, 3, send_after_3, wrap_send_after_3},
  {am_erlang, am_send_after, 4, send_after_4, wrap_send_after_4},
  {am_erlang, am_cancel_timer, 1, cancel_timer_1, wrap_cancel_timer_1},
  {am_erlang, am_cancel_timer, 2, cancel_timer_2, wrap_cancel_timer_2},
  {am_erlang, am_read_timer, 1, read_timer_1, wrap_read_timer_1},
  {am_erlang, am_read_timer, 2, read_timer_2, wrap_read_timer_2},
  {am_erlang, am_make_tuple, 2, make_tuple_2, wrap_make_tuple_2},
  {am_erlang, am_append_element, 2, append_element_2, wrap_append_element_2},
  {am_erlang, am_make_tuple, 3, make_tuple_3, wrap_make_tuple_3},
  {am_erlang, am_system_flag, 2, system_flag_2, wrap_system_flag_2},
  {am_erlang, am_system_info, 1, system_info_1, wrap_system_info_1},
  {am_erlang, am_system_monitor, 0, system_monitor_0, wrap_system_monitor_0},
  {am_erlang, am_system_monitor, 1, system_monitor_1, wrap_system_monitor_1},
  {am_erlang, am_system_monitor, 2, system_monitor_2, wrap_system_monitor_2},
  {am_erlang, am_system_profile, 2, system_profile_2, wrap_system_profile_2},
  {am_erlang, am_system_profile, 0, system_profile_0, wrap_system_profile_0},
  {am_erlang, am_ref_to_list, 1, ref_to_list_1, wrap_ref_to_list_1},
  {am_erlang, am_port_to_list, 1, port_to_list_1, wrap_port_to_list_1},
  {am_erlang, am_fun_to_list, 1, fun_to_list_1, wrap_fun_to_list_1},
  {am_erlang, am_monitor, 2, monitor_2, wrap_monitor_2},
  {am_erlang, am_demonitor, 1, demonitor_1, wrap_demonitor_1},
  {am_erlang, am_demonitor, 2, demonitor_2, wrap_demonitor_2},
  {am_erlang, am_is_process_alive, 1, is_process_alive_1, wrap_is_process_alive_1},
  {am_erlang, am_error, 1, error_1, wrap_error_1},
  {am_erlang, am_error, 2, error_2, wrap_error_2},
  {am_erlang, am_raise, 3, raise_3, wrap_raise_3},
  {am_erlang, am_get_stacktrace, 0, get_stacktrace_0, wrap_get_stacktrace_0},
  {am_erlang, am_is_builtin, 3, is_builtin_3, wrap_is_builtin_3},
  {am_erlang, am_and, 2, and_2, and_2},
  {am_erlang, am_or, 2, or_2, or_2},
  {am_erlang, am_xor, 2, xor_2, xor_2},
  {am_erlang, am_not, 1, not_1, not_1},
  {am_erlang, am_Gt, 2, sgt_2, sgt_2},
  {am_erlang, am_Ge, 2, sge_2, sge_2},
  {am_erlang, am_Lt, 2, slt_2, slt_2},
  {am_erlang, am_Le, 2, sle_2, sle_2},
  {am_erlang, am_Eq, 2, seq_2, seq_2},
  {am_erlang, am_Eqeq, 2, seqeq_2, seqeq_2},
  {am_erlang, am_Neq, 2, sneq_2, sneq_2},
  {am_erlang, am_Neqeq, 2, sneqeq_2, sneqeq_2},
  {am_erlang, am_Plus, 2, splus_2, splus_2},
  {am_erlang, am_Minus, 2, sminus_2, sminus_2},
  {am_erlang, am_Times, 2, stimes_2, stimes_2},
  {am_erlang, am_Div, 2, div_2, div_2},
  {am_erlang, am_div, 2, intdiv_2, intdiv_2},
  {am_erlang, am_rem, 2, rem_2, rem_2},
  {am_erlang, am_bor, 2, bor_2, bor_2},
  {am_erlang, am_band, 2, band_2, band_2},
  {am_erlang, am_bxor, 2, bxor_2, bxor_2},
  {am_erlang, am_bsl, 2, bsl_2, bsl_2},
  {am_erlang, am_bsr, 2, bsr_2, bsr_2},
  {am_erlang, am_bnot, 1, bnot_1, bnot_1},
  {am_erlang, am_Minus, 1, sminus_1, sminus_1},
  {am_erlang, am_Plus, 1, splus_1, splus_1},
  {am_erlang, am__AtomAlias26, 2, ebif_bang_2, wrap_ebif_bang_2},
  {am_erlang, am_send, 2, send_2, wrap_send_2},
  {am_erlang, am_send, 3, send_3, wrap_send_3},
  {am_erlang, am__AtomAlias27, 2, ebif_plusplus_2, wrap_ebif_plusplus_2},
  {am_erlang, am_append, 2, append_2, wrap_append_2},
  {am_erlang, am__AtomAlias28, 2, ebif_minusminus_2, wrap_ebif_minusminus_2},
  {am_erlang, am_subtract, 2, subtract_2, wrap_subtract_2},
  {am_erlang, am_is_atom, 1, is_atom_1, is_atom_1},
  {am_erlang, am_is_list, 1, is_list_1, is_list_1},
  {am_erlang, am_is_tuple, 1, is_tuple_1, is_tuple_1},
  {am_erlang, am_is_float, 1, is_float_1, is_float_1},
  {am_erlang, am_is_integer, 1, is_integer_1, is_integer_1},
  {am_erlang, am_is_number, 1, is_number_1, is_number_1},
  {am_erlang, am_is_pid, 1, is_pid_1, is_pid_1},
  {am_erlang, am_is_port, 1, is_port_1, is_port_1},
  {am_erlang, am_is_reference, 1, is_reference_1, is_reference_1},
  {am_erlang, am_is_binary, 1, is_binary_1, is_binary_1},
  {am_erlang, am_is_function, 1, is_function_1, is_function_1},
  {am_erlang, am_is_function, 2, is_function_2, is_function_2},
  {am_erlang, am_is_record, 2, is_record_2, is_record_2},
  {am_erlang, am_is_record, 3, is_record_3, is_record_3},
  {am_erlang, am_match_spec_test, 3, match_spec_test_3, wrap_match_spec_test_3},
  {am_ets, am_all, 0, ets_all_0, wrap_ets_all_0},
  {am_ets, am_new, 2, ets_new_2, wrap_ets_new_2},
  {am_ets, am_delete, 1, ets_delete_1, wrap_ets_delete_1},
  {am_ets, am_delete, 2, ets_delete_2, wrap_ets_delete_2},
  {am_ets, am_delete_all_objects, 1, ets_delete_all_objects_1, wrap_ets_delete_all_objects_1},
  {am_ets, am_delete_object, 2, ets_delete_object_2, wrap_ets_delete_object_2},
  {am_ets, am_first, 1, ets_first_1, wrap_ets_first_1},
  {am_ets, am_is_compiled_ms, 1, ets_is_compiled_ms_1, wrap_ets_is_compiled_ms_1},
  {am_ets, am_lookup, 2, ets_lookup_2, wrap_ets_lookup_2},
  {am_ets, am_lookup_element, 3, ets_lookup_element_3, wrap_ets_lookup_element_3},
  {am_ets, am_info, 1, ets_info_1, wrap_ets_info_1},
  {am_ets, am_info, 2, ets_info_2, wrap_ets_info_2},
  {am_ets, am_last, 1, ets_last_1, wrap_ets_last_1},
  {am_ets, am_match, 1, ets_match_1, wrap_ets_match_1},
  {am_ets, am_match, 2, ets_match_2, wrap_ets_match_2},
  {am_ets, am_match, 3, ets_match_3, wrap_ets_match_3},
  {am_ets, am_match_object, 1, ets_match_object_1, wrap_ets_match_object_1},
  {am_ets, am_match_object, 2, ets_match_object_2, wrap_ets_match_object_2},
  {am_ets, am_match_object, 3, ets_match_object_3, wrap_ets_match_object_3},
  {am_ets, am_member, 2, ets_member_2, wrap_ets_member_2},
  {am_ets, am_next, 2, ets_next_2, wrap_ets_next_2},
  {am_ets, am_prev, 2, ets_prev_2, wrap_ets_prev_2},
  {am_ets, am_insert, 2, ets_insert_2, wrap_ets_insert_2},
  {am_ets, am_insert_new, 2, ets_insert_new_2, wrap_ets_insert_new_2},
  {am_ets, am_rename, 2, ets_rename_2, wrap_ets_rename_2},
  {am_ets, am_safe_fixtable, 2, ets_safe_fixtable_2, wrap_ets_safe_fixtable_2},
  {am_ets, am_slot, 2, ets_slot_2, wrap_ets_slot_2},
  {am_ets, am_update_counter, 3, ets_update_counter_3, wrap_ets_update_counter_3},
  {am_ets, am_select, 1, ets_select_1, wrap_ets_select_1},
  {am_ets, am_select, 2, ets_select_2, wrap_ets_select_2},
  {am_ets, am_select, 3, ets_select_3, wrap_ets_select_3},
  {am_ets, am_select_count, 2, ets_select_count_2, wrap_ets_select_count_2},
  {am_ets, am_select_reverse, 1, ets_select_reverse_1, wrap_ets_select_reverse_1},
  {am_ets, am_select_reverse, 2, ets_select_reverse_2, wrap_ets_select_reverse_2},
  {am_ets, am_select_reverse, 3, ets_select_reverse_3, wrap_ets_select_reverse_3},
  {am_ets, am_select_delete, 2, ets_select_delete_2, wrap_ets_select_delete_2},
  {am_ets, am_match_spec_compile, 1, ets_match_spec_compile_1, wrap_ets_match_spec_compile_1},
  {am_ets, am_match_spec_run_r, 3, ets_match_spec_run_r_3, wrap_ets_match_spec_run_r_3},
  {am_os, am_putenv, 2, os_putenv_2, wrap_os_putenv_2},
  {am_os, am_getenv, 0, os_getenv_0, wrap_os_getenv_0},
  {am_os, am_getenv, 1, os_getenv_1, wrap_os_getenv_1},
  {am_os, am_getpid, 0, os_getpid_0, wrap_os_getpid_0},
  {am_os, am_timestamp, 0, os_timestamp_0, wrap_os_timestamp_0},
  {am_os, am_system_time, 0, os_system_time_0, wrap_os_system_time_0},
  {am_os, am_system_time, 1, os_system_time_1, wrap_os_system_time_1},
  {am_erl_ddll, am_try_load, 3, erl_ddll_try_load_3, wrap_erl_ddll_try_load_3},
  {am_erl_ddll, am_try_unload, 2, erl_ddll_try_unload_2, wrap_erl_ddll_try_unload_2},
  {am_erl_ddll, am_loaded_drivers, 0, erl_ddll_loaded_drivers_0, wrap_erl_ddll_loaded_drivers_0},
  {am_erl_ddll, am_info, 2, erl_ddll_info_2, wrap_erl_ddll_info_2},
  {am_erl_ddll, am_format_error_int, 1, erl_ddll_format_error_int_1, wrap_erl_ddll_format_error_int_1},
  {am_erl_ddll, am_monitor, 2, erl_ddll_monitor_2, wrap_erl_ddll_monitor_2},
  {am_erl_ddll, am_demonitor, 1, erl_ddll_demonitor_1, wrap_erl_ddll_demonitor_1},
  {am_re, am_compile, 1, re_compile_1, wrap_re_compile_1},
  {am_re, am_compile, 2, re_compile_2, wrap_re_compile_2},
  {am_re, am_run, 2, re_run_2, wrap_re_run_2},
  {am_re, am_run, 3, re_run_3, wrap_re_run_3},
  {am_lists, am_member, 2, lists_member_2, wrap_lists_member_2},
  {am_lists, am_reverse, 2, lists_reverse_2, wrap_lists_reverse_2},
  {am_lists, am_keymember, 3, lists_keymember_3, wrap_lists_keymember_3},
  {am_lists, am_keysearch, 3, lists_keysearch_3, wrap_lists_keysearch_3},
  {am_lists, am_keyfind, 3, lists_keyfind_3, wrap_lists_keyfind_3},
  {am_erts_debug, am_disassemble, 1, erts_debug_disassemble_1, wrap_erts_debug_disassemble_1},
  {am_erts_debug, am_breakpoint, 2, erts_debug_breakpoint_2, wrap_erts_debug_breakpoint_2},
  {am_erts_debug, am_same, 2, erts_debug_same_2, wrap_erts_debug_same_2},
  {am_erts_debug, am_flat_size, 1, erts_debug_flat_size_1, wrap_erts_debug_flat_size_1},
  {am_erts_debug, am_get_internal_state, 1, erts_debug_get_internal_state_1, wrap_erts_debug_get_internal_state_1},
  {am_erts_debug, am_set_internal_state, 2, erts_debug_set_internal_state_2, wrap_erts_debug_set_internal_state_2},
  {am_erts_debug, am_display, 1, erts_debug_display_1, wrap_erts_debug_display_1},
  {am_erts_debug, am_dist_ext_to_term, 2, erts_debug_dist_ext_to_term_2, wrap_erts_debug_dist_ext_to_term_2},
  {am_erts_debug, am_instructions, 0, erts_debug_instructions_0, wrap_erts_debug_instructions_0},
  {am_erts_debug, am_dump_monitors, 1, erts_debug_dump_monitors_1, wrap_erts_debug_dump_monitors_1},
  {am_erts_debug, am_dump_links, 1, erts_debug_dump_links_1, wrap_erts_debug_dump_links_1},
  {am_erts_debug, am_lock_counters, 1, erts_debug_lock_counters_1, wrap_erts_debug_lock_counters_1},
  {am_code, am_get_chunk, 2, code_get_chunk_2, wrap_code_get_chunk_2},
  {am_code, am_module_md5, 1, code_module_md5_1, wrap_code_module_md5_1},
  {am_code, am_make_stub_module, 3, code_make_stub_module_3, wrap_code_make_stub_module_3},
  {am_code, am_is_module_native, 1, code_is_module_native_1, wrap_code_is_module_native_1},
  {am_erlang, am_hibernate, 3, hibernate_3, wrap_hibernate_3},
  {am_error_logger, am_warning_map, 0, error_logger_warning_map_0, wrap_error_logger_warning_map_0},
  {am_erlang, am_get_module_info, 1, get_module_info_1, wrap_get_module_info_1},
  {am_erlang, am_get_module_info, 2, get_module_info_2, wrap_get_module_info_2},
  {am_erlang, am_is_boolean, 1, is_boolean_1, is_boolean_1},
  {am_string, am_to_integer, 1, string_to_integer_1, wrap_string_to_integer_1},
  {am_string, am_to_float, 1, string_to_float_1, wrap_string_to_float_1},
  {am_erlang, am_make_fun, 3, make_fun_3, wrap_make_fun_3},
  {am_erlang, am_iolist_size, 1, iolist_size_1, wrap_iolist_size_1},
  {am_erlang, am_iolist_to_binary, 1, iolist_to_binary_1, wrap_iolist_to_binary_1},
  {am_erlang, am_list_to_existing_atom, 1, list_to_existing_atom_1, wrap_list_to_existing_atom_1},
  {am_erlang, am_is_bitstring, 1, is_bitstring_1, is_bitstring_1},
  {am_erlang, am_tuple_size, 1, tuple_size_1, tuple_size_1},
  {am_erlang, am_byte_size, 1, byte_size_1, byte_size_1},
  {am_erlang, am_bit_size, 1, bit_size_1, bit_size_1},
  {am_erlang, am_list_to_bitstring, 1, list_to_bitstring_1, wrap_list_to_bitstring_1},
  {am_erlang, am_bitstring_to_list, 1, bitstring_to_list_1, wrap_bitstring_to_list_1},
  {am_ets, am_update_element, 3, ets_update_element_3, wrap_ets_update_element_3},
  {am_erlang, am_decode_packet, 3, decode_packet_3, wrap_decode_packet_3},
  {am_unicode, am_characters_to_binary, 2, unicode_characters_to_binary_2, wrap_unicode_characters_to_binary_2},
  {am_unicode, am_characters_to_list, 2, unicode_characters_to_list_2, wrap_unicode_characters_to_list_2},
  {am_unicode, am_bin_is_7bit, 1, unicode_bin_is_7bit_1, wrap_unicode_bin_is_7bit_1},
  {am_erlang, am_atom_to_binary, 2, atom_to_binary_2, wrap_atom_to_binary_2},
  {am_erlang, am_binary_to_atom, 2, binary_to_atom_2, wrap_binary_to_atom_2},
  {am_erlang, am_binary_to_existing_atom, 2, binary_to_existing_atom_2, wrap_binary_to_existing_atom_2},
  {am_net_kernel, am_dflag_unicode_io, 1, net_kernel_dflag_unicode_io_1, wrap_net_kernel_dflag_unicode_io_1},
  {am_ets, am_give_away, 3, ets_give_away_3, wrap_ets_give_away_3},
  {am_ets, am_setopts, 2, ets_setopts_2, wrap_ets_setopts_2},
  {am_erlang, am_load_nif, 2, load_nif_2, wrap_load_nif_2},
  {am_erlang, am_call_on_load_function, 1, call_on_load_function_1, wrap_call_on_load_function_1},
  {am_erlang, am_finish_after_on_load, 2, finish_after_on_load_2, wrap_finish_after_on_load_2},
  {am_erlang, am_binary_to_term, 2, binary_to_term_2, wrap_binary_to_term_2},
  {am_erlang, am_binary_part, 2, binary_part_2, binary_part_2},
  {am_erlang, am_binary_part, 3, binary_part_3, binary_part_3},
  {am_binary, am_compile_pattern, 1, binary_compile_pattern_1, wrap_binary_compile_pattern_1},
  {am_binary, am_match, 2, binary_match_2, wrap_binary_match_2},
  {am_binary, am_match, 3, binary_match_3, wrap_binary_match_3},
  {am_binary, am_matches, 2, binary_matches_2, wrap_binary_matches_2},
  {am_binary, am_matches, 3, binary_matches_3, wrap_binary_matches_3},
  {am_binary, am_longest_common_prefix, 1, binary_longest_common_prefix_1, wrap_binary_longest_common_prefix_1},
  {am_binary, am_longest_common_suffix, 1, binary_longest_common_suffix_1, wrap_binary_longest_common_suffix_1},
  {am_binary, am_first, 1, binary_first_1, wrap_binary_first_1},
  {am_binary, am_last, 1, binary_last_1, wrap_binary_last_1},
  {am_binary, am_at, 2, binary_at_2, wrap_binary_at_2},
  {am_binary, am_part, 2, binary_binary_part_2, wrap_binary_binary_part_2},
  {am_binary, am_part, 3, binary_binary_part_3, wrap_binary_binary_part_3},
  {am_binary, am_bin_to_list, 1, binary_bin_to_list_1, wrap_binary_bin_to_list_1},
  {am_binary, am_bin_to_list, 2, binary_bin_to_list_2, wrap_binary_bin_to_list_2},
  {am_binary, am_bin_to_list, 3, binary_bin_to_list_3, wrap_binary_bin_to_list_3},
  {am_binary, am_list_to_bin, 1, binary_list_to_bin_1, wrap_binary_list_to_bin_1},
  {am_binary, am_copy, 1, binary_copy_1, wrap_binary_copy_1},
  {am_binary, am_copy, 2, binary_copy_2, wrap_binary_copy_2},
  {am_binary, am_referenced_byte_size, 1, binary_referenced_byte_size_1, wrap_binary_referenced_byte_size_1},
  {am_binary, am_encode_unsigned, 1, binary_encode_unsigned_1, wrap_binary_encode_unsigned_1},
  {am_binary, am_encode_unsigned, 2, binary_encode_unsigned_2, wrap_binary_encode_unsigned_2},
  {am_binary, am_decode_unsigned, 1, binary_decode_unsigned_1, wrap_binary_decode_unsigned_1},
  {am_binary, am_decode_unsigned, 2, binary_decode_unsigned_2, wrap_binary_decode_unsigned_2},
  {am_erlang, am_nif_error, 1, nif_error_1, wrap_nif_error_1},
  {am_erlang, am_nif_error, 2, nif_error_2, wrap_nif_error_2},
  {am_prim_file, am_internal_name2native, 1, prim_file_internal_name2native_1, wrap_prim_file_internal_name2native_1},
  {am_prim_file, am_internal_native2name, 1, prim_file_internal_native2name_1, wrap_prim_file_internal_native2name_1},
  {am_prim_file, am_internal_normalize_utf8, 1, prim_file_internal_normalize_utf8_1, wrap_prim_file_internal_normalize_utf8_1},
  {am_prim_file, am_is_translatable, 1, prim_file_is_translatable_1, wrap_prim_file_is_translatable_1},
  {am_file, am_native_name_encoding, 0, file_native_name_encoding_0, wrap_file_native_name_encoding_0},
  {am_erlang, am_check_old_code, 1, check_old_code_1, wrap_check_old_code_1},
  {am_erlang, am_universaltime_to_posixtime, 1, universaltime_to_posixtime_1, wrap_universaltime_to_posixtime_1},
  {am_erlang, am_posixtime_to_universaltime, 1, posixtime_to_universaltime_1, wrap_posixtime_to_universaltime_1},
  {am_erlang, am_dt_put_tag, 1, dt_put_tag_1, wrap_dt_put_tag_1},
  {am_erlang, am_dt_get_tag, 0, dt_get_tag_0, wrap_dt_get_tag_0},
  {am_erlang, am_dt_get_tag_data, 0, dt_get_tag_data_0, wrap_dt_get_tag_data_0},
  {am_erlang, am_dt_spread_tag, 1, dt_spread_tag_1, wrap_dt_spread_tag_1},
  {am_erlang, am_dt_restore_tag, 1, dt_restore_tag_1, wrap_dt_restore_tag_1},
  {am_erlang, am_dt_prepend_vm_tag_data, 1, dt_prepend_vm_tag_data_1, wrap_dt_prepend_vm_tag_data_1},
  {am_erlang, am_dt_append_vm_tag_data, 1, dt_append_vm_tag_data_1, wrap_dt_append_vm_tag_data_1},
  {am_erlang, am_prepare_loading, 2, prepare_loading_2, wrap_prepare_loading_2},
  {am_erlang, am_finish_loading, 1, finish_loading_1, wrap_finish_loading_1},
  {am_erlang, am_insert_element, 3, insert_element_3, wrap_insert_element_3},
  {am_erlang, am_delete_element, 2, delete_element_2, wrap_delete_element_2},
  {am_erlang, am_binary_to_integer, 1, binary_to_integer_1, wrap_binary_to_integer_1},
  {am_erlang, am_binary_to_integer, 2, binary_to_integer_2, wrap_binary_to_integer_2},
  {am_erlang, am_integer_to_binary, 1, integer_to_binary_1, wrap_integer_to_binary_1},
  {am_erlang, am_list_to_integer, 2, list_to_integer_2, wrap_list_to_integer_2},
  {am_erlang, am_float_to_binary, 1, float_to_binary_1, wrap_float_to_binary_1},
  {am_erlang, am_float_to_binary, 2, float_to_binary_2, wrap_float_to_binary_2},
  {am_erlang, am_binary_to_float, 1, binary_to_float_1, wrap_binary_to_float_1},
  {am_io, am_printable_range, 0, io_printable_range_0, wrap_io_printable_range_0},
  {am_os, am_unsetenv, 1, os_unsetenv_1, wrap_os_unsetenv_1},
  {am_re, am_inspect, 2, re_inspect_2, wrap_re_inspect_2},
  {am_erlang, am_is_map, 1, is_map_1, is_map_1},
  {am_erlang, am_map_size, 1, map_size_1, map_size_1},
  {am_maps, am_to_list, 1, maps_to_list_1, wrap_maps_to_list_1},
  {am_maps, am_find, 2, maps_find_2, wrap_maps_find_2},
  {am_maps, am_get, 2, maps_get_2, wrap_maps_get_2},
  {am_maps, am_from_list, 1, maps_from_list_1, wrap_maps_from_list_1},
  {am_maps, am_is_key, 2, maps_is_key_2, wrap_maps_is_key_2},
  {am_maps, am_keys, 1, maps_keys_1, wrap_maps_keys_1},
  {am_maps, am_merge, 2, maps_merge_2, wrap_maps_merge_2},
  {am_maps, am_new, 0, maps_new_0, wrap_maps_new_0},
  {am_maps, am_put, 3, maps_put_3, wrap_maps_put_3},
  {am_maps, am_remove, 2, maps_remove_2, wrap_maps_remove_2},
  {am_maps, am_update, 3, maps_update_3, wrap_maps_update_3},
  {am_maps, am_values, 1, maps_values_1, wrap_maps_values_1},
  {am_erts_internal, am_cmp_term, 2, erts_internal_cmp_term_2, wrap_erts_internal_cmp_term_2},
  {am_ets, am_take, 2, ets_take_2, wrap_ets_take_2},
  {am_erlang, am_fun_info_mfa, 1, fun_info_mfa_1, wrap_fun_info_mfa_1},
  {am_erlang, am_get_keys, 0, get_keys_0, wrap_get_keys_0},
  {am_ets, am_update_counter, 4, ets_update_counter_4, wrap_ets_update_counter_4},
  {am_erts_debug, am_map_info, 1, erts_debug_map_info_1, wrap_erts_debug_map_info_1},
  {am_erlang, am_hash, 2, hash_2, wrap_hash_2},
  {am_hipe_bifs, am_write_u8, 2, hipe_bifs_write_u8_2, wrap_hipe_bifs_write_u8_2},
  {am_hipe_bifs, am_write_u32, 2, hipe_bifs_write_u32_2, wrap_hipe_bifs_write_u32_2},
  {am_hipe_bifs, am_bytearray, 2, hipe_bifs_bytearray_2, wrap_hipe_bifs_bytearray_2},
  {am_hipe_bifs, am_bytearray_sub, 2, hipe_bifs_bytearray_sub_2, wrap_hipe_bifs_bytearray_sub_2},
  {am_hipe_bifs, am_bytearray_update, 3, hipe_bifs_bytearray_update_3, wrap_hipe_bifs_bytearray_update_3},
  {am_hipe_bifs, am_bitarray, 2, hipe_bifs_bitarray_2, wrap_hipe_bifs_bitarray_2},
  {am_hipe_bifs, am_bitarray_sub, 2, hipe_bifs_bitarray_sub_2, wrap_hipe_bifs_bitarray_sub_2},
  {am_hipe_bifs, am_bitarray_update, 3, hipe_bifs_bitarray_update_3, wrap_hipe_bifs_bitarray_update_3},
  {am_hipe_bifs, am_array, 2, hipe_bifs_array_2, wrap_hipe_bifs_array_2},
  {am_hipe_bifs, am_array_length, 1, hipe_bifs_array_length_1, wrap_hipe_bifs_array_length_1},
  {am_hipe_bifs, am_array_sub, 2, hipe_bifs_array_sub_2, wrap_hipe_bifs_array_sub_2},
  {am_hipe_bifs, am_array_update, 3, hipe_bifs_array_update_3, wrap_hipe_bifs_array_update_3},
  {am_hipe_bifs, am_ref, 1, hipe_bifs_ref_1, wrap_hipe_bifs_ref_1},
  {am_hipe_bifs, am_ref_get, 1, hipe_bifs_ref_get_1, wrap_hipe_bifs_ref_get_1},
  {am_hipe_bifs, am_ref_set, 2, hipe_bifs_ref_set_2, wrap_hipe_bifs_ref_set_2},
  {am_hipe_bifs, am_enter_code, 2, hipe_bifs_enter_code_2, wrap_hipe_bifs_enter_code_2},
  {am_hipe_bifs, am_alloc_data, 2, hipe_bifs_alloc_data_2, wrap_hipe_bifs_alloc_data_2},
  {am_hipe_bifs, am_constants_size, 0, hipe_bifs_constants_size_0, wrap_hipe_bifs_constants_size_0},
  {am_hipe_bifs, am_merge_term, 1, hipe_bifs_merge_term_1, wrap_hipe_bifs_merge_term_1},
  {am_hipe_bifs, am_fun_to_address, 1, hipe_bifs_fun_to_address_1, wrap_hipe_bifs_fun_to_address_1},
  {am_hipe_bifs, am_set_native_address, 3, hipe_bifs_set_native_address_3, wrap_hipe_bifs_set_native_address_3},
  {am_hipe_bifs, am_set_funinfo_native_address, 3, hipe_bifs_set_funinfo_native_address_3, wrap_hipe_bifs_set_funinfo_native_address_3},
  {am_hipe_bifs, am_invalidate_funinfo_native_addresses, 1, hipe_bifs_invalidate_funinfo_native_addresses_1, wrap_hipe_bifs_invalidate_funinfo_native_addresses_1},
  {am_hipe_bifs, am_update_code_size, 3, hipe_bifs_update_code_size_3, wrap_hipe_bifs_update_code_size_3},
  {am_hipe_bifs, am_code_size, 1, hipe_bifs_code_size_1, wrap_hipe_bifs_code_size_1},
  {am_hipe_bifs, am_enter_sdesc, 1, hipe_bifs_enter_sdesc_1, wrap_hipe_bifs_enter_sdesc_1},
  {am_hipe_bifs, am_bif_address, 3, hipe_bifs_bif_address_3, wrap_hipe_bifs_bif_address_3},
  {am_hipe_bifs, am_primop_address, 1, hipe_bifs_primop_address_1, wrap_hipe_bifs_primop_address_1},
  {am_hipe_bifs, am_atom_to_word, 1, hipe_bifs_atom_to_word_1, wrap_hipe_bifs_atom_to_word_1},
  {am_hipe_bifs, am_term_to_word, 1, hipe_bifs_term_to_word_1, wrap_hipe_bifs_term_to_word_1},
  {am_hipe_bifs, am_get_fe, 2, hipe_bifs_get_fe_2, wrap_hipe_bifs_get_fe_2},
  {am_hipe_bifs, am_set_native_address_in_fe, 2, hipe_bifs_set_native_address_in_fe_2, wrap_hipe_bifs_set_native_address_in_fe_2},
  {am_hipe_bifs, am_find_na_or_make_stub, 2, hipe_bifs_find_na_or_make_stub_2, wrap_hipe_bifs_find_na_or_make_stub_2},
  {am_hipe_bifs, am_check_crc, 1, hipe_bifs_check_crc_1, wrap_hipe_bifs_check_crc_1},
  {am_hipe_bifs, am_system_crc, 0, hipe_bifs_system_crc_0, wrap_hipe_bifs_system_crc_0},
  {am_hipe_bifs, am_get_rts_param, 1, hipe_bifs_get_rts_param_1, wrap_hipe_bifs_get_rts_param_1},
  {am_hipe_bifs, am_patch_insn, 3, hipe_bifs_patch_insn_3, wrap_hipe_bifs_patch_insn_3},
  {am_hipe_bifs, am_patch_call, 3, hipe_bifs_patch_call_3, wrap_hipe_bifs_patch_call_3},
  {am_hipe_bifs, am_add_ref, 2, hipe_bifs_add_ref_2, wrap_hipe_bifs_add_ref_2},
  {am_hipe_bifs, am_mark_referred_from, 1, hipe_bifs_mark_referred_from_1, wrap_hipe_bifs_mark_referred_from_1},
  {am_hipe_bifs, am_remove_refs_from, 1, hipe_bifs_remove_refs_from_1, wrap_hipe_bifs_remove_refs_from_1},
  {am_hipe_bifs, am_redirect_referred_from, 1, hipe_bifs_redirect_referred_from_1, wrap_hipe_bifs_redirect_referred_from_1},
  {am_hipe_bifs, am_call_count_on, 1, hipe_bifs_call_count_on_1, wrap_hipe_bifs_call_count_on_1},
  {am_hipe_bifs, am_call_count_off, 1, hipe_bifs_call_count_off_1, wrap_hipe_bifs_call_count_off_1},
  {am_hipe_bifs, am_call_count_get, 1, hipe_bifs_call_count_get_1, wrap_hipe_bifs_call_count_get_1},
  {am_hipe_bifs, am_call_count_clear, 1, hipe_bifs_call_count_clear_1, wrap_hipe_bifs_call_count_clear_1},
  {am_hipe_bifs, am_trap_count_get, 0, hipe_bifs_trap_count_get_0, wrap_hipe_bifs_trap_count_get_0},
  {am_hipe_bifs, am_trap_count_clear, 0, hipe_bifs_trap_count_clear_0, wrap_hipe_bifs_trap_count_clear_0},
  {am_hipe_bifs, am_process_info, 0, hipe_bifs_process_info_0, wrap_hipe_bifs_process_info_0},
  {am_hipe_bifs, am_process_info_clear, 0, hipe_bifs_process_info_clear_0, wrap_hipe_bifs_process_info_clear_0},
  {am_hipe_bifs, am_message_info, 0, hipe_bifs_message_info_0, wrap_hipe_bifs_message_info_0},
  {am_hipe_bifs, am_message_info_clear, 0, hipe_bifs_message_info_clear_0, wrap_hipe_bifs_message_info_clear_0},
  {am_hipe_bifs, am_message_sizes, 0, hipe_bifs_message_sizes_0, wrap_hipe_bifs_message_sizes_0},
  {am_hipe_bifs, am_gc_info, 0, hipe_bifs_gc_info_0, wrap_hipe_bifs_gc_info_0},
  {am_hipe_bifs, am_shared_gc_info, 0, hipe_bifs_shared_gc_info_0, wrap_hipe_bifs_shared_gc_info_0},
  {am_hipe_bifs, am_incremental_gc_info, 0, hipe_bifs_incremental_gc_info_0, wrap_hipe_bifs_incremental_gc_info_0},
  {am_hipe_bifs, am_gc_info_clear, 0, hipe_bifs_gc_info_clear_0, wrap_hipe_bifs_gc_info_clear_0},
  {am_hipe_bifs, am_pause_times, 0, hipe_bifs_pause_times_0, wrap_hipe_bifs_pause_times_0},
  {am_hipe_bifs, am_system_timer, 0, hipe_bifs_system_timer_0, wrap_hipe_bifs_system_timer_0},
  {am_hipe_bifs, am_system_timer_clear, 0, hipe_bifs_system_timer_clear_0, wrap_hipe_bifs_system_timer_clear_0},
  {am_hipe_bifs, am_send_timer, 0, hipe_bifs_send_timer_0, wrap_hipe_bifs_send_timer_0},
  {am_hipe_bifs, am_send_timer_clear, 0, hipe_bifs_send_timer_clear_0, wrap_hipe_bifs_send_timer_clear_0},
  {am_hipe_bifs, am_gc_timer, 0, hipe_bifs_gc_timer_0, wrap_hipe_bifs_gc_timer_0},
  {am_hipe_bifs, am_shared_gc_timer, 0, hipe_bifs_shared_gc_timer_0, wrap_hipe_bifs_shared_gc_timer_0},
  {am_hipe_bifs, am_gc_timer_clear, 0, hipe_bifs_gc_timer_clear_0, wrap_hipe_bifs_gc_timer_clear_0},
  {am_hipe_bifs, am_misc_timer, 0, hipe_bifs_misc_timer_0, wrap_hipe_bifs_misc_timer_0},
  {am_hipe_bifs, am_misc_timer_clear, 0, hipe_bifs_misc_timer_clear_0, wrap_hipe_bifs_misc_timer_clear_0},
  {am_hipe_bifs, am_get_hrvtime, 0, hipe_bifs_get_hrvtime_0, wrap_hipe_bifs_get_hrvtime_0},
  {am_hipe_bifs, am_stop_hrvtime, 0, hipe_bifs_stop_hrvtime_0, wrap_hipe_bifs_stop_hrvtime_0},
  {am_hipe_bifs, am_show_estack, 1, hipe_bifs_show_estack_1, wrap_hipe_bifs_show_estack_1},
  {am_hipe_bifs, am_show_heap, 1, hipe_bifs_show_heap_1, wrap_hipe_bifs_show_heap_1},
  {am_hipe_bifs, am_show_nstack, 1, hipe_bifs_show_nstack_1, wrap_hipe_bifs_show_nstack_1},
  {am_hipe_bifs, am_nstack_used_size, 0, hipe_bifs_nstack_used_size_0, wrap_hipe_bifs_nstack_used_size_0},
  {am_hipe_bifs, am_show_pcb, 1, hipe_bifs_show_pcb_1, wrap_hipe_bifs_show_pcb_1},
  {am_hipe_bifs, am_show_term, 1, hipe_bifs_show_term_1, wrap_hipe_bifs_show_term_1},
  {am_hipe_bifs, am_in_native, 0, hipe_bifs_in_native_0, wrap_hipe_bifs_in_native_0},
  {am_hipe_bifs, am_modeswitch_debug_on, 0, hipe_bifs_modeswitch_debug_on_0, wrap_hipe_bifs_modeswitch_debug_on_0},
  {am_hipe_bifs, am_modeswitch_debug_off, 0, hipe_bifs_modeswitch_debug_off_0, wrap_hipe_bifs_modeswitch_debug_off_0},
  {am_hipe_bifs, am_debug_native_called, 2, hipe_bifs_debug_native_called_2, wrap_hipe_bifs_debug_native_called_2},
  {am_hipe_bifs, am_llvm_fix_pinned_regs, 0, hipe_bifs_llvm_fix_pinned_regs_0, wrap_hipe_bifs_llvm_fix_pinned_regs_0},
  {am_hipe_bifs, am_write_u64, 2, hipe_bifs_write_u64_2, wrap_hipe_bifs_write_u64_2},
};

