#include <stdio.h>

void main() {
	char stack[5];
	char cars[5] = { 'A', 'B', 'C', 'D', 'E' };
	int top = 0;

	for (int i = 0; i < 5; i++) {
		if (top >= 5) printf("�ͳ��� �� ���� ���� �� ��.\n");
		else {
			stack[top] = cars[i];
			printf("%c �ڵ����� �ͳο� ��.\n", stack[top]);
			top++;
		}
	}
	printf("\n");
	for (int i=5; i >0; i--) {
		if (top <= 0) printf("���� �ͳο� �ڵ����� ����");
		else {
			top--;
			printf("%c �ڵ����� �ͳ��� ��������\n", stack[top]);
			stack[top] = ' ';
		}
	}
}