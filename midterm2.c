#include <stdlib.h>
#include <stdio.h>

int func() {
	int array[] = { 4, 2, 9, 3, 8 };
	int *p = NULL;
	int i = 0;

	p = &array[2];
	p++;
	printf("%d\n", *(p++));
	*(--p) = 7;

	(*p)++;
	for (i = 0; i < (sizeof(array)/sizeof(int)); i++) {
		printf("%d ", array[i]);
	}
    return 0;
}

void clear_it(int *ptr, int size) {
    for (int i=0; i<size; i++) {
        *(ptr++) = 1;
    }
}

int main() {
    int x = 2;
    int arr[10] = {4,5,6,7,1,2,3,0,8,9};
    int *p;

	int (*my_func)() = &func;
    //my_func();

    void (*clear)(int *, int) = &clear_it;
    int *a = calloc(10, sizeof(*a));
    for (int i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    clear(a, 10);
    for (int i=0; i<10; i++) {
        printf("%d ", a[i]);
    }

    int rows = 10, cols = 10;
    int *array = calloc(rows * cols, sizeof(*array));

    for (int i=0; i<cols; i++) {
        for (int j=0; j<rows; j++) {
 //           printf("%d ", *(array + (i * rows + j)) );
        }
//        printf("\n");
    }

    return 0;
}
