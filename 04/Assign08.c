#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	float num1, num2;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%f", &num1);

	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%f", &num2);

	printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
	printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
	printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
	printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
	printf("%.0f %% %.0f = %d\n", num1, num2, (int)num1 % (int)num2);
}