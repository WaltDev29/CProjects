#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main_3() {
	int a, b;	// ����ڰ� �Է��� ��
	int result;	// ���
	char k;	// ��� ���

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);

	printf("+ - * / % ==> ");
	scanf(" %c", &k);	// ���� ����

	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
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
			printf("0���� ������ �ȵ˴ϴ�.\n");
	}
	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d\n", a, b, result);
		}
		else
			printf("0���� ������ ���������� �ȵ˴ϴ�.\n");
	}
}