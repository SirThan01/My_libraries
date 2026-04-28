#include "color.h"
#include <stdio.h>

void red(const char* s) {
    printf("\033[31m%s\033[0m", s);
}

void green(const char* s) {
    printf("\033[32m%s\033[0m", s);
}

void yellow(const char* s) {
    printf("\033[33m%s\033[0m", s);
}

void blue(const char* s) {
    printf("\033[34m%s\033[0m", s);
}

void magenta(const char* s) {
    printf("\033[35m%s\033[0m", s);
}

void cyan(const char* s) {
    printf("\033[36m%s\033[0m", s);
}

void reset(void) {
    printf("\033[0m");
}
