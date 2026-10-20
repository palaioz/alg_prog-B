/*
    11. Ler um vetor de inteiros com 20 elementos. Desenvolver uma função 
    que encontra o maior elemento do vetor e retorne o ponteiro para o 
    maior elemento. A função main deve exibir o maior elemento do vetor
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int *maxValue(int *vec) {
    int *max_ptr = vec;

    for (int i = 1; i < TAM; i++){
        if (*(vec + i) > *max_ptr) {
            max_ptr = (vec + i);
        }
    }

    return max_ptr;
}

int main() {
    int *ptr;
    int vec[TAM];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        vec[i] = rand()%100;
    }

    ptr = maxValue(vec);

    printf("\nVetor gerado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d  ", vec[i]);
    }

    printf("\nMaior valor: %d\n", *ptr);    

    return 0;
}