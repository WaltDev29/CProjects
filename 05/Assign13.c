#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2;		// ����� ����
	char way;		// ������

	printf("������ �� �ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &num1, &way, &num2);

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
		printf("%d %c %d = %f�Դϴ�.\n", num1, way, num2, (float)num1 / num2);
		break;
	case '%':
		printf("%d %c %d = %d�Դϴ�.\n", num1, way, num2, num1 % num2);
		break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
		break;
	}
}