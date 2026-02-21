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

KSYMTAB_FUNC(mwifiex_queue_main_work, "_gpl", "");
KSYMTAB_FUNC(mwifiex_main_process, "_gpl", "");
KSYMTAB_FUNC(mwifiex_multi_chan_resync, "_gpl", "");
KSYMTAB_FUNC(mwifiex_upload_device_dump, "_gpl", "");
KSYMTAB_FUNC(mwifiex_drv_info_dump, "_gpl", "");
KSYMTAB_FUNC(mwifiex_prepare_fw_dump_info, "_gpl", "");
KSYMTAB_FUNC(mwifiex_shutdown_sw, "_gpl", "");
KSYMTAB_FUNC(mwifiex_reinit_sw, "_gpl", "");
KSYMTAB_FUNC(mwifiex_add_card, "_gpl", "");
KSYMTAB_FUNC(mwifiex_remove_card, "_gpl", "");
KSYMTAB_FUNC(_mwifiex_dbg, "_gpl", "");
KSYMTAB_FUNC(mwifiex_dnld_fw, "_gpl", "");
KSYMTAB_FUNC(mwifiex_process_hs_config, "_gpl", "");
KSYMTAB_FUNC(mwifiex_process_sleep_confirm_resp, "_gpl", "");
KSYMTAB_FUNC(mwifiex_init_shutdown_fw, "_gpl", "");
KSYMTAB_FUNC(mwifiex_alloc_dma_align_buf, "_gpl", "");
KSYMTAB_FUNC(mwifiex_fw_dump_event, "_gpl", "");
KSYMTAB_FUNC(mwifiex_handle_rx_packet, "_gpl", "");
KSYMTAB_FUNC(mwifiex_write_data_complete, "_gpl", "");
KSYMTAB_FUNC(mwifiex_deauthenticate_all, "_gpl", "");
KSYMTAB_FUNC(mwifiex_cancel_hs, "_gpl", "");
KSYMTAB_FUNC(mwifiex_enable_hs, "_gpl", "");
KSYMTAB_FUNC(mwifiex_disable_auto_ds, "_gpl", "");
KSYMTAB_FUNC(mwifiex_add_virtual_intf, "_gpl", "");
KSYMTAB_FUNC(mwifiex_del_virtual_intf, "_gpl", "");

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "23C0750DCBC2341C46371D4");
