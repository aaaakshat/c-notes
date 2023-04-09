#include <stdio.h>

#ifdef DEBUG
#define NUM 1
#else
#define NUM 0
#endif

int main(){
    printf("Debug flag is set to: %d.\n", NUM);
    return 0;
}

