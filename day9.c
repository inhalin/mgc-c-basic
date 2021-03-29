#include <stdio.h>

int main(void) {
  int a = 10;
  int *pa = &a;

  int b = 5;
  int *pb = &b;

  printf("a의 값:%d\ta의 주소값:%p\n", a, pa);
  printf("b의 값:%d\tb의 주소값:%p\n", b, pb);

  printf("----값 뒤바꾸기----\n");
  int temp = *pa;
  *pa = *pb;
  *pb = temp;

  printf("a의 값:%d\ta의 주소값:%p\n", a, pa);
  printf("b의 값:%d\tb의 주소값:%p\n", b, pb);
  return 0;
}
