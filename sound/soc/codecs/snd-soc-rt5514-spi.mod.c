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

KSYMTAB_FUNC(rt5514_spi_burst_read, "_gpl", "");
KSYMTAB_FUNC(rt5514_spi_burst_write, "_gpl", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crealtek,rt5514");
MODULE_ALIAS("of:N*T*Crealtek,rt5514C*");
