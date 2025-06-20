#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>

int main() {
	int* p = NULL;
	int hap = 0;
	int cnt = 0;

	printf("입력할 개수를 입력하세요 : ");
	scanf("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);

	for (int i = 0; i < cnt; i++) {
		printf("%d 번째 숫자 입력 : ", i + 1);
		scanf("%d", &p[i]);
		 hap += p[i];
	}		

	printf("입력 숫자 합 : %d\n", hap);

	free(p);
	return 0;
}