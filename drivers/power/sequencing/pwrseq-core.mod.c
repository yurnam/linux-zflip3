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

KSYMTAB_FUNC(pwrseq_device_register, "_gpl", "");
KSYMTAB_FUNC(pwrseq_device_unregister, "_gpl", "");
KSYMTAB_FUNC(devm_pwrseq_device_register, "_gpl", "");
KSYMTAB_FUNC(pwrseq_device_get_drvdata, "_gpl", "");
KSYMTAB_FUNC(pwrseq_get, "_gpl", "");
KSYMTAB_FUNC(pwrseq_put, "_gpl", "");
KSYMTAB_FUNC(devm_pwrseq_get, "_gpl", "");
KSYMTAB_FUNC(pwrseq_power_on, "_gpl", "");
KSYMTAB_FUNC(pwrseq_power_off, "_gpl", "");

MODULE_INFO(depends, "");

