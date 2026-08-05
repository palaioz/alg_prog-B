/*
7 – Escreva um algoritmo para gerar os valores de um vetor numérico de 50 posições e ler um código numérico
inteiro. Se o código for zero, termine o algoritmo. Se o código for 1, mostre o vetor na ordem em que foi
gerado. Se o código for 2, mostre o vetor na ordem inversa, do último elemento até o primeiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));

	int user_input;
	int vector[50];

	for (int i = 0; i < 50; i++)
	{
		vector[i] = rand();
	}

	while(1){
		printf("\n=== LER VETOR ===\n");
		printf("Selecione uma opcao:\n");
		printf("1 - Exibir na ordem de geracao\n");
		printf("2 - Exibir na ordem inversa\n");
		printf("0 - Sair\n\n");
		printf("Opcao: ");
		scanf("%d", &user_input);

		switch (user_input)
		{
		case 1:
			for (int i = 0; i < 50; i++)
			{
				printf("%d  ", vector[i]);
			}
			break;
		
		case 2:
			for (int i = 49; i > -1; i--)
			{
				printf("%d  ", vector[i]);
			}
			break; 

		case 0:
			return 0;

		default:
			printf("ERRO: Opcao invalida");
			return -1;
		}
	}
	return 0;
}