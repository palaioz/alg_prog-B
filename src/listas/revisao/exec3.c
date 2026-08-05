/*
3 - Escrever um algoritmo para ler quatro valores inteiros, calcular a sua média, e escrever na tela os que são
superiores à média.
*/

#include <stdio.h>

int main(){
	int numeros[4];
	float media = 0;

	printf("Digite 4 valores inteiros (a b c d): ");
	scanf("%d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3]);

	media = (numeros[0] + numeros[1] + numeros[2] + numeros[3]) / 4;

	printf("Media: %.2f\n", media);
	printf("Numeros acima da media: ");
	for (int i = 0; i < 4; i++)
	{
		if (numeros[i] > media)
		{
			printf("%d ", numeros[i]);
		}
	}

	return 0;
}