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

KSYMTAB_DATA(coresight_barrier_pkt, "_gpl", "");
KSYMTAB_FUNC(coresight_simple_show_pair, "_gpl", "");
KSYMTAB_FUNC(coresight_simple_show32, "_gpl", "");
KSYMTAB_FUNC(coresight_set_cti_ops, "_gpl", "");
KSYMTAB_FUNC(coresight_remove_cti_ops, "_gpl", "");
KSYMTAB_FUNC(coresight_set_percpu_sink, "_gpl", "");
KSYMTAB_FUNC(coresight_get_percpu_sink, "_gpl", "");
KSYMTAB_FUNC(coresight_claim_device_unlocked, "_gpl", "");
KSYMTAB_FUNC(coresight_claim_device, "_gpl", "");
KSYMTAB_FUNC(coresight_disclaim_device_unlocked, "_gpl", "");
KSYMTAB_FUNC(coresight_disclaim_device, "_gpl", "");
KSYMTAB_FUNC(coresight_add_helper, "_gpl", "");
KSYMTAB_FUNC(coresight_enable_source, "_gpl", "");
KSYMTAB_FUNC(coresight_disable_source, "_gpl", "");
KSYMTAB_FUNC(coresight_disable_path, "_gpl", "");
KSYMTAB_FUNC(coresight_enable, "_gpl", "");
KSYMTAB_FUNC(coresight_disable, "_gpl", "");
KSYMTAB_FUNC(coresight_timeout, "_gpl", "");
KSYMTAB_FUNC(coresight_register, "_gpl", "");
KSYMTAB_FUNC(coresight_unregister, "_gpl", "");
KSYMTAB_FUNC(coresight_find_input_type, "_gpl", "");
KSYMTAB_FUNC(coresight_find_output_type, "_gpl", "");
KSYMTAB_FUNC(coresight_loses_context_with_cpu, "_gpl", "");
KSYMTAB_FUNC(coresight_alloc_device_name, "_gpl", "");
KSYMTAB_FUNC(etm_perf_symlink, "_gpl", "");
KSYMTAB_FUNC(coresight_add_out_conn, "_gpl", "");
KSYMTAB_FUNC(coresight_add_in_conn, "_gpl", "");
KSYMTAB_FUNC(coresight_find_csdev_by_fwnode, "_gpl", "");
KSYMTAB_FUNC(coresight_get_cpu, "_gpl", "");
KSYMTAB_FUNC(coresight_get_platform_data, "_gpl", "");
KSYMTAB_FUNC(coresight_add_sysfs_link, "_gpl", "");
KSYMTAB_FUNC(coresight_remove_sysfs_link, "_gpl", "");
KSYMTAB_FUNC(cscfg_load_config_sets, "_gpl", "");
KSYMTAB_FUNC(cscfg_unload_config_sets, "_gpl", "");
KSYMTAB_FUNC(cscfg_register_csdev, "_gpl", "");
KSYMTAB_FUNC(cscfg_unregister_csdev, "_gpl", "");
KSYMTAB_FUNC(cscfg_csdev_reset_feats, "_gpl", "");
KSYMTAB_FUNC(cscfg_config_sysfs_get_active_cfg, "_gpl", "");
KSYMTAB_FUNC(cscfg_activate_config, "_gpl", "");
KSYMTAB_FUNC(cscfg_deactivate_config, "_gpl", "");
KSYMTAB_FUNC(cscfg_csdev_enable_active_config, "_gpl", "");
KSYMTAB_FUNC(cscfg_csdev_disable_active_config, "_gpl", "");
KSYMTAB_FUNC(coresight_trace_id_get_cpu_id, "_gpl", "");
KSYMTAB_FUNC(coresight_trace_id_put_cpu_id, "_gpl", "");
KSYMTAB_FUNC(coresight_trace_id_read_cpu_id, "_gpl", "");
KSYMTAB_FUNC(coresight_trace_id_get_system_id, "_gpl", "");
KSYMTAB_FUNC(coresight_trace_id_put_system_id, "_gpl", "");
KSYMTAB_FUNC(coresight_trace_id_perf_start, "_gpl", "");
KSYMTAB_FUNC(coresight_trace_id_perf_stop, "_gpl", "");

MODULE_INFO(depends, "");

