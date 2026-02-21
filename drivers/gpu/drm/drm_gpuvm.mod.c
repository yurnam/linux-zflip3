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

KSYMTAB_FUNC(drm_gpuvm_init, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_destroy, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_insert, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_remove, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_link, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_unlink, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_find_first, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_find, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_find_prev, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_find_next, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_interval_empty, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_map, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_remap, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_unmap, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_map, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_unmap, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_map_ops_create, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_sm_unmap_ops_create, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_prefetch_ops_create, "_gpl", "");
KSYMTAB_FUNC(drm_gpuvm_gem_unmap_ops_create, "_gpl", "");
KSYMTAB_FUNC(drm_gpuva_ops_free, "_gpl", "");

MODULE_INFO(depends, "");

