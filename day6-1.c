#include <stdio.h>

int main(void) {
	int num1, num2, num3, max;
	printf("정수 세개를 엔터로 구분하여 입력하세요 >\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	max = num1;
	if (max < num2) {
		max = num2;
	}
	if (max < num3) {
		max = num3;
	}
	printf("%d", max);
	return 0;
}