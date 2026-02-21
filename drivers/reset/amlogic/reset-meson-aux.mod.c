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


MODULE_INFO(depends, "");

MODULE_ALIAS("auxiliary:a1-audio-clkc.rst-a1");
MODULE_ALIAS("auxiliary:a1-audio-clkc.rst-a1-vad");
MODULE_ALIAS("auxiliary:axg-audio-clkc.rst-g12a");
MODULE_ALIAS("auxiliary:axg-audio-clkc.rst-sm1");
