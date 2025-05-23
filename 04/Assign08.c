#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	float num1, num2;

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%f", &num1);

	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%f", &num2);

	printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
	printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
	printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
	printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
	printf("%.0f %% %.0f = %d\n", num1, num2, (int)num1 % (int)num2);
}