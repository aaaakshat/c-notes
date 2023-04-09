#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main() {
    printf("int %lu\n", sizeof(int));
    printf("long %lu\n", sizeof(long));
    printf("long long %lu\n", sizeof(long long));
    printf("%llu\n", (unsigned long long) pow(2, 64)-1);
    return 0;
}
