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
		printf("파일 불러오기 실패");
		return;
	}

	for (int i = 0; i < 10; i++) {
		// 이름 입력
		printf("이름을 입력하세요 : ");
		scanf("%s", pName);
		if (catchExit(pName)) return;	// 종료 여부 확인
		while (getchar() != '\n');

		// 학번 입력
		printf("학번을 입력하세요 : ");
		scanf("%s", pId);
		if (catchExit(pId)) return; // 종료 여부 확인
		while (getchar() != '\n');


		fprintf(data, "이름 : %s  학번 : %s\n", pName, pId);
		printf("\n입력 정보\n이름 : %s  학번 : %s\n\n", pName, pId);
		memset(pName, 0, strlen(pName));
		memset(pId, 0, strlen(pId));
	}
	printf("프로그램을 종료합니다.\n");

	fclose(data);
}

int catchExit(char* str) {
	int result = 0;
	if (strcmp(str, "exit") == 0 || strcmp(str, "EXIT") == 0) {
		printf("프로그램을 종료합니다.\n");
		result = 1;
	}
	return result;
}