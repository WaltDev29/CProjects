#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_3() {
	int a, b;	// 사용자가 입력할 수
	int result;	// 결과
	char k;	// 계산 방식

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);

	printf("+ - * / % ==> ");
	scanf(" %c", &k);	// 버퍼 무시

	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);

	if (k == '+') {
		result = a + b;
		printf("%d + %d = %d\n", a, b, result);
	}
	if (k == '-') {
		result = a - b;
		printf("%d - %d = %d\n", a, b, result);
	}
	if (k == '*') {
		result = a * b;
		printf("%d * %d = %d\n", a, b, result);
	}
	if (k == '/') {
		if (b != 0) {
			result = a / b;
			printf("%d / %d = %d\n", a, b, result);
		}
		else
			printf("0으로 나누면 안됩니다.\n");
	}
	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d\n", a, b, result);
		}
		else
			printf("0으로 나누면 나머지값이 안됩니다.\n");
	}
}