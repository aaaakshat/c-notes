#include <stdlib.h>
#include <stdio.h>

void print(char *str) {
    printf("%s\n", str);
}

int main() {
    void (*print_ptr)(char *) = &print;
    (*print_ptr)("Hello world!");
    return 0;
}
