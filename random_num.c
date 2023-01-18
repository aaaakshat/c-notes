#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srandom(time(0));
    // generate numbers between 1 and 3:
    for (int i=0; i<20; i++) printf("%ld\n", 1 + random() % 3);
    return 0;
}
