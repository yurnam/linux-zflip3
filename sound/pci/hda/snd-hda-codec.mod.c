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

KSYMTAB_FUNC(snd_hda_codec_set_name, "_gpl", "");
KSYMTAB_FUNC(__hda_codec_driver_register, "_gpl", "");
KSYMTAB_FUNC(hda_codec_driver_unregister, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_configure, "_gpl", "");
KSYMTAB_FUNC(snd_hda_sequence_write, "_gpl", "");
KSYMTAB_FUNC(snd_hda_get_conn_list, "_gpl", "");
KSYMTAB_FUNC(snd_hda_get_connections, "_gpl", "");
KSYMTAB_FUNC(snd_hda_override_conn_list, "_gpl", "");
KSYMTAB_FUNC(snd_hda_get_conn_index, "_gpl", "");
KSYMTAB_FUNC(snd_hda_get_num_devices, "_gpl", "");
KSYMTAB_FUNC(snd_hda_get_dev_select, "_gpl", "");
KSYMTAB_FUNC(snd_hda_set_dev_select, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_set_pincfg, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_get_pincfg, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_set_pin_target, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_get_pin_target, "_gpl", "");
KSYMTAB_FUNC(snd_hda_shutup_pins, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_pcm_put, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_pcm_new, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_cleanup_for_unbind, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_register, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_unregister, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_device_init, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_new, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_device_new, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_update_widgets, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_setup_stream, "_gpl", "");
KSYMTAB_FUNC(__snd_hda_codec_cleanup_stream, "_gpl", "");
KSYMTAB_FUNC(query_amp_caps, "_gpl", "");
KSYMTAB_FUNC(snd_hda_check_amp_caps, "_gpl", "");
KSYMTAB_FUNC(snd_hda_override_amp_caps, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_amp_update, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_amp_stereo, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_amp_init, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_amp_init_stereo, "_gpl", "");
KSYMTAB_FUNC(snd_hda_mixer_amp_volume_info, "_gpl", "");
KSYMTAB_FUNC(snd_hda_mixer_amp_volume_get, "_gpl", "");
KSYMTAB_FUNC(snd_hda_mixer_amp_volume_put, "_gpl", "");
KSYMTAB_FUNC(snd_hda_mixer_amp_tlv, "_gpl", "");
KSYMTAB_FUNC(snd_hda_set_vmaster_tlv, "_gpl", "");
KSYMTAB_FUNC(snd_hda_find_mixer_ctl, "_gpl", "");
KSYMTAB_FUNC(snd_hda_ctl_add, "_gpl", "");
KSYMTAB_FUNC(snd_hda_add_nid, "_gpl", "");
KSYMTAB_FUNC(snd_hda_lock_devices, "_gpl", "");
KSYMTAB_FUNC(snd_hda_unlock_devices, "_gpl", "");
KSYMTAB_FUNC(__snd_hda_add_vmaster, "_gpl", "");
KSYMTAB_FUNC(snd_hda_add_vmaster_hook, "_gpl", "");
KSYMTAB_FUNC(snd_hda_sync_vmaster_hook, "_gpl", "");
KSYMTAB_FUNC(snd_hda_mixer_amp_switch_info, "_gpl", "");
KSYMTAB_FUNC(snd_hda_mixer_amp_switch_get, "_gpl", "");
KSYMTAB_FUNC(snd_hda_mixer_amp_switch_put, "_gpl", "");
KSYMTAB_FUNC(snd_hda_create_dig_out_ctls, "_gpl", "");
KSYMTAB_FUNC(snd_hda_spdif_out_of_nid, "_gpl", "");
KSYMTAB_FUNC(snd_hda_spdif_ctls_unassign, "_gpl", "");
KSYMTAB_FUNC(snd_hda_spdif_ctls_assign, "_gpl", "");
KSYMTAB_FUNC(snd_hda_create_spdif_share_sw, "_gpl", "");
KSYMTAB_FUNC(snd_hda_create_spdif_in_ctls, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_set_power_to_all, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_eapd_power_filter, "_gpl", "");
KSYMTAB_DATA(snd_pcm_2_1_chmaps, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_build_controls, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_prepare, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_cleanup, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_parse_pcms, "_gpl", "");
KSYMTAB_FUNC(snd_hda_add_new_ctls, "_gpl", "");
KSYMTAB_FUNC(snd_hda_codec_set_power_save, "_gpl", "");
KSYMTAB_FUNC(snd_hda_set_power_save, "_gpl", "");
KSYMTAB_FUNC(snd_hda_check_amp_list_power, "_gpl", "");
KSYMTAB_FUNC(snd_hda_input_mux_info, "_gpl", "");
KSYMTAB_FUNC(snd_hda_input_mux_put, "_gpl", "");
KSYMTAB_FUNC(snd_hda_enum_helper_info, "_gpl", "");
KSYMTAB_FUNC(snd_hda_multi_out_dig_open, "_gpl", "");
KSYMTAB_FUNC(snd_hda_multi_out_dig_prepare, "_gpl", "");
KSYMTAB_FUNC(snd_hda_multi_out_dig_cleanup, "_gpl", "");
KSYMTAB_FUNC(snd_hda_multi_out_dig_close, "_gpl", "");
KSYMTAB_FUNC(snd_hda_multi_out_analog_open, "_gpl", "");
KSYMTAB_FUNC(snd_hda_multi_out_analog_prepare, "_gpl", "");
KSYMTAB_FUNC(snd_hda_multi_out_analog_cleanup, "_gpl", "");
KSYMTAB_FUNC(snd_hda_get_default_vref, "_gpl", "");
KSYMTAB_FUNC(snd_hda_correct_pin_ctl, "_gpl", "");
KSYMTAB_FUNC(_snd_hda_set_pin_ctl, "_gpl", "");
KSYMTAB_FUNC(snd_hda_add_imux_item, "_gpl", "");
KSYMTAB_FUNC(snd_print_pcm_bits, "_gpl", "");
KSYMTAB_FUNC(is_jack_detectable, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_tbl_get_mst, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_tbl_get_from_tag, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_set_dirty_all, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_pin_sense, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_detect_state_mst, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_detect_enable_callback_mst, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_detect_enable, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_set_gating_jack, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_bind_keymap, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_set_button_state, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_report_sync, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_add_kctl_mst, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_add_kctls, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_unsol_event, "_gpl", "");
KSYMTAB_FUNC(snd_hda_jack_poll_all, "_gpl", "");
KSYMTAB_FUNC(snd_hda_parse_pin_defcfg, "_gpl", "");
KSYMTAB_FUNC(snd_hda_get_input_pin_attr, "_gpl", "");
KSYMTAB_FUNC(hda_get_autocfg_input_label, "_gpl", "");
KSYMTAB_FUNC(snd_hda_get_pin_label, "_gpl", "");
KSYMTAB_FUNC(snd_hda_add_verbs, "_gpl", "");
KSYMTAB_FUNC(snd_hda_apply_verbs, "_gpl", "");
KSYMTAB_FUNC(snd_hda_apply_pincfgs, "_gpl", "");
KSYMTAB_FUNC(__snd_hda_apply_fixup, "_gpl", "");
KSYMTAB_FUNC(snd_hda_apply_fixup, "_gpl", "");
KSYMTAB_FUNC(snd_hda_pick_pin_fixup, "_gpl", "");
KSYMTAB_FUNC(snd_hda_pick_fixup, "_gpl", "");
KSYMTAB_FUNC(azx_get_pos_lpib, "_gpl", "");
KSYMTAB_FUNC(azx_get_pos_posbuf, "_gpl", "");
KSYMTAB_FUNC(azx_get_position, "_gpl", "");
KSYMTAB_FUNC(azx_init_chip, "_gpl", "");
KSYMTAB_FUNC(azx_stop_all_streams, "_gpl", "");
KSYMTAB_FUNC(azx_stop_chip, "_gpl", "");
KSYMTAB_FUNC(azx_interrupt, "_gpl", "");
KSYMTAB_FUNC(azx_bus_init, "_gpl", "");
KSYMTAB_FUNC(azx_probe_codecs, "_gpl", "");
KSYMTAB_FUNC(azx_codec_configure, "_gpl", "");
KSYMTAB_FUNC(azx_init_streams, "_gpl", "");
KSYMTAB_FUNC(azx_free_streams, "_gpl", "");

MODULE_INFO(depends, "snd-hda-core");

