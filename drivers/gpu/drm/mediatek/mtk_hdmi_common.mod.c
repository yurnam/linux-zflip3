#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(mtk_hdmi_get_ncts, "_gpl", "DRM_MTK_HDMI");
KSYMTAB_FUNC(mtk_hdmi_audio_params, "_gpl", "DRM_MTK_HDMI");
KSYMTAB_FUNC(mtk_hdmi_audio_get_eld, "_gpl", "DRM_MTK_HDMI");
KSYMTAB_FUNC(mtk_hdmi_audio_set_plugged_cb, "_gpl", "DRM_MTK_HDMI");
KSYMTAB_FUNC(mtk_hdmi_bridge_mode_fixup, "_gpl", "DRM_MTK_HDMI");
KSYMTAB_FUNC(mtk_hdmi_bridge_mode_set, "_gpl", "DRM_MTK_HDMI");
KSYMTAB_FUNC(mtk_hdmi_common_probe, "_gpl", "DRM_MTK_HDMI");

MODULE_INFO(depends, "");

