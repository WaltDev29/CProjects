#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	FILE* file = NULL;
	char str[100];

	file = fopen("test3.txt", "w+b");
	if (file == NULL) {
		printf("파일 불러오기 실패");
		return;
	}
	
	printf("문자열을 입력하세요 (최대 20자) : ");
	fgets(str, sizeof(str), stdin);
	fputs(str, file);

	fclose(file);
}
