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

KSYMTAB_FUNC(st_sensors_debugfs_reg_access, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_set_odr, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_set_enable, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_set_axis_enable, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_power_enable, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_dev_name_probe, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_init_sensor, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_set_dataready_irq, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_set_fullscale_by_gain, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_read_info_raw, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_get_settings_index, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_verify_id, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_sysfs_sampling_frequency_avail, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_sysfs_scale_avail, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_trigger_handler, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_allocate_trigger, "", "IIO_ST_SENSORS");
KSYMTAB_FUNC(st_sensors_validate_device, "", "IIO_ST_SENSORS");

MODULE_INFO(depends, "");

