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

KSYMTAB_FUNC(ath_rxbuf_alloc, "", "");
KSYMTAB_FUNC(ath_is_mybeacon, "", "");
KSYMTAB_FUNC(ath_printk, "", "");
KSYMTAB_DATA(ath_bus_type_strings, "", "");
KSYMTAB_FUNC(ath_is_world_regd, "", "");
KSYMTAB_FUNC(ath_is_49ghz_allowed, "", "");
KSYMTAB_FUNC(ath_regd_find_country_by_name, "", "");
KSYMTAB_FUNC(ath_reg_notifier_apply, "", "");
KSYMTAB_FUNC(ath_regd_init, "", "");
KSYMTAB_FUNC(ath_regd_get_band_ctl, "", "");
KSYMTAB_FUNC(ath_hw_setbssidmask, "", "");
KSYMTAB_FUNC(ath_hw_cycle_counters_update, "", "");
KSYMTAB_FUNC(ath_hw_get_listen_time, "", "");
KSYMTAB_FUNC(ath_hw_keyreset, "", "");
KSYMTAB_FUNC(ath_hw_keysetmac, "", "");
KSYMTAB_FUNC(ath_key_config, "", "");
KSYMTAB_FUNC(ath_key_delete, "", "");
KSYMTAB_FUNC(dfs_pattern_detector_init, "", "");

MODULE_INFO(depends, "cfg80211");

