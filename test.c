#include <stdio.h>

int main() {
  int a = 1;
  int *x = &a;
  int *y = &a;
  int *z = &a;

  printf("location of a: %p\n", &a);
  printf("x = x+1 : %p\n", x = x+1);
  printf("y++ : %p\n", y++);
  printf("++z : %p\n", ++z);
  return 0;
}
