/*
	4. Escreva um programa que leia um vetor com 30 elementos inteiros e escreva funções para fazer
	o que se pede:
		a. Exibir os elementos do vetor na ordem inversa
		b. Decompor em dois outros vetores, um contendo os elementos de índice ímpar e
		outro com os elementos de ordem par
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30

// --- FUNÇÕES ---

void show_int_vector(int vec[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", vec[i]);
	}
	printf("\n");
	return;
}

void inverse_vector(int vec[], int size){
	printf("\nVetor na ordem inversa:\n");
	
	for (int i = size - 1; i >= 0; i--){
		printf("%d ", vec[i]);
	}
	
	printf("\n");

	return;
}

void split_vec(int vec[], int size){
	int size_even = (size + 1) / 2;
	int size_odd = size / 2;

	int vec_even[size_even];
	int vec_odd[size_odd];

	int idx_e = 0, idx_o = 0;

	for (int i = 0; i < size; i++){
		if (i % 2 == 0){
			vec_even[idx_e] = vec[i];
			idx_e++;
		} else {
			vec_odd[idx_o] = vec[i];
			idx_o++;
		}
	}

	printf("\nVetor com elementos de indice par (indices 0, 2, 4...):\n");
	show_int_vector(vec_even, idx_e);
	
	printf("\nVetor com elementos de indice impar (indices 1, 3, 5...):\n");
	show_int_vector(vec_odd, idx_o);

	return;
}

int main(){
	srand(time(NULL));

	int V[TAM];

	for (int i = 0; i < TAM; i++){
		V[i] = rand() % 99 + 1;
	}

	printf("--- VETOR ORIGINAL ---\n");
	show_int_vector(V, TAM);

	inverse_vector(V, TAM);

	split_vec(V, TAM);
	
	return 0;
}