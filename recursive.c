#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n) {
    if (n < 0) {
        n *= -1;
    }
    switch(n) {
        case 0:
        case 1:
            return 1;
            break;
        default:
            return n * factorial(n-1);
    }
}

int fib(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    printf("4! = %d\n", factorial(4));
    printf("9th fibonacci number: %d\n", fib(9));
    return 0;
}
