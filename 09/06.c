#include <stdio.h>

void change(int* a, int* b);

void main() {
	int a = 10;
	int b = 20;
	printf("a의 값 : %d \na의 주소 : %p \n", a, &a);
	printf("b의 값 : %d \nb의 주소 : %p \n", b, &b);

	change(&a, &b);
	printf("a의 값 : %d \na의 주소 : %p \n", a, &a);
	printf("b의 값 : %d \nb의 주소 : %p \n", b, &b);
}

void change(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}