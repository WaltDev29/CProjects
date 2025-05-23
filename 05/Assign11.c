#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2;		// 계산할 숫자
	char way;		// 연산자

	printf("첫 번째 수를 입력하세요 : ");
	scanf("%d", &num1);

	printf("계산할 연산자를 입력하세요 : ");
	scanf(" %c", &way);

	printf("두 번째 수를 입력하세요 : ");
	scanf("%d", &num2);

	switch (way)
	{
	case '+':
		printf("%d %c %d = %d입니다.\n", num1, way, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d = %d입니다.\n", num1, way, num2, num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %d입니다.\n", num1, way, num2, num1 * num2);
		break;
	case '/':
		printf("%d %c %d = %d입니다.\n", num1, way, num2, num1 / num2);
		break;
	case '%':
		printf("%d %c %d = %d입니다.\n", num1, way, num2, num1 % num2);
		break;
	default:
		break;
	}
}