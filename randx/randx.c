#include "randx.h"
#include <stdlib.h>
#include <time.h>
int range(int min, int max) {
    static int init = 0;
    if (!init) {
        srand(time(NULL));
        init = 1;
    }
    return min + rand() % (max - min + 1);
}
