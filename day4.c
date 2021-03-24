#include <stdio.h>

int main(void) {
  int a = 1, b = 2, c = 3, d = 4;
  
  printf("%d\n", (a + b) == c);
  printf("%d\n", (a * b) < 3);
  printf("%d\n", (c <= d) && (d == (a + c)));
  printf("%d\n", ((d / c) <= a) || ((b * c) == (b + d)));
  return 0;
}