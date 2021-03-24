#include <stdio.h>

int main(void) {
  int year;
  float date;
  
  printf("연도 입력> ");
  scanf("%d", &year);
  printf("날짜 입력 > ");
  scanf("%f", &date);
  
  printf("오늘은 %d.%g %s입니다.", year, date, "금요일");
  
  return 0;
}