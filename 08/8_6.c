#include <stdio.h>

void main() {
	int aa[] = { 10, 20, 30, 40, 50, 60 };
	int count;
	int a_size = sizeof(aa[0]);
	int b_size = sizeof(int);

	count = sizeof(aa) / sizeof(int);
	printf("����� ũ�� : %d\n", a_size);
	printf("int�� ũ�� : %d\n", b_size);
	printf("�迭 aa[]�� ��� ������ %d���Դϴ�.\n", count);
}