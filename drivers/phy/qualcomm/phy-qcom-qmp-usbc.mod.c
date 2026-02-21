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


MODULE_INFO(depends, "typec");

MODULE_ALIAS("of:N*T*Cqcom,msm8998-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,qcm2290-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,qcm2290-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,qcs615-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,qcs615-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm660-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sdm660-qmp-usb3-phyC*");
MODULE_ALIAS("of:N*T*Cqcom,sm6115-qmp-usb3-phy");
MODULE_ALIAS("of:N*T*Cqcom,sm6115-qmp-usb3-phyC*");
