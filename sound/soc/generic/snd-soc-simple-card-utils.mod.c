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

KSYMTAB_FUNC(simple_util_parse_convert, "_gpl", "");
KSYMTAB_FUNC(simple_util_is_convert_required, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_daifmt, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_tdm_width_map, "_gpl", "");
KSYMTAB_FUNC(simple_util_set_dailink_name, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_card_name, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_clk, "_gpl", "");
KSYMTAB_FUNC(simple_util_startup, "_gpl", "");
KSYMTAB_FUNC(simple_util_shutdown, "_gpl", "");
KSYMTAB_FUNC(simple_util_hw_params, "_gpl", "");
KSYMTAB_FUNC(simple_util_be_hw_params_fixup, "_gpl", "");
KSYMTAB_FUNC(simple_util_dai_init, "_gpl", "");
KSYMTAB_FUNC(simple_util_canonicalize_platform, "_gpl", "");
KSYMTAB_FUNC(simple_util_canonicalize_cpu, "_gpl", "");
KSYMTAB_FUNC(simple_util_clean_reference, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_routing, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_widgets, "_gpl", "");
KSYMTAB_FUNC(simple_util_parse_pin_switches, "_gpl", "");
KSYMTAB_FUNC(simple_util_init_jack, "_gpl", "");
KSYMTAB_FUNC(simple_util_init_aux_jacks, "_gpl", "");
KSYMTAB_FUNC(simple_util_init_priv, "_gpl", "");
KSYMTAB_FUNC(simple_util_remove, "_gpl", "");
KSYMTAB_FUNC(graph_util_card_probe, "_gpl", "");
KSYMTAB_FUNC(graph_util_is_ports0, "_gpl", "");
KSYMTAB_FUNC(graph_util_parse_dai, "_gpl", "");

MODULE_INFO(depends, "");

