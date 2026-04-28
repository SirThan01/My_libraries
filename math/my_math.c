#include "mymath.h"
int my_abs(int x) {
    return x < 0 ? -x : x;
}
int my_max(int a, int b) {
    return a > b ? a : b;
}
int my_min(int a, int b) {
    return a < b ? a : b;
}
int my_pow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int my_fact(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int my_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return my_abs(a);
}
int my_lcm(int a, int b) {
    return my_abs(a * b) / my_gcd(a, b);
}
