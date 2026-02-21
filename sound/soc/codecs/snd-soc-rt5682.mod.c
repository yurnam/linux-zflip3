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

KSYMTAB_DATA(rt5682_supply_names, "_gpl", "");
KSYMTAB_FUNC(rt5682_apply_patch_list, "_gpl", "");
KSYMTAB_DATA(rt5682_reg, "_gpl", "");
KSYMTAB_FUNC(rt5682_volatile_register, "_gpl", "");
KSYMTAB_FUNC(rt5682_readable_register, "_gpl", "");
KSYMTAB_FUNC(rt5682_reset, "_gpl", "");
KSYMTAB_FUNC(rt5682_sel_asrc_clk_src, "_gpl", "");
KSYMTAB_FUNC(rt5682_jack_detect_handler, "_gpl", "");
KSYMTAB_FUNC(rt5682_register_dai_clks, "_gpl", "");
KSYMTAB_DATA(rt5682_aif1_dai_ops, "_gpl", "");
KSYMTAB_DATA(rt5682_aif2_dai_ops, "_gpl", "");
KSYMTAB_DATA(rt5682_soc_component_dev, "_gpl", "");
KSYMTAB_FUNC(rt5682_parse_dt, "_gpl", "");
KSYMTAB_FUNC(rt5682_get_ldo1, "_gpl", "");
KSYMTAB_FUNC(rt5682_calibrate, "_gpl", "");

MODULE_INFO(depends, "snd-soc-rl6231");

