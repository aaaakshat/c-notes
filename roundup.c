#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* toBinary(int n) {
    int len = 8;
    char* binary = (char*)malloc(sizeof(char) * len);
    int k = 0;
    for (unsigned i = (1 << (len - 1)); i > 0; i = i / 2) {
        binary[k++] = (n & i) ? '1' : '0';
    }
    binary[k] = '\0';
    return binary;
}

int main() {
    int inp;
    printf("Enter a number to round\n");
    scanf("%d", &inp);
    int add = inp + 7;
    int mask = (~7);
    int round = add & mask;

    printf("inp: %d\n",inp); 
	printf("%s\n", toBinary(inp));
    printf("add: %d\n",add); 
	printf("%s\n", toBinary(add));
    printf("mask: %d\n",mask); 
	printf("%s\n", toBinary(mask));
    printf("round: %d\n",round); 
	printf("%s\n", toBinary(round));

//    clock_t start, stop;
//    start = clock();
//    int number;
//    for (int i=0; i<1000000000; i++) {
//        number = i & (-8);
//    }
//    stop = clock();
//    double total = (double) (stop-start) / CLOCKS_PER_SEC;
//
//    printf("optimized time : %f\n", total);
//
//    start = clock();
//    for (int i=0; i<1000000000; i++) {
//        number = (8-(i % 8)) + i;
//    }
//    stop = clock();
//    total = (double) (stop-start) / CLOCKS_PER_SEC;
//
//    printf("naive time: %f\n", total);
}
