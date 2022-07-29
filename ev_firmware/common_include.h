/* Common declarations */



typedef enum eShiftEV_states{
  eEV_init = 0, 
  eEV_comm_init,  //1
  eEV_ready,      //2
  eEV_charge_inProgress,  //3
  eEV_charge_stop,  //4
  eEV_error         //5
}eEV_states;




extern eEV_states eEV_currentState ;
