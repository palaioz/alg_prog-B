/*
4. Escreva um programa que leia um vetor de produtos, com 50 elementos, sendo cada elemento
uma estrutura que contém o nome do produto, seu preço de compra e seu preço de venda.
Depois de lido o vetor, retorne o nome e o índice do produto de menor preço de compra.
*/

#include <stdio.h>
#include <string.h>

#define QTD_PRODUTOS 3

struct produtos {
	char nome[100];
	float preco_compra;
	float preco_venda;	
};

int main(){
	struct produtos P[QTD_PRODUTOS];
	int i;

	for(i = 0; i < QTD_PRODUTOS; i++){
		if (i > 0){
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
		}

		printf("\nDigite o nome do produto %d: ", i);
		fgets(P[i].nome, sizeof(P[i].nome), stdin);
		P[i].nome[strcspn(P[i].nome, "\n")] = '\0';

		printf("\nDigite o preco de compra: ");
		scanf("%f", &P[i].preco_compra);

		printf("\nDigite o preco de venda: ");
		scanf("%f", &P[i].preco_venda);
	}

	int index_mvc = 0;
	float menor_valor_compra = P[0].preco_compra;
	char nome_mvc[100]; 
	snprintf(nome_mvc, sizeof(nome_mvc), "%s", P[0].nome);

	for(i = 1; i < QTD_PRODUTOS; i++){
		if (P[i].preco_compra < menor_valor_compra){
			index_mvc = i;
			menor_valor_compra = P[i].preco_compra;
			snprintf(nome_mvc, sizeof(nome_mvc), P[i].nome);
		} else {
			continue;
		}
	}

	printf("\nProduto com menor valor de compra: ");
	printf("[%d] %s: R$%.2f", index_mvc, nome_mvc, menor_valor_compra);

	return 0;
}
