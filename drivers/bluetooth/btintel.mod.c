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

KSYMTAB_FUNC(btintel_check_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btintel_enter_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_exit_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btintel_set_diag, "_gpl", "");
KSYMTAB_FUNC(btintel_version_info, "_gpl", "");
KSYMTAB_FUNC(btintel_load_ddc_config, "_gpl", "");
KSYMTAB_FUNC(btintel_set_event_mask_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_read_version, "_gpl", "");
KSYMTAB_FUNC(btintel_regmap_init, "_gpl", "");
KSYMTAB_FUNC(btintel_send_intel_reset, "_gpl", "");
KSYMTAB_FUNC(btintel_read_boot_params, "_gpl", "");
KSYMTAB_FUNC(btintel_download_firmware, "_gpl", "");
KSYMTAB_FUNC(btintel_set_quality_report, "_gpl", "");
KSYMTAB_FUNC(btintel_configure_setup, "_gpl", "");
KSYMTAB_FUNC(btintel_recv_event, "_gpl", "");
KSYMTAB_FUNC(btintel_bootup, "_gpl", "");
KSYMTAB_FUNC(btintel_secure_send_result, "_gpl", "");

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "6850F65AEED3D3A5FE15B61");
