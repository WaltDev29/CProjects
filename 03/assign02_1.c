#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findIndex(char arr[], int size, char target);

void main() {
	char str[10];
	printf("문자열을 입력 ==> ");
	scanf("%s", str);

	for (int i = findIndex(str, sizeof(str), '\0')-1; i >= 0; i--) {
		printf("%c", str[i]);
	}
}

int findIndex(char arr[], int size, char target) {
	for (int i = 0; i < size / sizeof(arr[0]); i++) {
		if (arr[i] == target) return i;
	}
	return -1;
}