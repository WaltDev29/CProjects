#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void main() {
	FILE* data = NULL;
	char str[100];
	char* index;

	data = fopen("students_data.txt", "rb");	
	if (data == NULL) {
		printf("파일 불러오기 실패");
		return;
	}

	printf("### 학생 정보 ###\n\n");
	while (!feof(data)) {
		fgets(str, sizeof(str), data);		
		index = strstr(str, "학");
		str[(index - str)-1] = '\n';
		printf("%s", str);
		printf("-----------------\n");
		memset(str, 0, sizeof(str));
	}	

	fclose(data);
}