#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(ieee80211_restart_hw, "", "");
KSYMTAB_FUNC(ieee80211_alloc_hw_nm, "", "");
KSYMTAB_FUNC(ieee80211_register_hw, "", "");
KSYMTAB_FUNC(ieee80211_unregister_hw, "", "");
KSYMTAB_FUNC(ieee80211_free_hw, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_skb, "", "");
KSYMTAB_FUNC(ieee80211_tx_status_ext, "", "");
KSYMTAB_FUNC(ieee80211_tx_rate_update, "", "");
KSYMTAB_FUNC(ieee80211_report_low_ack, "", "");
KSYMTAB_FUNC(ieee80211_free_txskb, "", "");
KSYMTAB_FUNC(ieee80211_find_sta_by_link_addrs, "_gpl", "");
KSYMTAB_FUNC(ieee80211_find_sta_by_ifaddr, "_gpl", "");
KSYMTAB_FUNC(ieee80211_find_sta, "", "");
KSYMTAB_FUNC(ieee80211_sta_block_awake, "", "");
KSYMTAB_FUNC(ieee80211_sta_eosp, "", "");
KSYMTAB_FUNC(ieee80211_send_eosp_nullfunc, "", "");
KSYMTAB_FUNC(ieee80211_sta_set_buffered, "", "");
KSYMTAB_FUNC(ieee80211_sta_register_airtime, "", "");
KSYMTAB_FUNC(ieee80211_sta_recalc_aggregates, "", "");
KSYMTAB_FUNC(ieee80211_scan_completed, "", "");
KSYMTAB_FUNC(ieee80211_sched_scan_results, "", "");
KSYMTAB_FUNC(ieee80211_sched_scan_stopped, "", "");
KSYMTAB_FUNC(ieee80211_ready_on_channel, "_gpl", "");
KSYMTAB_FUNC(ieee80211_remain_on_channel_expired, "_gpl", "");
KSYMTAB_FUNC(ieee80211_request_smps, "_gpl", "");
KSYMTAB_FUNC(ieee80211_send_bar, "", "");
KSYMTAB_FUNC(ieee80211_refresh_tx_agg_session_timer, "", "");
KSYMTAB_FUNC(ieee80211_start_tx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_start_tx_ba_cb_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_stop_tx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_stop_tx_ba_cb_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_stop_rx_ba_session, "", "");
KSYMTAB_FUNC(ieee80211_manage_rx_ba_offl, "", "");
KSYMTAB_FUNC(ieee80211_rx_ba_timer_expired, "", "");
KSYMTAB_FUNC(ieee80211_update_mu_groups, "_gpl", "");
KSYMTAB_FUNC(ieee80211_set_active_links, "_gpl", "");
KSYMTAB_FUNC(ieee80211_set_active_links_async, "_gpl", "");
KSYMTAB_FUNC(ieee80211_rate_control_register, "", "");
KSYMTAB_FUNC(ieee80211_rate_control_unregister, "", "");
KSYMTAB_FUNC(ieee80211_get_tx_rates, "", "");
KSYMTAB_FUNC(rate_control_set_rates, "", "");
KSYMTAB_FUNC(ieee80211_tkip_add_iv, "_gpl", "");
KSYMTAB_FUNC(ieee80211_get_tkip_p1k_iv, "", "");
KSYMTAB_FUNC(ieee80211_get_tkip_rx_p1k, "", "");
KSYMTAB_FUNC(ieee80211_get_tkip_p2k, "", "");
KSYMTAB_FUNC(ieee80211_csa_finish, "", "");
KSYMTAB_FUNC(ieee80211_channel_switch_disconnect, "", "");
KSYMTAB_FUNC(ieee80211_nan_func_terminated, "", "");
KSYMTAB_FUNC(ieee80211_nan_func_match, "", "");
KSYMTAB_FUNC(ieee80211_color_change_finish, "_gpl", "");
KSYMTAB_FUNC(ieee80211_obss_color_collision_notify, "_gpl", "");
KSYMTAB_FUNC(ieee80211_sta_ps_transition, "", "");
KSYMTAB_FUNC(ieee80211_sta_pspoll, "", "");
KSYMTAB_FUNC(ieee80211_sta_uapsd_trigger, "", "");
KSYMTAB_FUNC(ieee80211_mark_rx_ba_filtered_frames, "", "");
KSYMTAB_FUNC(ieee80211_rx_list, "", "");
KSYMTAB_FUNC(ieee80211_rx_napi, "", "");
KSYMTAB_FUNC(ieee80211_rx_irqsafe, "", "");
KSYMTAB_FUNC(ieee80211_tx_prepare_skb, "", "");
KSYMTAB_FUNC(ieee80211_tx_dequeue, "", "");
KSYMTAB_FUNC(ieee80211_next_txq, "", "");
KSYMTAB_FUNC(__ieee80211_schedule_txq, "", "");
KSYMTAB_FUNC(ieee80211_txq_airtime_check, "", "");
KSYMTAB_FUNC(ieee80211_txq_may_transmit, "", "");
KSYMTAB_FUNC(ieee80211_txq_schedule_start, "", "");
KSYMTAB_FUNC(ieee80211_beacon_update_cntdwn, "", "");
KSYMTAB_FUNC(ieee80211_beacon_set_cntdwn, "", "");
KSYMTAB_FUNC(ieee80211_beacon_cntdwn_is_complete, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template_ema_index, "", "");
KSYMTAB_FUNC(ieee80211_beacon_free_ema_list, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_template_ema_list, "", "");
KSYMTAB_FUNC(ieee80211_beacon_get_tim, "", "");
KSYMTAB_FUNC(ieee80211_proberesp_get, "", "");
KSYMTAB_FUNC(ieee80211_get_fils_discovery_tmpl, "", "");
KSYMTAB_FUNC(ieee80211_get_unsol_bcast_probe_resp_tmpl, "", "");
KSYMTAB_FUNC(ieee80211_pspoll_get, "", "");
KSYMTAB_FUNC(ieee80211_nullfunc_get, "", "");
KSYMTAB_FUNC(ieee80211_probereq_get, "", "");
KSYMTAB_FUNC(ieee80211_rts_get, "", "");
KSYMTAB_FUNC(ieee80211_ctstoself_get, "", "");
KSYMTAB_FUNC(ieee80211_get_buffered_bc, "", "");
KSYMTAB_FUNC(ieee80211_reserve_tid, "", "");
KSYMTAB_FUNC(ieee80211_unreserve_tid, "", "");
KSYMTAB_FUNC(ieee80211_iter_keys, "", "");
KSYMTAB_FUNC(ieee80211_iter_keys_rcu, "", "");
KSYMTAB_FUNC(ieee80211_gtk_rekey_notify, "_gpl", "");
KSYMTAB_FUNC(ieee80211_get_key_rx_seq, "", "");
KSYMTAB_FUNC(ieee80211_set_key_rx_seq, "_gpl", "");
KSYMTAB_FUNC(ieee80211_remove_key, "_gpl", "");
KSYMTAB_FUNC(ieee80211_gtk_rekey_add, "_gpl", "");
KSYMTAB_FUNC(ieee80211_key_mic_failure, "_gpl", "");
KSYMTAB_FUNC(ieee80211_key_replay, "_gpl", "");
KSYMTAB_FUNC(wiphy_to_ieee80211_hw, "", "");
KSYMTAB_FUNC(ieee80211_get_bssid, "", "");
KSYMTAB_FUNC(ieee80211_generic_frame_duration, "", "");
KSYMTAB_FUNC(ieee80211_rts_duration, "", "");
KSYMTAB_FUNC(ieee80211_ctstoself_duration, "", "");
KSYMTAB_FUNC(ieee80211_handle_wake_tx_queue, "", "");
KSYMTAB_FUNC(ieee80211_wake_queue, "", "");
KSYMTAB_FUNC(ieee80211_stop_queue, "", "");
KSYMTAB_FUNC(ieee80211_stop_queues, "", "");
KSYMTAB_FUNC(ieee80211_queue_stopped, "", "");
KSYMTAB_FUNC(ieee80211_wake_queues, "", "");
KSYMTAB_FUNC(ieee80211_iterate_interfaces, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_active_interfaces_atomic, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_active_interfaces_mtx, "_gpl", "");
KSYMTAB_FUNC(ieee80211_iterate_stations_atomic, "_gpl", "");
KSYMTAB_FUNC(wdev_to_ieee80211_vif, "_gpl", "");
KSYMTAB_FUNC(ieee80211_vif_to_wdev, "_gpl", "");
KSYMTAB_FUNC(ieee80211_queue_work, "", "");
KSYMTAB_FUNC(ieee80211_queue_delayed_work, "", "");
KSYMTAB_FUNC(ieee80211_hw_restart_disconnect, "_gpl", "");
KSYMTAB_FUNC(ieee80211_resume_disconnect, "_gpl", "");
KSYMTAB_FUNC(ieee80211_ave_rssi, "_gpl", "");
KSYMTAB_FUNC(ieee80211_radar_detected, "", "");
KSYMTAB_FUNC(ieee80211_update_p2p_noa, "", "");
KSYMTAB_FUNC(ieee80211_parse_p2p_noa, "", "");
KSYMTAB_FUNC(ieee80211_txq_get_depth, "", "");
KSYMTAB_FUNC(ieee80211_iter_chan_contexts_atomic, "_gpl", "");
KSYMTAB_FUNC(ieee80211_chswitch_done, "", "");
KSYMTAB_FUNC(ieee80211_ap_probereq_get, "", "");
KSYMTAB_FUNC(ieee80211_beacon_loss, "", "");
KSYMTAB_FUNC(ieee80211_connection_loss, "", "");
KSYMTAB_FUNC(ieee80211_disconnect, "", "");
KSYMTAB_FUNC(ieee80211_cqm_rssi_notify, "", "");
KSYMTAB_FUNC(ieee80211_cqm_beacon_loss_notify, "", "");
KSYMTAB_FUNC(ieee80211_enable_rssi_reports, "", "");
KSYMTAB_FUNC(ieee80211_disable_rssi_reports, "", "");
KSYMTAB_FUNC(ieee80211_tdls_oper_request, "", "");
KSYMTAB_FUNC(ieee80211_calc_rx_airtime, "_gpl", "");
KSYMTAB_FUNC(ieee80211_calc_tx_airtime, "_gpl", "");
KSYMTAB_FUNC(__ieee80211_get_radio_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_assoc_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_tx_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_get_rx_led_name, "", "");
KSYMTAB_FUNC(__ieee80211_create_tpt_led_trigger, "", "");
KSYMTAB_FUNC(ieee80211_report_wowlan_wakeup, "", "");

MODULE_INFO(depends, "cfg80211,libarc4");

