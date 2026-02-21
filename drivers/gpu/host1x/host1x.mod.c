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

KSYMTAB_FUNC(host1x_device_init, "", "");
KSYMTAB_FUNC(host1x_device_exit, "", "");
KSYMTAB_FUNC(host1x_driver_register_full, "", "");
KSYMTAB_FUNC(host1x_driver_unregister, "", "");
KSYMTAB_FUNC(__host1x_client_init, "", "");
KSYMTAB_FUNC(host1x_client_exit, "", "");
KSYMTAB_FUNC(__host1x_client_register, "", "");
KSYMTAB_FUNC(host1x_client_unregister, "", "");
KSYMTAB_FUNC(host1x_client_suspend, "", "");
KSYMTAB_FUNC(host1x_client_resume, "", "");
KSYMTAB_FUNC(host1x_bo_pin, "", "");
KSYMTAB_FUNC(host1x_bo_unpin, "", "");
KSYMTAB_FUNC(host1x_syncpt_alloc, "", "");
KSYMTAB_FUNC(host1x_syncpt_id, "", "");
KSYMTAB_FUNC(host1x_syncpt_incr_max, "", "");
KSYMTAB_FUNC(host1x_syncpt_incr, "", "");
KSYMTAB_FUNC(host1x_syncpt_wait, "", "");
KSYMTAB_FUNC(host1x_syncpt_request, "", "");
KSYMTAB_FUNC(host1x_syncpt_put, "", "");
KSYMTAB_FUNC(host1x_syncpt_read_max, "", "");
KSYMTAB_FUNC(host1x_syncpt_read_min, "", "");
KSYMTAB_FUNC(host1x_syncpt_read, "", "");
KSYMTAB_FUNC(host1x_syncpt_get_by_id, "", "");
KSYMTAB_FUNC(host1x_syncpt_get_by_id_noref, "", "");
KSYMTAB_FUNC(host1x_syncpt_get, "", "");
KSYMTAB_FUNC(host1x_syncpt_get_base, "", "");
KSYMTAB_FUNC(host1x_syncpt_base_id, "", "");
KSYMTAB_FUNC(host1x_syncpt_release_vblank_reservation, "", "");
KSYMTAB_FUNC(host1x_get_dma_mask, "", "");
KSYMTAB_FUNC(host1x_job_submit, "", "");
KSYMTAB_FUNC(host1x_channel_get, "", "");
KSYMTAB_FUNC(host1x_channel_stop, "", "");
KSYMTAB_FUNC(host1x_channel_put, "", "");
KSYMTAB_FUNC(host1x_channel_request, "", "");
KSYMTAB_FUNC(host1x_job_alloc, "", "");
KSYMTAB_FUNC(host1x_job_get, "", "");
KSYMTAB_FUNC(host1x_job_put, "", "");
KSYMTAB_FUNC(host1x_job_add_gather, "", "");
KSYMTAB_FUNC(host1x_job_add_wait, "", "");
KSYMTAB_FUNC(host1x_job_pin, "", "");
KSYMTAB_FUNC(host1x_job_unpin, "", "");
KSYMTAB_FUNC(tegra_mipi_request, "", "");
KSYMTAB_FUNC(tegra_mipi_free, "", "");
KSYMTAB_FUNC(tegra_mipi_enable, "", "");
KSYMTAB_FUNC(tegra_mipi_disable, "", "");
KSYMTAB_FUNC(tegra_mipi_finish_calibration, "", "");
KSYMTAB_FUNC(tegra_mipi_start_calibration, "", "");
KSYMTAB_FUNC(host1x_fence_create, "", "");
KSYMTAB_FUNC(host1x_fence_cancel, "", "");
KSYMTAB_FUNC(host1x_memory_context_alloc, "_gpl", "");
KSYMTAB_FUNC(host1x_memory_context_get, "_gpl", "");
KSYMTAB_FUNC(host1x_memory_context_put, "_gpl", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnvidia,tegra234-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra234-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra194-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra186-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra186-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra210-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra210-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra124-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra124-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra114-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra114-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra30-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra30-host1xC*");
MODULE_ALIAS("of:N*T*Cnvidia,tegra20-host1x");
MODULE_ALIAS("of:N*T*Cnvidia,tegra20-host1xC*");
