#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>

int main() {
	int* p = NULL;
	int hap = 0;
	int cnt = 0;

	printf("�Է��� ������ �Է��ϼ��� : ");
	scanf("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);

	for (int i = 0; i < cnt; i++) {
		printf("%d ��° ���� �Է� : ", i + 1);
		scanf("%d", &p[i]);
		 hap += p[i];
	}		

	printf("�Է� ���� �� : %d\n", hap);

	free(p);
	return 0;
}