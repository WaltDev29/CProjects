#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2;
	char ch;


	while (1) {
		printf("계산할 두 수를 입력 (멈추려면 Ctrl + C) : ");
		scanf("%d %d", &num1, &num2);

		printf("계산할 연산자를 입력하세요 : ");
		scanf(" %c", &ch);
		switch (ch)
		{
		case '+':
			printf("%d %c %d = %d입니다.\n", num1, ch, num2, num1 + num2);
			break;
		case '-':
			printf("%d %c %d = %d입니다.\n", num1, ch, num2, num1 - num2);
			break;
		case '*':
			printf("%d %c %d = %d입니다.\n", num1, ch, num2, num1 * num2);
			break;
		case '/':
			printf("%d %c %d = %d입니다.\n", num1, ch, num2, num1 / num2);
			break;
		case '%':
			printf("%d %c %d = %d입니다.\n", num1, ch, num2, num1 % num2);
			break;
		default:
			printf("연산자를 잘못 입력했습니다.");
			break;
		}
	}
}