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

KSYMTAB_FUNC(mdio45_probe, "", "");
KSYMTAB_FUNC(mdio_set_flag, "", "");
KSYMTAB_FUNC(mdio45_links_ok, "", "");
KSYMTAB_FUNC(mdio45_nway_restart, "", "");
KSYMTAB_FUNC(mdio45_ethtool_gset_npage, "", "");
KSYMTAB_FUNC(mdio45_ethtool_ksettings_get_npage, "", "");
KSYMTAB_FUNC(mdio_mii_ioctl, "", "");

MODULE_INFO(depends, "");

