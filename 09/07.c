#include <stdio.h>

void main() {
	char ch;
	char* p;

	ch = 'A';
	p = &ch;

	printf("ch�� ������ �ִ� ��: ch ==> %c\n", ch);
	printf("ch�� �ּ�: &ch ==> %p\n", &ch);
	printf("p�� ������ �ִ� ��: p ==> %p\n", p);
	printf("p�� ����Ű�� ���� ���� ��: *p ==> %c\n", *p);
}