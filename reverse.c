#include <stdlib.h>
#include <stdio.h>

int reverse(int source[], int dest[], int n) {
    int sum = 0;

    for (int i=0; i<n; i++) {
        dest[i] = source[n - 1 - i];
        sum += dest[i];
    }

    return sum;
}

int main() {
    int s[10] = {0,1,2,3,4,5,6,7,8,9};
    int d[10];

    printf("original s\n");
    for (int i=0; i<10; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
    printf("original d\n");
    for (int i=0; i<10; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");
    reverse(s, d, 10);
    printf("after d\n");
    for (int i=0; i<10; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");
    return 0;
}
