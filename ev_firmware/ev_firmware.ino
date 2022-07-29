#include "common_include.h"
#include "hw_pin_config.h"

eEV_states eEV_currentState;


void hw_gpio_init();

void setup() 
{
  hw_gpio_init();
  
  eEV_currentState = eEV_comm_init;
}

void loop() 
{

}











void hw_gpio_init()
{
  /* OUTPUT pins */
  pinMode(GPIO_LED_CONN_STATUS, OUTPUT);
  pinMode(GPIO_LED_CONN_STATUS, OUTPUT);
  pinMode(GPIO_LED_CURRENT_STATUS, OUTPUT);
  pinMode(GPIO_LED_RELAY_STATUS, OUTPUT);
  pinMode(GPIO_LED_NEMA_STATUS, OUTPUT);
  pinMode(GPIO_LED_GND_FAULT_STATUS, OUTPUT);
  pinMode(GPIO_LED_CHARGE_STATUS, OUTPUT);
  pinMode(GPIO_RELAY, OUTPUT);

  /* Default OUPUT state */
  LED_OFF(GPIO_LED_CONN_STATUS)
  LED_OFF(GPIO_LED_CURRENT_STATUS)
  LED_OFF(GPIO_LED_RELAY_STATUS)
  LED_OFF(GPIO_LED_NEMA_STATUS)
  LED_OFF(GPIO_LED_GND_FAULT_STATUS)
  LED_OFF(GPIO_LED_CHARGE_STATUS)
  RELAY_OFF
}
