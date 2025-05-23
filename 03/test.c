#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[10], b[10];
    //scanf("%s-%s", a, b); // '-'까지 문자열로 인식하기 때문에 a안에 "000907-1121112" 이게 모두 들어가 버림
    scanf("%6s-%7s", a, b); // 입력받을 수를 제한함 (지정한 것보다 길게 입력할 경우 오류 발생)
    printf("%s%s",a ,b);
    
    //char str[100];
    //scanf("%s", str);
    //str[strcspn(str, "-")] = "";    // strcspn으로 -를 없앰
    //printf("%s\n", str);
    return 0;
}   