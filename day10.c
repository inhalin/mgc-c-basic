#include <stdio.h>

int main(void) {
  int num[5]={0,};
  int* ptrNum = num;
  printf("정수 다섯개를 엔터로 구분하여 입력 > \n");
  int length = sizeof(num)/sizeof(int);
  for (int i = 0; i < length; i++){
    scanf("%d", &num[i]);
  }

  printf("배열 역순 출력\n");
  for (int i = length-1; i >= 0; i--){
    printf("%d\n", *(ptrNum+i));
  }

  return 0;
}
