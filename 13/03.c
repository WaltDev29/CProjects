#include <stdio.h>

typedef union {
	int tot;
	char grade;
}student;

int main() {

	student s;
	s.tot = 300;
	s.grade = 'A';

	printf("union student의 바이트 크기 : %d\n", sizeof(s));
	printf("총점 : %d\n", s.tot);
	printf("등급 : %c\n", s.grade);

	return 0;
}

// 65  = 0000 0000 0100 0001
// 300 = 0000 0001 0010 1100
// 321 = 0000 0001 0100 0001