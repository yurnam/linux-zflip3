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

KSYMTAB_FUNC(b53_imp_vlan_setup, "", "");
KSYMTAB_FUNC(b53_enable_port, "", "");
KSYMTAB_FUNC(b53_disable_port, "", "");
KSYMTAB_FUNC(b53_brcm_hdr_setup, "", "");
KSYMTAB_FUNC(b53_configure_vlan, "", "");
KSYMTAB_FUNC(b53_get_strings, "", "");
KSYMTAB_FUNC(b53_get_ethtool_stats, "", "");
KSYMTAB_FUNC(b53_get_ethtool_phy_stats, "", "");
KSYMTAB_FUNC(b53_get_sset_count, "", "");
KSYMTAB_FUNC(b53_setup_devlink_resources, "", "");
KSYMTAB_FUNC(b53_port_event, "", "");
KSYMTAB_FUNC(b53_phylink_mac_config, "", "");
KSYMTAB_FUNC(b53_phylink_mac_link_down, "", "");
KSYMTAB_FUNC(b53_phylink_mac_link_up, "", "");
KSYMTAB_FUNC(b53_vlan_filtering, "", "");
KSYMTAB_FUNC(b53_vlan_add, "", "");
KSYMTAB_FUNC(b53_vlan_del, "", "");
KSYMTAB_FUNC(b53_fdb_add, "", "");
KSYMTAB_FUNC(b53_fdb_del, "", "");
KSYMTAB_FUNC(b53_fdb_dump, "", "");
KSYMTAB_FUNC(b53_mdb_add, "", "");
KSYMTAB_FUNC(b53_mdb_del, "", "");
KSYMTAB_FUNC(b53_br_join, "", "");
KSYMTAB_FUNC(b53_br_leave, "", "");
KSYMTAB_FUNC(b53_br_set_stp_state, "", "");
KSYMTAB_FUNC(b53_br_fast_age, "", "");
KSYMTAB_FUNC(b53_br_flags_pre, "", "");
KSYMTAB_FUNC(b53_br_flags, "", "");
KSYMTAB_FUNC(b53_get_tag_protocol, "", "");
KSYMTAB_FUNC(b53_mirror_add, "", "");
KSYMTAB_FUNC(b53_mirror_del, "", "");
KSYMTAB_FUNC(b53_eee_enable_set, "", "");
KSYMTAB_FUNC(b53_eee_init, "", "");
KSYMTAB_FUNC(b53_get_mac_eee, "", "");
KSYMTAB_FUNC(b53_set_mac_eee, "", "");
KSYMTAB_FUNC(b53_switch_alloc, "", "");
KSYMTAB_FUNC(b53_switch_detect, "", "");
KSYMTAB_FUNC(b53_switch_register, "", "");

MODULE_INFO(depends, "dsa_core");

