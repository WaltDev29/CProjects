#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_2() {
	int a, b;	// 사용자가 입력할 수
	int result;	// 결과
	int k;	// 계산 방식

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);

	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
	scanf("%d", &k);

	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);

	if (k == 1) {
		result = a + b;
		printf("%d + %d = %d\n", a, b, result);
	}
	if (k == 2) {
		result = a - b;
		printf("%d - %d = %d\n", a, b, result);
	}
	if (k == 3) {
		result = a * b;
		printf("%d * %d = %d\n", a, b, result);
	}
	if (k == 4) {
		result = a / b;
		printf("%d / %d = %d\n", a, b, result);
	}
}