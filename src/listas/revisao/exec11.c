/*
11 – Ler uma palavra com no máximo 20 caracteres. Se a palavra tiver um número par de caracteres então
escrevê-la na ordem inversa, senão contar o número de vogais da palavra.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	char palavra[150];
	int counter = 0, vowels = 0;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);

	for (int i = 0; palavra[i] != '\0'; i++){
		if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U' || palavra[i] == 'a' || palavra[i] == 'e'|| palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
		{
			vowels++;
		}
		counter++;
	}

	if (counter % 2 == 0)
	{
		printf("Palavra inversa: ");
		
		char inverse[150];	
		int j = 0;

		for (int i = counter - 1; i >= 0; i--)
		{
			inverse[j] = palavra[i];
			j++;
		}
		
		inverse[j] = '\0';
		
		printf("%s\n", inverse);
		
	} else {
		if (vowels == 0){
			printf("A palavra nao tem vogais.");
		} else if (vowels == 1){
			printf("A palavra tem 1 vogal.");
		} else {
			printf("A palavra tem %d vogais.", vowels);
		}
	}

	return 0;
} 