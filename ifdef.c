#define TESTING
#include <stdio.h>
#include <math.h>
int main() {
    int x = pow(10, 2);
#ifdef TESTING
    printf("Debug point!\n");
    x = x + 5;
#else
    x = x + 5;
#endif
    return 0;
}
