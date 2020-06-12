#include <activity.h>
#include <po_hi_task.h>
#include <po_hi_main.h>
#include <drivers/po_hi_driver_sockets.h>
#include <po_hi_time.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/

/*!
 * \fn __PO_HI_MAIN_TYPE __PO_HI_MAIN_NAME (void)
 * \brief Main function executed by the system
 *
 * Full function name and return types are available  in the PolyORB-HI-C 
 * runtime header files.
 */
__PO_HI_MAIN_TYPE __PO_HI_MAIN_NAME (void)
{
  
/*!
 * \var period
 * \brief Variable for task period
 *
 * This variable is used to store the valueof the period of a task when we 
 * create it. The value put in the variable is set according to AADL model 
 * description
 */
  __po_hi_time_t period;

  __po_hi_initialize_early ();
  
/*!
 * Initialize the runtime
 */
  __po_hi_initialize ();
  __po_hi_driver_sockets_init (0);
  
/*!
 * Store the period time for task thread_weight
 */
  __po_hi_milliseconds (&(period), 200);
  
/*!
 * \brief Making Periodic Task thread_weight
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (the_controller_thread_weight_k) the second is the period defined in the 
 * AADL model. Third is the task priority ( 1), fourth is the stack size ( 0
 *  bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (the_controller_thread_weight_k, &(period), 1, 0, 0, thread_weight_job);
  
/*!
 * Store the period time for task thread_height
 */
  __po_hi_milliseconds (&(period), 200);
  
/*!
 * \brief Making Periodic Task thread_height
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (the_controller_thread_height_k) the second is the period defined in the 
 * AADL model. Third is the task priority ( 3), fourth is the stack size ( 0
 *  bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (the_controller_thread_height_k, &(period), 3, 0, 0, thread_height_job);
  
/*!
 * Store the period time for task thread_rotor
 */
  __po_hi_milliseconds (&(period), 200);
  
/*!
 * \brief Making Periodic Task thread_rotor
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (the_controller_thread_rotor_k) the second is the period defined in the 
 * AADL model. Third is the task priority ( 7), fourth is the stack size ( 0
 *  bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (the_controller_thread_rotor_k, &(period), 7, 0, 0, thread_rotor_job);
  
/*!
 * Store the period time for task thread_radar
 */
  __po_hi_milliseconds (&(period), 200);
  
/*!
 * \brief Making Periodic Task thread_radar
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (the_controller_thread_radar_k) the second is the period defined in the 
 * AADL model. Third is the task priority ( 5), fourth is the stack size ( 0
 *  bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (the_controller_thread_radar_k, &(period), 5, 0, 0, thread_radar_job);
  
/*!
 * Store the period time for task thread_gps
 */
  __po_hi_milliseconds (&(period), 200);
  
/*!
 * \brief Making Periodic Task thread_gps
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (the_controller_thread_gps_k) the second is the period defined in the 
 * AADL model. Third is the task priority ( 2), fourth is the stack size ( 0
 *  bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (the_controller_thread_gps_k, &(period), 2, 0, 0, thread_gps_job);
  
/*!
 * Store the period time for task thread_set_target
 */
  __po_hi_milliseconds (&(period), 200);
  
/*!
 * \brief Making Periodic Task thread_set_target
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (the_controller_thread_set_target_k) the second is the period defined in 
 * the AADL model. Third is the task priority ( 8), fourth is the stack size
 *  ( 0 bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (the_controller_thread_set_target_k, &(period), 8, 0, 0, thread_set_target_job);
  
/*!
 * Store the period time for task thread_analyse_data
 */
  __po_hi_milliseconds (&(period), 200);
  
/*!
 * \brief Making Periodic Task thread_analyse_data
 *
 * Make a periodic task according to AADL model requirements. The first 
 * parameter is the task identifier defined in deployment.h 
 * (the_controller_thread_analyse_data_k) the second is the period defined 
 * in the AADL model. Third is the task priority ( 10), fourth is the stack 
 * size ( 0 bytes) and last is the subprogram executed by the task
 */
  __po_hi_create_periodic_task (the_controller_thread_analyse_data_k, &(period), 10, 0, 0, thread_analyse_data_job);
  
/*!
 * Waiting for other tasks initialization
 */
  __po_hi_wait_initialization ();
  
/*!
 * Used to switch the main task to sleep all the time
 */
  __po_hi_wait_for_tasks ();
  
/*!
 * Return Statement
 */
  return (__PO_HI_MAIN_RETURN);
}


