#include <stdio.h>

void main() {
	int gugu[9][9];
	int i, k;
	
	for (i = 0; i < 9; i++) {
		for (k = 8; k >= 0; k--) {
			gugu[i][k] = (i + 1) * (k+1);
		}
	}
	
	for (i = 0; i < 9; i++) {
		for (k = 8; k >= 0; k--) {
			printf("| %d X %d = %2d | ", k+1, i + 1, gugu[i][k]);
		}
		printf("\n");
	}
}