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


MODULE_INFO(depends, "videodev,v4l2-async,mc");

MODULE_ALIAS("of:N*T*Crenesas,r8a779a0-isp");
MODULE_ALIAS("of:N*T*Crenesas,r8a779a0-ispC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a779g0-isp");
MODULE_ALIAS("of:N*T*Crenesas,r8a779g0-ispC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-isp");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-ispC*");
