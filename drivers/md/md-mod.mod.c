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

KSYMTAB_DATA(md_cluster_ops, "", "");
KSYMTAB_FUNC(md_new_event, "_gpl", "");
KSYMTAB_FUNC(md_handle_request, "", "");
KSYMTAB_FUNC(mddev_suspend, "_gpl", "");
KSYMTAB_FUNC(mddev_resume, "_gpl", "");
KSYMTAB_FUNC(md_flush_request, "", "");
KSYMTAB_FUNC(mddev_init, "_gpl", "");
KSYMTAB_FUNC(mddev_destroy, "_gpl", "");
KSYMTAB_FUNC(mddev_unlock, "_gpl", "");
KSYMTAB_FUNC(md_find_rdev_nr_rcu, "_gpl", "");
KSYMTAB_FUNC(md_find_rdev_rcu, "_gpl", "");
KSYMTAB_FUNC(md_rdev_clear, "_gpl", "");
KSYMTAB_FUNC(sync_page_io, "_gpl", "");
KSYMTAB_FUNC(md_check_no_bitmap, "", "");
KSYMTAB_FUNC(md_integrity_register, "", "");
KSYMTAB_FUNC(md_integrity_add_rdev, "", "");
KSYMTAB_FUNC(md_update_sb, "", "");
KSYMTAB_FUNC(md_rdev_init, "_gpl", "");
KSYMTAB_FUNC(md_run, "_gpl", "");
KSYMTAB_FUNC(md_start, "_gpl", "");
KSYMTAB_FUNC(md_stop_writes, "_gpl", "");
KSYMTAB_FUNC(md_stop, "_gpl", "");
KSYMTAB_FUNC(md_set_array_sectors, "", "");
KSYMTAB_FUNC(md_wakeup_thread, "", "");
KSYMTAB_FUNC(md_register_thread, "", "");
KSYMTAB_FUNC(md_unregister_thread, "", "");
KSYMTAB_FUNC(md_error, "", "");
KSYMTAB_FUNC(register_md_personality, "", "");
KSYMTAB_FUNC(unregister_md_personality, "", "");
KSYMTAB_FUNC(register_md_cluster_operations, "", "");
KSYMTAB_FUNC(unregister_md_cluster_operations, "", "");
KSYMTAB_FUNC(md_done_sync, "", "");
KSYMTAB_FUNC(md_write_start, "", "");
KSYMTAB_FUNC(md_write_inc, "", "");
KSYMTAB_FUNC(md_write_end, "", "");
KSYMTAB_FUNC(md_submit_discard_bio, "_gpl", "");
KSYMTAB_FUNC(md_account_bio, "_gpl", "");
KSYMTAB_FUNC(md_allow_write, "_gpl", "");
KSYMTAB_FUNC(md_do_sync, "_gpl", "");
KSYMTAB_FUNC(md_check_recovery, "", "");
KSYMTAB_FUNC(md_reap_sync_thread, "", "");
KSYMTAB_FUNC(md_wait_for_blocked_rdev, "", "");
KSYMTAB_FUNC(md_finish_reshape, "", "");
KSYMTAB_FUNC(rdev_set_badblocks, "_gpl", "");
KSYMTAB_FUNC(rdev_clear_badblocks, "_gpl", "");
KSYMTAB_FUNC(md_reload_sb, "", "");
KSYMTAB_FUNC(md_bitmap_update_sb, "", "");
KSYMTAB_FUNC(md_bitmap_unplug, "", "");
KSYMTAB_FUNC(md_bitmap_unplug_async, "", "");
KSYMTAB_FUNC(md_bitmap_startwrite, "", "");
KSYMTAB_FUNC(md_bitmap_endwrite, "", "");
KSYMTAB_FUNC(md_bitmap_start_sync, "", "");
KSYMTAB_FUNC(md_bitmap_end_sync, "", "");
KSYMTAB_FUNC(md_bitmap_close_sync, "", "");
KSYMTAB_FUNC(md_bitmap_cond_end_sync, "", "");
KSYMTAB_FUNC(md_bitmap_sync_with_cluster, "", "");
KSYMTAB_FUNC(md_bitmap_free, "", "");
KSYMTAB_FUNC(md_bitmap_load, "_gpl", "");
KSYMTAB_FUNC(get_bitmap_from_slot, "", "");
KSYMTAB_FUNC(md_bitmap_copy_from_slot, "_gpl", "");
KSYMTAB_FUNC(md_bitmap_resize, "_gpl", "");

MODULE_INFO(depends, "");

