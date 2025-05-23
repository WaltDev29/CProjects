#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2;		// 계산할 숫자
	char way;		// 연산자

	printf("수식을 한 줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &num1, &way, &num2);

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
		printf("%d %c %d = %f입니다.\n", num1, way, num2, (float)num1 / num2);
		break;
	case '%':
		printf("%d %c %d = %d입니다.\n", num1, way, num2, num1 % num2);
		break;
	default:
		printf("연산자를 잘못 입력했습니다.\n");
		break;
	}
}