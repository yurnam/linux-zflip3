#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(wcd_get_micb_vout_ctl_val, "_gpl", "");
KSYMTAB_FUNC(wcd_dt_parse_micbias_info, "_gpl", "");
KSYMTAB_DATA(wcd_sdw_component_ops, "_gpl", "");
KSYMTAB_FUNC(wcd_update_status, "_gpl", "");
KSYMTAB_FUNC(wcd_bus_config, "_gpl", "");
KSYMTAB_FUNC(wcd_interrupt_callback, "_gpl", "");

MODULE_INFO(depends, "soundwire-bus");

