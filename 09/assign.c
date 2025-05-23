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

	printf("���� �� �迭 : ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");

	//selectionSort(p, size);
	//insertionSort(p, size);
	//bubbleSort(p, size);
	//quickSort(p, 0, size);

	printf("���� �� �迭 : ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

// swap �Լ�
void swap(int* p1, int* p2) {
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// ���� ����
// 1. index 0���� ����
// 2. �ڽ� ���� ��ҵ��� ���ʷ� ��ȸ
// 3. �ڽź��� ���� ���� ������ �� ���� �ڸ��� �ٲ�
// 4. ������ index���� ���� ��ȸ
// 5. index++
// 6. (�迭�� ���� - 1)����ŭ 2~5�� �ݺ�
void selectionSort(int* p, int size) {	
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(p + i) > *(p + j)) {
				swap(p + i, p + j);
			}
		}
	}
}

// ���� ����
// 1. index 1���� ����
// 2. �ڽ��� �� ��ҵ��� index 0���� ��ȸ
// 3. �ڽź��� ū ���ڸ� ������ �� ���ں��� ���� ��ҵ��� index�� �� ĭ�� ��
// 4. �� ���ڰ� �ִ� �ڸ��� �ڽ��� ����
// 5. index++
// 6. (�迭�� ���� -1)����ŭ 2~5�� �ݺ�
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

// ���� ����
// 1. index 0���� ����
// 2. �ڽ� �ٷ� ���� ���ڿ� ��
// 3. �ڽź��� ������ �ڽŰ� �ڸ��� ��ȯ
// 4. ���� index�� �Ѿ (������ index - i - 1)�� ������ ������ 2~3���� �ݺ�
// 5. index++
// 6. (������ index - 1)�� ������ ������ 2~5���� �ݺ�
void bubbleSort(int* p, int size) {	
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (*(p + j) > *(p + j + 1)) {
				swap(p + j, p + j + 1);
			}
		}
	}
}

// �� ����
// 1. index 0�� �������� ����
// 2. ���غ��� ���� ���� ����, ���� ���� ���������� ����
// 3. �������� �׷쿡 1~2�� ��������� �ݺ�
// 4. �� �׷쿡 ���� ������ 1�� ������ ��� �ߴ�
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