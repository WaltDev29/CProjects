#include <stdio.h>

void main() {
	int hap;
	int i;

	for (i = 1; i <= 10; i++) {
		hap = hap + i;
	}

	printf("1에서 10까지의 합 : %d\n", hap);
}