#include <stdio.h>

int main() {
    int x = 2;
    int arr[10] = {4,5,6,7,1,2,3,0,8,9};
    int *p;

    x = *(arr + x);
    printf("%d\n", x);
}
