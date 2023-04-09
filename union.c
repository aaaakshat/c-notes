#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define ALLOC_HEADER_SIZE (sizeof(header) - (sizeof(header *)))

void print_bytes (void *ptr, int size) {
    unsigned char *p = ptr;
    int i;
    printf("Size: %d\n", size);
    for (i=0; i<size; i++) {
        printf("%02hhX ", p[i]);
    }
    printf("\n");
}

typedef struct header {
    size_t size_state;
    size_t left_size;
    union {
        struct {
            struct header *next;
            struct header *prev;
        };
        // flexible array member (FAM)
        struct {
            struct header *root;
            char data[0];
        };
    };
} header;

header * ptr_to_header(void *p) {
    return ((header**)p)[-1];
}

int main() {
    char d[20]="Program";
    header *h = malloc(sizeof(*h) + strlen(d));
    strcpy(h->data, d);
    h->root = h;
    //((header**)(h->data))[-1] = NULL;
    header **p = (header **)h->data;
    *(p-1) = NULL;
    print_bytes(&h->next, sizeof(h->next));
    print_bytes(&h->data, sizeof(h->next));
    print_bytes(&h->root, sizeof(h->root));
    printf("data: %s\n", h->data);
    printf("sizeof data: %lu\n", strlen(h->data));
    printf("ptr h: %p\n", h);
    printf("ptr h->root: %p\n", h->root);
    printf("ptr ptr_to_header(): %p\n", ptr_to_header(h->data));
    printf("ptr h->data: %p\n", h->data);
    //print_bytes(h->data, sizeof(h->data));
    printf("%ld\n", ALLOC_HEADER_SIZE);

    size_t align = 32;
    uintptr_t h_int = (uintptr_t) ptr_to_header(h->data);
    size_t adj = ((h_int + (align - 1)) & ~(align - 1));

    printf("Align %zu\n",h_int );
    printf("Align %zu\n",adj );
    printf("equal? %d\n",adj == h_int);
    printf("Align %p\n", (header *) h_int );
    printf("Align %p\n", (header *) adj );

    printf("size of header: %lu\n", sizeof(*h));
    printf("size of size state: %lu\n", sizeof(h->size_state));
    printf("size of left size: %lu\n", sizeof(h->left_size));
    printf("size of next: %lu\n", sizeof(h->next));
    printf("size of data: %lu\n", sizeof(h->data));

    return 0;
}
