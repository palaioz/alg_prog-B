/*
4 – Faça um programa que leia uma palavra qualquer e depois mostre apenas as vogais.
*/

#include <stdio.h>
#include <string.h>

int main(){
	char palavra[150];
	int contagem = 0;

	printf("Digite uma palavra: ");
	fgets(palavra, 150, stdin);
	
	for (int i = 0; palavra[i] != '\0'; i++){
		if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U' || palavra[i] == 'a' || palavra[i] == 'e'|| palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
		{
			printf("\n%c no indice %d", palavra[i], i);
			contagem++;
		}
	}

	printf("\nQuantidade de vogais: %d", contagem);

	return 0;
}