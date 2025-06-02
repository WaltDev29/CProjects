#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getNumber(int lotto[], int size);
int checkLotto(int lotto[], int size);
// 45개 중 6개 숫자
void main() {
	srand(time(NULL));
	int lotto[6];	// 로또 일련 번호
	int size = sizeof(lotto) / sizeof(lotto[0]);
	char c;
	while (1) {
		getNumber(lotto, size);
		if (!checkLotto(lotto, size)) continue;

		for (int i = 0; i < size; i++) {
			printf("\033[0;3%dm%d \033[0m", i+1, lotto[i]);
		}
		printf("\n");
		c = getchar();
		if (c == 'q') break;
	}
	printf("\n프로그램을 종료합니다.");
}

int getNumber(int lotto[], int size) {	
	int num = rand() % 45 + 1;	// 로또 추첨 번호
	lotto[0] = num;
	for (int i = 1; i < size; i++) {
		num = rand() % 45 + 1;
		if (lotto[i - 1] == num) {
			i--;
			continue;
		}
		else {
			lotto[i] = num;
		}
	}
}
int checkLotto(int lotto[], int size) {
	int size = sizeof(lotto) / sizeof(lotto[0]);

	int numRange[5] = { 0 };	// 자릿수별 숫자 갯수
	int numAver = 0;	// 숫자를 나눈 결과

	int sequence = 0;	// 연속적인 숫자 체크\
	
	int endNum;	// 나머지
	int sameEnd[10] = { 0 };	// 끝자리 같은 숫자 갯수

	int odd = 0;	// 홀
	int even = 0;	// 짝

	int result = 1;		// 체크 결과 0 : false	1 : true
	// 한 번호대에 4개 이상 생성하지 않기
	for (int i = 0; i < size; i++) {
		numAver = lotto[i] / 10;
		switch (numAver) {
		case 0:
			numRange[0]++;
			break;
		case 1:
			numRange[1]++;
			break;
		case 2:
			numRange[2]++;
			break;
		case 3:
			numRange[3]++;
			break;
		case 4:
			numRange[4]++;
			break;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (numRange[i] >= 4) result = 0;
	}

	// 연속 수 4개 이상 생성하지 않기
	for (int i = 0; i < size - 1; i++) {
		if (lotto[i] + 1 == lotto[i + 1]) sequence++;
	}
	if (sequence >= 4) result = 0;
	sequence = 0;
	for (int i = 0; i < size - 1; i++) {
		if (lotto[i] - 1 == lotto[i + 1]) sequence++;
	}
	if (sequence >= 4) result = 0;

	// 같은 끝 수 3개 이상 생성하지 않기
	for (int i = 0; i < size; i++) {
		endNum = lotto[i] % 10;
		sameEnd[endNum]++;
	}
	for (int i = 0; i < 10; i++) {
		if (sameEnd[i] >= 3) result = 0;
	}

	// 2홀 4짝, 4홀 2짝, 3홀 3짝으로 생성하기
	for (int i = 0; i < size; i++) {
		if (lotto[i] % 2 == 0) even++;
		else odd++;
	}
	if (even == 1 || odd == 1) result = 0;

	return result;
}