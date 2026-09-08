/*
	6. Escreva uma função em C que receba como parâmetro uma letra e uma string, e retorne um
	valor inteiro indicando quantas vezes a letra aparece na string. A função main deve ler a string,
	a letra e chamar a função implementada
*/

#include <stdio.h>

// Função que conta a ocorrência de um caractere na string
int count_char(char c, char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[150];
    char c;

    printf("Digite uma frase/palavra: ");
    // Usamos %[^\n] para permitir a leitura de espaços em branco
    scanf(" %[^\n]", str);

    printf("Digite a letra que deseja contar: ");
    // Espaço antes do %c ignora eventuais caracteres de nova linha (\n) do buffer
    scanf(" %c", &c);

    int total = count_char(c, str);

    printf("\nA letra '%c' aparece %d vez(es) na string.\n", c, total);

    return 0;
}