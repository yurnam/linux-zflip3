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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(fsg_common_set_sysfs, "_gpl", "");
KSYMTAB_FUNC(fsg_common_set_num_buffers, "_gpl", "");
KSYMTAB_FUNC(fsg_common_remove_lun, "_gpl", "");
KSYMTAB_FUNC(fsg_common_remove_luns, "_gpl", "");
KSYMTAB_FUNC(fsg_common_free_buffers, "_gpl", "");
KSYMTAB_FUNC(fsg_common_set_cdev, "_gpl", "");
KSYMTAB_FUNC(fsg_common_create_lun, "_gpl", "");
KSYMTAB_FUNC(fsg_common_create_luns, "_gpl", "");
KSYMTAB_FUNC(fsg_common_set_inquiry_string, "_gpl", "");
KSYMTAB_FUNC(fsg_config_from_params, "_gpl", "");
KSYMTAB_DATA(fsg_intf_desc, "_gpl", "");
KSYMTAB_DATA(fsg_fs_bulk_in_desc, "_gpl", "");
KSYMTAB_DATA(fsg_fs_bulk_out_desc, "_gpl", "");
KSYMTAB_DATA(fsg_fs_function, "_gpl", "");
KSYMTAB_DATA(fsg_hs_bulk_in_desc, "_gpl", "");
KSYMTAB_DATA(fsg_hs_bulk_out_desc, "_gpl", "");
KSYMTAB_DATA(fsg_hs_function, "_gpl", "");
KSYMTAB_DATA(fsg_ss_bulk_in_desc, "_gpl", "");
KSYMTAB_DATA(fsg_ss_bulk_in_comp_desc, "_gpl", "");
KSYMTAB_DATA(fsg_ss_bulk_out_desc, "_gpl", "");
KSYMTAB_DATA(fsg_ss_bulk_out_comp_desc, "_gpl", "");
KSYMTAB_DATA(fsg_ss_function, "_gpl", "");
KSYMTAB_FUNC(fsg_lun_close, "_gpl", "");
KSYMTAB_FUNC(fsg_lun_open, "_gpl", "");
KSYMTAB_FUNC(fsg_lun_fsync_sub, "_gpl", "");
KSYMTAB_FUNC(store_cdrom_address, "_gpl", "");
KSYMTAB_FUNC(fsg_show_ro, "_gpl", "");
KSYMTAB_FUNC(fsg_show_nofua, "_gpl", "");
KSYMTAB_FUNC(fsg_show_file, "_gpl", "");
KSYMTAB_FUNC(fsg_show_cdrom, "_gpl", "");
KSYMTAB_FUNC(fsg_show_removable, "_gpl", "");
KSYMTAB_FUNC(fsg_show_inquiry_string, "_gpl", "");
KSYMTAB_FUNC(fsg_store_ro, "_gpl", "");
KSYMTAB_FUNC(fsg_store_nofua, "_gpl", "");
KSYMTAB_FUNC(fsg_store_file, "_gpl", "");
KSYMTAB_FUNC(fsg_store_cdrom, "_gpl", "");
KSYMTAB_FUNC(fsg_store_removable, "_gpl", "");
KSYMTAB_FUNC(fsg_store_inquiry_string, "_gpl", "");
KSYMTAB_FUNC(fsg_store_forced_eject, "_gpl", "");

MODULE_INFO(depends, "libcomposite");

