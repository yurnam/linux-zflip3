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

KSYMTAB_FUNC(media_device_register_entity, "_gpl", "");
KSYMTAB_FUNC(media_device_unregister_entity, "_gpl", "");
KSYMTAB_FUNC(media_device_init, "_gpl", "");
KSYMTAB_FUNC(media_device_cleanup, "_gpl", "");
KSYMTAB_FUNC(__media_device_register, "_gpl", "");
KSYMTAB_FUNC(media_device_register_entity_notify, "_gpl", "");
KSYMTAB_FUNC(media_device_unregister_entity_notify, "_gpl", "");
KSYMTAB_FUNC(media_device_unregister, "_gpl", "");
KSYMTAB_FUNC(media_device_pci_init, "_gpl", "");
KSYMTAB_FUNC(__media_device_usb_init, "_gpl", "");
KSYMTAB_FUNC(media_entity_enum_init, "_gpl", "");
KSYMTAB_FUNC(media_entity_enum_cleanup, "_gpl", "");
KSYMTAB_FUNC(media_entity_pads_init, "_gpl", "");
KSYMTAB_FUNC(media_graph_walk_init, "_gpl", "");
KSYMTAB_FUNC(media_graph_walk_cleanup, "_gpl", "");
KSYMTAB_FUNC(media_graph_walk_start, "_gpl", "");
KSYMTAB_FUNC(media_graph_walk_next, "_gpl", "");
KSYMTAB_FUNC(__media_pipeline_start, "_gpl", "");
KSYMTAB_FUNC(media_pipeline_start, "_gpl", "");
KSYMTAB_FUNC(__media_pipeline_stop, "_gpl", "");
KSYMTAB_FUNC(media_pipeline_stop, "_gpl", "");
KSYMTAB_FUNC(media_pipeline_alloc_start, "_gpl", "");
KSYMTAB_FUNC(__media_pipeline_pad_iter_next, "_gpl", "");
KSYMTAB_FUNC(media_pipeline_entity_iter_init, "_gpl", "");
KSYMTAB_FUNC(media_pipeline_entity_iter_cleanup, "_gpl", "");
KSYMTAB_FUNC(__media_pipeline_entity_iter_next, "_gpl", "");
KSYMTAB_FUNC(media_get_pad_index, "_gpl", "");
KSYMTAB_FUNC(media_create_pad_link, "_gpl", "");
KSYMTAB_FUNC(media_create_pad_links, "_gpl", "");
KSYMTAB_FUNC(__media_entity_remove_links, "_gpl", "");
KSYMTAB_FUNC(media_entity_remove_links, "_gpl", "");
KSYMTAB_FUNC(__media_entity_setup_link, "_gpl", "");
KSYMTAB_FUNC(media_entity_setup_link, "_gpl", "");
KSYMTAB_FUNC(media_entity_find_link, "_gpl", "");
KSYMTAB_FUNC(media_pad_remote_pad_first, "_gpl", "");
KSYMTAB_FUNC(media_entity_remote_pad_unique, "_gpl", "");
KSYMTAB_FUNC(media_pad_remote_pad_unique, "_gpl", "");
KSYMTAB_FUNC(media_entity_get_fwnode_pad, "_gpl", "");
KSYMTAB_FUNC(media_entity_pipeline, "_gpl", "");
KSYMTAB_FUNC(media_pad_pipeline, "_gpl", "");
KSYMTAB_FUNC(media_devnode_create, "_gpl", "");
KSYMTAB_FUNC(media_devnode_remove, "_gpl", "");
KSYMTAB_FUNC(media_create_intf_link, "_gpl", "");
KSYMTAB_FUNC(__media_remove_intf_link, "_gpl", "");
KSYMTAB_FUNC(media_remove_intf_link, "_gpl", "");
KSYMTAB_FUNC(__media_remove_intf_links, "_gpl", "");
KSYMTAB_FUNC(media_remove_intf_links, "_gpl", "");
KSYMTAB_FUNC(media_create_ancillary_link, "_gpl", "");
KSYMTAB_FUNC(__media_entity_next_link, "_gpl", "");
KSYMTAB_FUNC(media_request_put, "_gpl", "");
KSYMTAB_FUNC(media_request_get_by_fd, "_gpl", "");
KSYMTAB_FUNC(media_request_object_find, "_gpl", "");
KSYMTAB_FUNC(media_request_object_put, "_gpl", "");
KSYMTAB_FUNC(media_request_object_init, "_gpl", "");
KSYMTAB_FUNC(media_request_object_bind, "_gpl", "");
KSYMTAB_FUNC(media_request_object_unbind, "_gpl", "");
KSYMTAB_FUNC(media_request_object_complete, "_gpl", "");
KSYMTAB_FUNC(media_device_usb_allocate, "_gpl", "");
KSYMTAB_FUNC(media_device_delete, "_gpl", "");

MODULE_INFO(depends, "");

