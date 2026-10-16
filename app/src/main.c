/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "BTN.h"
#include "LED.h"

#define SLEEP_MS 1

int main(void) {
  if (0 > BTN_init()) {
    return 0;
  }

  printk("pointone\n");
  if (0 > LED_init()) {
    return 0;
  }

//LED_blink(LED0, LED_1HZ);

//LED_set(LED1, LED_ON);
//uint8_t duty_cycle = 0;


printk("pointtwo\n");
  while (1) {
    //LED_pwm(LED2, duty_cycle);

    #if 0
    if (duty_cycle == 40){
      duty_cycle = 0;
      LED_toggle(LED3);
    } else{
      duty_cycle++;
    }
      #endif

    printk("point three\n");

    if (BTN_check_clear_pressed(BTN0)){
      LED_toggle(LED0);
      printk("Button 0 pressed!\n");
    }
        k_msleep(SLEEP_MS);


  }
  return 0;
}
