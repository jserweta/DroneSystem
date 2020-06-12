#ifndef __OCARINA_GENERATED_SUBPROGRAMS_H_
#define __OCARINA_GENERATED_SUBPROGRAMS_H_ 
#include <types.h>
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

void drone__readweight_spg 
    (base_types__float weight_in,
    base_types__float* weight_out);

void drone__readheight_spg 
    (base_types__float height_in,
    base_types__float* height_out);

void drone__rotorpower_spg 
    (base_types__float rotor_power_in,
    base_types__float* rotor_power_out);

void drone__scanarea_spg (void);

void drone__gpsdata_spg 
    (base_types__float location_in,
    base_types__float* location_out);

void drone__setnewtarget_spg 
    (base_types__float new_target_in,
    base_types__float* new_target_out);

void drone__analysedata_spg 
    (base_types__float location_in,
    base_types__float height_in,
    base_types__float weight_in,
    base_types__float* rotor_power_out,
    base_types__float rotor_power_in,
    base_types__float new_target);

#endif
