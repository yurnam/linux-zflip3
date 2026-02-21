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

KSYMTAB_FUNC(meson_card_i2s_set_sysclk, "_gpl", "");
KSYMTAB_FUNC(meson_card_reallocate_links, "_gpl", "");
KSYMTAB_FUNC(meson_card_parse_dai, "_gpl", "");
KSYMTAB_FUNC(meson_card_parse_daifmt, "_gpl", "");
KSYMTAB_FUNC(meson_card_set_be_link, "_gpl", "");
KSYMTAB_FUNC(meson_card_set_fe_link, "_gpl", "");
KSYMTAB_FUNC(meson_card_probe, "_gpl", "");
KSYMTAB_FUNC(meson_card_remove, "_gpl", "");

MODULE_INFO(depends, "");

