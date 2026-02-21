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

KSYMTAB_FUNC(gs_alloc_req, "_gpl", "");
KSYMTAB_FUNC(gs_free_req, "_gpl", "");
KSYMTAB_FUNC(gserial_free_line, "_gpl", "");
KSYMTAB_FUNC(gserial_alloc_line_no_console, "_gpl", "");
KSYMTAB_FUNC(gserial_alloc_line, "_gpl", "");
KSYMTAB_FUNC(gserial_connect, "_gpl", "");
KSYMTAB_FUNC(gserial_disconnect, "_gpl", "");
KSYMTAB_FUNC(gserial_suspend, "_gpl", "");
KSYMTAB_FUNC(gserial_resume, "_gpl", "");

MODULE_INFO(depends, "");

