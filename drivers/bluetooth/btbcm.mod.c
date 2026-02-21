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

KSYMTAB_FUNC(btbcm_check_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btbcm_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btbcm_read_pcm_int_params, "_gpl", "");
KSYMTAB_FUNC(btbcm_write_pcm_int_params, "_gpl", "");
KSYMTAB_FUNC(btbcm_patchram, "", "");
KSYMTAB_FUNC(btbcm_initialize, "_gpl", "");
KSYMTAB_FUNC(btbcm_finalize, "_gpl", "");
KSYMTAB_FUNC(btbcm_setup_patchram, "_gpl", "");
KSYMTAB_FUNC(btbcm_setup_apple, "_gpl", "");

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "DE45A4036C591FD61229D9E");
