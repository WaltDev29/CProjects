#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char str[10] = "";
	printf("���ڿ��� �Է� ==> ");
	scanf("%s", str);

	for (int i = sizeof(str) - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}

}