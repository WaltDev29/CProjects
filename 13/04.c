#include <stdio.h>

typedef enum _week {
	SUN,
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT
}week;

int main() {
	week ww = SUN;

	if (ww == SUN) printf("������ �Ͽ����Դϴ�.");
	else printf("������ �Ͽ����� �ƴմϴ�.");
}