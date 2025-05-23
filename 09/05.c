#include <stdio.h>

void main() {
	int aa[3] = { 10, 20, 30 };

	for (int i = 0; i < 3; i++) {
		// printf("aa[%d]의 값은 %d, 주소는 %d\n", i, *aa+i, aa+i);
		printf("&aa[%d]는 %p, aa + %d는 %p\n", i, &aa[i], i, aa + i);
	}
	printf("배열 이름 aa의 값(=주소)는 %p\n", aa);
}