#include <stdio.h>

typedef struct {
    int numer, denom;
    double value;
} ratio_s;


ratio_s new_ratio(int num, int den) {
    return (ratio_s){.numer = num, .denom = den, .value = num/(double) den};
}

void print_ratio(ratio_s ratio) {
    printf("%i/%i = %g\n", ratio.numer, ratio.denom, ratio.value);
}

int main() {
    ratio_s half = new_ratio(1, 2);
    print_ratio(half);
    return 0;
}
