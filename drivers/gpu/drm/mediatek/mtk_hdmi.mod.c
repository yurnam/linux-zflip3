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


MODULE_INFO(depends, "mtk_cec,mtk_hdmi_common,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cmediatek,mt2701-hdmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-hdmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-hdmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-hdmiC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-hdmi");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-hdmiC*");
