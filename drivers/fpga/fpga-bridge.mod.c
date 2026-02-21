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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(fpga_bridge_enable, "_gpl", "");
KSYMTAB_FUNC(fpga_bridge_disable, "_gpl", "");
KSYMTAB_FUNC(of_fpga_bridge_get, "_gpl", "");
KSYMTAB_FUNC(fpga_bridge_get, "_gpl", "");
KSYMTAB_FUNC(fpga_bridge_put, "_gpl", "");
KSYMTAB_FUNC(fpga_bridges_enable, "_gpl", "");
KSYMTAB_FUNC(fpga_bridges_disable, "_gpl", "");
KSYMTAB_FUNC(fpga_bridges_put, "_gpl", "");
KSYMTAB_FUNC(of_fpga_bridge_get_to_list, "_gpl", "");
KSYMTAB_FUNC(fpga_bridge_get_to_list, "_gpl", "");
KSYMTAB_FUNC(fpga_bridge_register, "_gpl", "");
KSYMTAB_FUNC(fpga_bridge_unregister, "_gpl", "");

MODULE_INFO(depends, "");

