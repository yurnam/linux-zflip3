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

KSYMTAB_FUNC(tegra_pcm_platform_register, "_gpl", "");
KSYMTAB_FUNC(devm_tegra_pcm_platform_register, "_gpl", "");
KSYMTAB_FUNC(tegra_pcm_platform_register_with_chan_names, "_gpl", "");
KSYMTAB_FUNC(tegra_pcm_platform_unregister, "_gpl", "");
KSYMTAB_FUNC(tegra_pcm_open, "_gpl", "");
KSYMTAB_FUNC(tegra_pcm_close, "_gpl", "");
KSYMTAB_FUNC(tegra_pcm_hw_params, "_gpl", "");
KSYMTAB_FUNC(tegra_pcm_pointer, "_gpl", "");
KSYMTAB_FUNC(tegra_pcm_construct, "_gpl", "");

MODULE_INFO(depends, "");

