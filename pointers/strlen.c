// My implementation of strlen.c
#include <stdio.h>

int my_strlen(const char *str) {
    const char *str_ptr;
    for (str_ptr = str; *str_ptr; ++str_ptr);
    return str_ptr - str;
}

int main() {
    printf("%i", my_strlen("Hello world!"));
}
