#include <stdlib.h>

void delete(dnode *elem) {
    if (!elem) {
        return;
    }
    // solo:
    if(!(elem->next) && !(elem->prev)) {
        free(elem);
        return;
    }
    // tail pointer:
    if(!(elem->next)) {
        if (elem->prev) {
            elem->prev->next = NULL;
        }
        free(elem->name);
        free(elem);
        elem = NULL;
        return;
    }

    // head pointer:
    if(!(elem->prev)) {
        if (elem->next) {
            elem->next->prev = NULL;
        }
        free(elem);
        elem = NULL;
        return;
    }
    // middle pointer:

}
