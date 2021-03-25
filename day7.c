#include <stdio.h>

int main(void) {
  int user, divider;
  printf("정수를 입력하세요 > ");
  scanf("%d", &user);
  printf("몇의 배수를 *표 하시겠습니까? ");
  scanf("%d", &divider);

  for (int i = 1; i <= user; i++){
    if(i % divider != 0){
      printf("%d ", i);
    } else{
      printf("* ");
    }
  }
  return 0;
}