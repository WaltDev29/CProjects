#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int money;

	printf("## ��ȯ�� ����? ");
	scanf("%d", &money);

	printf("�����¥�� ==> %d��\n", money / 500);
	money %= 500;

	printf("���¥�� ==> %d��\n", money / 100);
	money %= 100;

	printf("���ʿ�¥�� ==> %d��\n", money / 50);
	money %= 50;

	printf("�ʿ�¥�� ==> %d��\n", money / 10);
	money %= 10;

	printf("�ٲ��� ���� �ܵ� ==> %d��\n", money);
}