/*
8 – Elabore um algoritmo que dados dois vetores inteiros de 20 posições, efetue as respectivas operações
matemáticas indicadas em um terceiro vetor de 20 posições de caracteres. Armazene o resultado de cada
operação em outro vetor de 20 inteiros. Utilize as quatro operações aritméticas (+, -, *, /). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main(){
	srand(time(NULL));
	float vector1[TAM], vector2[TAM];
	int user_input;

	for (int i = 0; i < TAM; i++)
	{
		vector1[i] = rand()%50;
		vector2[i] = rand()%50;
	}

	while(1){
		float vector_result[TAM];

		system("cls");

		printf("\n\n=== OPERACOES COM OS VETORES ===\n");
		
		printf("Vetor 1:  ");
		for (int i = 0; i < TAM; i++)
		{
			printf("%.0f  ", vector1[i]);
		}

		printf("\nVetor 2:  ");
		for (int i = 0; i < TAM; i++)
		{
			printf("%.0f  ", vector2[i]);
		}

		printf("\n\nSelecione uma opcao:\n");
		printf("1 - Soma\n");
		printf("2 - Subtracao\n");
		printf("3 - Produto\n");
		printf("4 - Divisao\n");
		printf("0 - SAIR\n\n");
		printf("Opcao: ");
		scanf("%d", &user_input);

		switch (user_input)
		{
		case 1:
			for (int i = 0; i < TAM; i++)
			{
				vector_result[i] = vector1[i] + vector2[i];
			}
			
			printf("\nVetor resultante: ");

			for (int i = 0; i < TAM; i++)
			{
				printf("%.0f  ", vector_result[i]);
			}

			printf("\n");
			system("pause");

			break;
		
		case 2:
			for (int i = 0; i < TAM; i++)
			{
				vector_result[i] = vector1[i] - vector2[i];
			}
			
			printf("\nVetor resultante: ");

			for (int i = 0; i < TAM; i++)
			{
				printf("%.0f  ", vector_result[i]);
			}

			printf("\n");
			system("pause");

			break; 

		case 3:
			for (int i = 0; i < TAM; i++)
			{
				vector_result[i] = vector1[i] * vector2[i];
			}
			
			printf("\nVetor resultante: ");

			for (int i = 0; i < TAM; i++)
			{
				printf("%.0f  ", vector_result[i]);
			}

			printf("\n");
			system("pause");

			break;
			
		case 4:
			for (int i = 0; i < TAM; i++)
			{
				vector_result[i] = vector1[i] / vector2[i];
			}
			
			printf("\nVetor resultante: ");

			for (int i = 0; i < TAM; i++)
			{
				printf("%.2f  ", vector_result[i]);
			}

			printf("\n");
			system("pause");

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