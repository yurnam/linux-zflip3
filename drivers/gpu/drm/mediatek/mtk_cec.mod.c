#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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

KSYMTAB_FUNC(mtk_cec_set_hpd_event, "_gpl", "DRM_MTK_HDMI_V1");
KSYMTAB_FUNC(mtk_cec_hpd_high, "_gpl", "DRM_MTK_HDMI_V1");

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt8173-cec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-cecC*");
