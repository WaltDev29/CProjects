#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main() {
	char* p[3];
	char imsi[100];
	int size;

	for (int i = 0; i < 3; i++) {
		printf("%d��° ���ڿ� : ", i + 1);
		fgets(imsi, sizeof(imsi), stdin);

		size = strlen(imsi);
		p[i] = (char*)malloc((sizeof(char) * size) + 1);

		strcpy(p[i], imsi);
	}
	
	printf("\n ## �Է°� �ݴ�� ���(������) ##\n");
	for (int i = 2; i >= 0; i--) {
		printf("%d : %s\n", i + 1, p[i]);
	}

	for (int i = 0; i < 3; i++) {
		free(p[i]);
	}

	return 0;
}