#include <stdlib.h>
#include <stdio.h>

static inline int is_pow2(size_t n) { return (n != 0) && ((n & (n - 1)) == 0); }

int main() {
    int inp;
    printf("Enter a number to check if power of 2\n");
    scanf("%d", &inp);
    printf("%d\n", is_pow2((size_t) inp));
    return 0;
}
