#include <stdio.h>

void main() {

	// 4-8
	printf("\n4-8\n\n");
	printf("10 & 7 = %d\n", 10 & 7);
	printf("123 & 456 = %d\n", 123 & 456);
	printf("0xFFFF & 0000 = 0x%02X\n", 0xFFFF & 0000);

	// 4-9
	printf("\n4-9\n\n");
	printf("10 | 7 = %d\n", 10 | 7);
	printf("123 | 456 = %d\n", 123 | 456);
	printf("0xFFFF | 0000 = 0x%X\n", 0xFFFF | 0000);

	// 4-10
	printf("\n4-10\n\n");
	printf("10 ^ 7 = %d\n", 10 ^ 7);
	printf("123 ^ 456 = %d\n", 123 ^ 456);
	printf("0xFFFF ^ 0000 = 0x%X\n", 0xFFFF ^ 0000);


	// 4-11
	printf("\n4-11\n\n");
	char a = 'A', b, c;
	char mask = 0x0F;		// mask : 값을 변경할 때 쓰는 값, 영상에서는 필터라 부름

	printf("0x%X & 0x%02X = 0x%02X\n", a, mask, a & mask);
	printf("0x%X | 0x%02X = 0x%X\n", a, mask, a | mask);

	mask = 'a' - 'A';

	b = 'A' ^ mask;
	printf("%c ^ %d = %c\n", a, mask, b);
	a = 'a' ^ mask;
	printf("%c ^ %d = %c\n", b, mask, a);
}