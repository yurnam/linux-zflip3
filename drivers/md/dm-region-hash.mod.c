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

KSYMTAB_FUNC(dm_rh_region_to_sector, "_gpl", "");
KSYMTAB_FUNC(dm_rh_bio_to_region, "_gpl", "");
KSYMTAB_FUNC(dm_rh_region_context, "_gpl", "");
KSYMTAB_FUNC(dm_rh_get_region_key, "_gpl", "");
KSYMTAB_FUNC(dm_rh_get_region_size, "_gpl", "");
KSYMTAB_FUNC(dm_region_hash_create, "_gpl", "");
KSYMTAB_FUNC(dm_region_hash_destroy, "_gpl", "");
KSYMTAB_FUNC(dm_rh_dirty_log, "_gpl", "");
KSYMTAB_FUNC(dm_rh_get_state, "_gpl", "");
KSYMTAB_FUNC(dm_rh_mark_nosync, "_gpl", "");
KSYMTAB_FUNC(dm_rh_update_states, "_gpl", "");
KSYMTAB_FUNC(dm_rh_inc_pending, "_gpl", "");
KSYMTAB_FUNC(dm_rh_dec, "_gpl", "");
KSYMTAB_FUNC(dm_rh_recovery_prepare, "_gpl", "");
KSYMTAB_FUNC(dm_rh_recovery_start, "_gpl", "");
KSYMTAB_FUNC(dm_rh_recovery_end, "_gpl", "");
KSYMTAB_FUNC(dm_rh_recovery_in_flight, "_gpl", "");
KSYMTAB_FUNC(dm_rh_flush, "_gpl", "");
KSYMTAB_FUNC(dm_rh_delay, "_gpl", "");
KSYMTAB_FUNC(dm_rh_stop_recovery, "_gpl", "");
KSYMTAB_FUNC(dm_rh_start_recovery, "_gpl", "");

MODULE_INFO(depends, "dm-log");

