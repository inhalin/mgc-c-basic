#include <stdio.h>

int factorial(int num);

int main(void) {
  printf("<<팩토리얼 계산기>>\n프로그램을 종료하려면 -1 을 입력하세요.\n");
  
  int num;
  while(1){
    printf("정수 입력 > ");
    scanf("%d", &num);
    if (num == -1) break;
    if(num < -1){
      printf("0 또는 양의 정수를 입력하세요.\n");
    } else {
      printf("%d\n", factorial(num));  
    }
  }
  return 0;
}

int factorial(int num){
  int res = 1;
  for (int i = 0; i < num; i++){
    res *= num-i;
  }
  return res;
}
