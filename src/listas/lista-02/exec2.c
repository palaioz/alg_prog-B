/*
2. Escreva um programa que lê um vetor real de 15 elementos. Leia também um número. A seguir,
o programa deve mostrar, sem nenhuma casa decimal, cada elemento do vetor multiplicado pelo
número lido, em uma função chamada cálculo
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

float multVec(float v[], float k){
	for (int i = 0; i < TAM; i++) {
		v[i] = v[i] * k;
	}

	return v[TAM];
}

int main(){
	srand(time(NULL));

	float vector[TAM];
	for (int i = 0; i < TAM; i++){
		vector[i] = rand() % 20;
	}
	float num;

	for (int i = 0; i < TAM; i++){
		printf("\n[%d] = %.0f", i, vector[i]);
	}

	printf("\nNum: ");
	scanf("%f", &num);

	multVec(vector, num);

	printf("Resultado:");
	for (int i = 0; i < TAM; i++){
		printf("\t%.0f", vector[i]);
	}
	return 0;
}