#include <deployment.h>
#include <po_hi_types.h>
#include <po_hi_transport.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/
__po_hi_entity_t __po_hi_port_global_to_entity[__PO_HI_NB_PORTS] = {the_controller_thread_weight_k_entity,the_controller_thread_weight_k_entity,the_controller_thread_height_k_entity,the_controller_thread_height_k_entity,the_controller_thread_rotor_k_entity,the_controller_thread_rotor_k_entity,the_controller_thread_radar_k_entity,the_controller_thread_radar_k_entity,the_controller_thread_gps_k_entity,the_controller_thread_gps_k_entity,the_controller_thread_set_target_k_entity,the_controller_thread_set_target_k_entity,the_controller_thread_analyse_data_k_entity,the_controller_thread_analyse_data_k_entity,the_controller_thread_analyse_data_k_entity,the_controller_thread_analyse_data_k_entity,the_controller_thread_analyse_data_k_entity,the_controller_thread_analyse_data_k_entity,the_controller_thread_analyse_data_k_entity,the_controller_thread_analyse_data_k_entity};
char* __po_hi_port_global_names[__PO_HI_NB_PORTS] = {"thread_weight_global_weight_in","thread_weight_global_weight_out","thread_height_global_height_in","thread_height_global_height_out","thread_rotor_global_rotor_power_in","thread_rotor_global_rotor_power_out","thread_radar_global_blockade_in","thread_radar_global_blockade_out","thread_gps_global_location_in","thread_gps_global_location_out","thread_set_target_global_new_target_in","thread_set_target_global_new_target_out","thread_analyse_data_global_location_in","thread_analyse_data_global_height_in","thread_analyse_data_global_weight_in","thread_analyse_data_global_rotor_power_out","thread_analyse_data_global_rotor_power_in","thread_analyse_data_global_blockade_in","thread_analyse_data_global_status_change","thread_analyse_data_global_new_target"};
char* __po_hi_port_global_model_names[__PO_HI_NB_PORTS] = {"weight_in","weight_out","height_in","height_out","rotor_power_in","rotor_power_out","blockade_in","blockade_out","location_in","location_out","new_target_in","new_target_out","location_in","height_in","weight_in","rotor_power_out","rotor_power_in","blockade_in","status_change","new_target"};
__po_hi_port_kind_t __po_hi_port_global_kind[__PO_HI_NB_PORTS] = {__PO_HI_IN_DATA_INTER_PROCESS,__PO_HI_OUT_DATA_INTRA_PROCESS,__PO_HI_IN_DATA_INTER_PROCESS,__PO_HI_OUT_DATA_INTRA_PROCESS,__PO_HI_IN_DATA_INTER_PROCESS,__PO_HI_OUT_DATA_INTRA_PROCESS,__PO_HI_IN_EVENT_DATA_INTER_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_IN_DATA_INTER_PROCESS,__PO_HI_OUT_DATA_INTER_PROCESS,__PO_HI_IN_EVENT_DATA_INTER_PROCESS,__PO_HI_OUT_EVENT_DATA_INTRA_PROCESS,__PO_HI_IN_DATA_INTRA_PROCESS,__PO_HI_IN_DATA_INTRA_PROCESS,__PO_HI_IN_DATA_INTRA_PROCESS,__PO_HI_OUT_DATA_INTER_PROCESS,__PO_HI_IN_DATA_INTRA_PROCESS,__PO_HI_IN_EVENT_DATA_INTRA_PROCESS,__PO_HI_OUT_EVENT_DATA_INTER_PROCESS,__PO_HI_IN_EVENT_DATA_INTRA_PROCESS};
__po_hi_uint32_t __po_hi_port_global_data_size[__PO_HI_NB_PORTS] = {sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float),sizeof (float)};
__po_hi_uint32_t __po_hi_port_global_queue_size[__PO_HI_NB_PORTS] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
__po_hi_local_port_t __po_hi_port_global_to_local[__PO_HI_NB_PORTS] = {thread_weight_local_weight_in,thread_weight_local_weight_out,thread_height_local_height_in,thread_height_local_height_out,thread_rotor_local_rotor_power_in,thread_rotor_local_rotor_power_out,thread_radar_local_blockade_in,thread_radar_local_blockade_out,thread_gps_local_location_in,thread_gps_local_location_out,thread_set_target_local_new_target_in,thread_set_target_local_new_target_out,thread_analyse_data_local_location_in,thread_analyse_data_local_height_in,thread_analyse_data_local_weight_in,thread_analyse_data_local_rotor_power_out,thread_analyse_data_local_rotor_power_in,thread_analyse_data_local_blockade_in,thread_analyse_data_local_status_change,thread_analyse_data_local_new_target};
__po_hi_node_t __po_hi_entity_table[__PO_HI_NB_ENTITIES] = {the_controller_k,the_controller_k,the_controller_k,the_controller_k,the_controller_k,the_controller_k,the_controller_k};
__po_hi_uint8_t __po_hi_deployment_endiannesses[__PO_HI_NB_NODES] = {__PO_HI_LITTLEENDIAN};
__po_hi_device_id __po_hi_port_to_device[__PO_HI_NB_PORTS] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

