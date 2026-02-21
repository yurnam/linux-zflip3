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

KSYMTAB_FUNC(wcd938x_sdw_device_get, "_gpl", "");
KSYMTAB_FUNC(wcd938x_swr_get_current_bank, "_gpl", "");
KSYMTAB_FUNC(wcd938x_sdw_hw_params, "_gpl", "");
KSYMTAB_FUNC(wcd938x_sdw_free, "_gpl", "");
KSYMTAB_FUNC(wcd938x_sdw_set_sdw_stream, "_gpl", "");

MODULE_INFO(depends, "soundwire-bus,regmap-sdw");

MODULE_ALIAS("sdw:m0217p010Dv*c*");
