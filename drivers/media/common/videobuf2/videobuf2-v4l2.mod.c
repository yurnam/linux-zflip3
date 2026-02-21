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

KSYMTAB_FUNC(vb2_find_buffer, "_gpl", "");
KSYMTAB_FUNC(vb2_querybuf, "", "");
KSYMTAB_FUNC(vb2_reqbufs, "_gpl", "");
KSYMTAB_FUNC(vb2_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(vb2_create_bufs, "_gpl", "");
KSYMTAB_FUNC(vb2_qbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_dqbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_streamon, "_gpl", "");
KSYMTAB_FUNC(vb2_streamoff, "_gpl", "");
KSYMTAB_FUNC(vb2_expbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_init_name, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_init, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_release, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_change_type, "_gpl", "");
KSYMTAB_FUNC(vb2_poll, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_reqbufs, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_create_bufs, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_querybuf, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_qbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_dqbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_streamon, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_streamoff, "_gpl", "");
KSYMTAB_FUNC(vb2_ioctl_expbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_mmap, "_gpl", "");
KSYMTAB_FUNC(_vb2_fop_release, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_release, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_write, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_read, "_gpl", "");
KSYMTAB_FUNC(vb2_fop_poll, "_gpl", "");
KSYMTAB_FUNC(vb2_video_unregister_device, "_gpl", "");
KSYMTAB_FUNC(vb2_ops_wait_prepare, "_gpl", "");
KSYMTAB_FUNC(vb2_ops_wait_finish, "_gpl", "");
KSYMTAB_FUNC(vb2_request_validate, "_gpl", "");
KSYMTAB_FUNC(vb2_request_queue, "_gpl", "");

MODULE_INFO(depends, "videobuf2-common,videodev,mc");

