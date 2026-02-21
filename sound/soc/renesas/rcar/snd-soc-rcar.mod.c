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

MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-gen1");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-gen1C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-gen2");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-gen2C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-gen3");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-gen3C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-gen4");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-gen4C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-r8a77990");
MODULE_ALIAS("of:N*T*Crenesas,rcar_sound-r8a77990C*");
