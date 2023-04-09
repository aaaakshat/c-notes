#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    int *a = malloc(10 * sizeof(*a));
    a = malloc(10 * sizeof(*a));
    printf("%d\n", *a);
    a = malloc(10 * sizeof(*a));
    printf("%d\n", *a);
    a = malloc(10 * sizeof(*a));
    printf("%d\n", *a);
    a = malloc(10 * sizeof(*a));
    printf("%d\n", *a);

    return 0;
}
