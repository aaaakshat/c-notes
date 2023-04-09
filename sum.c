#include <stdio.h>
int main(){ 
    int arr[5] = {1,2,3,4,5};
    int *p = &arr[0];
    int *pend = &arr[5];
    int s = 0;
    while (p < pend) {
        s += *p;
        p++;
    }
    printf("%d\n", s);
    return 0;
}

