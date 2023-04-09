#include <stdio.h>
#include <unistd.h>

int main() {
    if (isatty(STDIN_FILENO)) {
        printf("Standard input is a terminal device.\n");
    } else {
        printf("Standard input is not a terminal device.\n");
    }

    return 0;
}

