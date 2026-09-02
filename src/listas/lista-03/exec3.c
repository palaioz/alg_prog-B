/*
3. Na teoria dos Sistemas, define-se como elemento minimax de uma matriz, o menor elemento da
linha em que se encontra o maior elemento da matriz. Escreva um programa que lê (ou gera)
uma matriz [10 X 10] e em uma função encontre e mostre o elemento minimax e sua posição na
matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

// --- DECLARAÇÃO DE FUNÇÕES ---

void show_float_matrix(float M[TAM][TAM]){
	int i, j;

	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%.0f\t", M[i][j]);
		}
		printf("\n");
	}

	return;
}

float max_float_matrix(float M[TAM][TAM]){
	int i, j;
	float max_value = M[0][0];

	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(M[i][j] > max_value){
				max_value = M[i][j];
			}
		}
	}

	return max_value;
}

float minimax(float M[TAM][TAM], float max_value){
	int i, j;
	int max_i = 0, max_j = 0;

	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(M[i][j] == max_value){
				max_i = i;
				max_j = j;
				break;
			}
		}
	}

	for()
	return minimax;
}

// --- MAIN ---

int main(){
	srand(time(NULL));

	int i, j;
	float Matriz[TAM][TAM];

	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			Matriz[i][j] = rand()%10;
		}
	}

	float max_value = max_float_matrix(Matriz);
	printf("Hello World");
	return 0;
}
