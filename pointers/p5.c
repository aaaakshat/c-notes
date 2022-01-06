// Structs and pointers

#include <stdio.h>
#include <string.h>

struct tag {
    char lname[20];
    char fname[20];
    int age;
    float rate;
};

struct tag my_struct;

int main() {
    strcpy(my_struct.lname, "John");
    strcpy(my_struct.fname, "Bohn");
    printf("\n%s ", my_struct.fname);
    printf("\n%s ", my_struct.lname);
}
