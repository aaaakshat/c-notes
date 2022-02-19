#include <stdio.h>

int main() {
    char name[4] = "bob";
    char *n = name;

    int a = *name == 'b';
    int b = name[0] == 'b';
    int c = *n == *name;
    int d = *n == 'b';

    printf("a: %d b: %d c: %d d: %d\n", a, b, c, d);

    return 0;
}
