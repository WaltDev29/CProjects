#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[10], b[10];
    //scanf("%s-%s", a, b); // '-'���� ���ڿ��� �ν��ϱ� ������ a�ȿ� "000907-1121112" �̰� ��� �� ����
    scanf("%6s-%7s", a, b); // �Է¹��� ���� ������ (������ �ͺ��� ��� �Է��� ��� ���� �߻�)
    printf("%s%s",a ,b);
    
    //char str[100];
    //scanf("%s", str);
    //str[strcspn(str, "-")] = "";    // strcspn���� -�� ����
    //printf("%s\n", str);
    return 0;
}   