#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(servreg_get_domain_list_req_ei, "_gpl", "");
KSYMTAB_DATA(servreg_get_domain_list_resp_ei, "_gpl", "");
KSYMTAB_DATA(servreg_register_listener_req_ei, "_gpl", "");
KSYMTAB_DATA(servreg_register_listener_resp_ei, "_gpl", "");
KSYMTAB_DATA(servreg_restart_pd_req_ei, "_gpl", "");
KSYMTAB_DATA(servreg_restart_pd_resp_ei, "_gpl", "");
KSYMTAB_DATA(servreg_state_updated_ind_ei, "_gpl", "");
KSYMTAB_DATA(servreg_set_ack_req_ei, "_gpl", "");
KSYMTAB_DATA(servreg_set_ack_resp_ei, "_gpl", "");
KSYMTAB_DATA(servreg_loc_pfr_req_ei, "_gpl", "");
KSYMTAB_DATA(servreg_loc_pfr_resp_ei, "_gpl", "");

MODULE_INFO(depends, "qmi_helpers");

