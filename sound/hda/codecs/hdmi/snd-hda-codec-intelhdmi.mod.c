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


MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-hdmi,snd-hda-codec");

MODULE_ALIAS("hdaudio:v80860054r*a01*");
MODULE_ALIAS("hdaudio:v80862800r*a01*");
MODULE_ALIAS("hdaudio:v80862804r*a01*");
MODULE_ALIAS("hdaudio:v80862805r*a01*");
MODULE_ALIAS("hdaudio:v80862806r*a01*");
MODULE_ALIAS("hdaudio:v80862807r*a01*");
MODULE_ALIAS("hdaudio:v80862808r*a01*");
MODULE_ALIAS("hdaudio:v80862809r*a01*");
MODULE_ALIAS("hdaudio:v8086280Ar*a01*");
MODULE_ALIAS("hdaudio:v8086280Br*a01*");
MODULE_ALIAS("hdaudio:v8086280Cr*a01*");
MODULE_ALIAS("hdaudio:v8086280Dr*a01*");
MODULE_ALIAS("hdaudio:v8086280Fr*a01*");
MODULE_ALIAS("hdaudio:v80862812r*a01*");
MODULE_ALIAS("hdaudio:v80862814r*a01*");
MODULE_ALIAS("hdaudio:v80862815r*a01*");
MODULE_ALIAS("hdaudio:v80862816r*a01*");
MODULE_ALIAS("hdaudio:v80862818r*a01*");
MODULE_ALIAS("hdaudio:v80862819r*a01*");
MODULE_ALIAS("hdaudio:v8086281Ar*a01*");
MODULE_ALIAS("hdaudio:v8086281Br*a01*");
MODULE_ALIAS("hdaudio:v8086281Cr*a01*");
MODULE_ALIAS("hdaudio:v8086281Dr*a01*");
MODULE_ALIAS("hdaudio:v8086281Er*a01*");
MODULE_ALIAS("hdaudio:v8086281Fr*a01*");
MODULE_ALIAS("hdaudio:v80862820r*a01*");
MODULE_ALIAS("hdaudio:v80862822r*a01*");
MODULE_ALIAS("hdaudio:v80862823r*a01*");
MODULE_ALIAS("hdaudio:v80862824r*a01*");
MODULE_ALIAS("hdaudio:v80862882r*a01*");
MODULE_ALIAS("hdaudio:v80862883r*a01*");
