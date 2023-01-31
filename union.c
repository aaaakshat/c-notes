#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct header {
        size_t size_state;
        size_t left_size;
        union {
            struct {
                struct header *next;
                struct header *prev;
            };
        // flexible array member (FAM)
        char data[0];
        };
    } header;

    header *h = malloc(sizeof(*h));

    printf("size of header: %lu\n", sizeof(*h));
    printf("size of size state: %lu\n", sizeof(h->size_state));
    printf("size of left size: %lu\n", sizeof(h->left_size));
    printf("size of next: %lu\n", sizeof(h->next));
    printf("size of data: %lu\n", sizeof(h->data));

    return 0;
}
