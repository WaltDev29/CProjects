#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "binary_converter.h"

void main_4() {
	int num;	// ����ڰ� �Է��� ��
	int i;		// 2������ �� �ڸ� ����� ������
	printf("������ �Է��ϼ��� ==> ");
	scanf("%d", &num);

	printf("10���� ==> %d\n", num);
	printf("16���� ==> %X\n", num);
	printf("8���� ==> %o\n", num);
	printf("2���� ==> ");
	DemicalToBinary(num);
}
