#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char month[3];	// ��
	char day[3];	// ����
	int dayNum = 0;	// ������ ù ��¥
	int sumDay = 0; // ������ �� ��
	int monthLimit = 0;
	while (1) {
		// goto 
	FIRST: // �� �Է�
		printf("������ ���� �Է����ּ��� : ");
		scanf("%s", month);
		while (getchar() != '\n');	// ���� ����
		if (strcmp(month, "q") == 0) {
			printf("q�� �Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�.");
			return;
		}
		// ���� ���� ��¥ ��
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
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
			goto FIRST;
		}
		// ���� �Է�
	SECOND : 
		printf("���� ������ �Է����ּ��� : ");
		scanf("%s", day);
		// �Ͽ� ���� ���� ��¥
		if (strcmp(day, "��") == 0) dayNum = 1;
		if (strcmp(day, "ȭ") == 0) dayNum = 2;
		if (strcmp(day, "��") == 0) dayNum = 3;
		if (strcmp(day, "��") == 0) dayNum = 4;
		if (strcmp(day, "��") == 0) dayNum = 5;
		if (strcmp(day, "��") == 0) dayNum = 6;
		if (strcmp(day, "��") == 0) dayNum = 7;
		else if (strcmp(day, "q") == 0) {
			printf("q�� �Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�.");
			return;
		}
		else {
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
			goto SECOND;
		}
		sumDay = 0;
		for (int i = 1; i <= monthLimit; i++) {
			if (i % 7 == dayNum) sumDay += i;
		}
		printf("%s�� %s������ ���� : %d\n", month, day, sumDay);
	}
}