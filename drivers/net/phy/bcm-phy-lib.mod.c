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

KSYMTAB_FUNC(__bcm_phy_write_exp, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_write_exp, "_gpl", "");
KSYMTAB_FUNC(__bcm_phy_read_exp, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_read_exp, "_gpl", "");
KSYMTAB_FUNC(__bcm_phy_modify_exp, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_modify_exp, "_gpl", "");
KSYMTAB_FUNC(bcm54xx_auxctl_read, "_gpl", "");
KSYMTAB_FUNC(bcm54xx_auxctl_write, "", "");
KSYMTAB_FUNC(bcm_phy_write_misc, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_read_misc, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_ack_intr, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_config_intr, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_handle_interrupt, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_read_shadow, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_write_shadow, "_gpl", "");
KSYMTAB_FUNC(__bcm_phy_read_rdb, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_read_rdb, "_gpl", "");
KSYMTAB_FUNC(__bcm_phy_write_rdb, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_write_rdb, "_gpl", "");
KSYMTAB_FUNC(__bcm_phy_modify_rdb, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_modify_rdb, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_enable_apd, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_set_eee, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_downshift_get, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_downshift_set, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_get_sset_count, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_get_strings, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_get_stats, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_r_rc_cal_reset, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_28nm_a0b0_afe_config_init, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_enable_jumbo, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_cable_test_start, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_cable_test_get_status, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_cable_test_start_rdb, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_cable_test_get_status_rdb, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_set_wol, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_get_wol, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_wol_isr, "_gpl", "");
KSYMTAB_FUNC(bcm_phy_led_brightness_set, "_gpl", "");

MODULE_INFO(depends, "");

