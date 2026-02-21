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

KSYMTAB_FUNC(cfg80211_shutdown_all_interfaces, "_gpl", "");
KSYMTAB_FUNC(wiphy_new_nm, "", "");
KSYMTAB_FUNC(wiphy_register, "", "");
KSYMTAB_FUNC(wiphy_rfkill_start_polling, "", "");
KSYMTAB_FUNC(wiphy_unregister, "", "");
KSYMTAB_FUNC(wiphy_free, "", "");
KSYMTAB_FUNC(wiphy_rfkill_set_hw_state_reason, "", "");
KSYMTAB_FUNC(cfg80211_unregister_wdev, "", "");
KSYMTAB_FUNC(cfg80211_stop_iface, "", "");
KSYMTAB_FUNC(cfg80211_register_netdevice, "", "");
KSYMTAB_FUNC(wiphy_work_queue, "_gpl", "");
KSYMTAB_FUNC(wiphy_work_cancel, "_gpl", "");
KSYMTAB_FUNC(wiphy_work_flush, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_timer, "", "");
KSYMTAB_FUNC(wiphy_delayed_work_queue, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_cancel, "_gpl", "");
KSYMTAB_FUNC(wiphy_delayed_work_flush, "_gpl", "");
KSYMTAB_FUNC(ieee80211_radiotap_iterator_init, "", "");
KSYMTAB_FUNC(ieee80211_radiotap_iterator_next, "", "");
KSYMTAB_FUNC(ieee80211_get_response_rate, "", "");
KSYMTAB_FUNC(ieee80211_mandatory_rates, "", "");
KSYMTAB_FUNC(ieee80211_channel_to_freq_khz, "", "");
KSYMTAB_FUNC(ieee80211_s1g_channel_width, "", "");
KSYMTAB_FUNC(ieee80211_freq_khz_to_channel, "", "");
KSYMTAB_FUNC(ieee80211_get_channel_khz, "", "");
KSYMTAB_FUNC(ieee80211_hdrlen, "", "");
KSYMTAB_FUNC(ieee80211_get_hdrlen_from_skb, "", "");
KSYMTAB_FUNC(ieee80211_get_mesh_hdrlen, "", "");
KSYMTAB_FUNC(ieee80211_get_8023_tunnel_proto, "", "");
KSYMTAB_FUNC(ieee80211_strip_8023_mesh_hdr, "", "");
KSYMTAB_FUNC(ieee80211_data_to_8023_exthdr, "", "");
KSYMTAB_FUNC(ieee80211_is_valid_amsdu, "", "");
KSYMTAB_FUNC(ieee80211_amsdu_to_8023s, "", "");
KSYMTAB_FUNC(cfg80211_classify8021d, "", "");
KSYMTAB_FUNC(ieee80211_bss_get_elem, "", "");
KSYMTAB_FUNC(cfg80211_calculate_bitrate, "", "");
KSYMTAB_FUNC(cfg80211_get_p2p_attr, "", "");
KSYMTAB_FUNC(ieee80211_ie_split_ric, "", "");
KSYMTAB_FUNC(ieee80211_fragment_element, "", "");
KSYMTAB_FUNC(ieee80211_operating_class_to_band, "", "");
KSYMTAB_FUNC(ieee80211_chandef_to_operating_class, "", "");
KSYMTAB_FUNC(cfg80211_iter_combinations, "", "");
KSYMTAB_FUNC(cfg80211_check_combinations, "", "");
KSYMTAB_FUNC(ieee80211_get_num_supported_channels, "", "");
KSYMTAB_FUNC(cfg80211_get_station, "", "");
KSYMTAB_FUNC(cfg80211_free_nan_func, "", "");
KSYMTAB_FUNC(cfg80211_sinfo_alloc_tid_stats, "", "");
KSYMTAB_DATA(rfc1042_header, "", "");
KSYMTAB_DATA(bridge_tunnel_header, "", "");
KSYMTAB_FUNC(cfg80211_send_layer2_update, "", "");
KSYMTAB_FUNC(ieee80211_get_vht_max_nss, "", "");
KSYMTAB_FUNC(cfg80211_iftype_allowed, "", "");
KSYMTAB_FUNC(cfg80211_get_iftype_ext_capa, "", "");
KSYMTAB_FUNC(get_wiphy_regdom, "", "");
KSYMTAB_FUNC(reg_query_regdb_wmm, "", "");
KSYMTAB_FUNC(freq_reg_info, "", "");
KSYMTAB_FUNC(reg_initiator_name, "", "");
KSYMTAB_FUNC(wiphy_apply_custom_regulatory, "", "");
KSYMTAB_FUNC(regulatory_hint, "", "");
KSYMTAB_FUNC(regulatory_set_wiphy_regd, "", "");
KSYMTAB_FUNC(regulatory_set_wiphy_regd_sync, "", "");
KSYMTAB_FUNC(regulatory_pre_cac_allowed, "", "");
KSYMTAB_FUNC(cfg80211_is_element_inherited, "", "");
KSYMTAB_FUNC(cfg80211_scan_done, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_results, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_stopped_locked, "", "");
KSYMTAB_FUNC(cfg80211_sched_scan_stopped, "", "");
KSYMTAB_FUNC(cfg80211_bss_flush, "", "");
KSYMTAB_FUNC(cfg80211_find_elem_match, "", "");
KSYMTAB_FUNC(cfg80211_find_vendor_elem, "", "");
KSYMTAB_FUNC(cfg80211_get_bss, "", "");
KSYMTAB_FUNC(cfg80211_get_ies_channel_number, "", "");
KSYMTAB_FUNC(cfg80211_merge_profile, "", "");
KSYMTAB_FUNC(cfg80211_defragment_element, "", "");
KSYMTAB_FUNC(cfg80211_inform_bss_data, "", "");
KSYMTAB_FUNC(cfg80211_inform_bss_frame_data, "", "");
KSYMTAB_FUNC(cfg80211_ref_bss, "", "");
KSYMTAB_FUNC(cfg80211_put_bss, "", "");
KSYMTAB_FUNC(cfg80211_unlink_bss, "", "");
KSYMTAB_FUNC(cfg80211_bss_iter, "", "");
KSYMTAB_FUNC(nl80211_send_chandef, "", "");
KSYMTAB_FUNC(cfg80211_check_station_change, "", "");
KSYMTAB_FUNC(__cfg80211_alloc_event_skb, "", "");
KSYMTAB_FUNC(__cfg80211_send_event_skb, "", "");
KSYMTAB_FUNC(cfg80211_nan_match, "", "");
KSYMTAB_FUNC(cfg80211_nan_func_terminated, "", "");
KSYMTAB_FUNC(__cfg80211_alloc_reply_skb, "", "");
KSYMTAB_FUNC(cfg80211_vendor_cmd_reply, "_gpl", "");
KSYMTAB_FUNC(cfg80211_vendor_cmd_get_sender, "_gpl", "");
KSYMTAB_FUNC(cfg80211_rx_unprot_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_links_removed, "", "");
KSYMTAB_FUNC(cfg80211_notify_new_peer_candidate, "", "");
KSYMTAB_FUNC(cfg80211_assoc_comeback, "", "");
KSYMTAB_FUNC(cfg80211_ready_on_channel, "", "");
KSYMTAB_FUNC(cfg80211_remain_on_channel_expired, "", "");
KSYMTAB_FUNC(cfg80211_tx_mgmt_expired, "", "");
KSYMTAB_FUNC(cfg80211_new_sta, "", "");
KSYMTAB_FUNC(cfg80211_del_sta_sinfo, "", "");
KSYMTAB_FUNC(cfg80211_conn_failed, "", "");
KSYMTAB_FUNC(cfg80211_rx_spurious_frame, "", "");
KSYMTAB_FUNC(cfg80211_rx_unexpected_4addr_frame, "", "");
KSYMTAB_FUNC(cfg80211_control_port_tx_status, "", "");
KSYMTAB_FUNC(cfg80211_mgmt_tx_status_ext, "", "");
KSYMTAB_FUNC(cfg80211_rx_control_port, "", "");
KSYMTAB_FUNC(cfg80211_cqm_rssi_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_txe_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_pktloss_notify, "", "");
KSYMTAB_FUNC(cfg80211_cqm_beacon_loss_notify, "", "");
KSYMTAB_FUNC(cfg80211_gtk_rekey_notify, "", "");
KSYMTAB_FUNC(cfg80211_pmksa_candidate_notify, "", "");
KSYMTAB_FUNC(cfg80211_ch_switch_notify, "", "");
KSYMTAB_FUNC(cfg80211_ch_switch_started_notify, "", "");
KSYMTAB_FUNC(cfg80211_bss_color_notify, "", "");
KSYMTAB_FUNC(cfg80211_sta_opmode_change_notify, "", "");
KSYMTAB_FUNC(cfg80211_probe_status, "", "");
KSYMTAB_FUNC(cfg80211_report_obss_beacon_khz, "", "");
KSYMTAB_FUNC(cfg80211_report_wowlan_wakeup, "", "");
KSYMTAB_FUNC(cfg80211_tdls_oper_request, "", "");
KSYMTAB_FUNC(cfg80211_ft_event, "", "");
KSYMTAB_FUNC(cfg80211_crit_proto_stopped, "", "");
KSYMTAB_FUNC(cfg80211_external_auth_request, "", "");
KSYMTAB_FUNC(cfg80211_update_owe_info_event, "", "");
KSYMTAB_FUNC(cfg80211_rx_assoc_resp, "", "");
KSYMTAB_FUNC(cfg80211_rx_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_auth_timeout, "", "");
KSYMTAB_FUNC(cfg80211_assoc_failure, "", "");
KSYMTAB_FUNC(cfg80211_tx_mlme_mgmt, "", "");
KSYMTAB_FUNC(cfg80211_michael_mic_failure, "", "");
KSYMTAB_FUNC(cfg80211_rx_mgmt_ext, "", "");
KSYMTAB_FUNC(__cfg80211_radar_event, "", "");
KSYMTAB_FUNC(cfg80211_cac_event, "", "");
KSYMTAB_FUNC(cfg80211_background_cac_abort, "", "");
KSYMTAB_FUNC(cfg80211_ibss_joined, "", "");
KSYMTAB_FUNC(cfg80211_connect_done, "", "");
KSYMTAB_FUNC(cfg80211_roamed, "", "");
KSYMTAB_FUNC(cfg80211_port_authorized, "", "");
KSYMTAB_FUNC(cfg80211_disconnected, "", "");
KSYMTAB_FUNC(cfg80211_chandef_create, "", "");
KSYMTAB_FUNC(cfg80211_chandef_valid, "", "");
KSYMTAB_FUNC(cfg80211_chandef_compatible, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_required, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_usable, "", "");
KSYMTAB_FUNC(cfg80211_chandef_dfs_cac_time, "", "");
KSYMTAB_FUNC(cfg80211_chandef_usable, "", "");
KSYMTAB_FUNC(cfg80211_reg_can_beacon, "", "");
KSYMTAB_FUNC(cfg80211_reg_can_beacon_relax, "", "");
KSYMTAB_FUNC(cfg80211_any_usable_channels, "", "");
KSYMTAB_FUNC(wdev_chandef, "", "");
KSYMTAB_FUNC(cfg80211_valid_disable_subchannel_bitmap, "", "");
KSYMTAB_FUNC(cfg80211_get_drvinfo, "", "");
KSYMTAB_FUNC(cfg80211_pmsr_complete, "_gpl", "");
KSYMTAB_FUNC(cfg80211_pmsr_report, "_gpl", "");
KSYMTAB_FUNC(wiphy_read_of_freq_limits, "", "");

MODULE_INFO(depends, "rfkill");

