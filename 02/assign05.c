#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "demical_converter.h"
#include "binary_converter.h"

void main() {
	int num;	// 변환할 수
	int way;	// 변환 방식 결정
	printf("입력진수 결정 <1>10 <2>16 <3>8 <4> : ");
	scanf("%d", &way);
	
	printf("값 입력 : ");
	if (way == 1) {
		scanf("%d", &num);
	}
	else if (way == 2) {
		scanf("%X", &num);
	}
	else if (way == 3) {
		scanf("%o", &num);
	}
	else {
		scanf("%d", &num);
		num = BinaryToDemical(num);
	}

	printf("10진수 ==> %d\n", num);
	printf("16진수 ==> %X\n", num);
	printf("8진수 ==> %o\n", num);

	printf("2진수 ==> ");
	DemicalToBinary(num);
}