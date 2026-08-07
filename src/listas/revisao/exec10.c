/*
10 - Faça um programa que gere uma matriz 4x4 com seus valores, calcule e mostre:
 A soma dos elementos da primeira coluna
 O produto dos elementos da primeira linha
 A soma da diagonal principal
 A soma de todos os elementos da matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

int main(){
	srand(time(NULL));

	int matriz[TAM][TAM];
	int somaMatriz = 0, somaDiagonal = 0; 
	int produtoPrimeiraLinha = 1, somaPrimeiraColuna = 0;

	for(int i = 0; i < TAM; i++)
	{
		for(int j = 0; j < TAM; j++)
		{
			matriz[i][j] = rand()%20;						// atribuindo valor às células da matriz 
			somaMatriz += matriz[i][j];					// somando cada elemento em somaMatriz
			
			// Cálculos condicionais necessários durante o preenchimento
			if(j == 0){ somaPrimeiraColuna += matriz[i][j]; }		// se o índice da coluna (int j) for 0, então soma o atual elemento em somaPrimeiraColuna
			if(i == j){	somaDiagonal += matriz[i][j]; }				// se os índices da coluna e linha forem iguais, então soma o atual elemento em somaDiagonal
		}	
	}
	
	for(int j = 0; j < TAM; j++){
		produtoPrimeiraLinha *= matriz[0][j];	
	}
	
	
	// --- MOSTRANDO INFORMAÇÕES DA MATRIZ ---
	printf("--- MATRIZ %dx%d ---\n", TAM, TAM);
	for(int i = 0; i < TAM; i++)
	{
		for(int j = 0; j < TAM; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n------------------------------\n");

	printf("Soma de todos os elementos: %d\n", somaMatriz);
	printf("Soma da Diagonal Principal: %d\n", somaDiagonal);
	printf("Produto da Primeira Linha: %d\n", produtoPrimeiraLinha);
	printf("Soma da Primeira Coluna: %d\n", somaPrimeiraColuna);

	return 0;
}