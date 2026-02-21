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


MODULE_INFO(depends, "snd-hda-codec-hdmi,snd-hda-codec");

MODULE_ALIAS("hdaudio:v10DE0008r*a01*");
MODULE_ALIAS("hdaudio:v10DE0009r*a01*");
MODULE_ALIAS("hdaudio:v10DE000Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE000Br*a01*");
MODULE_ALIAS("hdaudio:v10DE000Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE000Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0010r*a01*");
MODULE_ALIAS("hdaudio:v10DE0011r*a01*");
MODULE_ALIAS("hdaudio:v10DE0012r*a01*");
MODULE_ALIAS("hdaudio:v10DE0013r*a01*");
MODULE_ALIAS("hdaudio:v10DE0014r*a01*");
MODULE_ALIAS("hdaudio:v10DE0015r*a01*");
MODULE_ALIAS("hdaudio:v10DE0016r*a01*");
MODULE_ALIAS("hdaudio:v10DE0018r*a01*");
MODULE_ALIAS("hdaudio:v10DE0019r*a01*");
MODULE_ALIAS("hdaudio:v10DE001Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE001Br*a01*");
MODULE_ALIAS("hdaudio:v10DE001Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE0040r*a01*");
MODULE_ALIAS("hdaudio:v10DE0041r*a01*");
MODULE_ALIAS("hdaudio:v10DE0042r*a01*");
MODULE_ALIAS("hdaudio:v10DE0043r*a01*");
MODULE_ALIAS("hdaudio:v10DE0044r*a01*");
MODULE_ALIAS("hdaudio:v10DE0045r*a01*");
MODULE_ALIAS("hdaudio:v10DE0050r*a01*");
MODULE_ALIAS("hdaudio:v10DE0051r*a01*");
MODULE_ALIAS("hdaudio:v10DE0052r*a01*");
MODULE_ALIAS("hdaudio:v10DE0060r*a01*");
MODULE_ALIAS("hdaudio:v10DE0061r*a01*");
MODULE_ALIAS("hdaudio:v10DE0062r*a01*");
MODULE_ALIAS("hdaudio:v10DE0070r*a01*");
MODULE_ALIAS("hdaudio:v10DE0071r*a01*");
MODULE_ALIAS("hdaudio:v10DE0072r*a01*");
MODULE_ALIAS("hdaudio:v10DE0073r*a01*");
MODULE_ALIAS("hdaudio:v10DE0074r*a01*");
MODULE_ALIAS("hdaudio:v10DE0076r*a01*");
MODULE_ALIAS("hdaudio:v10DE007Br*a01*");
MODULE_ALIAS("hdaudio:v10DE007Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Er*a01*");
MODULE_ALIAS("hdaudio:v10DE0080r*a01*");
MODULE_ALIAS("hdaudio:v10DE0081r*a01*");
MODULE_ALIAS("hdaudio:v10DE0082r*a01*");
MODULE_ALIAS("hdaudio:v10DE0083r*a01*");
MODULE_ALIAS("hdaudio:v10DE0084r*a01*");
MODULE_ALIAS("hdaudio:v10DE0090r*a01*");
MODULE_ALIAS("hdaudio:v10DE0091r*a01*");
MODULE_ALIAS("hdaudio:v10DE0092r*a01*");
MODULE_ALIAS("hdaudio:v10DE0093r*a01*");
MODULE_ALIAS("hdaudio:v10DE0094r*a01*");
MODULE_ALIAS("hdaudio:v10DE0095r*a01*");
MODULE_ALIAS("hdaudio:v10DE0097r*a01*");
MODULE_ALIAS("hdaudio:v10DE0098r*a01*");
MODULE_ALIAS("hdaudio:v10DE0099r*a01*");
MODULE_ALIAS("hdaudio:v10DE009Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE009Br*a01*");
MODULE_ALIAS("hdaudio:v10DE009Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE009Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE009Er*a01*");
MODULE_ALIAS("hdaudio:v10DE009Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE00A0r*a01*");
MODULE_ALIAS("hdaudio:v10DE00A1r*a01*");
MODULE_ALIAS("hdaudio:v10DE00A3r*a01*");
MODULE_ALIAS("hdaudio:v10DE00A4r*a01*");
MODULE_ALIAS("hdaudio:v10DE00A5r*a01*");
MODULE_ALIAS("hdaudio:v10DE00A6r*a01*");
MODULE_ALIAS("hdaudio:v10DE00A7r*a01*");
MODULE_ALIAS("hdaudio:v10DE00A8r*a01*");
MODULE_ALIAS("hdaudio:v10DE00A9r*a01*");
MODULE_ALIAS("hdaudio:v10DE00AAr*a01*");
MODULE_ALIAS("hdaudio:v10DE00ABr*a01*");
MODULE_ALIAS("hdaudio:v10DE00ADr*a01*");
MODULE_ALIAS("hdaudio:v10DE00AEr*a01*");
MODULE_ALIAS("hdaudio:v10DE00AFr*a01*");
MODULE_ALIAS("hdaudio:v10DE00B0r*a01*");
MODULE_ALIAS("hdaudio:v10DE00B1r*a01*");
MODULE_ALIAS("hdaudio:v10DE00C0r*a01*");
MODULE_ALIAS("hdaudio:v10DE00C1r*a01*");
MODULE_ALIAS("hdaudio:v10DE00C3r*a01*");
MODULE_ALIAS("hdaudio:v10DE00C4r*a01*");
MODULE_ALIAS("hdaudio:v10DE00C5r*a01*");
