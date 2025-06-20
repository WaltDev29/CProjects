#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	FILE* file = fopen("test.txt", "w+b");
	char str[100];
	if (file == NULL) {
		printf("파일 불러오기 실패");
		return;
	}
	fprintf(file, "123456");
	rewind(file);
	fscanf(file, "%s", str);

	printf("%s", str);
	fclose(file);
}