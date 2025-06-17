#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	FILE* file = NULL;	

	file = fopen("test5.txt", "w+b");
	if (file == NULL) {
		printf("파일 불러오기 실패");
		return;
	}

	for (int i = 1; i <= 9; i++) {
		fprintf(file, "%d단\n", i);
		printf("%d단\n", i);
		for (int j = 1; j <= 9; j++) {
			fprintf(file, "%d × %d = %d\n", i, j, i * j);
			printf("%d × %d = %d\n", i, j, i * j);
		}
		fprintf(file, "\n");
		printf("\n");
	}

	fclose(file);
}
