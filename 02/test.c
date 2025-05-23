#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int BinaryToDemical(int num);

void main() {
    int num = 8;  // 이 값이 2진수일 경우를 고려
    printf("%d", BinaryToDemical(num));
}

int BinaryToDemical(int num) {
    int t = 1;       // 2의 제곱 어쩌구
    int result = 0;  // 10진수로 변환한 결과

    // 이진수에서 10진수로 변환
    for (int i = 31; i >= 0; i--) {  // 32비트까지 고려 (필요한 경우 조정)
        if (num & (1 << i)) {  // i번째 비트가 1이면
            result += t;
        }
        t *= 2;  // 2의 거듭제곱
    }
    return result;
}
