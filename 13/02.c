#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _student {
	char name[10];
	int kor;
	int eng;
	float avg;
}student;

int main() {
	student s;
	student* p = &s;

	printf("###학생 정보 입력###\n");
	printf("이름 : ");
	scanf("%s", p->name);
	printf("국어 : ");
	scanf("%d", &(p->kor));
	printf("영어 : ");
	scanf("%d", &(p->eng));
	p->avg = (p->kor + p->eng) / 2.0f;

	printf("\n###학생 정보 출력###\n");
	printf("이름 : %s\n", p->name);
	printf("국어 : %d\n", p->kor);
	printf("영어 : %d\n", p->eng);
	printf("평균 : %.2f\n", p->avg);
	
}
