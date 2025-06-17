#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	FILE* file1 = NULL;
	FILE* file2 = NULL;
	char str[100] = "";

	file1 = fopen("test4.txt", "rb");
	file2 = fopen("test4_copied.txt", "w+b");
	if (file1 == NULL || file2 == NULL) {
		printf("파일 불러오기 실패");
		return;
	}

	while (!feof(file1)) {
		memset(str, 0, sizeof(str));
		fgets(str, sizeof(str), file1);
		printf("%s", str);
		fputs(str, file2);
	}
	

	fclose(file1);
	fclose(file2);
}
