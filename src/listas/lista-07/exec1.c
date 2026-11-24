
/*
 *  1. Fazer a soma de dois vetores alocados dinamicamente. O tamanho 
 *  dos vetores é informado pelo usuário.
 * */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam, i;
    int *vetor;

    printf("\nDigite o tamanho do vetor: ");

    if (scanf(" %d", &tam) != 1 || tam <= 0) {
        printf("\n[ERRO] Tamanho invalido.\n");
        return -1;
    }

    vetor = malloc((size_t)tam * sizeof(int));

    if (!vetor) {
        printf("\n[ERRO] Erro na alocacao do vetor.\n");
        exit(-1);
    }

    printf("\nDigite os inteiros do vetor");

    for (i = 0; i < tam; i++) {
        printf("\n%d -> ", i);
        scanf("%d", (vetor + i));
    }    

    printf("\nVetor completo: \n");

    for (i = 0; i < tam; i++) {
        printf("%d\t", *(vetor + i));
    }

    printf("\n");

    free(vetor);

    return 0;
}
