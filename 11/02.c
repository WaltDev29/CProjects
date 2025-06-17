#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	FILE* file = NULL;
	int in = 0;
	int hap = 0;

	file = fopen("test2.txt", "rb");
	if (file == NULL) {
		printf("파일 불러오기 실패");
		return;
	}
	while (!feof(file)) {
		fscanf(file, "%d", &in);
		hap += in;
		
	}	
	printf("%d", hap);
	fclose(file);

}