#include "delay.h"
#include <stdio.h>
void time(unsigned int milliseconds) {
  clock_t start = clock();
  clock delay_ticks = (milliseconds * CLOCK_PER_SEC) / 1000;
  while(clock() - start) < delay_ticks {}
    }
