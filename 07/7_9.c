#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2;
	char ch;


	while (1) {
		printf("����� �� ���� �Է� (���߷��� Ctrl + C) : ");
		scanf("%d %d", &num1, &num2);

		printf("����� �����ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);
		switch (ch)
		{
		case '+':
			printf("%d %c %d = %d�Դϴ�.\n", num1, ch, num2, num1 + num2);
			break;
		case '-':
			printf("%d %c %d = %d�Դϴ�.\n", num1, ch, num2, num1 - num2);
			break;
		case '*':
			printf("%d %c %d = %d�Դϴ�.\n", num1, ch, num2, num1 * num2);
			break;
		case '/':
			printf("%d %c %d = %d�Դϴ�.\n", num1, ch, num2, num1 / num2);
			break;
		case '%':
			printf("%d %c %d = %d�Դϴ�.\n", num1, ch, num2, num1 % num2);
			break;
		default:
			printf("�����ڸ� �߸� �Է��߽��ϴ�.");
			break;
		}
	}
}