#include <stdio.h>

enum gender_t {
    MALE,
    FEMALE,
    OTHER,
} gender;

int gender_check(enum gender_t g) {
    return (g == MALE || g == FEMALE || g == OTHER);
}

int main() {
    enum gender_t gend = 2;
    enum gender_t gend2 = FEMALE;
    int gend3 = OTHER;

    printf("1: %d 2: %d 3: %d\n", gender_check(gend), gender_check(gend2),
        gender_check(gend3));

    return 0;
}
