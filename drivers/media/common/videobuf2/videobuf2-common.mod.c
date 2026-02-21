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

KSYMTAB_FUNC(vb2_buffer_in_use, "", "");
KSYMTAB_FUNC(vb2_core_querybuf, "_gpl", "");
KSYMTAB_FUNC(vb2_verify_memory_type, "", "");
KSYMTAB_FUNC(vb2_core_reqbufs, "_gpl", "");
KSYMTAB_FUNC(vb2_core_create_bufs, "_gpl", "");
KSYMTAB_FUNC(vb2_plane_vaddr, "_gpl", "");
KSYMTAB_FUNC(vb2_plane_cookie, "_gpl", "");
KSYMTAB_FUNC(vb2_buffer_done, "_gpl", "");
KSYMTAB_FUNC(vb2_discard_done, "_gpl", "");
KSYMTAB_FUNC(vb2_request_object_is_buffer, "_gpl", "");
KSYMTAB_FUNC(vb2_request_buffer_cnt, "_gpl", "");
KSYMTAB_FUNC(vb2_core_prepare_buf, "_gpl", "");
KSYMTAB_FUNC(vb2_core_qbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_wait_for_all_buffers, "_gpl", "");
KSYMTAB_FUNC(vb2_core_dqbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_core_streamon, "_gpl", "");
KSYMTAB_FUNC(vb2_queue_error, "_gpl", "");
KSYMTAB_FUNC(vb2_core_streamoff, "_gpl", "");
KSYMTAB_FUNC(vb2_core_expbuf, "_gpl", "");
KSYMTAB_FUNC(vb2_mmap, "_gpl", "");
KSYMTAB_FUNC(vb2_core_queue_init, "_gpl", "");
KSYMTAB_FUNC(vb2_core_queue_release, "_gpl", "");
KSYMTAB_FUNC(vb2_core_poll, "_gpl", "");
KSYMTAB_FUNC(vb2_read, "_gpl", "");
KSYMTAB_FUNC(vb2_write, "_gpl", "");
KSYMTAB_FUNC(vb2_thread_start, "_gpl", "");
KSYMTAB_FUNC(vb2_thread_stop, "_gpl", "");
KSYMTAB_FUNC(get_vaddr_frames, "", "");
KSYMTAB_FUNC(put_vaddr_frames, "", "");
KSYMTAB_FUNC(frame_vector_to_pages, "", "");
KSYMTAB_FUNC(frame_vector_to_pfns, "", "");
KSYMTAB_FUNC(frame_vector_create, "", "");
KSYMTAB_FUNC(frame_vector_destroy, "", "");

MODULE_INFO(depends, "mc");

