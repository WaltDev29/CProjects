#include <stdio.h>

void main() {
	int a, b;
	a = b = 10;

	printf("%d\n", a++);
	printf("%d\n", ++b);

	printf("%d\n", a);
	printf("%d\n", b);

}