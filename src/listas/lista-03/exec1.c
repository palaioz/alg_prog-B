/*
1. Desenvolver um programa que leia os elementos da 1ª linha de uma matriz 6x6 de inteiros e a
partir desses elementos calcule e mostre (em uma função) os outros elementos da matriz. Sabese que os elementos da 2ª linha são os elementos da 1ª linha x 2, os elementos da 3ª linha são os
elementos da 1ª linha x 3 e assim por diante.
*/

#include <stdio.h>

#define TAM 6

int m[TAM][TAM];

void exibirMatriz(){
	int i, j;

	printf("\nMATRIZ\n");
	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < TAM; j++)
		{
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}

void montarMatriz(){
	int i, j;

	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < TAM; j++)
		{
			m[i][j] = m[0][j] * (i + 1);
		}
	}
}

int main(){
	int i, j;

	printf("Digite a 1a linha da matriz.\n");
	for(j = 0; j < TAM; j++)
	{
		printf("m[0][%d]: ", j);
		scanf("%d", &m[0][j]);
	}
	montarMatriz();
	exibirMatriz();

	return 0;
}