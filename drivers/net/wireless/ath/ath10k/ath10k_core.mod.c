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

KSYMTAB_FUNC(ath10k_mac_tx_push_pending, "", "");
KSYMTAB_FUNC(ath10k_info, "", "");
KSYMTAB_FUNC(ath10k_print_driver_info, "", "");
KSYMTAB_FUNC(ath10k_err, "", "");
KSYMTAB_FUNC(ath10k_warn, "", "");
KSYMTAB_DATA(ath10k_debug_mask, "", "");
KSYMTAB_FUNC(ath10k_core_check_dt, "", "");
KSYMTAB_FUNC(ath10k_core_free_board_files, "", "");
KSYMTAB_FUNC(ath10k_core_fetch_board_file, "", "");
KSYMTAB_FUNC(ath10k_core_start_recovery, "", "");
KSYMTAB_FUNC(ath10k_core_napi_enable, "", "");
KSYMTAB_FUNC(ath10k_core_napi_sync_disable, "", "");
KSYMTAB_FUNC(ath10k_core_start, "", "");
KSYMTAB_FUNC(ath10k_core_stop, "", "");
KSYMTAB_FUNC(ath10k_core_register, "", "");
KSYMTAB_FUNC(ath10k_core_unregister, "", "");
KSYMTAB_FUNC(ath10k_core_create, "", "");
KSYMTAB_FUNC(ath10k_core_destroy, "", "");
KSYMTAB_FUNC(ath10k_htc_notify_tx_completion, "", "");
KSYMTAB_FUNC(ath10k_htc_tx_completion_handler, "", "");
KSYMTAB_FUNC(ath10k_htc_process_trailer, "", "");
KSYMTAB_FUNC(ath10k_htc_rx_completion_handler, "", "");
KSYMTAB_FUNC(ath10k_htt_t2h_msg_handler, "", "");
KSYMTAB_FUNC(ath10k_htt_rx_pktlog_completion_handler, "", "");
KSYMTAB_FUNC(ath10k_htt_rx_hl_indication, "", "");
KSYMTAB_FUNC(ath10k_htt_txrx_compl_task, "", "");
KSYMTAB_FUNC(ath10k_htt_hif_tx_complete, "", "");
KSYMTAB_FUNC(ath10k_bmi_start, "", "");
KSYMTAB_FUNC(ath10k_bmi_read_memory, "", "");
KSYMTAB_FUNC(ath10k_coredump_get_mem_layout, "", "");
KSYMTAB_FUNC(ath10k_coredump_new, "", "");
KSYMTAB_FUNC(ath10k_ce_send_nolock, "", "");
KSYMTAB_FUNC(__ath10k_ce_send_revert, "", "");
KSYMTAB_FUNC(ath10k_ce_send, "", "");
KSYMTAB_FUNC(ath10k_ce_num_free_src_entries, "", "");
KSYMTAB_FUNC(__ath10k_ce_rx_num_free_bufs, "", "");
KSYMTAB_FUNC(ath10k_ce_rx_update_write_idx, "", "");
KSYMTAB_FUNC(ath10k_ce_rx_post_buf, "", "");
KSYMTAB_FUNC(ath10k_ce_completed_recv_next_nolock, "", "");
KSYMTAB_FUNC(ath10k_ce_completed_recv_next, "", "");
KSYMTAB_FUNC(ath10k_ce_revoke_recv_next, "", "");
KSYMTAB_FUNC(ath10k_ce_completed_send_next_nolock, "", "");
KSYMTAB_FUNC(ath10k_ce_cancel_send_next, "", "");
KSYMTAB_FUNC(ath10k_ce_completed_send_next, "", "");
KSYMTAB_FUNC(ath10k_ce_per_engine_service, "", "");
KSYMTAB_FUNC(ath10k_ce_per_engine_service_any, "", "");
KSYMTAB_FUNC(ath10k_ce_disable_interrupt, "", "");
KSYMTAB_FUNC(ath10k_ce_disable_interrupts, "", "");
KSYMTAB_FUNC(ath10k_ce_enable_interrupt, "", "");
KSYMTAB_FUNC(ath10k_ce_enable_interrupts, "", "");
KSYMTAB_FUNC(ath10k_ce_init_pipe, "", "");
KSYMTAB_FUNC(ath10k_ce_deinit_pipe, "", "");
KSYMTAB_FUNC(ath10k_ce_free_pipe, "", "");
KSYMTAB_FUNC(ath10k_ce_dump_registers, "", "");
KSYMTAB_FUNC(ath10k_ce_alloc_pipe, "", "");
KSYMTAB_FUNC(ath10k_ce_alloc_rri, "", "");
KSYMTAB_FUNC(ath10k_ce_free_rri, "", "");

MODULE_INFO(depends, "mac80211,cfg80211,ath");

