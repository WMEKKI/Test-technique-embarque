#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

extern uint32_t direction_gpio_bank1;
extern uint32_t value_gpio_bank1;

int set_gpio_output(int gpio_index);

int set_gpio_input(int gpio_index);

bool test_direction_out(int gpio_index);

int write_gpio(int gpio_index, bool value); 
