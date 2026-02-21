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

KSYMTAB_FUNC(gether_setup_name, "_gpl", "");
KSYMTAB_FUNC(gether_setup_name_default, "_gpl", "");
KSYMTAB_FUNC(gether_register_netdev, "_gpl", "");
KSYMTAB_FUNC(gether_set_gadget, "_gpl", "");
KSYMTAB_FUNC(gether_set_dev_addr, "_gpl", "");
KSYMTAB_FUNC(gether_get_dev_addr, "_gpl", "");
KSYMTAB_FUNC(gether_set_host_addr, "_gpl", "");
KSYMTAB_FUNC(gether_get_host_addr, "_gpl", "");
KSYMTAB_FUNC(gether_get_host_addr_cdc, "_gpl", "");
KSYMTAB_FUNC(gether_get_host_addr_u8, "_gpl", "");
KSYMTAB_FUNC(gether_set_qmult, "_gpl", "");
KSYMTAB_FUNC(gether_get_qmult, "_gpl", "");
KSYMTAB_FUNC(gether_get_ifname, "_gpl", "");
KSYMTAB_FUNC(gether_set_ifname, "_gpl", "");
KSYMTAB_FUNC(gether_suspend, "_gpl", "");
KSYMTAB_FUNC(gether_resume, "_gpl", "");
KSYMTAB_FUNC(gether_cleanup, "_gpl", "");
KSYMTAB_FUNC(gether_connect, "_gpl", "");
KSYMTAB_FUNC(gether_disconnect, "_gpl", "");

MODULE_INFO(depends, "libcomposite");

