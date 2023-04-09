#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <assert.h>

extern int errno;

void alloc(int **a) {
    *a = malloc(sizeof(**a));
    **a = 10;
}

int main() {
    int *a, *b;
    alloc(&a);
    alloc(&b);
    printf("%d\n", *a);
    printf("%d\n", *b);

    printf("a > b? %d\n", a < b);
    printf("%p\n", a);
    printf("%p\n", b);
    assert(a == NULL);
    return 0;
}
