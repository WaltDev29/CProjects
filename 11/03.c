#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	FILE* file = NULL;
	char str[100];

	file = fopen("test3.txt", "w+b");
	if (file == NULL) {
		printf("���� �ҷ����� ����");
		return;
	}
	
	printf("���ڿ��� �Է��ϼ��� (�ִ� 20��) : ");
	fgets(str, sizeof(str), stdin);
	fputs(str, file);

	fclose(file);
}
