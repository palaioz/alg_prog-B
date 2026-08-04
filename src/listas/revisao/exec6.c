/*
6 – Faça um algoritmo com dois vetores, um preenchido com valores sequenciais de 0 a 9 e outro com valores
sequenciais de 10 a 19, e intercale-os num terceiro vetor formando uma nova variável. Mostre o vetor obtido. 
*/

#include <stdio.h>

int main(){
	int a[10], b[10];
	int c[20];
	int i, j = 0, k = 0;

	// --- ATRIBUINDO VALORES AO VETOR A E B ---
	for(i = 0; i < 10; i++)
	{
		a[i] = i;
		b[i] = i + 10;
	}

	// --- MOSTRANDO VETORES A E B ---
	printf("Vetor A \tVetor B\n");

	for(i = 0; i < 10; i++)
	{
		printf("%d \t\t%d\n", a[i], b[i]);
	}

	// --- ATRIBUINDO VALORES AO VETOR C ---
	for(i = 0; i < 20; i++)
	{
		if (i % 2 == 0){
			c[i] = a[j];
			j++;
		} else {
			c[i] = b[k];
			k++;
		}
	}

	printf("\n\n");

	// --- MOSTRANDO VETOR C ---
	printf("Vetor C\n");
	for(i = 0; i < 20; i++)
	{
		printf("%d  ", c[i]);
	}

	return 0;
}