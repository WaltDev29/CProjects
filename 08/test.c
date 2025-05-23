#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char str1[10] = "123";
	char str2[] = "abc";
	strcat(str1, str2);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
	for (int i = 0; i < sizeof(str1) / sizeof(str1[0]); i++) {
		printf("str1[%d] : %c\n", i, str1[i]);
	}	
}