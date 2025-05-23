#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char month[3];	// 월
	char day[3];	// 요일
	int dayNum = 0;	// 요일의 첫 날짜
	int sumDay = 0; // 요일의 총 합
	int monthLimit = 0;
	while (1) {
		// goto 
	FIRST: // 월 입력
		printf("선택할 월을 입력해주세요 : ");
		scanf("%s", month);
		while (getchar() != '\n');	// 버퍼 제거
		if (strcmp(month, "q") == 0) {
			printf("q를 입력하셨습니다. 프로그램을 종료합니다.");
			return;
		}
		// 월에 따른 날짜 수
		switch (atoi(month))
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			monthLimit = 31;
			break;
		case 2: 
			monthLimit = 30;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			monthLimit = 30;
			break;
		default:
			printf("잘못된 값을 입력했습니다.\n");
			goto FIRST;
		}
		// 요일 입력
	SECOND : 
		printf("더할 요일을 입력해주세요 : ");
		scanf("%s", day);
		// 일에 따른 요일 날짜
		if (strcmp(day, "월") == 0) dayNum = 1;
		if (strcmp(day, "화") == 0) dayNum = 2;
		if (strcmp(day, "수") == 0) dayNum = 3;
		if (strcmp(day, "목") == 0) dayNum = 4;
		if (strcmp(day, "금") == 0) dayNum = 5;
		if (strcmp(day, "토") == 0) dayNum = 6;
		if (strcmp(day, "일") == 0) dayNum = 7;
		else if (strcmp(day, "q") == 0) {
			printf("q를 입력하셨습니다. 프로그램을 종료합니다.");
			return;
		}
		else {
			printf("잘못된 값을 입력했습니다.\n");
			goto SECOND;
		}
		sumDay = 0;
		for (int i = 1; i <= monthLimit; i++) {
			if (i % 7 == dayNum) sumDay += i;
		}
		printf("%s월 %s요일의 총합 : %d\n", month, day, sumDay);
	}
}