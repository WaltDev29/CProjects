#include <stdio.h>

void main() {
	for (int i = 2; i <= 9; i++) {
		printf("%d´Ü          ", i);
	}
	printf("\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d X %d = %2d   ", j, i, j * i);
		}
		printf("\n");
	}
}