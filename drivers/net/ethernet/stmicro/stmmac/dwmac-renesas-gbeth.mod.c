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


MODULE_INFO(depends, "pcs-rzn1-miic,stmmac-platform,stmmac");

MODULE_ALIAS("of:N*T*Crenesas,r9a09g077-gbeth");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g077-gbethC*");
MODULE_ALIAS("of:N*T*Crenesas,rzv2h-gbeth");
MODULE_ALIAS("of:N*T*Crenesas,rzv2h-gbethC*");
