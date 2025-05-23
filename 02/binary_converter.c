#include <stdio.h>
#include "binary_converter.h"

void DemicalToBinary(int num) {
	int i;	// 2진수를 몇 자리 수로 출력할 것인지
	if (num < 16) i = 3;
	else if (num < 256) i = 7;
	else if (num < 4095) i = 11;
	else i = 15;
	for (; i >= 0; i--) {
		printf("%d", (num >> i) & 1);
		if (i % 4 == 0) printf(" ");
	}
}