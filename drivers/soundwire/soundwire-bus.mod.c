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

KSYMTAB_DATA(sdw_bus_type, "_gpl", "");
KSYMTAB_FUNC(__sdw_register_driver, "_gpl", "");
KSYMTAB_FUNC(sdw_unregister_driver, "_gpl", "");
KSYMTAB_FUNC(sdw_bus_master_add, "", "");
KSYMTAB_FUNC(sdw_bus_master_delete, "", "");
KSYMTAB_FUNC(sdw_show_ping_status, "", "");
KSYMTAB_FUNC(sdw_nread_no_pm, "", "");
KSYMTAB_FUNC(sdw_nwrite_no_pm, "", "");
KSYMTAB_FUNC(sdw_write_no_pm, "", "");
KSYMTAB_FUNC(sdw_bread_no_pm_unlocked, "", "");
KSYMTAB_FUNC(sdw_bwrite_no_pm_unlocked, "", "");
KSYMTAB_FUNC(sdw_read_no_pm, "", "");
KSYMTAB_FUNC(sdw_update_no_pm, "", "");
KSYMTAB_FUNC(sdw_update, "", "");
KSYMTAB_FUNC(sdw_nread, "", "");
KSYMTAB_FUNC(sdw_nwrite, "", "");
KSYMTAB_FUNC(sdw_read, "", "");
KSYMTAB_FUNC(sdw_write, "", "");
KSYMTAB_FUNC(sdw_compare_devid, "", "");
KSYMTAB_FUNC(sdw_extract_slave_id, "", "");
KSYMTAB_FUNC(sdw_bus_prep_clk_stop, "", "");
KSYMTAB_FUNC(sdw_bus_clk_stop, "", "");
KSYMTAB_FUNC(sdw_bus_exit_clk_stop, "", "");
KSYMTAB_FUNC(sdw_handle_slave_status, "", "");
KSYMTAB_FUNC(sdw_clear_slave_status, "", "");
KSYMTAB_FUNC(sdw_slave_add, "", "");
KSYMTAB_FUNC(sdw_master_read_prop, "", "");
KSYMTAB_FUNC(sdw_slave_read_prop, "", "");
KSYMTAB_DATA(sdw_rows, "", "");
KSYMTAB_DATA(sdw_cols, "", "");
KSYMTAB_FUNC(sdw_find_col_index, "", "");
KSYMTAB_FUNC(sdw_find_row_index, "", "");
KSYMTAB_FUNC(sdw_prepare_stream, "", "");
KSYMTAB_FUNC(sdw_enable_stream, "", "");
KSYMTAB_FUNC(sdw_disable_stream, "", "");
KSYMTAB_FUNC(sdw_deprepare_stream, "", "");
KSYMTAB_FUNC(sdw_alloc_stream, "", "");
KSYMTAB_FUNC(sdw_startup_stream, "", "");
KSYMTAB_FUNC(sdw_shutdown_stream, "", "");
KSYMTAB_FUNC(sdw_release_stream, "", "");
KSYMTAB_FUNC(sdw_stream_add_master, "", "");
KSYMTAB_FUNC(sdw_stream_remove_master, "", "");
KSYMTAB_FUNC(sdw_stream_add_slave, "", "");
KSYMTAB_FUNC(sdw_stream_remove_slave, "", "");

MODULE_INFO(depends, "");

