/*
 *  3. Escreva um algoritmo que leia um vetor de 80 elementos inteiros.
 *     Encontre e mostre o menor elemento e a sua posição.
 * */

#include <stdio.h>

#define TAMANHO 80

int main() {
    int vetor[TAMANHO];
    int menor;
    int posicao;
    
    // Usando um ponteiro para referenciar o vetor
    int *ptr = vetor;

    printf("Digite os %d elementos do vetor:\n", TAMANHO);
    for(int i = 0; i < TAMANHO; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Inicializamos as variáveis de controle com o primeiro elemento do vetor.
    // *ptr acessa o valor armazenado no endereço base (vetor[0]).
    menor = *ptr; 
    posicao = 0;

    // Começamos o laço a partir do índice 1, pois o índice 0 já é a base de comparação.
    for(int i = 1; i < TAMANHO; i++) {
        // Acessamos os próximos valores somando o deslocamento 'i' ao ponteiro base
        if(*(ptr + i) < menor) {
            menor = *(ptr + i);
            posicao = i;
        }
    }

    printf("\n--- Resultado da Busca ---\n");
    printf("Menor elemento encontrado: %d\n", menor);
    printf("Posicao no vetor (indice): %d\n", posicao);

    return 0;
}