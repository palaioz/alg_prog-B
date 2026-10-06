#include <stdio.h>
#include <stdlib.h>
#include "questoes.h"

int main() {
    char palavra1[100], palavra2[100];
    char letra;
    int vetor10[10];
    int valor, i;

    int vet1[15], vet2[15];
    char operacoes[15];

    printf("=== LISTA DE EXERCICIOS (10 A 17) ===\n\n");

    // Questao 10
    printf("--- Questao 10 ---\n");
    printf("Digite uma palavra para escrever verticalmente: ");
    fgets(palavra1, 100, stdin);
    remove_newline(palavra1);
    escreve_vertical(palavra1);

    // Questao 11
    printf("\n--- Questao 11 ---\n");
    printf("Digite uma palavra para contar caracteres: ");
    fgets(palavra1, 100, stdin);
    remove_newline(palavra1);
    printf("Quantidade de caracteres: %d\n", conta_caracteres(palavra1));

    // Questao 12
    printf("\n--- Questao 12 ---\n");
    printf("Digite uma palavra para inverter: ");
    fgets(palavra1, 100, stdin);
    remove_newline(palavra1);
    inverte_string(palavra1);
    printf("Palavra invertida: %s\n", palavra1);

    // Questao 13
    printf("\n--- Questao 13 ---\n");
    printf("Digite uma palavra para verificar se e palindromo: ");
    fgets(palavra1, 100, stdin);
    remove_newline(palavra1);
    if (eh_palindromo(palavra1)) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }

    // Questao 14
    printf("\n--- Questao 14 ---\n");
    printf("Digite a primeira palavra: ");
    fgets(palavra1, 100, stdin);
    remove_newline(palavra1);
    printf("Digite a segunda palavra: ");
    fgets(palavra2, 100, stdin);
    remove_newline(palavra2);
    compara_palavras(palavra1, palavra2);

    // Questao 15
    printf("\n--- Questao 15 ---\n");
    printf("Digite uma palavra: ");
    fgets(palavra1, 100, stdin);
    remove_newline(palavra1);
    printf("Digite a letra para corte: ");
    scanf(" %c", &letra);
    corta_palavra(palavra1, letra);
    printf("Palavra cortada: %s\n", palavra1);

    // Questao 16
    printf("\n--- Questao 16 ---\n");
    printf("Digite 10 elementos inteiros para o vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", (vetor10 + i));
    }
    printf("Digite o valor para buscar: ");
    scanf("%d", &valor);
    printf("O valor %d aparece %d vez(es) no vetor.\n", valor, conta_ocorrencias(vetor10, 10, valor));

    // Questao 17
    printf("\n--- Questao 17 ---\n");
    printf("Leitura do primeiro vetor (15 inteiros):\n");
    for (i = 0; i < 15; i++) {
        printf("Vet1[%d]: ", i);
        scanf("%d", (vet1 + i));
    }
    printf("\nLeitura do segundo vetor (15 inteiros):\n");
    for (i = 0; i < 15; i++) {
        printf("Vet2[%d]: ", i);
        scanf("%d", (vet2 + i));
    }
    printf("\nLeitura dos operadores (+, -, *, /) para as 15 posicoes:\n");
    for (i = 0; i < 15; i++) {
        printf("Operacao[%d]: ", i);
        scanf(" %c", (operacoes + i));
    }

    printf("\nResultados das operacoes:\n");
    executa_operacoes(vet1, vet2, operacoes, 15);

    return 0;
}
