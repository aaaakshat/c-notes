#include <stdio.h>

int main() {
    struct {
        unsigned int width: 1;
        unsigned int height: 1;
    } box;

    typedef union {
        int i;
        float j;
        char k;
    } overlap;

    overlap bruh = {.j = 90};
    printf("sizeof box: %lu\n", sizeof(box));
    printf("int: %d float %f char %c\n", bruh.i, bruh.j, bruh.k);
    return 0;
}
