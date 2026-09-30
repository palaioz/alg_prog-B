/*
 *  1. Escreva um algoritmo que leia e mostre um vetor de 20 elementos
 *     inteiros. A seguir, conte quantos valores pares existem no vetor.
 * */

#include <stdio.h>

#define TAM 3

int main()
{
    int vec[TAM] = {0};
    int evenCount = 0;

    printf("\n--- LEITURA ---\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("\nvec[%d] = ", i);
        scanf("%d", &vec[i]);
        if (vec[i] % 2 == 0){ evenCount++; };
    }
    
    printf("\nQuantidade par: %d\n", evenCount);
    printf("%p\n", vec);
    printf("%p\n", &vec[0]);
    printf("Primeiro elemento: %d\n", *vec + 1);

    return 0;
}
