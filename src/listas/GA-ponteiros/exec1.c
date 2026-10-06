/*
 *  1. Escreva um algoritmo que leia e mostre um vetor de 20 elementos
 *     inteiros. A seguir, conte quantos valores pares existem no vetor.
 * */

#include <stdio.h>

int main() {
    int vetor[20];
    int pares = 0;
    
    int *ptr = vetor; 

    printf("Digite 20 numeros inteiros:\n");
    for(int i = 0; i < 20; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n--- Conteudo do Vetor ---\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", *(ptr + i));
        
        if(*(ptr + i) % 2 == 0) {
            pares++;
        }
    }

    printf("\n\nQuantidade de valores pares no vetor: %d\n", pares);

    return 0;
}
