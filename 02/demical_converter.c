#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "demical_converter.h"

int BinaryToDemical(int num) {
	char str[100];
	int t = 1;		// 2�� ������ ���� ����
	int result = 0;		// 10������ ��ȯ�� ���

	sprintf(str, "%d", num);
	for (int i = 15; i >= 0; i--) {
		if (str[i] != '0' && str[i] != '1') continue;
		if (str[i] == '1') result += t;
		t *= 2;
	}
	return result;
}