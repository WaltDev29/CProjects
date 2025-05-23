#include <stdio.h>

void main() {
	int aa[3] = { 10, 20, 30 };

	for (int i = 0; i < 3; i++) {
		printf("aa[%d]의 값은 %d, 주소는 %d\n", i, aa[i], &aa[i]);
	}
	printf("배열 이름 aa의 값(=주소)는 %d\n", aa);
}