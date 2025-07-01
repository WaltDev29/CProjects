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

	if (ww == SUN) printf("오늘은 일요일입니다.");
	else printf("오늘은 일요일이 아닙니다.");
}