#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct employee {
    char *name;
    char *title;
    int id;
};

struct employee *create_employee(const char *name, const char *title, int id) {
    struct employee *new = malloc(sizeof(*new));
    assert(new);

    new->name = malloc(strlen(name)+1);
    assert(new->name);
    strncpy(new->name, name, strlen(name));
    new->name[strlen(name)] = '\0';

    new->title = malloc(strlen(title)+1);
    assert(new->title);
    strncpy(new->title, title, strlen(title));
    new->title[strlen(title)] = '\0';

    new->id = id;
    return new;
}

void fire_employee(struct employee **target) {
    if (!*target) {
        return;
    }
    free((*target)->title);
    (*target)->title = NULL;
    free((*target)->name);
    (*target)->name = NULL;
    free(*target);
    *target = NULL;
}

int main() {
    struct employee * (*newemp)(const char *, const char *, int) = &create_employee;
    void (*kill)(struct employee **) = &fire_employee;
    struct employee * john = newemp("john", "ceo", 69);

    int x = 5;
    int y = 5;

    printf("x %d\n", x = x+1);
    printf("y %d\n", y++);

    printf("name: %s, title: %s, id: %d\n", john->name, john->title, john->id);
    kill(&john);
    printf("%p\n", john);
    return 0;
}
