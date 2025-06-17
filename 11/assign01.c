#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int catchExit(char* str);

void main() {
	FILE* data = NULL;
	char name[31];
	char student_id[11];
	char* pName = name;
	char* pId = student_id;

	data = fopen("students_data.txt", "w+b");
	if (data == NULL) {
		printf("���� �ҷ����� ����");
		return;
	}

	for (int i = 0; i < 10; i++) {
		// �̸� �Է�
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", pName);
		if (catchExit(pName)) return;	// ���� ���� Ȯ��
		while (getchar() != '\n');

		// �й� �Է�
		printf("�й��� �Է��ϼ��� : ");
		scanf("%s", pId);
		if (catchExit(pId)) return; // ���� ���� Ȯ��
		while (getchar() != '\n');


		fprintf(data, "�̸� : %s  �й� : %s\n", pName, pId);
		printf("\n�Է� ����\n�̸� : %s  �й� : %s\n\n", pName, pId);
		memset(pName, 0, strlen(pName));
		memset(pId, 0, strlen(pId));
	}
	printf("���α׷��� �����մϴ�.\n");

	fclose(data);
}

int catchExit(char* str) {
	int result = 0;
	if (strcmp(str, "exit") == 0 || strcmp(str, "EXIT") == 0) {
		printf("���α׷��� �����մϴ�.\n");
		result = 1;
	}
	return result;
}