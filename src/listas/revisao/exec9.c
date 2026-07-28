/*
9 – Ler uma matriz A de inteiros com ordem 10x10. Ler, a seguir, 10 valores e verificar se cada valor lido é um
dos elementos da matriz. Se o valor for encontrado na matriz, exibir o valor encontrado e a posição do elemento
na matriz (por exemplo: “O valor X foi encontrado na posição I,J da matriz”). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int A[10][10], searchVec[10];
	int i, j, k;

	srand(time(NULL));


	printf("--- Matriz A (10x10) ---\n");
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			A[i][j] = rand() % 200;
			printf("%3d\t", A[i][j]);
		}
		printf("\n");
	}

	printf("\n--- Leitura dos 10 valores de busca ---\n");	
	for(i = 0; i < 10; i++)
	{
		printf("\nDigite o valor (int) para searchVec[%d]: ", i);
		scanf("%d", &searchVec[i]);
	}

	printf("\n--- Resultados da busca ---\n");
	for(i = 0; i < 10; i++)
	{
		int encontrado = 0;

		for(j = 0; j < 10; j++)
		{
			for(k = 0; k < 10; k++)
			{
				if (searchVec[i] == A[j][k])
				{
					printf("\nO valor %d foi encontrado na posicao [%d, %d] da matriz.", searchVec[i], j, k);
					encontrado = 1;
				}
			}
		}

		if (!encontrado){
			printf("\nO valor %d NAO foi encontrado na matriz.", searchVec[i]);
		}
	}

	return 0;
}