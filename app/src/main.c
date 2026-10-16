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
printk("pointtwo\n");
  while (1) {
    k_msleep(SLEEP_MS);
    printk("point three\n");
  }
  return 0;
}
