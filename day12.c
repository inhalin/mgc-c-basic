#include <stdio.h>

void getMax(int arr[], int length);

int main(void) {
  int arr[10] = {0,};
  int length = sizeof(arr)/sizeof(int);

  printf("정수 10개 입력\n");
  for(int i = 0; i< length; i++){
    printf("%d: ", i+1);
    scanf("%d", &arr[i]);
  }

  int *ptr = arr;
  getMax(arr, length);

  return 0;
}

void getMax(int arr[], int length){
  int max = arr[0];
  
  for(int i = 1; i < length; i++){
    if(max < arr[i]) max = arr[i];
  }

  printf("가장 큰 수 : %d", max);
}
