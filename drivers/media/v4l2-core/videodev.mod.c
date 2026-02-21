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

KSYMTAB_FUNC(video_device_alloc, "", "");
KSYMTAB_FUNC(video_device_release, "", "");
KSYMTAB_FUNC(video_device_release_empty, "", "");
KSYMTAB_FUNC(video_devdata, "", "");
KSYMTAB_FUNC(v4l2_prio_init, "", "");
KSYMTAB_FUNC(v4l2_prio_change, "", "");
KSYMTAB_FUNC(v4l2_prio_open, "", "");
KSYMTAB_FUNC(v4l2_prio_close, "", "");
KSYMTAB_FUNC(v4l2_prio_max, "", "");
KSYMTAB_FUNC(v4l2_prio_check, "", "");
KSYMTAB_FUNC(__video_register_device, "", "");
KSYMTAB_FUNC(video_unregister_device, "", "");
KSYMTAB_FUNC(video_device_pipeline_start, "_gpl", "");
KSYMTAB_FUNC(__video_device_pipeline_start, "_gpl", "");
KSYMTAB_FUNC(video_device_pipeline_stop, "_gpl", "");
KSYMTAB_FUNC(__video_device_pipeline_stop, "_gpl", "");
KSYMTAB_FUNC(video_device_pipeline_alloc_start, "_gpl", "");
KSYMTAB_FUNC(video_device_pipeline, "_gpl", "");
KSYMTAB_FUNC(v4l2_norm_to_name, "", "");
KSYMTAB_FUNC(v4l2_video_std_frame_period, "", "");
KSYMTAB_FUNC(v4l2_video_std_construct, "", "");
KSYMTAB_DATA(v4l2_field_names, "", "");
KSYMTAB_DATA(v4l2_type_names, "", "");
KSYMTAB_FUNC(v4l_printk_ioctl, "", "");
KSYMTAB_FUNC(video_ioctl2, "", "");
KSYMTAB_FUNC(v4l2_device_register, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_put, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_set_name, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_disconnect, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_unregister, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_register_subdev, "_gpl", "");
KSYMTAB_FUNC(__v4l2_device_register_subdev_nodes, "_gpl", "");
KSYMTAB_FUNC(v4l2_device_unregister_subdev, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_add, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_open, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_del, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_exit, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_release, "_gpl", "");
KSYMTAB_FUNC(v4l2_fh_is_singular, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_dequeue, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_queue, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_queue_fh, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_pending, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_wake_all, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_subscribe, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_unsubscribe_all, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_unsubscribe, "_gpl", "");
KSYMTAB_FUNC(v4l2_event_subdev_unsubscribe, "_gpl", "");
KSYMTAB_FUNC(v4l2_src_change_event_subscribe, "_gpl", "");
KSYMTAB_FUNC(v4l2_src_change_event_subdev_subscribe, "_gpl", "");
KSYMTAB_DATA(v4l2_subdev_call_wrappers, "", "");
KSYMTAB_FUNC(v4l2_subdev_get_fwnode_pad_1_to_1, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_link_validate_default, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_link_validate, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_has_pad_interdep, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_state_alloc, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_state_free, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_init_finalize, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_cleanup, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_get_fmt, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_set_routing, "_gpl", "");
KSYMTAB_FUNC(__v4l2_subdev_next_active_route, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_set_routing_with_fmt, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_state_get_stream_format, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_state_get_stream_crop, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_state_get_stream_compose, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_routing_find_opposite_end, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_state_get_opposite_stream_format, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_state_xlate_streams, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_routing_validate, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_enable_streams, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_disable_streams, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_s_stream_helper, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_init, "", "");
KSYMTAB_FUNC(v4l2_subdev_notify_event, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_get_privacy_led, "_gpl", "");
KSYMTAB_FUNC(v4l2_subdev_put_privacy_led, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_query_fill, "", "");
KSYMTAB_FUNC(v4l_bound_align_image, "_gpl", "");
KSYMTAB_FUNC(__v4l2_find_nearest_size, "_gpl", "");
KSYMTAB_FUNC(v4l2_g_parm_cap, "_gpl", "");
KSYMTAB_FUNC(v4l2_s_parm_cap, "_gpl", "");
KSYMTAB_FUNC(v4l2_format_info, "", "");
KSYMTAB_FUNC(v4l2_apply_frmsize_constraints, "_gpl", "");
KSYMTAB_FUNC(v4l2_fill_pixfmt_mp, "_gpl", "");
KSYMTAB_FUNC(v4l2_fill_pixfmt, "_gpl", "");
KSYMTAB_FUNC(v4l2_get_link_freq, "_gpl", "");
KSYMTAB_FUNC(v4l2_simplify_fraction, "_gpl", "");
KSYMTAB_FUNC(v4l2_fraction_to_interval, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_type_op_equal, "", "");
KSYMTAB_FUNC(v4l2_ctrl_type_op_init, "", "");
KSYMTAB_FUNC(v4l2_ctrl_type_op_log, "", "");
KSYMTAB_FUNC(v4l2_ctrl_type_op_validate, "", "");
KSYMTAB_FUNC(v4l2_ctrl_notify, "", "");
KSYMTAB_FUNC(v4l2_ctrl_handler_init_class, "", "");
KSYMTAB_FUNC(v4l2_ctrl_handler_free, "", "");
KSYMTAB_FUNC(v4l2_ctrl_find, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_custom, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_std, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_std_menu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_std_menu_items, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_std_compound, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_int_menu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_add_handler, "", "");
KSYMTAB_FUNC(v4l2_ctrl_radio_filter, "", "");
KSYMTAB_FUNC(v4l2_ctrl_cluster, "", "");
KSYMTAB_FUNC(v4l2_ctrl_auto_cluster, "", "");
KSYMTAB_FUNC(v4l2_ctrl_activate, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_grab, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_handler_setup, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_handler_setup, "", "");
KSYMTAB_FUNC(v4l2_ctrl_handler_log_status, "", "");
KSYMTAB_FUNC(v4l2_ctrl_new_fwnode_properties, "", "");
KSYMTAB_FUNC(v4l2_g_ext_ctrls, "", "");
KSYMTAB_FUNC(v4l2_try_ext_ctrls, "", "");
KSYMTAB_FUNC(v4l2_s_ext_ctrls, "", "");
KSYMTAB_FUNC(v4l2_g_ctrl, "", "");
KSYMTAB_FUNC(v4l2_s_ctrl, "", "");
KSYMTAB_FUNC(v4l2_ctrl_g_ctrl, "", "");
KSYMTAB_FUNC(v4l2_ctrl_g_ctrl_int64, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_s_ctrl, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_s_ctrl_int64, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_s_ctrl_string, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_s_ctrl_compound, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_modify_range, "", "");
KSYMTAB_FUNC(__v4l2_ctrl_modify_dimensions, "", "");
KSYMTAB_FUNC(v4l2_query_ext_ctrl, "", "");
KSYMTAB_FUNC(v4l2_queryctrl, "", "");
KSYMTAB_FUNC(v4l2_querymenu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_log_status, "", "");
KSYMTAB_FUNC(v4l2_ctrl_subdev_log_status, "", "");
KSYMTAB_FUNC(v4l2_ctrl_replace, "", "");
KSYMTAB_FUNC(v4l2_ctrl_merge, "", "");
KSYMTAB_DATA(v4l2_ctrl_sub_ev_ops, "", "");
KSYMTAB_FUNC(v4l2_ctrl_subscribe_event, "", "");
KSYMTAB_FUNC(v4l2_ctrl_subdev_subscribe_event, "", "");
KSYMTAB_FUNC(v4l2_ctrl_poll, "", "");
KSYMTAB_FUNC(v4l2_ctrl_request_hdl_find, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_request_hdl_ctrl_find, "_gpl", "");
KSYMTAB_FUNC(v4l2_ctrl_request_complete, "", "");
KSYMTAB_FUNC(v4l2_ctrl_request_setup, "", "");
KSYMTAB_FUNC(v4l2_ctrl_get_menu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_get_int_menu, "", "");
KSYMTAB_FUNC(v4l2_ctrl_get_name, "", "");
KSYMTAB_FUNC(v4l2_ctrl_fill, "", "");
KSYMTAB_FUNC(v4l2_compat_ioctl32, "_gpl", "");
KSYMTAB_FUNC(v4l2_mc_create_media_graph, "_gpl", "");
KSYMTAB_FUNC(v4l_enable_media_source, "_gpl", "");
KSYMTAB_FUNC(v4l_disable_media_source, "_gpl", "");
KSYMTAB_FUNC(v4l_vb2q_enable_media_source, "_gpl", "");
KSYMTAB_FUNC(v4l2_create_fwnode_links_to_pad, "_gpl", "");
KSYMTAB_FUNC(v4l2_create_fwnode_links, "_gpl", "");
KSYMTAB_FUNC(v4l2_pipeline_pm_get, "_gpl", "");
KSYMTAB_FUNC(v4l2_pipeline_pm_put, "_gpl", "");
KSYMTAB_FUNC(v4l2_pipeline_link_notify, "_gpl", "");
KSYMTAB_FUNC(v4l2_spi_subdev_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_spi_new_subdev, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_subdev_set_name, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_subdev_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_new_subdev_board, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_new_subdev, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_subdev_addr, "_gpl", "");
KSYMTAB_FUNC(v4l2_i2c_tuner_addrs, "_gpl", "");

MODULE_INFO(depends, "mc");

