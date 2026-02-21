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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(wlcore_set_key, "_gpl", "");
KSYMTAB_FUNC(wlcore_alloc_hw, "_gpl", "");
KSYMTAB_FUNC(wlcore_free_hw, "_gpl", "");
KSYMTAB_FUNC(wlcore_probe, "_gpl", "");
KSYMTAB_FUNC(wlcore_remove, "_gpl", "");
KSYMTAB_DATA(wl12xx_debug_level, "_gpl", "");
KSYMTAB_FUNC(wl1271_cmd_send, "_gpl", "");
KSYMTAB_FUNC(wlcore_cmd_wait_for_event_or_timeout, "_gpl", "");
KSYMTAB_FUNC(wlcore_get_native_channel_type, "_gpl", "");
KSYMTAB_FUNC(wl1271_cmd_test, "_gpl", "");
KSYMTAB_FUNC(wl1271_cmd_configure, "_gpl", "");
KSYMTAB_FUNC(wl1271_cmd_data_path, "_gpl", "");
KSYMTAB_FUNC(wl12xx_cmd_build_probe_req, "_gpl", "");
KSYMTAB_FUNC(wlcore_cmd_generic_cfg, "_gpl", "");
KSYMTAB_FUNC(wlcore_disable_interrupts, "_gpl", "");
KSYMTAB_FUNC(wlcore_disable_interrupts_nosync, "_gpl", "");
KSYMTAB_FUNC(wlcore_enable_interrupts, "_gpl", "");
KSYMTAB_FUNC(wlcore_synchronize_interrupts, "_gpl", "");
KSYMTAB_FUNC(wlcore_translate_addr, "_gpl", "");
KSYMTAB_FUNC(wlcore_set_partition, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_fw_logger, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_rssi_trigger, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_soft_gemini_sense, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_sched_scan_completed, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_ba_rx_constraint, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_channel_switch, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_dummy_packet, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_max_tx_failure, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_inactive_sta, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_roc_complete, "_gpl", "");
KSYMTAB_FUNC(wlcore_event_beacon_loss, "_gpl", "");
KSYMTAB_FUNC(wl1271_free_tx_id, "", "");
KSYMTAB_FUNC(wl12xx_is_dummy_packet, "", "");
KSYMTAB_FUNC(wlcore_calc_packet_alignment, "", "");
KSYMTAB_FUNC(wlcore_tx_complete, "", "");
KSYMTAB_FUNC(wl1271_tx_flush, "_gpl", "");
KSYMTAB_FUNC(wl1271_tx_min_rate_get, "_gpl", "");
KSYMTAB_FUNC(wl1271_acx_sleep_auth, "_gpl", "");
KSYMTAB_FUNC(wl12xx_acx_mem_cfg, "_gpl", "");
KSYMTAB_FUNC(wl1271_acx_init_mem_config, "_gpl", "");
KSYMTAB_FUNC(wl1271_acx_pm_config, "_gpl", "");
KSYMTAB_FUNC(wl1271_acx_set_ht_capabilities, "_gpl", "");
KSYMTAB_FUNC(wlcore_boot_upload_firmware, "_gpl", "");
KSYMTAB_FUNC(wlcore_boot_upload_nvs, "_gpl", "");
KSYMTAB_FUNC(wlcore_boot_run_firmware, "_gpl", "");
KSYMTAB_FUNC(wl1271_format_buffer, "_gpl", "");
KSYMTAB_FUNC(wl1271_debugfs_update_stats, "_gpl", "");
KSYMTAB_FUNC(wlcore_set_scan_chan_params, "_gpl", "");
KSYMTAB_FUNC(wlcore_scan_sched_scan_ssid_list, "_gpl", "");
KSYMTAB_FUNC(wlcore_scan_sched_scan_results, "_gpl", "");

MODULE_INFO(depends, "mac80211,cfg80211");

