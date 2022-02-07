#include <stdio.h>
#include <string.h>

int main() {
    char a[5] = {'1','2','3','4','5'};
    a[10] = "";
    printf("%s", a);
    return 0;
}
