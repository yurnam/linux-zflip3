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

KSYMTAB_DATA(v4l2_vp9_kf_y_mode_prob, "_gpl", "");
KSYMTAB_DATA(v4l2_vp9_kf_partition_probs, "_gpl", "");
KSYMTAB_DATA(v4l2_vp9_kf_uv_mode_prob, "_gpl", "");
KSYMTAB_DATA(v4l2_vp9_default_probs, "_gpl", "");
KSYMTAB_FUNC(v4l2_vp9_fw_update_probs, "_gpl", "");
KSYMTAB_FUNC(v4l2_vp9_reset_frame_ctx, "_gpl", "");
KSYMTAB_FUNC(v4l2_vp9_adapt_coef_probs, "_gpl", "");
KSYMTAB_FUNC(v4l2_vp9_adapt_noncoef_probs, "_gpl", "");
KSYMTAB_FUNC(v4l2_vp9_seg_feat_enabled, "_gpl", "");

MODULE_INFO(depends, "");

