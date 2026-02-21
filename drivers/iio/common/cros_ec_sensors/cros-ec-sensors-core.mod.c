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

KSYMTAB_FUNC(cros_ec_sensors_push_data, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_init, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_register, "_gpl", "");
KSYMTAB_FUNC(cros_ec_motion_send_host_cmd, "_gpl", "");
KSYMTAB_DATA(cros_ec_sensors_ext_info, "_gpl", "");
KSYMTAB_DATA(cros_ec_sensors_limited_info, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_read_lpc, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_read_cmd, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_capture, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_read, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_read_avail, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_write, "_gpl", "");
KSYMTAB_DATA(cros_ec_sensors_pm_ops, "_gpl", "");

MODULE_INFO(depends, "industrialio-triggered-buffer,kfifo_buf");

