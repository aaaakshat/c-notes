#include <stdio.h>
#include <string.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}

int main() {
    struct Books {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    } Book, bruh;

    char name[14] = "bob";
    char empty[4] = "";
    char *n = name;
    char *str = "bob";

    int arr[5] = {1,2,3,4,5};
    int *p = (arr + 4);

    char english[5] = {'a', 'b', 'c', 'd', 'e'};
    char *ptr = (english+1);
    char *ptr2 = english+1;

    printf("%d\n", *p);
    printf("%c\n", *(++ptr));
    printf("%c\n", *(ptr+1));
    printf("book title: %s\n", Book.title);

    int a = 5;
    int b = 10;

    printf("%d, %d\n", a, b);

    swap(&a, &a);

    printf("%d, %d\n", a, b);

    printf("stuff:\n%lu\n", strlen(str));
    printf("%lu\n", sizeof(name));

    return 0;
}
