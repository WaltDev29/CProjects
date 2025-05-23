#include <stdio.h>

void main() {
	char stack[5];
	char cars[5] = { 'A', 'B', 'C', 'D', 'E' };
	int top = 0;

	for (int i = 0; i < 5; i++) {
		if (top >= 5) printf("터널이 꽉 차서 차가 못 들어감.\n");
		else {
			stack[top] = cars[i];
			printf("%c 자동차가 터널에 들어감.\n", stack[top]);
			top++;
		}
	}
	printf("\n");
	for (int i=5; i >0; i--) {
		if (top <= 0) printf("현재 터널에 자동차가 없음");
		else {
			top--;
			printf("%c 자동차가 터널을 빠져나감\n", stack[top]);
			stack[top] = ' ';
		}
	}
}