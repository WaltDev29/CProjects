#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int money;

	printf("## 교환할 돈은? ");
	scanf("%d", &money);

	printf("오백원짜리 ==> %d개\n", money / 500);
	money %= 500;

	printf("백원짜리 ==> %d개\n", money / 100);
	money %= 100;

	printf("오십원짜리 ==> %d개\n", money / 50);
	money %= 50;

	printf("십원짜리 ==> %d개\n", money / 10);
	money %= 10;

	printf("바꾸지 못한 잔돈 ==> %d원\n", money);
}