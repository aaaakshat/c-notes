#include <stdio.h>

int main() {
    char name[4] = "bob";
    char empty[4] = "";
    char *n = name;

    int a = *empty == '\0';
    int b = *empty == '\n';
    int c = *n == *name;
    int d = *n == 'b';

    printf("a: %d b: %d c: %d d: %d\n", a, b, c, d);

    return 0;
}
