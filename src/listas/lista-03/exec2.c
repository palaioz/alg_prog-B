/*
2. Escreva um programa que leia uma matriz de inteiros com ordem 10x10 e por meio de funções
faça o que se pede:
a. Exiba o menor elemento da matriz
b. Encontre e exiba o maior elemento de cada uma das linhas da matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void show_int_matrix(int M[TAM][TAM]){
	int i, j;

	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}

	return;
}

int min_int_matrix(int M[TAM][TAM]){
	int min = M[0][0];
	int i, j;

	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if (M[i][j] < min){
				min = M[i][j];
			}
		}
	}

	return min;
}

int max_lineint_matrix(int M[TAM][TAM], int line){
	int j;
	int max_value = M[line][0];

	for(j = 0; j < TAM; j++){
		if(M[line][j] > max_value){
			max_value = M[line][j];
		}
	}

	return max_value;
}

int main(){
	srand(time(NULL));

	int i, j;
	int Matriz[TAM][TAM];
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			Matriz[i][j] = rand()%10;
		}
	}
	
	show_int_matrix(Matriz);
	
	int menor_num = min_int_matrix(Matriz);
	printf("\nMenor numero da matriz: %d", menor_num);

	int maior_l0 = max_lineint_matrix(Matriz, 0);
	int maior_l1 = max_lineint_matrix(Matriz, 1);
	int maior_l2 = max_lineint_matrix(Matriz, 2);

	printf("\nMaior elemento por linha:");
	printf("\nLinha [0]: %d", maior_l0);
	printf("\nLinha [1]: %d", maior_l1);
	printf("\nLinha [2]: %d", maior_l2);

	return 0;
}
