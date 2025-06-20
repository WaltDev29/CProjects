#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int* a = (int*)malloc(5 * sizeof(int));     // �ʱ�ȭ �� ��
    int* b = (int*)calloc(5, sizeof(int));      // 0���� �ʱ�ȭ
    int i;

    printf("malloc���� �Ҵ�� �޸�:\n");
    for (i = 0; i < 5; i++) printf("%d ", a[i]);  // �����Ⱚ

    printf("\ncalloc���� �Ҵ�� �޸�:\n");
    for (i = 0; i < 5; i++) printf("%d ", b[i]);  // 0 0 0 0 0

    memset(a, 0, 5 * sizeof(int));  // a�� 0���� �ʱ�ȭ

    printf("\nmemset ���� a �迭:\n");
    for (i = 0; i < 5; i++) printf("%d ", a[i]);

    free(a);
    free(b);
    return 0;
}