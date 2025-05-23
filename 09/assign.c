#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int* p1, int* p2);
void selectionSort(int* p, int size);
void insertionSort(int* p, int size);
void bubbleSort(int* p, int size);
void quickSort(int* p, int start, int end);

void main() {
	int arr[20];
	srand(time(NULL));
	int size = sizeof(arr) / sizeof(arr[0]);	
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % size) + 1;
	}

	int* p = arr;

	printf("정렬 전 배열 : ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");

	//selectionSort(p, size);
	//insertionSort(p, size);
	//bubbleSort(p, size);
	//quickSort(p, 0, size);

	printf("정렬 후 배열 : ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

// swap 함수
void swap(int* p1, int* p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// 선택 정렬
// 1. index 0부터 시작
// 2. 자신 뒤의 요소들을 차례로 순회
// 3. 자신보다 작은 수를 만나면 그 수와 자리를 바꿈
// 4. 마지막 index까지 마저 순회
// 5. index++
// 6. (배열의 길이 - 1)번만큼 2~5번 반복
void selectionSort(int* p, int size) {	
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(p + i) > *(p + j)) {
				swap(p + i, p + j);
			}
		}
	}
}

// 삽입 정렬
// 1. index 1부터 시작
// 2. 자신의 앞 요소들을 index 0부터 순회
// 3. 자신보다 큰 숫자를 만나면 그 숫자부터 뒤의 요소들의 index를 한 칸씩 밈
// 4. 그 숫자가 있던 자리에 자신을 대입
// 5. index++
// 6. (배열의 길이 -1)번만큼 2~5번 반복
void insertionSort(int* p, int size) {
	int tmp;
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (*(p + i) < *(p + j)) {
				tmp = *(p + i);
				for (int k = i; k >= j; k--) {
					*(p + k) = *(p + k - 1);
				}
				*(p + j) = tmp;
				break;
			}			
		}
	}
}

// 버블 정렬
// 1. index 0부터 시작
// 2. 자신 바로 뒤의 숫자와 비교
// 3. 자신보다 작으면 자신과 자리를 교환
// 4. 다음 index로 넘어가 (마지막 index - i - 1)에 도달할 때까지 2~3번을 반복
// 5. index++
// 6. (마지막 index - 1)에 도달할 때까지 2~5번을 반복
void bubbleSort(int* p, int size) {	
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (*(p + j) > *(p + j + 1)) {
				swap(p + j, p + j + 1);
			}
		}
	}
}

// 퀵 정렬
// 1. index 0을 기준으로 잡음
// 2. 기준보다 낮은 수는 왼쪽, 높은 수는 오른쪽으로 정렬
// 3. 나누어진 그룹에 1~2를 재귀적으로 반복
// 4. 각 그룹에 속한 수들이 1개 이하일 경우 중단
void quickSort(int* p, int start, int end) {
	if (end - start <= 1) return;	
	int index = start;
	for (int i = index; i < end-1; i++) {
		if (*(p + i) < *(p + end-1)) {
			swap((p + index), (p + i));
			index++;
		}
	}	
	swap((p + index), (p + end-1));
	quickSort(p, start, index);
	quickSort(p, index+1, end);	
}