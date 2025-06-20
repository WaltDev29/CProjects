#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>

int main() {
	int* p = NULL;
	int hap = 0;
	int cnt = 0;
	int data = -1;

	p = (int*)malloc(sizeof(int) * 1);

	printf("1번째 숫자 : ");
	scanf("%d", p);
	cnt++;

	while (1) {		
		printf("%d 번째 숫자 : ", cnt + 1);
		scanf("%d", &data);
		if (data != 0) p = (int*)realloc(p, sizeof(int) * (cnt + 1));
		else break;
		p[cnt] = data;
		cnt++;
	}

	/*for (int i = 1;; i++) {
		printf("%d 번째 숫자 : ", i+1);
		scanf("%d", &data);		
		if (data != 0) p = (int*)realloc(p, sizeof(int) * (i+1));
		else break;
		p[i] = data;
		cnt++;			
	}*/
	for (int i = 0; i < cnt; i++) 
		hap += *(p+i);

	printf("입력 숫자 합 : %d\n", hap);

	free(p);
}