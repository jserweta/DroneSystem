#include "subprograms.h"
#include <types.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/
void user_readweight_spg 
    (base_types__float weight_in,
    base_types__float* weight_out);
void drone__readweight_spg 
    (base_types__float weight_in,
    base_types__float* weight_out)
{

  user_readweight_spg (weight_in, weight_out);
}

void user_readheight_spg 
    (base_types__float height_in,
    base_types__float* height_out);
void drone__readheight_spg 
    (base_types__float height_in,
    base_types__float* height_out)
{

  user_readheight_spg (height_in, height_out);
}

void user_rotorpower_spg 
    (base_types__float rotor_power_in,
    base_types__float* rotor_power_out);
void drone__rotorpower_spg 
    (base_types__float rotor_power_in,
    base_types__float* rotor_power_out)
{

  user_rotorpower_spg (rotor_power_in, rotor_power_out);
}

void user_scanarea_spg (void);
void drone__scanarea_spg (void)
{

  user_scanarea_spg ();
}

void user_gpsdata_spg 
    (base_types__float location_in,
    base_types__float* location_out);
void drone__gpsdata_spg 
    (base_types__float location_in,
    base_types__float* location_out)
{

  user_gpsdata_spg (location_in, location_out);
}

void user_setnewtarget_spg 
    (base_types__float new_target_in,
    base_types__float* new_target_out);
void drone__setnewtarget_spg 
    (base_types__float new_target_in,
    base_types__float* new_target_out)
{

  user_setnewtarget_spg (new_target_in, new_target_out);
}

void user_analysedata_spg 
    (base_types__float location_in,
    base_types__float height_in,
    base_types__float weight_in,
    base_types__float* rotor_power_out,
    base_types__float rotor_power_in,
    base_types__float new_target);
void drone__analysedata_spg 
    (base_types__float location_in,
    base_types__float height_in,
    base_types__float weight_in,
    base_types__float* rotor_power_out,
    base_types__float rotor_power_in,
    base_types__float new_target)
{

  user_analysedata_spg (location_in, height_in, weight_in, rotor_power_out, rotor_power_in, new_target);
}

