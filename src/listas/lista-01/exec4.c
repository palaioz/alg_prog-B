/*
4. Escreva um programa que leia um vetor de produtos, com 50 elementos, sendo cada elemento
uma estrutura que contém o nome do produto, seu preço de compra e seu preço de venda.
Depois de lido o vetor, retorne o nome e o índice do produto de menor preço de compra.
*/

#include <stdio.h>
#include <string

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
		printf("\nDigite o nome do produto %d: ", i);
		fgets(P[i].nome, sizeof(P[i].nome), stdin);
		P[i].nome[strcspn(P[i].nome, "\n")] = '\0';

		printf("\nDigite o preco de compra: ");
		scanf("%f", &P[i].preco_compra);

		printf("\nDigite o preco de venda: ");
		scanf("%f", P[i].preco_venda);
	}

	return 0;
}
