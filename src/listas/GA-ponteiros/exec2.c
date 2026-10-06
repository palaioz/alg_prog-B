/*
 *  2. Escreva um algoritmo que leia dois vetores de 10 posições e faça
 *     a multiplicação dos elementos de mesmo índice, colocando o 
 *     resultado em um terceiro vetor. Mostre o vetor resultante.
 * */

#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int vetorResultado[10];

    printf("--- Leitura do Primeiro Vetor ---\n");
    for(int i = 0; i < 10; i++) {
        printf("Vetor 1 [%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n--- Leitura do Segundo Vetor ---\n");
    for(int i = 0; i < 10; i++) {
        printf("Vetor 2 [%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Multiplicando os elementos usando aritmética de ponteiros
    for(int i = 0; i < 10; i++) {
        // *(vetorResultado + i) é exatamente o mesmo que vetorResultado[i]
        *(vetorResultado + i) = *(vetor1 + i) * *(vetor2 + i);
    }

    printf("\n--- Vetor Resultante ---\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", *(vetorResultado + i));
    }
    printf("\n");

    return 0;
}