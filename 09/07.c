#include <stdio.h>

void main() {
	char ch;
	char* p;

	ch = 'A';
	p = &ch;

	printf("ch가 가지고 있는 값: ch ==> %c\n", ch);
	printf("ch의 주소: &ch ==> %p\n", &ch);
	printf("p가 가지고 있는 값: p ==> %p\n", p);
	printf("p가 가리키는 곳의 실제 값: *p ==> %c\n", *p);
}