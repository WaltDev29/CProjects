#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define NAME_SIZE 30
#define SYMBOL_SIZE 10
#define EXCHANGE_SIZE 30

typedef struct _cryptocurrency {
	char name[30];	// 암호화폐 이름
	char symbol[10]; // 암호화폐 심볼
	char exchange[30]; // 거래소 이름
	double priceUSD; // 현재 가격
} cryptocurrency;

int main() {
	int size;
	printf("관리할 암호화폐 개수 입력 : ");
	scanf("%d", &size);
	while (getchar() != '\n');

	cryptocurrency* c = (cryptocurrency*)malloc(sizeof(cryptocurrency) * size);
	if (c == NULL) {
		printf("메모리 할당 실패");
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

		printf("암호화폐 #%d 정보\n", i + 1);
		printf("이름 : ");
		fgets(pName, NAME_SIZE, stdin);
		//scanf("%s", c[i].name);

		printf("심볼 : ");
		fgets(pSym, SYMBOL_SIZE, stdin);
		//scanf("%s", c[i].symbol);
		//while (getchar() != '\n');

		printf("거래소 : ");
		fgets(pExchange, EXCHANGE_SIZE, stdin);
		//scanf("%s", c[i].exchange);
		//while (getchar() != '\n');

		printf("가격 :  ");		
		scanf("%lf", pPriceUSD);
		while (getchar() != '\n');
		printf("\n");
	}

	printf("### 입력된 암호 화폐 정보 ###\n\n");
	for (int i = 0; i < size; i++) {
		printf("암호화폐 #%d\n\n", i + 1);
		printf("이름 : %s", c[i].name);
		printf("심볼 : %s", c[i].symbol);
		printf("거래소 : %s", c[i].exchange);		
		printf("가격 : $%.2lf", c[i].priceUSD);
		printf("\n\n------------------\n\n");
	}

	free(c);
	return 0;
}