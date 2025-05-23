#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char str[10];
	printf("문자열을 입력 ==> ");
	scanf("%s", str);

	for (int i = strlen(str) - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
}