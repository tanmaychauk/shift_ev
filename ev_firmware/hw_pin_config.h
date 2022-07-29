/* GPIO configuration */

#define GPIO_LED_CONN_STATUS       1
#define GPIO_LED_CURRENT_STATUS    2
#define GPIO_LED_RELAY_STATUS      3
#define GPIO_LED_NEMA_STATUS       4
#define GPIO_LED_GND_FAULT_STATUS  5
#define GPIO_LED_CHARGE_STATUS     6

#define GPIO_RELAY                  7 


#define LED_ON(LED)     digitalWrite(LED,HIGH);
#define LED_OFF(LED)    digitalWrite(LED,LOW);
#define LED_TOGGLE(LED) digitalWrite(LED,!digitalRead(LED));

#define RELAY_ON        digitalWrite(GPIO_RELAY,HIGH);
#define RELAY_OFF       digitalWrite(GPIO_RELAY,LOW);
#define RELAY_STATUS    digitalRead(GPIO_RELAY)



extern void hw_gpio_init();
