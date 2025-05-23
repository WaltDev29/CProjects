#include <stdio.h>

void main() {
	int aa[] = { 10, 20, 30, 40, 50, 60 };
	int count;
	int a_size = sizeof(aa[0]);
	int b_size = sizeof(int);

	count = sizeof(aa) / sizeof(int);
	printf("요소의 크기 : %d\n", a_size);
	printf("int의 크기 : %d\n", b_size);
	printf("배열 aa[]의 요소 개수는 %d개입니다.\n", count);
}