#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char str[10];
	printf("���ڿ��� �Է� ==> ");
	scanf("%s", str);

	for (int i = strlen(str) - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
}