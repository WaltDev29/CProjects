#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "demical_converter.h"
#include "binary_converter.h"

void main() {
	int num;	// ��ȯ�� ��
	int way;	// ��ȯ ��� ����
	printf("�Է����� ���� <1>10 <2>16 <3>8 <4> : ");
	scanf("%d", &way);
	
	printf("�� �Է� : ");
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

	printf("10���� ==> %d\n", num);
	printf("16���� ==> %X\n", num);
	printf("8���� ==> %o\n", num);

	printf("2���� ==> ");
	DemicalToBinary(num);
}