#include "progress.h"
#include <stdio.h>
#include <unistd.h>
void bar(char symbol, int interval) {
    int i;
    for (i = 0; i <= 100; i++) {
        printf("\r[");
        for (int j = 0; j < i; j++) {
            putchar(symbol);
        }
        for (int j = i; j < 100; j++) {
            putchar(' ');
        }
        printf("] %d%%", i);
        fflush(stdout);
        
        if (interval >= 100) {
            usleep(interval * 1000);
        } else {
            sleep(interval);
        }
    }
    printf("\n");
}
