#include <stdio.h>

void arrReverse(int arr[], int size);

int main(void) {
  int arr[10] = {0,};
  int size = sizeof(arr)/sizeof(int);

  printf("정수 10개 입력\n");
  for (int i = 0; i < size; i++){
    printf("%d: ",i+1);
    scanf("%d", &arr[i]);
  }

  int *ptr = arr;
  arrReverse(ptr, size);

  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}


void arrReverse(int arr[], int size){
  int temp;
  int i = 0;
  int j = size - 1;

  while(j-i > 0){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }

}
