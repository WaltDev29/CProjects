#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	FILE* file;
	char str[100];
	char input[100] = "Hello World\n";
	file = fopen("C:/Windows/win.ini", "rb");	

	if (file == NULL) {
		printf("파일 불러오기 실패");
		return;
	}
	while (!feof(file)) {
		fgets(str, sizeof(str), file);
		printf("%s", str);
	}	
	fprintf(file, "%s", input);
	fclose(file);
}