#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void do_allocate(struct block **root) {
    struct block *new = malloc(sizeof(*new));
    if (*root) {
        new->next = *root;
    }
    *root = new;
}

void my_free(void **elem) {
    if (!*elem) {
        return;
    }

    free(*elem);
    *elem = NULL;
}


