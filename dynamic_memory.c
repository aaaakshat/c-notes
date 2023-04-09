#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *pi = NULL;
    int *pf = NULL;
    char *pc = NULL;
    char my_string[] = "Hello world!";

    pi = malloc(100 * sizeof(int));
    pf = malloc(5 * sizeof(float));
    free(pi);
    pc = malloc(strlen(my_string)+1);
    strncpy(pc, my_string, strlen(my_string));
    pc[strlen(my_string)] = '\0';
    free(pf);

    return 0;
}
