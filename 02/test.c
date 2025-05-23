#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int BinaryToDemical(int num);

void main() {
    int num = 8;  // �� ���� 2������ ��츦 ���
    printf("%d", BinaryToDemical(num));
}

int BinaryToDemical(int num) {
    int t = 1;       // 2�� ���� ��¼��
    int result = 0;  // 10������ ��ȯ�� ���

    // ���������� 10������ ��ȯ
    for (int i = 31; i >= 0; i--) {  // 32��Ʈ���� ��� (�ʿ��� ��� ����)
        if (num & (1 << i)) {  // i��° ��Ʈ�� 1�̸�
            result += t;
        }
        t *= 2;  // 2�� �ŵ�����
    }
    return result;
}
