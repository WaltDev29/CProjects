#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {
	FILE* file = NULL;	

	file = fopen("test5.txt", "w+b");
	if (file == NULL) {
		printf("���� �ҷ����� ����");
		return;
	}

	for (int i = 1; i <= 9; i++) {
		fprintf(file, "%d��\n", i);
		printf("%d��\n", i);
		for (int j = 1; j <= 9; j++) {
			fprintf(file, "%d �� %d = %d\n", i, j, i * j);
			printf("%d �� %d = %d\n", i, j, i * j);
		}
		fprintf(file, "\n");
		printf("\n");
	}

	fclose(file);
}
