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

	printf("###�л� ���� �Է�###\n");
	printf("�̸� : ");
	scanf("%s", p->name);
	printf("���� : ");
	scanf("%d", &(p->kor));
	printf("���� : ");
	scanf("%d", &(p->eng));
	p->avg = (p->kor + p->eng) / 2.0f;

	printf("\n###�л� ���� ���###\n");
	printf("�̸� : %s\n", p->name);
	printf("���� : %d\n", p->kor);
	printf("���� : %d\n", p->eng);
	printf("��� : %.2f\n", p->avg);
	
}
