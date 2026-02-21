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

KSYMTAB_DATA(v4l2_dv_timings_presets, "_gpl", "");
KSYMTAB_FUNC(v4l2_valid_dv_timings, "_gpl", "");
KSYMTAB_FUNC(v4l2_enum_dv_timings_cap, "_gpl", "");
KSYMTAB_FUNC(v4l2_find_dv_timings_cap, "_gpl", "");
KSYMTAB_FUNC(v4l2_find_dv_timings_cea861_vic, "_gpl", "");
KSYMTAB_FUNC(v4l2_match_dv_timings, "_gpl", "");
KSYMTAB_FUNC(v4l2_print_dv_timings, "_gpl", "");
KSYMTAB_FUNC(v4l2_dv_timings_aspect_ratio, "_gpl", "");
KSYMTAB_FUNC(v4l2_calc_timeperframe, "_gpl", "");
KSYMTAB_FUNC(v4l2_detect_cvt, "_gpl", "");
KSYMTAB_FUNC(v4l2_detect_gtf, "_gpl", "");
KSYMTAB_FUNC(v4l2_calc_aspect_ratio, "_gpl", "");
KSYMTAB_FUNC(v4l2_hdmi_rx_colorimetry, "_gpl", "");
KSYMTAB_FUNC(v4l2_get_edid_phys_addr, "_gpl", "");
KSYMTAB_FUNC(v4l2_set_edid_phys_addr, "_gpl", "");
KSYMTAB_FUNC(v4l2_phys_addr_for_input, "_gpl", "");
KSYMTAB_FUNC(v4l2_phys_addr_validate, "_gpl", "");

MODULE_INFO(depends, "");

