#include <stdio.h>

void getPrime(int num, int arr[], int size);

int main()
{
  int arr[100] = {0,};
  int size = sizeof(arr)/sizeof(int);
  int num;

  printf("100 이하의 정수를 입력하세요 > ");
  scanf("%d",&num);

	getPrime(num, arr, size);

  for(int i = 0; i < size; i++){
    if(arr[i]!=0){
      printf("%d ", arr[i]);
    }
  }
 
	return 0;
}

void getPrime(int num, int arr[], int size){
  int isPrime = 1;
  int idx = 0;

  for (int i = 2; i <= num; i++){
		for (int j = 2; j <= i/2; j++){
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
 
		if (isPrime){
      arr[idx] = i;
			idx++;
		}

		isPrime = 1;
	}
}
