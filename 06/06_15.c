#include <stdio.h>

void main() {
	int i;	// 반복문을 위한 변수
	for (i = 0; i <= 127; i++) {
		if (i % 16 == 0) {
			printf("-----------------------\n");
			printf("| 10진수| 16진수| 문자|\n");
			printf("-----------------------\n");
		}
		if ((i >= 0 && i <= 32) || i == 127) {
			printf("| %5d | %5X |     |\n", i, i);
		}
		else {
			printf("| %5d | %5X | %3c |\n", i, i, i);
		}
	}


	//for (i = 0; i < 8; i++) {
	//	printf("--------------------      ");
	//}
	//printf("\n");

	//for (i = 0; i < 8; i++) {
	//	printf("|10진수|16진수|문자|      ");
	//}
	//printf("\n");

	//for (i = 0; i < 8; i++) {
	//	printf("--------------------      ");
	//}
	//printf("\n");

	//for (i = 0; i < 16; i++) {
	//	for (int j = 0; j < 8; j++) {
	//		int code = i + (j * 16);	// 다음 열의 숫자를 증가시킬 단위
	//		if ((code >= 0 && code <= 32) || code == 127) {
	//			printf("|%5d |%5X |    |      ", code, code);
	//		}
	//		else {
	//			printf("|%5d |%5X |%3c |      ", code, code, code);
	//		}
	//	}
	//	printf("\n");
	//}
}