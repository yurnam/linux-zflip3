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

KSYMTAB_FUNC(hisi_qm_wait_mb_ready, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_mb, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_get_hw_info, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_start_qp, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_stop_qp, "_gpl", "");
KSYMTAB_FUNC(hisi_qp_send, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_wait_task_finish, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_uninit, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_start, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_stop, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_dev_err_init, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_dev_err_uninit, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_free_qps, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_alloc_qps_node, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_sriov_enable, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_sriov_disable, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_sriov_configure, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_dev_err_detected, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_dev_slot_reset, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_reset_prepare, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_reset_done, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_dev_shutdown, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_alg_register, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_alg_unregister, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_init, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_get_dfx_access, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_put_dfx_access, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_pm_init, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_pm_uninit, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_suspend, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_resume, "_gpl", "");
KSYMTAB_FUNC(hisi_acc_create_sgl_pool, "_gpl", "");
KSYMTAB_FUNC(hisi_acc_free_sgl_pool, "_gpl", "");
KSYMTAB_FUNC(hisi_acc_sg_buf_map_to_hw_sgl, "_gpl", "");
KSYMTAB_FUNC(hisi_acc_sg_buf_unmap, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_regs_dump, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_regs_debugfs_init, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_regs_debugfs_uninit, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_acc_diff_regs_dump, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_debug_init, "_gpl", "");
KSYMTAB_FUNC(hisi_qm_debug_regs_clear, "_gpl", "");

MODULE_INFO(depends, "uacce");

