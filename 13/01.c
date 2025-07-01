#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _student{
	char name[10];
	int kor;
	int eng;
	float avg;
} student;

int main() {
	int size = 0;
	printf("학생 수 입력 : ");
	scanf("%d", &size);
	student* s = (student*)malloc(sizeof(student) * size);	

	for (int i = 0; i < size; i++) {
		printf("%d번째 학생", i+1);
		printf("이름 : ");
		scanf("%s", s[i].name);
		printf("국어 : ");
		scanf("%d", &(s[i].kor));
		printf("영어 : ");
		scanf("%d", &(s[i].eng));
		s[i].avg = (s[i].kor + s[i].eng) / 2.0f;
		printf("\n");
	}

	printf("출력\n");
	for (int i = 0; i < size; i++) {
		printf("%d번째 학생", i + 1);
		printf("이름 : %s\n", s[i].name);
		printf("국어 : %d\n", s[i].kor);
		printf("영어 : %d\n", s[i].eng);
		printf("평균 : %.2f\n", s[i].avg);
		printf("\n");
	}

	free(s);

	return 0;
}