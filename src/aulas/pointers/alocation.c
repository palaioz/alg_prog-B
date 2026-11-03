#include <stdio.h>
#include <stdlib.h>

void cleanBuffer() {
    int c; 
    while ((c = getchar()) != '\n' && c != EOF);
}

void ler(int *p, int t) {
    printf("\nDigite os valores do vetor:\n");
    for (int i = 0; i < t; i++) {
        while (scanf("%d", (p+i)) != 1) {
            printf("Entrada invalida. Digite um numero inteiro: ");
            cleanBuffer();
        }
    }

    cleanBuffer();

    return;
}

void mostrar(int *p, int t) {
    for (int i = 0; i < t; i++) {
        printf("%d\t", *(p+i));
    }
    return;
}

int main() {
    int *v1, *v2;
    int tam1, tam2;

    printf("Tamanho do vetor 1: ");
    scanf("%d", &tam1);
    printf("Tamanho do vetor 2: ");
    scanf("%d", &tam2);

    v1 = (int *) malloc(tam1 * sizeof(int));
    v2 = (int *) malloc(tam2 * sizeof(int));

    if (!v1 || !v2) {
        printf("Erro na alocacao.");
        free(v1);
        free(v2);
        return -1;
    }

    ler(v1, tam1);
    ler(v2, tam2);

    printf("\nVetor 1: ");
    mostrar(v1, tam1);
    printf("\nVetor 2: ");
    mostrar(v2, tam2);

    free(v1);
    free(v2);

    printf("\n");
    return 0;
}
