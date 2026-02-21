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

KSYMTAB_FUNC(hdac_get_device_id, "_gpl", "");
KSYMTAB_DATA(snd_hda_bus_type, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_init, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_exit, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_exec_verb_unlocked, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_aligned_read, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_aligned_write, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_codec_link_up, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_codec_link_down, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_device_init, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_device_exit, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_device_register, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_device_unregister, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_device_set_chip_name, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_codec_modalias, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_read, "_gpl", "");
KSYMTAB_FUNC(_snd_hdac_read_parm, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_read_parm_uncached, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_override_parm, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_get_sub_nodes, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_refresh_widgets, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_get_connections, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_power_up, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_power_down, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_power_up_pm, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_power_down_pm, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_calc_stream_format, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_query_supported_pcm, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_is_supported_format, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_codec_read, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_codec_write, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_check_power_state, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_sync_power_state, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_regmap_init, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_regmap_exit, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_regmap_add_vendor_verb, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_regmap_write_raw, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_regmap_read_raw, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_regmap_update_raw, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_regmap_update_raw_once, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_regmap_sync, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_init_cmd_io, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_stop_cmd_io, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_send_cmd, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_update_rirb, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_get_response, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_parse_capabilities, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_enter_link_reset, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_exit_link_reset, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_reset_link, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_init_chip, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_stop_chip, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_handle_stream_irq, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_alloc_stream_pages, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_free_stream_pages, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_bus_link_power, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_get_stream_stripe_ctl, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_init, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_start, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_stop, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stop_streams, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stop_streams_and_chip, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_reset, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_setup, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_cleanup, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_assign, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_release_locked, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_release, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_get_stream, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_setup_periods, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_set_params, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_timecounter_init, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_sync_trigger, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_sync, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_spbcap_enable, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_set_spib, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_get_spbmaxfifo, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_drsm_enable, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_wait_drsm, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_set_dpibr, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_stream_set_lpib, "_gpl", "");
KSYMTAB_FUNC(snd_array_new, "_gpl", "");
KSYMTAB_FUNC(snd_array_free, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_print_channel_allocation, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_chmap_to_spk_mask, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_spk_to_chmap, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_setup_channel_mapping, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_get_active_channels, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_get_ch_alloc_from_ca, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_channel_allocation, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_register_chmap_ops, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_add_chmap_ctls, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_set_codec_wakeup, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_display_power, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_sync_audio_rate, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_acomp_get_eld, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_acomp_register_notifier, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_acomp_init, "_gpl", "");
KSYMTAB_FUNC(snd_hdac_acomp_exit, "_gpl", "");

MODULE_INFO(depends, "");

