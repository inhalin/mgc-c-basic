#include <stdio.h>

int getMin(int arr[], int size);

int main(void) {
  int arr[5] = {0,};
  int size = sizeof(arr)/sizeof(int);

  printf("정수 5개를 입력하세요 > \n");
  
  for(int i = 0; i < size; i++){
    printf("%d: ", i+1);
    scanf("%d", &arr[i]);
  }

  printf("가장 작은 수는 %d입니다.", getMin(arr, size));

  return 0;
}

int getMin(int arr[], int size){
  int min = arr[0];

  for(int i = 1; i < size; i++){
    if(min>arr[i]) min=arr[i];
  }

  return min;
}
