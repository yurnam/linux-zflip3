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

KSYMTAB_FUNC(mlx4_buf_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_buf_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_db_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_db_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_alloc_hwq_res, "_gpl", "");
KSYMTAB_FUNC(mlx4_free_hwq_res, "_gpl", "");
KSYMTAB_FUNC(__mlx4_cmd, "_gpl", "");
KSYMTAB_FUNC(mlx4_alloc_cmd_mailbox, "_gpl", "");
KSYMTAB_FUNC(mlx4_free_cmd_mailbox, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_active_ports, "_gpl", "");
KSYMTAB_FUNC(mlx4_slave_convert_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_phys_to_slave_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_phys_to_slaves_pport, "_gpl", "");
KSYMTAB_FUNC(mlx4_phys_to_slaves_pport_actv, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_rate, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_slave_default_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_spoofchk, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_vf_config, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_vf_link_state, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_counter_stats, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_vf_stats, "_gpl", "");
KSYMTAB_FUNC(mlx4_vf_smi_enabled, "_gpl", "");
KSYMTAB_FUNC(mlx4_vf_get_enable_smi_admin, "_gpl", "");
KSYMTAB_FUNC(mlx4_vf_set_enable_smi_admin, "_gpl", "");
KSYMTAB_FUNC(mlx4_cq_modify, "_gpl", "");
KSYMTAB_FUNC(mlx4_cq_resize, "_gpl", "");
KSYMTAB_FUNC(mlx4_cq_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_cq_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_gen_pkey_eqe, "", "");
KSYMTAB_FUNC(mlx4_gen_guid_change_eqe, "", "");
KSYMTAB_FUNC(mlx4_gen_port_state_change_eqe, "", "");
KSYMTAB_FUNC(mlx4_get_slave_port_state, "", "");
KSYMTAB_FUNC(set_and_calc_slave_port_state, "", "");
KSYMTAB_FUNC(mlx4_gen_slaves_port_mgt_ev, "", "");
KSYMTAB_FUNC(mlx4_test_async, "", "");
KSYMTAB_FUNC(mlx4_test_interrupt, "", "");
KSYMTAB_FUNC(mlx4_is_eq_vector_valid, "", "");
KSYMTAB_FUNC(mlx4_get_eqs_per_port, "", "");
KSYMTAB_FUNC(mlx4_is_eq_shared, "", "");
KSYMTAB_FUNC(mlx4_get_cpu_rmap, "", "");
KSYMTAB_FUNC(mlx4_assign_eq, "", "");
KSYMTAB_FUNC(mlx4_eq_get_irq, "", "");
KSYMTAB_FUNC(mlx4_release_eq, "", "");
KSYMTAB_FUNC(mlx4_get_slave_pkey_gid_tbl_len, "", "");
KSYMTAB_FUNC(mlx4_INIT_PORT, "_gpl", "");
KSYMTAB_FUNC(mlx4_CLOSE_PORT, "_gpl", "");
KSYMTAB_FUNC(mlx4_config_dev_retrieval, "_gpl", "");
KSYMTAB_FUNC(mlx4_config_vxlan_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_config_roce_v2_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_query_diag_counters, "", "");
KSYMTAB_FUNC(mlx4_wol_read, "_gpl", "");
KSYMTAB_FUNC(mlx4_wol_write, "_gpl", "");
KSYMTAB_FUNC(mlx4_ACCESS_PTYS_REG, "_gpl", "");
KSYMTAB_FUNC(get_phv_bit, "", "");
KSYMTAB_FUNC(set_phv_bit, "", "");
KSYMTAB_FUNC(mlx4_get_is_vlan_offload_disabled, "", "");
KSYMTAB_FUNC(mlx4_replace_zero_macs, "_gpl", "");
KSYMTAB_FUNC(mlx4_SET_PORT_PRIO2TC, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_SCHEDULER, "", "");
KSYMTAB_FUNC(mlx4_ALLOCATE_VPP_get, "", "");
KSYMTAB_FUNC(mlx4_ALLOCATE_VPP_set, "", "");
KSYMTAB_FUNC(mlx4_SET_VPORT_QOS_get, "", "");
KSYMTAB_FUNC(mlx4_SET_VPORT_QOS_set, "", "");
KSYMTAB_FUNC(mlx4_register_auxiliary_driver, "_gpl", "");
KSYMTAB_FUNC(mlx4_unregister_auxiliary_driver, "_gpl", "");
KSYMTAB_FUNC(mlx4_register_event_notifier, "", "");
KSYMTAB_FUNC(mlx4_unregister_event_notifier, "", "");
KSYMTAB_FUNC(mlx4_get_devlink_port, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_parav_qkey, "", "");
KSYMTAB_FUNC(mlx4_sync_pkey_table, "", "");
KSYMTAB_FUNC(mlx4_put_slave_node_guid, "", "");
KSYMTAB_FUNC(mlx4_get_slave_node_guid, "", "");
KSYMTAB_FUNC(mlx4_is_slave_active, "", "");
KSYMTAB_FUNC(mlx4_handle_eth_header_mcast_prio, "", "");
KSYMTAB_FUNC(mlx4_queue_bond_work, "", "");
KSYMTAB_FUNC(mlx4_read_clock, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_internal_clock_params, "_gpl", "");
KSYMTAB_FUNC(mlx4_counter_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_counter_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_default_counter_index, "_gpl", "");
KSYMTAB_FUNC(mlx4_set_admin_guid, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_admin_guid, "_gpl", "");
KSYMTAB_FUNC(mlx4_map_sw_to_hw_steering_mode, "_gpl", "");
KSYMTAB_FUNC(mlx4_map_sw_to_hw_steering_id, "_gpl", "");
KSYMTAB_FUNC(mlx4_hw_rule_sz, "_gpl", "");
KSYMTAB_FUNC(mlx4_flow_attach, "_gpl", "");
KSYMTAB_FUNC(mlx4_flow_detach, "_gpl", "");
KSYMTAB_FUNC(mlx4_tunnel_steer_add, "", "");
KSYMTAB_FUNC(mlx4_FLOW_STEERING_IB_UC_QP_RANGE, "_gpl", "");
KSYMTAB_FUNC(mlx4_multicast_attach, "_gpl", "");
KSYMTAB_FUNC(mlx4_multicast_detach, "_gpl", "");
KSYMTAB_FUNC(mlx4_flow_steer_promisc_add, "_gpl", "");
KSYMTAB_FUNC(mlx4_flow_steer_promisc_remove, "_gpl", "");
KSYMTAB_FUNC(mlx4_unicast_attach, "_gpl", "");
KSYMTAB_FUNC(mlx4_unicast_detach, "_gpl", "");
KSYMTAB_FUNC(mlx4_multicast_promisc_add, "_gpl", "");
KSYMTAB_FUNC(mlx4_multicast_promisc_remove, "_gpl", "");
KSYMTAB_FUNC(mlx4_unicast_promisc_add, "_gpl", "");
KSYMTAB_FUNC(mlx4_unicast_promisc_remove, "_gpl", "");
KSYMTAB_FUNC(mlx4_mtt_init, "_gpl", "");
KSYMTAB_FUNC(mlx4_mtt_cleanup, "_gpl", "");
KSYMTAB_FUNC(mlx4_mtt_addr, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_get_mpt, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_write_mpt, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_put_mpt, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_change_pd, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_hw_change_access, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_rereg_mem_cleanup, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_rereg_mem_write, "_gpl", "");
KSYMTAB_FUNC(mlx4_mr_enable, "_gpl", "");
KSYMTAB_FUNC(mlx4_write_mtt, "_gpl", "");
KSYMTAB_FUNC(mlx4_buf_write_mtt, "_gpl", "");
KSYMTAB_FUNC(mlx4_mw_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_mw_enable, "_gpl", "");
KSYMTAB_FUNC(mlx4_mw_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_SYNC_TPT, "_gpl", "");
KSYMTAB_FUNC(mlx4_pd_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_pd_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_xrcd_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_xrcd_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_uar_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_uar_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_bf_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_bf_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_find_cached_mac, "_gpl", "");
KSYMTAB_FUNC(__mlx4_register_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_register_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_base_qpn, "_gpl", "");
KSYMTAB_FUNC(__mlx4_unregister_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_unregister_mac, "_gpl", "");
KSYMTAB_FUNC(__mlx4_replace_mac, "_gpl", "");
KSYMTAB_FUNC(mlx4_find_cached_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_register_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_unregister_vlan, "_gpl", "");
KSYMTAB_FUNC(mlx4_get_base_gid_ix, "_gpl", "");
KSYMTAB_FUNC(mlx4_SET_PORT_general, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_qpn_calc, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_user_mtu, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_user_mac, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_fcs_check, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_VXLAN, "", "");
KSYMTAB_FUNC(mlx4_SET_PORT_BEACON, "", "");
KSYMTAB_FUNC(mlx4_SET_MCAST_FLTR, "", "");
KSYMTAB_FUNC(mlx4_get_slave_from_roce_gid, "", "");
KSYMTAB_FUNC(mlx4_get_roce_gid_from_slave, "", "");
KSYMTAB_FUNC(mlx4_get_module_info, "", "");
KSYMTAB_FUNC(mlx4_max_tc, "", "");
KSYMTAB_FUNC(mlx4_put_qp, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_modify, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_reserve_range, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_release_range, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_update_qp, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_remove, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_query, "_gpl", "");
KSYMTAB_FUNC(mlx4_qp_to_ready, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_alloc, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_free, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_arm, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_query, "_gpl", "");
KSYMTAB_FUNC(mlx4_srq_lookup, "_gpl", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015B3d00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000634Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000673Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000675Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006764sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006746sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000676Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "500AC944CF73C6F05CB1A33");
