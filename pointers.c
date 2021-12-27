#include <stdio.h>
#include <assert.h>

int main() {
    int arr[100];
    int *arr_p = arr;

    *arr_p = 5;

    assert(arr[0] == 5);
}
