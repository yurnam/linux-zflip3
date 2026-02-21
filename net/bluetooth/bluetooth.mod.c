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

KSYMTAB_FUNC(bt_sock_reclassify_lock, "", "");
KSYMTAB_FUNC(bt_sock_register, "", "");
KSYMTAB_FUNC(bt_sock_unregister, "", "");
KSYMTAB_FUNC(bt_sock_alloc, "", "");
KSYMTAB_FUNC(bt_sock_link, "", "");
KSYMTAB_FUNC(bt_sock_unlink, "", "");
KSYMTAB_FUNC(bt_accept_enqueue, "", "");
KSYMTAB_FUNC(bt_accept_unlink, "", "");
KSYMTAB_FUNC(bt_accept_dequeue, "", "");
KSYMTAB_FUNC(bt_sock_recvmsg, "", "");
KSYMTAB_FUNC(bt_sock_stream_recvmsg, "", "");
KSYMTAB_FUNC(bt_sock_poll, "", "");
KSYMTAB_FUNC(bt_sock_ioctl, "", "");
KSYMTAB_FUNC(bt_sock_wait_state, "", "");
KSYMTAB_FUNC(bt_sock_wait_ready, "", "");
KSYMTAB_FUNC(bt_procfs_init, "", "");
KSYMTAB_FUNC(bt_procfs_cleanup, "", "");
KSYMTAB_DATA(bt_debugfs, "_gpl", "");
KSYMTAB_FUNC(hci_alloc_dev_priv, "", "");
KSYMTAB_FUNC(hci_free_dev, "", "");
KSYMTAB_FUNC(hci_register_dev, "", "");
KSYMTAB_FUNC(hci_unregister_dev, "", "");
KSYMTAB_FUNC(hci_release_dev, "", "");
KSYMTAB_FUNC(hci_suspend_dev, "", "");
KSYMTAB_FUNC(hci_resume_dev, "", "");
KSYMTAB_FUNC(hci_reset_dev, "", "");
KSYMTAB_FUNC(hci_recv_frame, "", "");
KSYMTAB_FUNC(hci_recv_diag, "", "");
KSYMTAB_FUNC(hci_set_hw_info, "", "");
KSYMTAB_FUNC(hci_set_fw_info, "", "");
KSYMTAB_FUNC(hci_register_cb, "", "");
KSYMTAB_FUNC(hci_unregister_cb, "", "");
KSYMTAB_FUNC(__hci_cmd_send, "", "");
KSYMTAB_FUNC(hci_get_route, "", "");
KSYMTAB_FUNC(hci_conn_security, "", "");
KSYMTAB_FUNC(hci_conn_check_secure, "", "");
KSYMTAB_FUNC(hci_conn_switch_role, "", "");
KSYMTAB_FUNC(hci_mgmt_chan_register, "", "");
KSYMTAB_FUNC(hci_mgmt_chan_unregister, "", "");
KSYMTAB_FUNC(l2cap_add_psm, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_create, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_put, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_set_defaults, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_del, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_list, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_close, "", "");
KSYMTAB_FUNC(l2cap_register_user, "", "");
KSYMTAB_FUNC(l2cap_unregister_user, "", "");
KSYMTAB_FUNC(l2cap_conn_get, "", "");
KSYMTAB_FUNC(l2cap_conn_put, "", "");
KSYMTAB_FUNC(l2cap_chan_send, "_gpl", "");
KSYMTAB_FUNC(l2cap_chan_connect, "_gpl", "");
KSYMTAB_FUNC(l2cap_is_socket, "", "");
KSYMTAB_FUNC(baswap, "", "");
KSYMTAB_FUNC(bt_to_errno, "", "");
KSYMTAB_FUNC(bt_status, "", "");
KSYMTAB_FUNC(bt_info, "", "");
KSYMTAB_FUNC(bt_warn, "", "");
KSYMTAB_FUNC(bt_err, "", "");
KSYMTAB_FUNC(bt_warn_ratelimited, "", "");
KSYMTAB_FUNC(bt_err_ratelimited, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_sk, "", "");
KSYMTAB_FUNC(__hci_cmd_sync, "", "");
KSYMTAB_FUNC(hci_cmd_sync, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_ev, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_status_sk, "", "");
KSYMTAB_FUNC(__hci_cmd_sync_status, "", "");
KSYMTAB_FUNC(hci_cmd_sync_cancel, "", "");
KSYMTAB_FUNC(hci_cmd_sync_submit, "", "");
KSYMTAB_FUNC(hci_cmd_sync_queue, "", "");
KSYMTAB_FUNC(hci_devcd_rx, "", "");
KSYMTAB_FUNC(hci_devcd_timeout, "", "");
KSYMTAB_FUNC(hci_devcd_register, "", "");
KSYMTAB_FUNC(hci_devcd_init, "", "");
KSYMTAB_FUNC(hci_devcd_append, "", "");
KSYMTAB_FUNC(hci_devcd_append_pattern, "", "");
KSYMTAB_FUNC(hci_devcd_complete, "", "");
KSYMTAB_FUNC(hci_devcd_abort, "", "");

MODULE_INFO(depends, "ecdh_generic,rfkill");


MODULE_INFO(srcversion, "D129C865C413FE3FF7EC064");
