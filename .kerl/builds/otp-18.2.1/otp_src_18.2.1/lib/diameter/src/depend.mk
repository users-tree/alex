$(EBIN)/diameter.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_callback.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_capx.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_capx.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_config.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_config.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_codec.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_codec.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_peer.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_peer.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_peer_fsm.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_peer_fsm.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_reg.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_service.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_service.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_stats.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_sync.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_traffic.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_traffic.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_types.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_watchdog.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_watchdog.$(EMULATOR): diameter_internal.hrl
$(EBIN)/diameter_tcp.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_sctp.$(EMULATOR): $(INCDIR)/diameter.hrl
$(EBIN)/diameter_codegen.$(EMULATOR): diameter_forms.hrl
$(EBIN)/diameter_codegen.$(EMULATOR): diameter_vsn.hrl
$(EBIN)/diameter_exprecs.$(EMULATOR): diameter_forms.hrl
$(EBIN)/diameter_dict_util.$(EMULATOR): diameter_vsn.hrl
$(EBIN)/diameter_make.$(EMULATOR): diameter_vsn.hrl
$(EBIN)/diameter_dbg.$(EMULATOR): $(INCDIR)/diameter.hrl
