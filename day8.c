#include <stdio.h>

int main(void) {
	char subject[6][50] = {"자바",
						   "운영체제",
						   "C언어",
						   "데이터베이스시스템",
						   "자료구조",
						   "이산수학"};
	int score[6] = {
		0,
	};
	int length = sizeof(score) / sizeof(int);

	for (int i = 0; i < length; i++) {
		printf("과목: %s, 점수: > ", subject[i]);
		scanf("%d", &score[i]);
	}

	int maxIndex = 0;
	int minIndex = 0;
	int i = 0;
	int max = score[0];
	int min = score[0];
	int sum = 0;
	double avg, gpa;

	while (i < length) {
		if (max < score[i]) {
			max = score[i];
			maxIndex = i;
		}
		if (min > score[i]) {
			min = score[i];
			minIndex = i;
		}

		sum += score[i];
		i++;
	}

	avg = (double)sum / length;
	gpa = (avg / 100) * 4.5;

	printf(
		"이번학기 총점: %d점 \n평균점수: %g점 \n평균평점: %g/4.5\n", sum, avg, gpa);
	printf("가장 잘 본 과목: %s, 점수: %d점\n", subject[maxIndex], max);
	printf("가장 못 본 과목: %s, 점수: %d점\n", subject[minIndex], min);
	return 0;
}