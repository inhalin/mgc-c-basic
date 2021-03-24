#include <stdio.h>

int main(void) {
  int num1, num2;
  
  printf("<사칙연산 계산기>\n정수 두개를 엔터로 구분해 입력하세요 >\n");
  scanf("%d", &num1);
  scanf("%d", &num2);

  printf("%d + %d = %d\n", num1, num2, num1+num2);
  printf("%d - %d = %d\n", num1, num2, num1-num2);
  printf("%d * %d = %d\n", num1, num2, num1*num2);
  printf("%d / %d = %d\n", num1, num2, num1/num2);
  return 0;
}