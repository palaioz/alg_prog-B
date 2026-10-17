/*
 *  6. Ler uma palavra e uma letra qualquer. Usar uma função para mostrar
 *  a palavra cortada na primeira posição em que a letra informada for 
 *  encontrada na palavra. A função ´main´ deve exibir a nova string.
 * */

#include <stdio.h>

void cutString(char *str, char l) {
    while (*str != '\0') {
        if (*str == l) {
            *str = '\0';
            break;
        }
        str++;
    }
}

int main(){
	char palavra[100];
    char letra;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite a letra para o corte: ");
    scanf(" %c", &letra);

    cutString(palavra, letra);

    printf("\nPalavra cortada: %s\n", palavra);

	return 0;
}
