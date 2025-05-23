#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "tryCatch.h"

void main() {
	int score[5][3];
	int sum = 0;	// 성적 총점
	float average = 0;	// 성적 평균	
	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생의 DB, C, VISION 점수를 입력하세요.\n", i + 1);
		printf("DB 점수 : ");
		while (tryCatch(scanf("%d", &score[i][0]), score[i][0])) {
			printf("DB 점수 : ");
		}
		printf("C 점수 : ");
		while (tryCatch(scanf("%d", &score[i][1]), score[i][1])) {
			printf("C 점수 : ");
		}
		printf("VISION 점수 : ");
		while (tryCatch(scanf("%d", &score[i][2]), score[i][2])) {
			printf("VISION 점수 : ");
		}
		printf("\n");
	}

	printf("\n학생별 총점과 평균\n\n");
	printf("  학생   | 총점 |  평균  \n");
	printf("-------------------------\n");
	for (int i = 0; i < 5; i++) {
		sum = score[i][0] + score[i][1] + score[i][2];
		average = sum / 3.0;
		printf("%d번 학생 | %4d | %5.2f \n", i + 1, sum, average);
	}
}
