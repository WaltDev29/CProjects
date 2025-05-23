#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char str[100];
	int str_cnt;	// 문자열 길이
	int i;	// 반복문을 위한 

	printf("영문자 및 숫자를 입력 (100자 이하) : ");
	scanf("%s", str);

	printf("\n");
	printf("입력한 문자열 ==> %s\n", str);
	printf("변환된 문자열 ==> ");

	str_cnt = strlen(str);	// 입력받은 문자열의 길이

	for (i = str_cnt; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
}