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

KSYMTAB_FUNC(mlx5_core_uplink_netdev_event_replay, "", "");
KSYMTAB_FUNC(mlx5_core_mp_event_replay, "", "");
KSYMTAB_FUNC(mlx5_is_roce_on, "", "");
KSYMTAB_FUNC(mlx5_vf_get_core_dev, "", "");
KSYMTAB_FUNC(mlx5_vf_put_core_dev, "", "");
KSYMTAB_FUNC(mlx5_cmd_out_err, "", "");
KSYMTAB_FUNC(mlx5_cmd_check, "", "");
KSYMTAB_FUNC(mlx5_cmd_do, "", "");
KSYMTAB_FUNC(mlx5_cmd_exec, "", "");
KSYMTAB_FUNC(mlx5_cmd_exec_polling, "", "");
KSYMTAB_FUNC(mlx5_cmd_init_async_ctx, "", "");
KSYMTAB_FUNC(mlx5_cmd_cleanup_async_ctx, "", "");
KSYMTAB_FUNC(mlx5_cmd_exec_cb, "", "");
KSYMTAB_DATA(mlx5_debugfs_root, "", "");
KSYMTAB_FUNC(mlx5_debugfs_get_dev_root, "", "");
KSYMTAB_FUNC(mlx5_qp_debugfs_init, "", "");
KSYMTAB_FUNC(mlx5_qp_debugfs_cleanup, "", "");
KSYMTAB_FUNC(mlx5_debug_qp_add, "", "");
KSYMTAB_FUNC(mlx5_debug_qp_remove, "", "");
KSYMTAB_FUNC(mlx5_core_query_vendor_id, "", "");
KSYMTAB_FUNC(mlx5_eq_enable, "", "");
KSYMTAB_FUNC(mlx5_eq_disable, "", "");
KSYMTAB_FUNC(mlx5_eq_create_generic, "", "");
KSYMTAB_FUNC(mlx5_eq_destroy_generic, "", "");
KSYMTAB_FUNC(mlx5_eq_get_eqe, "", "");
KSYMTAB_FUNC(mlx5_eq_update_ci, "", "");
KSYMTAB_FUNC(mlx5_comp_eqn_get, "", "");
KSYMTAB_FUNC(mlx5_comp_vectors_max, "", "");
KSYMTAB_FUNC(mlx5_comp_vector_get_cpu, "", "");
KSYMTAB_FUNC(mlx5_eq_notifier_register, "", "");
KSYMTAB_FUNC(mlx5_eq_notifier_unregister, "", "");
KSYMTAB_FUNC(mlx5_get_uars_page, "", "");
KSYMTAB_FUNC(mlx5_put_uars_page, "", "");
KSYMTAB_FUNC(mlx5_alloc_bfreg, "", "");
KSYMTAB_FUNC(mlx5_free_bfreg, "", "");
KSYMTAB_FUNC(mlx5_core_attach_mcg, "", "");
KSYMTAB_FUNC(mlx5_core_detach_mcg, "", "");
KSYMTAB_FUNC(mlx5_create_cq, "", "");
KSYMTAB_FUNC(mlx5_core_create_cq, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_cq, "", "");
KSYMTAB_FUNC(mlx5_core_query_cq, "", "");
KSYMTAB_FUNC(mlx5_core_modify_cq, "", "");
KSYMTAB_FUNC(mlx5_core_modify_cq_moderation, "", "");
KSYMTAB_FUNC(mlx5_frag_buf_alloc_node, "_gpl", "");
KSYMTAB_FUNC(mlx5_frag_buf_free, "_gpl", "");
KSYMTAB_FUNC(mlx5_db_alloc_node, "_gpl", "");
KSYMTAB_FUNC(mlx5_db_free, "_gpl", "");
KSYMTAB_FUNC(mlx5_fill_page_frag_array_perm, "_gpl", "");
KSYMTAB_FUNC(mlx5_fill_page_frag_array, "_gpl", "");
KSYMTAB_FUNC(mlx5_access_reg, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_access_reg, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_caps, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_ptys, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_ib_port_oper, "", "");
KSYMTAB_FUNC(mlx5_toggle_port_link, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_admin_status, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_admin_status, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_max_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_oper_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_module_eeprom, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_module_eeprom_by_page, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_vl_hw_cap, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_pause, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_pause, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_pfc, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_pfc, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_prio_tc, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_prio_tc, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_tc_group, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_tc_group, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_tc_bw_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_tc_bw_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_port_ets_rate_limit, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_ets_rate_limit, "_gpl", "");
KSYMTAB_FUNC(mlx5_set_port_wol, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_port_wol, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_create_mkey, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_mkey, "", "");
KSYMTAB_FUNC(mlx5_core_query_mkey, "", "");
KSYMTAB_FUNC(mlx5_core_create_psv, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_psv, "", "");
KSYMTAB_FUNC(mlx5_core_get_terminate_scatter_list_mkey, "", "");
KSYMTAB_FUNC(mlx5_core_alloc_pd, "", "");
KSYMTAB_FUNC(mlx5_core_dealloc_pd, "", "");
KSYMTAB_FUNC(mlx5_core_alloc_transport_domain, "", "");
KSYMTAB_FUNC(mlx5_core_dealloc_transport_domain, "", "");
KSYMTAB_FUNC(mlx5_core_create_rq, "", "");
KSYMTAB_FUNC(mlx5_core_modify_rq, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_rq, "", "");
KSYMTAB_FUNC(mlx5_core_query_rq, "", "");
KSYMTAB_FUNC(mlx5_core_modify_sq, "", "");
KSYMTAB_FUNC(mlx5_core_query_sq, "", "");
KSYMTAB_FUNC(mlx5_core_query_sq_state, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_create_tir, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_tir, "", "");
KSYMTAB_FUNC(mlx5_core_create_tis, "", "");
KSYMTAB_FUNC(mlx5_core_modify_tis, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_tis, "", "");
KSYMTAB_FUNC(mlx5_core_create_rqt, "", "");
KSYMTAB_FUNC(mlx5_core_destroy_rqt, "", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_min_inline, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_min_inline, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_mac_address, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_mac_address, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_mac_address, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_mtu, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_mac_list, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_mac_list, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_vlans, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_system_image_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_node_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_qkey_viol_cntr, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_gid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_pkey, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_context, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_system_image_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_hca_vport_node_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_vport_promisc, "_gpl", "");
KSYMTAB_FUNC(mlx5_modify_nic_vport_promisc, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_update_local_lb, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_query_local_lb, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_enable_roce, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_disable_roce, "", "");
KSYMTAB_FUNC(mlx5_core_query_vport_counter, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_modify_hca_vport_context, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_affiliate_multiport, "_gpl", "");
KSYMTAB_FUNC(mlx5_nic_vport_unaffiliate_multiport, "_gpl", "");
KSYMTAB_FUNC(mlx5_query_nic_system_image_guid, "_gpl", "");
KSYMTAB_FUNC(mlx5_vport_get_other_func_cap, "_gpl", "");
KSYMTAB_FUNC(mlx5_sriov_blocking_notifier_unregister, "", "");
KSYMTAB_FUNC(mlx5_sriov_blocking_notifier_register, "", "");
KSYMTAB_FUNC(mlx5_create_flow_table, "", "");
KSYMTAB_FUNC(mlx5_flow_table_id, "", "");
KSYMTAB_FUNC(mlx5_create_lag_demux_flow_table, "", "");
KSYMTAB_FUNC(mlx5_create_auto_grouped_flow_table, "", "");
KSYMTAB_FUNC(mlx5_create_flow_group, "", "");
KSYMTAB_FUNC(mlx5_add_flow_rules, "", "");
KSYMTAB_FUNC(mlx5_del_flow_rules, "", "");
KSYMTAB_FUNC(mlx5_destroy_flow_table, "", "");
KSYMTAB_FUNC(mlx5_destroy_flow_group, "", "");
KSYMTAB_FUNC(mlx5_get_fdb_sub_ns, "", "");
KSYMTAB_FUNC(mlx5_get_flow_namespace, "", "");
KSYMTAB_FUNC(mlx5_fs_add_rx_underlay_qpn, "", "");
KSYMTAB_FUNC(mlx5_fs_remove_rx_underlay_qpn, "", "");
KSYMTAB_FUNC(mlx5_modify_header_alloc, "", "");
KSYMTAB_FUNC(mlx5_modify_header_dealloc, "", "");
KSYMTAB_FUNC(mlx5_packet_reformat_alloc, "", "");
KSYMTAB_FUNC(mlx5_packet_reformat_dealloc, "", "");
KSYMTAB_FUNC(mlx5_msix_alloc, "", "");
KSYMTAB_FUNC(mlx5_msix_free, "", "");
KSYMTAB_FUNC(mlx5_fc_create, "", "");
KSYMTAB_FUNC(mlx5_fc_id, "", "");
KSYMTAB_FUNC(mlx5_fc_destroy, "", "");
KSYMTAB_FUNC(mlx5_fc_query, "", "");
KSYMTAB_FUNC(mlx5_rl_is_in_range, "", "");
KSYMTAB_FUNC(mlx5_rl_are_equal, "", "");
KSYMTAB_FUNC(mlx5_rl_add_rate_raw, "", "");
KSYMTAB_FUNC(mlx5_rl_remove_rate_raw, "", "");
KSYMTAB_FUNC(mlx5_rl_add_rate, "", "");
KSYMTAB_FUNC(mlx5_rl_remove_rate, "", "");
KSYMTAB_FUNC(mlx5_cmd_create_vport_lag, "", "");
KSYMTAB_FUNC(mlx5_cmd_destroy_vport_lag, "", "");
KSYMTAB_FUNC(mlx5_lag_is_roce, "", "");
KSYMTAB_FUNC(mlx5_lag_is_active, "", "");
KSYMTAB_FUNC(mlx5_lag_mode_is_hash, "", "");
KSYMTAB_FUNC(mlx5_lag_is_master, "", "");
KSYMTAB_FUNC(mlx5_lag_is_sriov, "", "");
KSYMTAB_FUNC(mlx5_lag_is_shared_fdb, "", "");
KSYMTAB_FUNC(mlx5_lag_get_roce_netdev, "", "");
KSYMTAB_FUNC(mlx5_lag_get_slave_port, "", "");
KSYMTAB_FUNC(mlx5_lag_get_num_ports, "", "");
KSYMTAB_FUNC(mlx5_lag_get_next_peer_mdev, "", "");
KSYMTAB_FUNC(mlx5_lag_query_cong_counters, "", "");
KSYMTAB_FUNC(mlx5_notifier_register, "", "");
KSYMTAB_FUNC(mlx5_notifier_unregister, "", "");
KSYMTAB_FUNC(mlx5_blocking_notifier_register, "", "");
KSYMTAB_FUNC(mlx5_blocking_notifier_unregister, "", "");
KSYMTAB_FUNC(mlx5_core_reserved_gids_count, "_gpl", "");
KSYMTAB_FUNC(mlx5_core_roce_gid_set, "", "");
KSYMTAB_FUNC(mlx5_dm_sw_icm_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx5_dm_sw_icm_dealloc, "_gpl", "");
KSYMTAB_FUNC(mlx5_rsc_dump_cmd_create, "", "");
KSYMTAB_FUNC(mlx5_rsc_dump_cmd_destroy, "", "");
KSYMTAB_FUNC(mlx5_rsc_dump_next, "", "");
KSYMTAB_FUNC(mlx5_lag_is_mpesw, "", "");
KSYMTAB_FUNC(mlx5_eswitch_mode, "_gpl", "");
KSYMTAB_FUNC(mlx5_eswitch_get_encap_mode, "", "");
KSYMTAB_FUNC(mlx5_eswitch_get_total_vports, "_gpl", "");
KSYMTAB_FUNC(mlx5_eswitch_get_core_dev, "", "");
KSYMTAB_FUNC(mlx5_eswitch_add_send_to_vport_rule, "", "");
KSYMTAB_FUNC(mlx5_eswitch_register_vport_reps, "", "");
KSYMTAB_FUNC(mlx5_eswitch_unregister_vport_reps, "", "");
KSYMTAB_FUNC(mlx5_eswitch_get_proto_dev, "", "");
KSYMTAB_FUNC(mlx5_eswitch_uplink_get_proto_dev, "", "");
KSYMTAB_FUNC(mlx5_eswitch_vport_rep, "", "");
KSYMTAB_FUNC(mlx5_eswitch_reg_c1_loopback_enabled, "", "");
KSYMTAB_FUNC(mlx5_eswitch_vport_match_metadata_enabled, "", "");
KSYMTAB_FUNC(mlx5_eswitch_get_vport_metadata_for_match, "", "");
KSYMTAB_FUNC(mlx5_eswitch_get_vport_metadata_for_set, "", "");
KSYMTAB_FUNC(mlx5_mpfs_add_mac, "", "");
KSYMTAB_FUNC(mlx5_mpfs_del_mac, "", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("auxiliary:mlx5_core.eth-rep");
MODULE_ALIAS("pci:v000015B3d00001011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000101Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000A2DFsv*sd*bc*sc*i*");
MODULE_ALIAS("auxiliary:mlx5_core.eth");
