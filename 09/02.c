#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char stack[5];
	int top = 0;
	char carName = 'A';
	int select = 0;

	while (1) {
		printf("\n<1> �ڵ��� �ֱ� <2> �ڵ��� ���� <3> �� : ");
		scanf("%d", &select);

		switch (select) {
		case 1 :
			if (top >= 5) printf("�ͳ��� �� ���� ���� �� ��\n");
			else {
				stack[top] = carName++;
				printf("%c �ڵ����� �ͳο� ��\n", stack[top]);
				top++;
			}
			break;
		case 2 :
			if (top <= 0) printf("�ͳ��� �������.\n");
			else {
				top--;
				printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
				stack[top] = ' ';
				carName--;
			}
			break;
		case 3: 
			printf("���� �ͳο� ���� %d�� ����\n", top);
			printf("���α׷��� �����մϴ�.\n");
			break;			
		default : 
			printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n");
		}
	}
}