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

KSYMTAB_FUNC(zstd_min_clevel, "", "");
KSYMTAB_FUNC(zstd_max_clevel, "", "");
KSYMTAB_FUNC(zstd_compress_bound, "", "");
KSYMTAB_FUNC(zstd_get_params, "", "");
KSYMTAB_FUNC(zstd_cctx_workspace_bound, "", "");
KSYMTAB_FUNC(zstd_init_cctx, "", "");
KSYMTAB_FUNC(zstd_compress_cctx, "", "");
KSYMTAB_FUNC(zstd_cstream_workspace_bound, "", "");
KSYMTAB_FUNC(zstd_init_cstream, "", "");
KSYMTAB_FUNC(zstd_reset_cstream, "", "");
KSYMTAB_FUNC(zstd_compress_stream, "", "");
KSYMTAB_FUNC(zstd_flush_stream, "", "");
KSYMTAB_FUNC(zstd_end_stream, "", "");

MODULE_INFO(depends, "");

