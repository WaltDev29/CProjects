#include <stdio.h>

void main() {
	char a, b, c;
	int num = -1;

	a = 'A';

	printf(" %c \n", a);
	printf(" %d \n", a);

	b = 'a';
	c = b + 5;
	printf(" %c \n", b);
	printf(" %c \n", c);

	c = 90;
	printf(" %c \n", c);

	printf(" %c\n", num);	// 음수 범위는 사용하지 않음
}