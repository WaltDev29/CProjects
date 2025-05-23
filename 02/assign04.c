#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "binary_converter.h"

void main_4() {
	int num;	// 사용자가 입력한 수
	int i;		// 2진수를 몇 자리 출력할 것인지
	printf("정수를 입력하세요 ==> ");
	scanf("%d", &num);

	printf("10진수 ==> %d\n", num);
	printf("16진수 ==> %X\n", num);
	printf("8진수 ==> %o\n", num);
	printf("2진수 ==> ");
	DemicalToBinary(num);
}
