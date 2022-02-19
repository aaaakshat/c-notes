#include <stdio.h>
#include <string.h>

int main() {
    char name[4] = "bob";
    char empty[4] = "";
    char *n = name;
    char *str = name;

    int a = *empty == '\0';
    int b = *empty == '\n';
    int c = *n == *name;
    int d = strcmp(str, "bob");

    printf("a: %d b: %d c: %d d: %d\n", a, b, c, d);
    printf("%s\n", str);

    return 0;
}
