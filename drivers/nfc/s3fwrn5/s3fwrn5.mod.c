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

KSYMTAB_FUNC(s3fwrn5_probe, "", "");
KSYMTAB_FUNC(s3fwrn5_remove, "", "");
KSYMTAB_FUNC(s3fwrn5_recv_frame, "", "");
KSYMTAB_FUNC(s3fwrn5_phy_set_wake, "", "");
KSYMTAB_FUNC(s3fwrn5_phy_power_ctrl, "", "");
KSYMTAB_FUNC(s3fwrn5_phy_set_mode, "", "");
KSYMTAB_FUNC(s3fwrn5_phy_get_mode, "", "");

MODULE_INFO(depends, "nci");

