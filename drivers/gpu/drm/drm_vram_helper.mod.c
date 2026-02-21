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

KSYMTAB_FUNC(drm_gem_vram_create, "", "");
KSYMTAB_FUNC(drm_gem_vram_put, "", "");
KSYMTAB_FUNC(drm_gem_vram_offset, "", "");
KSYMTAB_FUNC(drm_gem_vram_pin, "", "");
KSYMTAB_FUNC(drm_gem_vram_unpin, "", "");
KSYMTAB_FUNC(drm_gem_vram_vmap, "", "");
KSYMTAB_FUNC(drm_gem_vram_vunmap, "", "");
KSYMTAB_FUNC(drm_gem_vram_fill_create_dumb, "", "");
KSYMTAB_FUNC(drm_gem_vram_driver_dumb_create, "", "");
KSYMTAB_FUNC(drm_gem_vram_plane_helper_prepare_fb, "", "");
KSYMTAB_FUNC(drm_gem_vram_plane_helper_cleanup_fb, "", "");
KSYMTAB_FUNC(drm_gem_vram_simple_display_pipe_prepare_fb, "", "");
KSYMTAB_FUNC(drm_gem_vram_simple_display_pipe_cleanup_fb, "", "");
KSYMTAB_FUNC(drm_vram_mm_debugfs_init, "", "");
KSYMTAB_FUNC(drmm_vram_helper_init, "", "");
KSYMTAB_FUNC(drm_vram_helper_mode_valid, "", "");

MODULE_INFO(depends, "ttm,drm_ttm_helper");

