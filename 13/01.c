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
	printf("�л� �� �Է� : ");
	scanf("%d", &size);
	student* s = (student*)malloc(sizeof(student) * size);	

	for (int i = 0; i < size; i++) {
		printf("%d��° �л�", i+1);
		printf("�̸� : ");
		scanf("%s", s[i].name);
		printf("���� : ");
		scanf("%d", &(s[i].kor));
		printf("���� : ");
		scanf("%d", &(s[i].eng));
		s[i].avg = (s[i].kor + s[i].eng) / 2.0f;
		printf("\n");
	}

	printf("���\n");
	for (int i = 0; i < size; i++) {
		printf("%d��° �л�", i + 1);
		printf("�̸� : %s\n", s[i].name);
		printf("���� : %d\n", s[i].kor);
		printf("���� : %d\n", s[i].eng);
		printf("��� : %.2f\n", s[i].avg);
		printf("\n");
	}

	free(s);

	return 0;
}