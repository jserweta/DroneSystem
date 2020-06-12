#ifndef __OCARINA_GENERATED_REQUEST_H_
#define __OCARINA_GENERATED_REQUEST_H_ 
#include <types.h>
#include <po_hi_types.h>
#include <deployment.h>
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

/*  Enumeration type for all the operations in the distributed application.*/

typedef struct
{
  __po_hi_port_t port;

  union
  {
    struct
    {
      base_types__float thread_weight_global_weight_in;

    } thread_weight_global_weight_in;

    struct
    {
      base_types__float thread_weight_global_weight_out;

    } thread_weight_global_weight_out;

    struct
    {
      base_types__float thread_height_global_height_in;

    } thread_height_global_height_in;

    struct
    {
      base_types__float thread_height_global_height_out;

    } thread_height_global_height_out;

    struct
    {
      base_types__float thread_rotor_global_rotor_power_in;

    } thread_rotor_global_rotor_power_in;

    struct
    {
      base_types__float thread_rotor_global_rotor_power_out;

    } thread_rotor_global_rotor_power_out;

    struct
    {
      __po_hi_bool_t thread_radar_global_blockade_in;

    } thread_radar_global_blockade_in;

    struct
    {
      __po_hi_bool_t thread_radar_global_blockade_out;

    } thread_radar_global_blockade_out;

    struct
    {
      base_types__float thread_gps_global_location_in;

    } thread_gps_global_location_in;

    struct
    {
      base_types__float thread_gps_global_location_out;

    } thread_gps_global_location_out;

    struct
    {
      base_types__float thread_set_target_global_new_target_in;

    } thread_set_target_global_new_target_in;

    struct
    {
      base_types__float thread_set_target_global_new_target_out;

    } thread_set_target_global_new_target_out;

    struct
    {
      base_types__float thread_analyse_data_global_location_in;

    } thread_analyse_data_global_location_in;

    struct
    {
      base_types__float thread_analyse_data_global_height_in;

    } thread_analyse_data_global_height_in;

    struct
    {
      base_types__float thread_analyse_data_global_weight_in;

    } thread_analyse_data_global_weight_in;

    struct
    {
      base_types__float thread_analyse_data_global_rotor_power_out;

    } thread_analyse_data_global_rotor_power_out;

    struct
    {
      base_types__float thread_analyse_data_global_rotor_power_in;

    } thread_analyse_data_global_rotor_power_in;

    struct
    {
      __po_hi_bool_t thread_analyse_data_global_blockade_in;

    } thread_analyse_data_global_blockade_in;

    struct
    {
      __po_hi_bool_t thread_analyse_data_global_status_change;

    } thread_analyse_data_global_status_change;

    struct
    {
      base_types__float thread_analyse_data_global_new_target;

    } thread_analyse_data_global_new_target;

  } vars;

} __po_hi_request_t;

#define __PO_HI_NB_OPERATIONS 0

#endif
