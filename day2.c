#include <stdio.h>

int main() {
	int num;
	char c;

	printf("2일차 과제 - 서식지정자를 사용한 printf 출력하기\n");
	printf("숫자, 문자 입력 > ");
	scanf_s("%d %c", &num, &c);
	printf("입력한 숫자는 %d입니다.\n", num);
	printf("입력한 문자 %c의 아스키코드 값은 %d입니다.", c, c);
}