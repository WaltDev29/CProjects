#include <stdio.h>

void main() {
	int aa[3] = { 10, 20, 30 };

	for (int i = 0; i < 3; i++) {
		// printf("aa[%d]�� ���� %d, �ּҴ� %d\n", i, *aa+i, aa+i);
		printf("&aa[%d]�� %p, aa + %d�� %p\n", i, &aa[i], i, aa + i);
	}
	printf("�迭 �̸� aa�� ��(=�ּ�)�� %p\n", aa);
}