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

KSYMTAB_FUNC(btmrvl_interrupt, "_gpl", "");
KSYMTAB_FUNC(btmrvl_check_evtpkt, "_gpl", "");
KSYMTAB_FUNC(btmrvl_process_event, "_gpl", "");
KSYMTAB_FUNC(btmrvl_send_module_cfg_cmd, "_gpl", "");
KSYMTAB_FUNC(btmrvl_pscan_window_reporting, "_gpl", "");
KSYMTAB_FUNC(btmrvl_send_hscfg_cmd, "_gpl", "");
KSYMTAB_FUNC(btmrvl_enable_ps, "_gpl", "");
KSYMTAB_FUNC(btmrvl_enable_hs, "_gpl", "");
KSYMTAB_FUNC(btmrvl_register_hdev, "_gpl", "");
KSYMTAB_FUNC(btmrvl_add_card, "_gpl", "");
KSYMTAB_FUNC(btmrvl_remove_card, "_gpl", "");

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "1F76DFB6F84EE546EA26F89");
