#include "vtime.h"
#include <stdio.h>
#include <unistd.h>
void datau(int year, int month, int day, int time_code) {
    int hours = time_code / 10000;
    int minutes = (time_code % 10000) / 100;
    int seconds = time_code % 100;
    while (1) {
        printf("\r%d %d %d  %d:%02d:%02d", year, month, day, hours, minutes, seconds);
        fflush(stdout);
        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            if (minutes >= 60) {
                minutes = 0;
                hours++;
                if (hours >= 24) {
                    hours = 0;
                    day++;
                }
            }
        }
        sleep(1);
    }
}
