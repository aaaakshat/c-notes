#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    char *a = malloc(13);
    strcpy(a, "Hello world!");
    printf("before %s\n", a);
    for (int i=1; i<13; i++) {
        printf("%c ", *a);
        a[i] = i+65;
        printf("%c \n", *a);
    }
    printf("after %s\n", a);
    return 0;
}
