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


MODULE_INFO(depends, "snd-hda-codec-hdmi,snd-hda-codec,snd-hda-core");

MODULE_ALIAS("hdaudio:v10DE0020r*a01*");
MODULE_ALIAS("hdaudio:v10DE0022r*a01*");
MODULE_ALIAS("hdaudio:v10DE0028r*a01*");
MODULE_ALIAS("hdaudio:v10DE0029r*a01*");
MODULE_ALIAS("hdaudio:v10DE002Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE002Er*a01*");
MODULE_ALIAS("hdaudio:v10DE002Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE0030r*a01*");
MODULE_ALIAS("hdaudio:v10DE0031r*a01*");
MODULE_ALIAS("hdaudio:v10DE0033r*a01*");
MODULE_ALIAS("hdaudio:v10DE0034r*a01*");
MODULE_ALIAS("hdaudio:v10DE0035r*a01*");
