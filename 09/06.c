#include <stdio.h>

void change(int* a, int* b);

void main() {
	int a = 10;
	int b = 20;
	printf("a�� �� : %d \na�� �ּ� : %p \n", a, &a);
	printf("b�� �� : %d \nb�� �ּ� : %p \n", b, &b);

	change(&a, &b);
	printf("a�� �� : %d \na�� �ּ� : %p \n", a, &a);
	printf("b�� �� : %d \nb�� �ּ� : %p \n", b, &b);
}

void change(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}