#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define NAME_SIZE 30
#define SYMBOL_SIZE 10
#define EXCHANGE_SIZE 30

typedef struct _cryptocurrency {
	char name[30];	// ��ȣȭ�� �̸�
	char symbol[10]; // ��ȣȭ�� �ɺ�
	char exchange[30]; // �ŷ��� �̸�
	double priceUSD; // ���� ����
} cryptocurrency;

int main() {
	int size;
	printf("������ ��ȣȭ�� ���� �Է� : ");
	scanf("%d", &size);
	while (getchar() != '\n');

	cryptocurrency* c = (cryptocurrency*)malloc(sizeof(cryptocurrency) * size);
	if (c == NULL) {
		printf("�޸� �Ҵ� ����");
		free(c);
		return 1;
	}
	
	char* pName;
	char* pSym;
	char* pExchange;
	double* pPriceUSD;
	
	for (int i = 0; i < size; i++) {
		pName = c[i].name;
		pSym = c[i].symbol;
		pExchange = c[i].exchange;
		pPriceUSD = (&c[i].priceUSD);

		printf("��ȣȭ�� #%d ����\n", i + 1);
		printf("�̸� : ");
		fgets(pName, NAME_SIZE, stdin);
		//scanf("%s", c[i].name);

		printf("�ɺ� : ");
		fgets(pSym, SYMBOL_SIZE, stdin);
		//scanf("%s", c[i].symbol);
		//while (getchar() != '\n');

		printf("�ŷ��� : ");
		fgets(pExchange, EXCHANGE_SIZE, stdin);
		//scanf("%s", c[i].exchange);
		//while (getchar() != '\n');

		printf("���� :  ");		
		scanf("%lf", pPriceUSD);
		while (getchar() != '\n');
		printf("\n");
	}

	printf("### �Էµ� ��ȣ ȭ�� ���� ###\n\n");
	for (int i = 0; i < size; i++) {
		printf("��ȣȭ�� #%d\n\n", i + 1);
		printf("�̸� : %s", c[i].name);
		printf("�ɺ� : %s", c[i].symbol);
		printf("�ŷ��� : %s", c[i].exchange);		
		printf("���� : $%.2lf", c[i].priceUSD);
		printf("\n\n------------------\n\n");
	}

	free(c);
	return 0;
}