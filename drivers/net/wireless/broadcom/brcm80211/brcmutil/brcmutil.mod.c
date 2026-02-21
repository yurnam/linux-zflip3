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

KSYMTAB_FUNC(brcmu_pkt_buf_get_skb, "", "");
KSYMTAB_FUNC(brcmu_pkt_buf_free_skb, "", "");
KSYMTAB_FUNC(brcmu_pktq_penq, "", "");
KSYMTAB_FUNC(brcmu_pktq_penq_head, "", "");
KSYMTAB_FUNC(brcmu_pktq_pdeq, "", "");
KSYMTAB_FUNC(brcmu_pktq_pdeq_match, "", "");
KSYMTAB_FUNC(brcmu_pktq_pdeq_tail, "", "");
KSYMTAB_FUNC(brcmu_pktq_pflush, "", "");
KSYMTAB_FUNC(brcmu_pktq_flush, "", "");
KSYMTAB_FUNC(brcmu_pktq_init, "", "");
KSYMTAB_FUNC(brcmu_pktq_peek_tail, "", "");
KSYMTAB_FUNC(brcmu_pktq_mlen, "", "");
KSYMTAB_FUNC(brcmu_pktq_mdeq, "", "");
KSYMTAB_FUNC(brcmu_boardrev_str, "", "");
KSYMTAB_FUNC(brcmu_dotrev_str, "", "");
KSYMTAB_FUNC(brcmu_d11_attach, "", "");

MODULE_INFO(depends, "");

