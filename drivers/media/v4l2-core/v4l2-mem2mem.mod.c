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

KSYMTAB_FUNC(v4l2_m2m_get_vq, "", "");
KSYMTAB_FUNC(v4l2_m2m_next_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_last_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_remove, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_remove_by_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_remove_by_idx, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_get_curr_priv, "", "");
KSYMTAB_FUNC(v4l2_m2m_try_schedule, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_job_finish, "", "");
KSYMTAB_FUNC(v4l2_m2m_buf_done_and_job_finish, "", "");
KSYMTAB_FUNC(v4l2_m2m_suspend, "", "");
KSYMTAB_FUNC(v4l2_m2m_resume, "", "");
KSYMTAB_FUNC(v4l2_m2m_reqbufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_querybuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_last_buffer_done, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_update_start_streaming_state, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_update_stop_streaming_state, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_qbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_dqbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_create_bufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_expbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_streamon, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_streamoff, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_poll, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_mmap, "", "");
KSYMTAB_FUNC(v4l2_m2m_unregister_media_controller, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_register_media_controller, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_release, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ctx_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ctx_release, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_queue, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_buf_copy_metadata, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_request_queue, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_reqbufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_create_bufs, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_querybuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_qbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_dqbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_expbuf, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_streamon, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_streamoff, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_try_encoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_try_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_encoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_encoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_stateless_try_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_ioctl_stateless_decoder_cmd, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_fop_mmap, "_gpl", "");
KSYMTAB_FUNC(v4l2_m2m_fop_poll, "_gpl", "");

MODULE_INFO(depends, "videobuf2-common,mc,videobuf2-v4l2,videodev");

