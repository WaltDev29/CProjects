#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getNumber(int lotto[], int size);
int checkLotto(int lotto[], int size);
// 45�� �� 6�� ����
void main() {
	srand(time(NULL));
	int lotto[6];	// �ζ� �Ϸ� ��ȣ
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
	printf("\n���α׷��� �����մϴ�.");
}

int getNumber(int lotto[], int size) {	
	int num = rand() % 45 + 1;	// �ζ� ��÷ ��ȣ
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

	int numRange[5] = { 0 };	// �ڸ����� ���� ����
	int numAver = 0;	// ���ڸ� ���� ���

	int sequence = 0;	// �������� ���� üũ\
	
	int endNum;	// ������
	int sameEnd[10] = { 0 };	// ���ڸ� ���� ���� ����

	int odd = 0;	// Ȧ
	int even = 0;	// ¦

	int result = 1;		// üũ ��� 0 : false	1 : true
	// �� ��ȣ�뿡 4�� �̻� �������� �ʱ�
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

	// ���� �� 4�� �̻� �������� �ʱ�
	for (int i = 0; i < size - 1; i++) {
		if (lotto[i] + 1 == lotto[i + 1]) sequence++;
	}
	if (sequence >= 4) result = 0;
	sequence = 0;
	for (int i = 0; i < size - 1; i++) {
		if (lotto[i] - 1 == lotto[i + 1]) sequence++;
	}
	if (sequence >= 4) result = 0;

	// ���� �� �� 3�� �̻� �������� �ʱ�
	for (int i = 0; i < size; i++) {
		endNum = lotto[i] % 10;
		sameEnd[endNum]++;
	}
	for (int i = 0; i < 10; i++) {
		if (sameEnd[i] >= 3) result = 0;
	}

	// 2Ȧ 4¦, 4Ȧ 2¦, 3Ȧ 3¦���� �����ϱ�
	for (int i = 0; i < size; i++) {
		if (lotto[i] % 2 == 0) even++;
		else odd++;
	}
	if (even == 1 || odd == 1) result = 0;

	return result;
}