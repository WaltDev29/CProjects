#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "tryCatch.h"

void main() {
	int score[5][3];
	int sum = 0;	// ���� ����
	float average = 0;	// ���� ���	
	for (int i = 0; i < 5; i++) {
		printf("%d��° �л��� DB, C, VISION ������ �Է��ϼ���.\n", i + 1);
		printf("DB ���� : ");
		while (tryCatch(scanf("%d", &score[i][0]), score[i][0])) {
			printf("DB ���� : ");
		}
		printf("C ���� : ");
		while (tryCatch(scanf("%d", &score[i][1]), score[i][1])) {
			printf("C ���� : ");
		}
		printf("VISION ���� : ");
		while (tryCatch(scanf("%d", &score[i][2]), score[i][2])) {
			printf("VISION ���� : ");
		}
		printf("\n");
	}

	printf("\n�л��� ������ ���\n\n");
	printf("  �л�   | ���� |  ���  \n");
	printf("-------------------------\n");
	for (int i = 0; i < 5; i++) {
		sum = score[i][0] + score[i][1] + score[i][2];
		average = sum / 3.0;
		printf("%d�� �л� | %4d | %5.2f \n", i + 1, sum, average);
	}
}
