#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 순서도 작성하기 (플로우 차트)

// 레포트 순서
// 표지
// 목차
// 순서도
// 코드
// 결과

void main() {
	int year;

	printf("연도를 입력하세요 : ");
	scanf("%d", &year);

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else printf("%d년은 윤년이 아닙니다.\n", year);
}