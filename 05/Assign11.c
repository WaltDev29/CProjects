#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2;		// ����� ����
	char way;		// ������

	printf("ù ��° ���� �Է��ϼ��� : ");
	scanf("%d", &num1);

	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf(" %c", &way);

	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf("%d", &num2);

	switch (way)
	{
	case '+':
		printf("%d %c %d = %d�Դϴ�.\n", num1, way, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d = %d�Դϴ�.\n", num1, way, num2, num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %d�Դϴ�.\n", num1, way, num2, num1 * num2);
		break;
	case '/':
		printf("%d %c %d = %d�Դϴ�.\n", num1, way, num2, num1 / num2);
		break;
	case '%':
		printf("%d %c %d = %d�Դϴ�.\n", num1, way, num2, num1 % num2);
		break;
	default:
		break;
	}
}