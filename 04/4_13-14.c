#include <stdio.h>

void main() {
	int a = 10;

	// 4-13
	printf("%d을 왼쪽 1회 시프트하면 %d이다.\n", a, a << 1);
	printf("%d을 왼쪽 2회 시프트하면 %d이다.\n", a, a << 2);
	printf("%d을 왼쪽 3회 시프트하면 %d이다.\n", a, a << 3);

	// 4-14

	printf("%d을 오른쪽 1회 시프트하면 %d이다.\n", a, a >> 1);
	printf("%d을 오른쪽 2회 시프트하면 %d이다.\n", a, a >> 2);
	printf("%d을 오른쪽 3회 시프트하면 %d이다.\n", a, a >> 3);
	printf("%d을 오른쪽 4회 시프트하면 %d이다.\n", a, a >> 4);

}