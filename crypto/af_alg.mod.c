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

KSYMTAB_FUNC(af_alg_register_type, "_gpl", "");
KSYMTAB_FUNC(af_alg_unregister_type, "_gpl", "");
KSYMTAB_FUNC(af_alg_release, "_gpl", "");
KSYMTAB_FUNC(af_alg_release_parent, "_gpl", "");
KSYMTAB_FUNC(af_alg_accept, "_gpl", "");
KSYMTAB_FUNC(af_alg_free_sg, "_gpl", "");
KSYMTAB_FUNC(af_alg_count_tsgl, "_gpl", "");
KSYMTAB_FUNC(af_alg_pull_tsgl, "_gpl", "");
KSYMTAB_FUNC(af_alg_wmem_wakeup, "_gpl", "");
KSYMTAB_FUNC(af_alg_wait_for_data, "_gpl", "");
KSYMTAB_FUNC(af_alg_sendmsg, "_gpl", "");
KSYMTAB_FUNC(af_alg_free_resources, "_gpl", "");
KSYMTAB_FUNC(af_alg_async_cb, "_gpl", "");
KSYMTAB_FUNC(af_alg_poll, "_gpl", "");
KSYMTAB_FUNC(af_alg_alloc_areq, "_gpl", "");
KSYMTAB_FUNC(af_alg_get_rsgl, "_gpl", "");

MODULE_INFO(depends, "");

