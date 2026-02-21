#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(cros_ec_sensors_push_data, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_init, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_register, "_gpl", "");
KSYMTAB_FUNC(cros_ec_motion_send_host_cmd, "_gpl", "");
KSYMTAB_DATA(cros_ec_sensors_ext_info, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_read_lpc, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_read_cmd, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_capture, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_read, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_read_avail, "_gpl", "");
KSYMTAB_FUNC(cros_ec_sensors_core_write, "_gpl", "");
KSYMTAB_DATA(cros_ec_sensors_pm_ops, "_gpl", "");

MODULE_INFO(depends, "kfifo_buf,industrialio-triggered-buffer");

