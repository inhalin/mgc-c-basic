#include <stdio.h>

int main(void) {
  int drink;
  printf("1~5 사이의 숫자를 입력하세요 >\n");
  scanf("%d", &drink);
  
  switch(drink){
    case 1: 
      printf("콜라 선택!\n");
      break;
    case 2: 
      printf("사이다 선택!\n");
      break;
    case 3: 
      printf("포카리 선택!\n");
      break;
    case 4:
      printf("닥터페퍼 선택!");
      break;
    case 5:
      printf("비타500 선택!");
      break; 
    default: 
      printf("꽝! 잘못 입력하셨습니다!\n");
  }
  return 0;
}