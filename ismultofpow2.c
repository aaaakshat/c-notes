#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static inline int is_multof_pow2(size_t n, size_t x) { return (n != 0) && ((n & (int)(pow((double) 2, x)- 1)) == 0); }

int main() {
    int inp, x;
    printf("Enter the power of 2\n");
    scanf("%d", &x);
    for (int i=0; i<100; i++) {
        printf("is %d a multiple of %d? |  %d\n", i, (int)(pow((double)2,x)), is_multof_pow2((size_t) i, (size_t) x));
    }
    return 0;
}
