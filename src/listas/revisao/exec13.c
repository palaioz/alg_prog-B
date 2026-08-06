/*
13 – Um vetor de tamanho 100 armazena os dados iniciais de um experimento físico. Estes dados podem ser 0,
1 ou 2. Desenvolva um algoritmo que identifique e informe ao usuário a quantidade existente de cada um dos
valores (0, 1 ou 2) no vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(){
	srand(time(NULL));

	int vector[SIZE];
	int value_0 = 0, value_1 = 0, value_2 = 0;

	for (int i = 0; i < SIZE; i++)
	{
		vector[i] = rand() % 3;
		if (vector[i] == 0){
			value_0++;
		} else if (vector[i] == 1){
			value_1++;
		} else if (vector[i] == 2){
			value_2++;
		} else { 
			printf("ERROR: Invalid number generated."); 
			return -1;
		}
	}

	printf("Resultados: \n|");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d |", vector[i]);
	}

	printf(" ... |");

	for (int i = SIZE - 5; i < SIZE; i++)
	{
		printf(" %d |", vector[i]);
	}

	printf("\n\n=== DADOS ===");
	printf("\nValores 0: %d", value_0);
	printf("\nValores 1: %d", value_1);
	printf("\nValores 2: %d", value_2);
	

	return 0;
}