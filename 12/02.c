#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int* a = (int*)malloc(5 * sizeof(int));     // 초기화 안 됨
    int* b = (int*)calloc(5, sizeof(int));      // 0으로 초기화
    int i;

    printf("malloc으로 할당된 메모리:\n");
    for (i = 0; i < 5; i++) printf("%d ", a[i]);  // 쓰레기값

    printf("\ncalloc으로 할당된 메모리:\n");
    for (i = 0; i < 5; i++) printf("%d ", b[i]);  // 0 0 0 0 0

    memset(a, 0, 5 * sizeof(int));  // a도 0으로 초기화

    printf("\nmemset 이후 a 배열:\n");
    for (i = 0; i < 5; i++) printf("%d ", a[i]);

    free(a);
    free(b);
    return 0;
}