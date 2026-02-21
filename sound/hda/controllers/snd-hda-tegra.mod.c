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


MODULE_INFO(depends, "snd-hda-core,snd-hda-codec");

MODULE_ALIAS("of:N*T*Cnvidia,tegra30-hda");
MODULE_ALIAS("of:N*T*Cnvidia,tegra30-hdaC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-hda");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-hdaC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-hda");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-hdaC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra264-hda");
MODULE_ALIAS("of:N*T*Cnvidia,tegra264-hdaC*");
