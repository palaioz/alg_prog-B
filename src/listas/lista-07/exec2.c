/*
 *  2. Faça um programa que lê uma string, letra por letra, e ao final
 *  da execução mostra a string completa. Antes de começar a ler as 
 *  letras de string, peça para o usuário informar o tamanho da string 
 *  e aloque dinamicamente um vetor com o tamanho necessário.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tam, i;
    char *s;

    printf("Quantas letras: ");
    scanf("%d", &tam);

    // Aloca dinamicamente o espaço para a string + o caractere nulo '\0'
    s = (char *) malloc(sizeof(char) * (tam + 1));

    if (!s) {
        printf("\n[ERRO] Erro na alocacao de memoria\n");
        exit(-1);
    }

    printf("Digite a string:\n");
    
    // Limpa o buffer de entrada para remover o '\n' pendente do scanf anterior
    while (getchar() != '\n');

    for (i = 0; i < tam; i++) {
        printf("%da. letra: ", i + 1);
        // O espaço antes de %c (" %c") é fundamental para ignorar quebras de linha e espaços
        scanf(" %c", (s + i));
    }

    // Adiciona o terminador de string ao final
    *(s + i) = '\0';

    printf("\nA palavra completa: %s\n", s);

    // Boa prática: liberar a memória alocada dinamicamente
    free(s);

    return 0;
}
