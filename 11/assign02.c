#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void main() {
	FILE* data = NULL;
	char str[100];
	char* index;

	data = fopen("students_data.txt", "rb");	
	if (data == NULL) {
		printf("���� �ҷ����� ����");
		return;
	}

	printf("### �л� ���� ###\n\n");
	while (!feof(data)) {
		fgets(str, sizeof(str), data);		
		index = strstr(str, "��");
		str[(index - str)-1] = '\n';
		printf("%s", str);
		printf("-----------------\n");
		memset(str, 0, sizeof(str));
	}	

	fclose(data);
}