#include <stdio.h>
#include "tryCatch.h"

int tryCatch(int result, int num) {
		while (getchar() != '\n');
	if (result != 1 || (num > 100 || num < 0)) {
		printf("\n0~100�� ������ �Է����ּ���.\n");
		return 1;
	}
	else {		
		return 0;
	}
}