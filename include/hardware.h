#ifndef _HARDWARE_H
#define _HARDWARE_H

#include <driver/gpio.h>
#include <esp_log.h>

const gpio_num_t kMISO_Pin = GPIO_NUM_32; // To PS1 Pin 1, DATA - OUT
const gpio_num_t kMOSI_Pin = GPIO_NUM_34; // To PS1 Pin 2, CMND - IN
const gpio_num_t kSEL_Pin = GPIO_NUM_35;  // To PS1 Pin 6, ATT - IN
const gpio_num_t kCLK_Pin = GPIO_NUM_39;  // To PS1 Pin 7, CLK - IN
const gpio_num_t kACK_Pin = GPIO_NUM_33;  // To PS1 Pin 8, ACK - OUT

// Bitmasks assume all above GPIO are 32~39, hence subtracting 32
const uint32_t kMISO_Bitmask = (1UL << (kMISO_Pin - 32));
const uint32_t kMOSI_Bitmask = (1UL << (kMOSI_Pin - 32));
const uint32_t kSEL_Bitmask = (1UL << (kSEL_Pin - 32));
const uint32_t kCLK_Bitmask = (1UL << (kCLK_Pin - 32));
const uint32_t kACK_Bitmask = (1UL << (kACK_Pin - 32));

#endif // _HARDWARE_H