#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char str[100];
	int str_cnt;	// ���ڿ� ����
	int i;	// �ݺ����� ���� 

	printf("������ �� ���ڸ� �Է� (100�� ����) : ");
	scanf("%s", str);

	printf("\n");
	printf("�Է��� ���ڿ� ==> %s\n", str);
	printf("��ȯ�� ���ڿ� ==> ");

	str_cnt = strlen(str);	// �Է¹��� ���ڿ��� ����

	for (i = str_cnt; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
}