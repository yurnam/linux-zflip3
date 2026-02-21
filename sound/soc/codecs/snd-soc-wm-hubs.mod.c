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

KSYMTAB_DATA(wm_hubs_spkmix_tlv, "_gpl", "");
KSYMTAB_FUNC(wm_hubs_dcs_done, "_gpl", "");
KSYMTAB_FUNC(wm_hubs_update_class_w, "_gpl", "");
KSYMTAB_DATA(wm_hubs_hpl_mux, "_gpl", "");
KSYMTAB_DATA(wm_hubs_hpr_mux, "_gpl", "");
KSYMTAB_FUNC(wm_hubs_add_analogue_controls, "_gpl", "");
KSYMTAB_FUNC(wm_hubs_add_analogue_routes, "_gpl", "");
KSYMTAB_FUNC(wm_hubs_handle_analogue_pdata, "_gpl", "");
KSYMTAB_FUNC(wm_hubs_vmid_ena, "_gpl", "");
KSYMTAB_FUNC(wm_hubs_set_bias_level, "_gpl", "");

MODULE_INFO(depends, "");

