/*
14 - Desenvolva um programa que lê um vetor de 10 inteiros e preencha uma matriz 10x10 de inteiros da
seguinte forma:
 a primeira linha da matriz corresponde aos elementos do vetor;
 os elementos da 2ª linha da matriz são os elementos da 1ª linha x 2, os elementos da 3ª linha são
os elementos da 2ª linha x 3, os elementos da 4ª linha são os elementos da 3ª linha x 4 e assim
por diante.
Por fim, a matriz deve ser exibida.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int vector[10];
	int matriz[10][10];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		printf("\nDigite o elemento vector[%d]: ", i);
		scanf("%d", &vector[i]);
	}

	system("pause");

    for(i = 0; i < 10; i++)
    {
		for(j = 0; j < 10; j++)
        {
			if (i == 0){
				matriz[i][j] = vector[j];
			} else {
				matriz[i][j] = matriz[i - 1][j] * (i + 1);
			}
        }
        printf("\n");
    }
	
	printf("\t\t\t--- Matriz A (10x10) ---\n");
	for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
			printf("%6d\t\t", matriz[i][j]);
        }
        printf("\n");
    }

	return 0;
}