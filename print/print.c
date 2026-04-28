#include "print.h"
#include <stdio.h>
#include <string.h>

void print(const char* s) {
    printf("%s", s);
}

void println(const char* s) {
    printf("%s\n", s);
}

void print_int(int n) {
    printf("%d", n);
}

void print_float(float f, int decimals) {
    printf("%.*f", decimals, f);
}

void print_repeat(char c, int count) {
    for (int i = 0; i < count; i++) {
        putchar(c);
    }
}

void print_center(const char* s, int width) {
    int len = strlen(s);
    int padding = (width - len) / 2;
    print_repeat(' ', padding);
    print(s);
    print_repeat(' ', width - padding - len);
}
