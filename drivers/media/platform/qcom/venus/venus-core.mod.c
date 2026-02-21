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

KSYMTAB_FUNC(venus_helper_check_codec, "_gpl", "");
KSYMTAB_FUNC(venus_helper_queue_dpb_bufs, "_gpl", "");
KSYMTAB_FUNC(venus_helper_free_dpb_bufs, "_gpl", "");
KSYMTAB_FUNC(venus_helper_alloc_dpb_bufs, "_gpl", "");
KSYMTAB_FUNC(venus_helper_intbufs_alloc, "_gpl", "");
KSYMTAB_FUNC(venus_helper_intbufs_free, "_gpl", "");
KSYMTAB_FUNC(venus_helper_intbufs_realloc, "_gpl", "");
KSYMTAB_FUNC(venus_helper_get_ts_metadata, "_gpl", "");
KSYMTAB_FUNC(venus_helper_unregister_bufs, "_gpl", "");
KSYMTAB_FUNC(venus_helper_get_bufreq, "_gpl", "");
KSYMTAB_FUNC(venus_helper_get_profile_level, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_profile_level, "_gpl", "");
KSYMTAB_FUNC(venus_helper_get_framesz_raw, "_gpl", "");
KSYMTAB_FUNC(venus_helper_get_framesz, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_input_resolution, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_output_resolution, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_work_mode, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_format_constraints, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_num_bufs, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_raw_format, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_color_format, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_multistream, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_dyn_bufmode, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_bufsize, "_gpl", "");
KSYMTAB_FUNC(venus_helper_get_opb_size, "_gpl", "");
KSYMTAB_FUNC(venus_helper_release_buf_ref, "_gpl", "");
KSYMTAB_FUNC(venus_helper_acquire_buf_ref, "_gpl", "");
KSYMTAB_FUNC(venus_helper_find_buf, "_gpl", "");
KSYMTAB_FUNC(venus_helper_change_dpb_owner, "_gpl", "");
KSYMTAB_FUNC(venus_helper_vb2_buf_init, "_gpl", "");
KSYMTAB_FUNC(venus_helper_vb2_buf_prepare, "_gpl", "");
KSYMTAB_FUNC(venus_helper_vb2_buf_queue, "_gpl", "");
KSYMTAB_FUNC(venus_helper_buffers_done, "_gpl", "");
KSYMTAB_FUNC(venus_helper_vb2_stop_streaming, "_gpl", "");
KSYMTAB_FUNC(venus_helper_vb2_queue_error, "_gpl", "");
KSYMTAB_FUNC(venus_helper_process_initial_cap_bufs, "_gpl", "");
KSYMTAB_FUNC(venus_helper_process_initial_out_bufs, "_gpl", "");
KSYMTAB_FUNC(venus_helper_vb2_start_streaming, "_gpl", "");
KSYMTAB_FUNC(venus_helper_m2m_device_run, "_gpl", "");
KSYMTAB_FUNC(venus_helper_m2m_job_abort, "_gpl", "");
KSYMTAB_FUNC(venus_helper_session_init, "_gpl", "");
KSYMTAB_FUNC(venus_helper_init_instance, "_gpl", "");
KSYMTAB_FUNC(venus_helper_get_out_fmts, "_gpl", "");
KSYMTAB_FUNC(venus_helper_check_format, "_gpl", "");
KSYMTAB_FUNC(venus_helper_set_stride, "_gpl", "");
KSYMTAB_FUNC(hfi_session_create, "_gpl", "");
KSYMTAB_FUNC(hfi_session_init, "_gpl", "");
KSYMTAB_FUNC(hfi_session_destroy, "_gpl", "");
KSYMTAB_FUNC(hfi_session_deinit, "_gpl", "");
KSYMTAB_FUNC(hfi_session_start, "_gpl", "");
KSYMTAB_FUNC(hfi_session_stop, "_gpl", "");
KSYMTAB_FUNC(hfi_session_continue, "_gpl", "");
KSYMTAB_FUNC(hfi_session_abort, "_gpl", "");
KSYMTAB_FUNC(hfi_session_unload_res, "_gpl", "");
KSYMTAB_FUNC(hfi_session_flush, "_gpl", "");
KSYMTAB_FUNC(hfi_session_get_property, "_gpl", "");
KSYMTAB_FUNC(hfi_session_set_property, "_gpl", "");
KSYMTAB_FUNC(hfi_session_process_buf, "_gpl", "");

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-common,mdt_loader,videodev");

MODULE_ALIAS("of:N*T*Cqcom,msm8916-venus");
MODULE_ALIAS("of:N*T*Cqcom,msm8916-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-venus");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm660-venus");
MODULE_ALIAS("of:N*T*Cqcom,sdm660-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-venus");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-venus-v2");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-venus-v2C*");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-venus");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-venus");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-venus");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-venusC*");
