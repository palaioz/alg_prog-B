/*
5 – Faça um algoritmo para ler um número menor que 1000, encontrar e mostrar todos os números ímpares
maiores que o número lido e menores que 1000.
*/

#include <stdio.h>

int main(){
	int num;

	printf("Digite um numero inteiro menor que 1000: ");
	scanf("%d", &num);

	printf("Nuemros impares entre %d e 1000:\n", num);
	for(int i = num; i < 1000; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d  ", i);
		}
	}

	return 0;
}